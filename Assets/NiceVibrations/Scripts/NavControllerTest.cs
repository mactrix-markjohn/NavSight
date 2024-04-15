// Copyright 2022 Niantic, Inc. All Rights Reserved.

using System;
using System.Collections;
using System.Collections.Generic;
using MoreMountains.NiceVibrations;
using UnityEngine;

using Niantic.ARDK.AR;
using Niantic.ARDK.AR.ARSessionEventArgs;
using Niantic.ARDK.AR.Awareness;
using Niantic.ARDK.AR.Awareness.Semantics;
using Niantic.ARDK.AR.Mesh;
using Niantic.ARDK.Extensions.Meshing;
using Niantic.ARDK.Extensions;
using Niantic.ARDK.Utilities.Logging;
using Niantic.ARDK.VirtualStudio.AR.Mock;
using Niantic.ARDK.Utilities.Input.Legacy;
using Niantic.LightshipHub.Templates;
using TMPro;
using UnityEngine.UI;
using NN;
using Unity.Barracuda;

using Assets.Scripts;
using Assets.Scripts.TextureProviders;
using NN;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Unity.Barracuda;
using UnityEditor;
using UnityEngine;
using UnityEngine.Profiling;
using UnityEngine.UI;
using TFClassify;

public class NavControllerTest : MonoBehaviour
{
	public Camera Camera;
	public AudioSource audioSource;
	public AudioClip audioClip;

	private IARSession _session;


	//Debug text 
	public TextMeshProUGUI hitDisText;
	public TextMeshProUGUI cameraDisText;
	public TextMeshProUGUI objectDetectedText;
	public Image centerOfScreenImage;

	// Semantic Segmentation fields

	[Header("Context Awareness Managers")]
	[SerializeField]
	private ARDepthManager _depthManager = null;

	[SerializeField]
	private ARSemanticSegmentationManager _semanticSegmentationManager = null;

	private bool _isDisplayingContextAwareness = false;
	private bool _isSemanticsTextureDirty;
	private Texture2D _semanticsTexture;

	// Each feature channel number corresponds to a label, first is depth and the rest is from
	// semantics channel names.
	private int _featureChannel = 0;
	private bool isGroundChannel = false;


	public RawImage rawImage;
	//public RawImage rawImage2;
	public ARRenderingManager renderingManager;
	public RenderTexture renderTexture;
	//public RenderTexture renderSecondTexture;



	// YOLO v8 instances

	//[Tooltip("File of YOLO model.")]
	//[SerializeField]
	//protected NNModel ModelFile;

	//[Range(0.0f, 1f)]
	//[Tooltip("The minimum value of box confidence below which boxes won't be drawn.")]
	//[SerializeField]
	//protected float MinBoxConfidence = 0.3f;

	//protected NNHandler nn;

	//YOLOv8 yolo;


	//[Tooltip("Text file with classes names separated by coma ','")]
	//public TextAsset ClassesTextFile;


	//string[] classesNames;

	//public TextMeshProUGUI objectDetectedText;


	// Tiny Yolo v3
	public GameObject detectorObject;
	public Detector detector;

	public float shiftX = 0f;
    public float shiftY = 0f;
    public float scaleFactor = 1;

    public Color colorTag = new Color(0.3843137f, 0, 0.9333333f);
    private static GUIStyle labelStyle;
    private static Texture2D boxOutlineTexture;

    // bounding boxes detected for current frame
    private IList<BoundingBox> boxOutlines;
    // bounding boxes detected across frames
    public List<BoundingBox> boxSavedOutlines = new List<BoundingBox>();
    // lock model when its inferencing a frame
    private bool isDetecting = false;

    // the number of frames that bounding boxes stay static
    private int staticNum = 0;
    public bool localization = false;

    Texture2D m_Texture;
	Texture2D texture;






	private void Awake()
	{

	}


	private void OnEnable()
	{
		_semanticSegmentationManager.SemanticBufferInitialized += OnSemanticBufferInitialized;
		_semanticSegmentationManager.SemanticBufferUpdated += OnSemanticBufferUpdated;


        // Detector

        boxOutlineTexture = new Texture2D(1, 1);
        boxOutlineTexture.SetPixel(0, 0, this.colorTag);
        boxOutlineTexture.Apply();
        labelStyle = new GUIStyle();
        labelStyle.fontSize = 50;
        labelStyle.normal.textColor = this.colorTag;


        detector = detectorObject.GetComponent<DetectorYolo3>();

        this.detector.Start();

        CalculateShift(this.detector.IMAGE_SIZE);

    }

	private void OnDisable()
	{
		_semanticSegmentationManager.SemanticBufferInitialized -= OnSemanticBufferInitialized;
		_semanticSegmentationManager.SemanticBufferUpdated -= OnSemanticBufferUpdated;
	}


	void Start()
	{

		ARSessionFactory.SessionInitialized += OnSessionInitialized;

	}

	private void OnSessionInitialized(AnyARSessionInitializedArgs args)
	{
		ARSessionFactory.SessionInitialized -= OnSessionInitialized;
		_session = args.Session;

	}

	void Update()
	{
		RaycastAndDistance();

		

		Graphics.Blit(renderingManager.Camera.activeTexture,renderTexture);
		rawImage.texture = renderTexture;



		//Graphics.Blit(renderingManager.Camera.targetTexture, renderSecondTexture);
		//rawImage2.texture = renderSecondTexture;

		// TODO: YOLO V8 implementation

		texture = ToTexture2D(renderTexture); 

		//var boxes = yolo.Run(texture);
		//DrawResults(boxes, texture);

		// detect object and create current frame outlines



		TFDetect();

        // merging outliens across frames
        //GroupBoxOutlines();

        //TODO: Important

        if (boxOutlines != null)
        {
            foreach (var box in boxOutlines)
            {
                objectDetectedText.text = box.Label;
            }

        }



    }


	public void RaycastAndDistance()
	{

		var currentFrame = _session.CurrentFrame;
		if (currentFrame == null) return;

		if (Camera == null) return;



		Vector2 centerOfScreen = new Vector2(Screen.width / 2f, Screen.height / 2f);
		centerOfScreenImage.rectTransform.position = centerOfScreen;

		var worldRay = Camera.ScreenPointToRay(centerOfScreen);
		RaycastHit hit;

		if (Physics.Raycast(worldRay, out hit, 1000f))
		{

			if (hit.transform.gameObject.name.Contains("MeshCollider") || hit.transform.gameObject.name.Contains("Interior_"))
			{
				Vector3 hitPosition = hit.point;

				float hitDistanceFromSource = hit.distance;
				float distanceFromCamera = Vector3.Distance(Camera.transform.position, hit.point);

				string hitDisMsg = $"{hitDistanceFromSource}";
				string cameraDisMsg = $"{distanceFromCamera}";

				hitDisText.text = hitDisMsg;
				//cameraDisText.text = cameraDisMsg;


				Debug.Log($"Hit.distance result: {hitDistanceFromSource}");
				Debug.Log($"Distance from Camera calculation: {distanceFromCamera}");




				// check if the distance of the user to the mesh is less than 0.6 and 
				// the mesh is not the ground. Then Vibrate and play sound effect

				if (hitDistanceFromSource < 0.6f && !isGroundChannel)
				{
					// Start vibration and play sound effect

					StartHapticVib();
					audioSource.PlayOneShot(audioClip);



				}



			}

		}

	}

	public void StartHapticVib()
	{
		Handheld.Vibrate();
		MMVibrationManager.Haptic(HapticTypes.Warning);


	}


	private void OnSemanticBufferInitialized(ContextAwarenessArgs<ISemanticBuffer> args)
	{
		_isSemanticsTextureDirty = true;
	}

	private void OnSemanticBufferUpdated(ContextAwarenessStreamUpdatedArgs<ISemanticBuffer> args)
	{
		_isSemanticsTextureDirty = _isSemanticsTextureDirty || _featureChannel > 0;

		string ground = "ground";

		Vector2 centerOfScreen = new Vector2(Screen.width / 2f, Screen.height / 2f);
		Vector2 viewportPoint = Camera.ScreenToViewportPoint(centerOfScreen);

		isGroundChannel = args.Sender.AwarenessBuffer.DoesChannelExistAt(viewportPoint, "ground");


		if (isGroundChannel)
		{
			cameraDisText.text = "True";
		}
		else
		{
			cameraDisText.text = "False";
		}

	}


	Texture2D ToTexture2D(RenderTexture rTex)
	{
		Texture2D tex = new Texture2D(256, 256, TextureFormat.RGB24, false);
		// ReadPixels looks at the active RenderTexture.
		RenderTexture.active = rTex;
		tex.ReadPixels(new Rect(0, 0, rTex.width, rTex.height), 0, 0);
		tex.Apply();
		return tex;
	}

	private Texture2D RenderTextureTo2DTexture(RenderTexture rt)
	{
		var texture = new Texture2D(rt.width, rt.height, TextureFormat.RGB24, false);
		RenderTexture.active = rt;
		texture.ReadPixels(new Rect(0, 0, rt.width, rt.height), 0, 0);
		texture.Apply();

		RenderTexture.active = null;

		return texture;
	}


    // yolo

    //protected void DrawResults(IEnumerable<ResultBox> results, Texture2D img)
    //{
    //	foreach (var box in results)
    //	{
    //		// Access properties or methods of the ResultBox object here
    //		DrawBox(box, img);
    //	}
    //}

    //protected virtual void DrawBox(ResultBox box, Texture2D img)
    //{

    //	int boxWidth = (int)(box.score / MinBoxConfidence);

    //	//Debug.Log(box.bestClassIndex);
    //	if (box.bestClassIndex > classesNames.Length - 1)
    //	{
    //		return;
    //	}
    //	string classLebal = classesNames[box.bestClassIndex + 1];

    //	string extractedClass = classLebal.Substring(classLebal.IndexOf(":"), classLebal.Length);
    //	Debug.Log(extractedClass);

    //	objectDetectedText.text = extractedClass;
    //	//objectDetectedName = extractedClass;
    //}


    private void CalculateShift(int inputSize)
    {
        int smallest;

        if (Screen.width < Screen.height)
        {
            smallest = Screen.width;
            this.shiftY = (Screen.height - smallest) / 2f;
        }
        else
        {
            smallest = Screen.height;
            this.shiftX = (Screen.width - smallest) / 2f;
        }

        this.scaleFactor = smallest / (float)inputSize;
    }


    private void TFDetect()
    {
        if (this.isDetecting)
        {
            return;
        }

        this.isDetecting = true;
        StartCoroutine(ProcessImage(this.detector.IMAGE_SIZE, result =>
        {
            StartCoroutine(this.detector.Detect(result, boxes =>
            {
                this.boxOutlines = boxes;
                Resources.UnloadUnusedAssets();
                this.isDetecting = false;


				
            }));
        }));
    }


    private IEnumerator ProcessImage(int inputSize, System.Action<Color32[]> callback)
    {
        Coroutine croped = StartCoroutine(TextureTools.CropSquare(texture,
           TextureTools.RectOptions.Center, snap =>
           {
               var scaled = Scale(snap, inputSize);
               var rotated = Rotate(scaled.GetPixels32(), scaled.width, scaled.height);
               callback(rotated);
           }));
        yield return croped;
    }


    private void DrawBoxOutline(BoundingBox outline, float scaleFactor, float shiftX, float shiftY)
    {
        var x = outline.Dimensions.X * scaleFactor + shiftX;
        var width = outline.Dimensions.Width * scaleFactor;
        var y = outline.Dimensions.Y * scaleFactor + shiftY;
        var height = outline.Dimensions.Height * scaleFactor;

        DrawRectangle(new Rect(x, y, width, height), 10, this.colorTag);
        DrawLabel(new Rect(x, y - 80, 200, 20), $"Localizing {outline.Label}: {(int)(outline.Confidence * 100)}%");
    }


    public static void DrawRectangle(Rect area, int frameWidth, Color color)
    {
        Rect lineArea = area;
        lineArea.height = frameWidth;
        GUI.DrawTexture(lineArea, boxOutlineTexture); // Top line

        lineArea.y = area.yMax - frameWidth;
        GUI.DrawTexture(lineArea, boxOutlineTexture); // Bottom line

        lineArea = area;
        lineArea.width = frameWidth;
        GUI.DrawTexture(lineArea, boxOutlineTexture); // Left line

        lineArea.x = area.xMax - frameWidth;
        GUI.DrawTexture(lineArea, boxOutlineTexture); // Right line
    }


    private static void DrawLabel(Rect position, string text)
    {
        GUI.Label(position, text, labelStyle);
    }

    private Texture2D Scale(Texture2D texture, int imageSize)
    {
        var scaled = TextureTools.scaled(texture, imageSize, imageSize, FilterMode.Bilinear);
        return scaled;
    }


    private Color32[] Rotate(Color32[] pixels, int width, int height)
    {
        var rotate = TextureTools.RotateImageMatrix(
                pixels, width, height, 90);
        // var flipped = TextureTools.FlipYImageMatrix(rotate, width, height);
        //flipped =  TextureTools.FlipXImageMatrix(flipped, width, height);
        // return flipped;
        return rotate;
    }
}

#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct BaseItemSerializer_1_tDB1FA33E275D6380E03DF8140C917C805840BD71;
struct BaseItemSerializer_1_tA2E38A369072D9DBDE914368A20388F4BA9F366B;
struct BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB;
struct BaseItemSerializer_1_t30E75642B65CBD70446784C0800E2A651E290978;
struct BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8;
struct BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98;
struct BaseItemSerializer_1_tF01E6B166C8DF4567DD22ABEC93A4D9ABDE51046;
struct BaseItemSerializer_1_tC5B0CE38AAF1DBCF0C8E570CB04DCEE31D9C4EDA;
struct BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0;
struct BaseItemSerializer_1_t3A906D9AF6800F590CC7350AB213133B1DF1617D;
struct BaseItemSerializer_1_tB9639E0B601953ACCF74369D1EBC88A301CA4B9A;
struct BaseItemSerializer_1_t77FA5CD0C0AC16957C4AC4114C25ACE03D7049FC;
struct BaseItemSerializer_1_t334EB5CB40EBE6CE7059E60BED485E81BFDF1BD2;
struct BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3;
struct BaseItemSerializer_1_tA508348603464390C6EE59FF2FFB423C4E258C68;
struct BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9;
struct BaseItemSerializer_1_t5DB625EC8927CDBB82DADA1ADB66BA40AE7988F3;
struct BaseItemSerializer_1_t09FBCBF5C557A35CBC355E9B9CE44384468B11D8;
struct BaseItemSerializer_1_tD1991B78D796116C8AAC337BB9D21A33740BD43C;
struct BaseItemSerializer_1_tE59F01144C5E25651B595554D251B3B723DBBFEB;
struct BaseItemSerializer_1_tCBAA3E7535B91C555E04CB21F9EEA26581625CCB;
struct BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30;
struct BaseItemSerializer_1_tB1B2023CF7272E438BD9D1B576F191740D92CB8E;
struct BaseItemSerializer_1_t9E57EAEA29C9E0F86BA7BB25C5A9822BEA974A0F;
struct BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE;
struct BaseItemSerializer_1_tC0F9132D00198E52F063A677154A1DD3FEFD7D1A;
struct BaseItemSerializer_1_tF4396F3D66F4633651CD039F848F6701753BC988;
struct BaseItemSerializer_1_tDC1D02BBC784868D92FFE76492A98A979AE931D8;
struct BaseItemSerializer_1_tB2AED0680F6AA0F4A89D71E67815737238540EB6;
struct BaseItemSerializer_1_t2CED2996375BD3A3DFE4F0CE2C0A548C70F27A1A;
struct ConcurrentDictionary_2_t85DA6368A00F30B81EBB65ED020A21501D665561;
struct ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3;
struct ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96;
struct ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED;
struct ConcurrentDictionary_2_t69AD5E9E86DCB0358B0501FC082FA0F60011B8D8;
struct ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF;
struct ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77;
struct Dictionary_2_t5F6E491FADF1115E93791D1C6C52E78B25B4F1F9;
struct Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF;
struct Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7;
struct Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09;
struct Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD;
struct Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB;
struct Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03;
struct Func_2_tED7CA67878EF0FB299872769153413F97964501A;
struct Func_2_t10393AF317190525BB875DA761DDBF9E68B750C5;
struct HashSet_1_tD8BC5CA8B573CC6655C0BB415428A47597E7369F;
struct IEnumerator_1_t624E4ACED0595D86B82D760C85467E4E14C56461;
struct IEnumerator_1_t63CA59F8BBB1838D0DDA762B952996E6B23FBDFC;
struct IEnumerator_1_t855DC66AFB9AC3B862DBD1291056E5E1DDA81C12;
struct IEnumerator_1_t1477EC0FADC458167E64028869BB0D3657498F92;
struct IEnumerator_1_t649F2851DEF8F112891B2DF0EEDC4E0282A1D6A5;
struct IEnumerator_1_tBE049433CDA9460ACFBC80562DA54CCBADF7F179;
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
struct IEqualityComparer_1_t0C62219A7981BC3254B9E9404B17F934FE7D7908;
struct IEqualityComparer_1_tF58A69557E0D2F470FB6BB7472A27C75A9E0DEE6;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct Tables_tEF82E31360C360E76F0B3C0BF5013F1B89B39269;
struct Tables_t42AB4320DE03FD7CEE177527CC262BFEABC743BC;
struct Tables_tE6309B2F7A104447D3ED850DE83CE8374863B712;
struct Tables_t23D8723A0B15AF0C6775673620CD7BD9B8DEC250;
struct _SerializableAwarenessBufferSerializer_2_t1E345FF334A704DD681DC23C9CF9D55AAAF9E7FE;
struct _UntypedToTypedSerializerAdapter_1_tC56316B9526D7BDBE9BC7BC0EB34D5E24EC115A3;
struct _UntypedToTypedSerializerAdapter_1_tE025374E30E1432205A650068642762DE9E353FE;
struct _UntypedToTypedSerializerAdapter_1_t5019A162A796B42E1B259CB167739804FE9BC5B3;
struct _UntypedToTypedSerializerAdapter_1_tB79AE0A983A9F354C30D73F8F397ACC7DBBBC1F1;
struct _UntypedToTypedSerializerAdapter_1_tAE78872B8E27DDBD3684A0BAAA7CA0F3627207D8;
struct _UntypedToTypedSerializerAdapter_1_tA06A2C74EDB940CB7D35994F19CC59DD8D09AA47;
struct _UntypedToTypedSerializerAdapter_1_t220DCDE2343601C3A2FD929F0117330E56276651;
struct _UntypedToTypedSerializerAdapter_1_t31102F1599E631B67DBA75564AF019C911A27BE6;
struct _UntypedToTypedSerializerAdapter_1_t9EA39C1825A8BE6524AE975DD90C0094956BA178;
struct _UntypedToTypedSerializerAdapter_1_tBC6ECB02611CE54AB8D7466E7FD02E0F7A1AACC6;
struct _UntypedToTypedSerializerAdapter_1_t844C546E0B436A5B889FDB83F1874D4FB15FDB8E;
struct _UntypedToTypedSerializerAdapter_1_t5EAE13E39D8F12A969B7C89356407443C6ECADAB;
struct _UntypedToTypedSerializerAdapter_1_t9EA120345B9242D3755191100BD8C2B54B6FBD29;
struct _UntypedToTypedSerializerAdapter_1_tA0D5092D4FD648AD0FEE0A09310AB6ACB364AA30;
struct _UntypedToTypedSerializerAdapter_1_t9410F09FB93C5F37176A0FE7D17A2DE8D26E10E6;
struct _UntypedToTypedSerializerAdapter_1_t1C31AC4BB36D9DD454FEFA6F1CC45389471C24CB;
struct _UntypedToTypedSerializerAdapter_1_tD92A0A73A0BFB5B1077718E696BA52CF63C6A491;
struct _UntypedToTypedSerializerAdapter_1_tBDCDECAA293CE578A463ADFBDE0EED96F847B52B;
struct _UntypedToTypedSerializerAdapter_1_tC66B44F6445526C55FAD5775CA995538686E9630;
struct _UntypedToTypedSerializerAdapter_1_tAAFC2E1AF6C2825AB8FC9BD4EA7F199BFD693DCB;
struct _UntypedToTypedSerializerAdapter_1_t673E57B50377A63F4FDDD7A454522BCE7C79B001;
struct _UntypedToTypedSerializerAdapter_1_t79BA334349D1FC9F199D2CC242182FBF66FDC016;
struct _UntypedToTypedSerializerAdapter_1_tE67A979861B9D0B85F5103CC7EF3EACD26932B13;
struct _UntypedToTypedSerializerAdapter_1_t367932817B76CE47BA621243E1D5171573479633;
struct _UntypedToTypedSerializerAdapter_1_tE80F5930EF9D21387436FEF8CA8B45ECB9AA4A94;
struct _UntypedToTypedSerializerAdapter_1_tCD565CDE8FDCE479AF4608FF7CF53479418A0171;
struct _UntypedToTypedSerializerAdapter_1_t5B4C0A213FB66623C6636ADC4D8E475AAB7DC3A8;
struct _UntypedToTypedSerializerAdapter_1_t5C2093183B2BD9F5F4F0A2D3908E0999678AA4BF;
struct _UntypedToTypedSerializerAdapter_1_tBCCC13D26DF96A37B5B4D9D55BCCE7260A1E8A89;
struct _UntypedToTypedSerializerAdapter_1_tB1E3085341E61FB5BED4CCB6084D2E66F7A96D4A;
struct _UntypedToTypedSerializerAdapter_1_tADEA962AD566017CC5A31C8D65C69E1196AB6A57;
struct _WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451;
struct _WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30;
struct _WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B;
struct _WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985;
struct KeyValuePair_2U5BU5D_tF580717B4FE9A64C710C876827FE2C5C8F29BCB7;
struct KeyValuePair_2U5BU5D_t205DF3BBFB4CED8E853CC2E7782DA16622A244A9;
struct KeyValuePair_2U5BU5D_tA01BFEDEE4FD00FF218224C8930D9BE9DCF0DC1A;
struct KeyValuePair_2U5BU5D_t561336637237B99DBE3AB4B3BDED50BBF33E40FD;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1;
struct BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
struct _AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248;
struct _TypeDeserializationContext_tC96C9598090EBDD64977D7368D25182A219E53DE;
struct _TypeSerializationContext_t4B72B95994C3FEFA286B8E05E75B1A23D4E42208;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_tE8E07B0E1FFA40A11F23A540D4C9A6B462FD1FD0  : public RuntimeObject
{
};
struct U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09  : public RuntimeObject
{
};
struct U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2  : public RuntimeObject
{
};
struct U3CU3Ec_t5959B0FFFDA32DB774C7E565E847DB8BCFE77EEE  : public RuntimeObject
{
};
struct BaseItemSerializer_1_tDB1FA33E275D6380E03DF8140C917C805840BD71  : public RuntimeObject
{
};
struct BaseItemSerializer_1_tA2E38A369072D9DBDE914368A20388F4BA9F366B  : public RuntimeObject
{
};
struct BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB  : public RuntimeObject
{
};
struct BaseItemSerializer_1_t30E75642B65CBD70446784C0800E2A651E290978  : public RuntimeObject
{
};
struct BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8  : public RuntimeObject
{
};
struct BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98  : public RuntimeObject
{
};
struct BaseItemSerializer_1_tF01E6B166C8DF4567DD22ABEC93A4D9ABDE51046  : public RuntimeObject
{
};
struct BaseItemSerializer_1_tC5B0CE38AAF1DBCF0C8E570CB04DCEE31D9C4EDA  : public RuntimeObject
{
};
struct BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0  : public RuntimeObject
{
};
struct BaseItemSerializer_1_t3A906D9AF6800F590CC7350AB213133B1DF1617D  : public RuntimeObject
{
};
struct BaseItemSerializer_1_tB9639E0B601953ACCF74369D1EBC88A301CA4B9A  : public RuntimeObject
{
};
struct BaseItemSerializer_1_t77FA5CD0C0AC16957C4AC4114C25ACE03D7049FC  : public RuntimeObject
{
};
struct BaseItemSerializer_1_t334EB5CB40EBE6CE7059E60BED485E81BFDF1BD2  : public RuntimeObject
{
};
struct BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3  : public RuntimeObject
{
};
struct BaseItemSerializer_1_tA508348603464390C6EE59FF2FFB423C4E258C68  : public RuntimeObject
{
};
struct BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9  : public RuntimeObject
{
};
struct BaseItemSerializer_1_t5DB625EC8927CDBB82DADA1ADB66BA40AE7988F3  : public RuntimeObject
{
};
struct BaseItemSerializer_1_t09FBCBF5C557A35CBC355E9B9CE44384468B11D8  : public RuntimeObject
{
};
struct BaseItemSerializer_1_tD1991B78D796116C8AAC337BB9D21A33740BD43C  : public RuntimeObject
{
};
struct BaseItemSerializer_1_tE59F01144C5E25651B595554D251B3B723DBBFEB  : public RuntimeObject
{
};
struct BaseItemSerializer_1_tCBAA3E7535B91C555E04CB21F9EEA26581625CCB  : public RuntimeObject
{
};
struct BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30  : public RuntimeObject
{
};
struct BaseItemSerializer_1_tB1B2023CF7272E438BD9D1B576F191740D92CB8E  : public RuntimeObject
{
};
struct BaseItemSerializer_1_t9E57EAEA29C9E0F86BA7BB25C5A9822BEA974A0F  : public RuntimeObject
{
};
struct BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE  : public RuntimeObject
{
};
struct BaseItemSerializer_1_tC0F9132D00198E52F063A677154A1DD3FEFD7D1A  : public RuntimeObject
{
};
struct BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2  : public RuntimeObject
{
};
struct BaseItemSerializer_1_tF4396F3D66F4633651CD039F848F6701753BC988  : public RuntimeObject
{
};
struct BaseItemSerializer_1_tDC1D02BBC784868D92FFE76492A98A979AE931D8  : public RuntimeObject
{
};
struct BaseItemSerializer_1_tB2AED0680F6AA0F4A89D71E67815737238540EB6  : public RuntimeObject
{
};
struct BaseItemSerializer_1_t2CED2996375BD3A3DFE4F0CE2C0A548C70F27A1A  : public RuntimeObject
{
};
struct ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3  : public RuntimeObject
{
	Tables_tEF82E31360C360E76F0B3C0BF5013F1B89B39269* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_tF580717B4FE9A64C710C876827FE2C5C8F29BCB7* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED  : public RuntimeObject
{
	Tables_t42AB4320DE03FD7CEE177527CC262BFEABC743BC* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t205DF3BBFB4CED8E853CC2E7782DA16622A244A9* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF  : public RuntimeObject
{
	Tables_tE6309B2F7A104447D3ED850DE83CE8374863B712* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_tA01BFEDEE4FD00FF218224C8930D9BE9DCF0DC1A* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77  : public RuntimeObject
{
	Tables_t23D8723A0B15AF0C6775673620CD7BD9B8DEC250* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t561336637237B99DBE3AB4B3BDED50BBF33E40FD* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct _WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451  : public RuntimeObject
{
	ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* ____innerDictionary;
};
struct _WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30  : public RuntimeObject
{
	ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* ____innerDictionary;
};
struct _WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B  : public RuntimeObject
{
	ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* ____innerDictionary;
};
struct _WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985  : public RuntimeObject
{
	ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* ____innerDictionary;
};
struct BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7  : public RuntimeObject
{
	Dictionary_2_t5F6E491FADF1115E93791D1C6C52E78B25B4F1F9* ____contexts;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U3CStreamU3Ek__BackingField;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct _AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248  : public RuntimeObject
{
	bool ___U3CIsKeyframeU3Ek__BackingField;
	uint32_t ___U3CWidthU3Ek__BackingField;
	uint32_t ___U3CHeightU3Ek__BackingField;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_tE2890FA82AC448148B0285D44B4C56D447512C17;
struct NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct _SerializableAwarenessBufferSerializer_2_t1E345FF334A704DD681DC23C9CF9D55AAAF9E7FE  : public BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9
{
};
struct _UntypedToTypedSerializerAdapter_1_tC56316B9526D7BDBE9BC7BC0EB34D5E24EC115A3  : public BaseItemSerializer_1_tDB1FA33E275D6380E03DF8140C917C805840BD71
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_tE025374E30E1432205A650068642762DE9E353FE  : public BaseItemSerializer_1_tA2E38A369072D9DBDE914368A20388F4BA9F366B
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_t5019A162A796B42E1B259CB167739804FE9BC5B3  : public BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_tB79AE0A983A9F354C30D73F8F397ACC7DBBBC1F1  : public BaseItemSerializer_1_t30E75642B65CBD70446784C0800E2A651E290978
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_tAE78872B8E27DDBD3684A0BAAA7CA0F3627207D8  : public BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_tA06A2C74EDB940CB7D35994F19CC59DD8D09AA47  : public BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_t220DCDE2343601C3A2FD929F0117330E56276651  : public BaseItemSerializer_1_tF01E6B166C8DF4567DD22ABEC93A4D9ABDE51046
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_t31102F1599E631B67DBA75564AF019C911A27BE6  : public BaseItemSerializer_1_tC5B0CE38AAF1DBCF0C8E570CB04DCEE31D9C4EDA
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_t9EA39C1825A8BE6524AE975DD90C0094956BA178  : public BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_tBC6ECB02611CE54AB8D7466E7FD02E0F7A1AACC6  : public BaseItemSerializer_1_t3A906D9AF6800F590CC7350AB213133B1DF1617D
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_t844C546E0B436A5B889FDB83F1874D4FB15FDB8E  : public BaseItemSerializer_1_tB9639E0B601953ACCF74369D1EBC88A301CA4B9A
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_t5EAE13E39D8F12A969B7C89356407443C6ECADAB  : public BaseItemSerializer_1_t77FA5CD0C0AC16957C4AC4114C25ACE03D7049FC
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_t9EA120345B9242D3755191100BD8C2B54B6FBD29  : public BaseItemSerializer_1_t334EB5CB40EBE6CE7059E60BED485E81BFDF1BD2
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_tA0D5092D4FD648AD0FEE0A09310AB6ACB364AA30  : public BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_t9410F09FB93C5F37176A0FE7D17A2DE8D26E10E6  : public BaseItemSerializer_1_tA508348603464390C6EE59FF2FFB423C4E258C68
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_t1C31AC4BB36D9DD454FEFA6F1CC45389471C24CB  : public BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_tD92A0A73A0BFB5B1077718E696BA52CF63C6A491  : public BaseItemSerializer_1_t5DB625EC8927CDBB82DADA1ADB66BA40AE7988F3
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_tBDCDECAA293CE578A463ADFBDE0EED96F847B52B  : public BaseItemSerializer_1_t09FBCBF5C557A35CBC355E9B9CE44384468B11D8
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_tC66B44F6445526C55FAD5775CA995538686E9630  : public BaseItemSerializer_1_tD1991B78D796116C8AAC337BB9D21A33740BD43C
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_tAAFC2E1AF6C2825AB8FC9BD4EA7F199BFD693DCB  : public BaseItemSerializer_1_tE59F01144C5E25651B595554D251B3B723DBBFEB
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_t673E57B50377A63F4FDDD7A454522BCE7C79B001  : public BaseItemSerializer_1_tCBAA3E7535B91C555E04CB21F9EEA26581625CCB
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_t79BA334349D1FC9F199D2CC242182FBF66FDC016  : public BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_tE67A979861B9D0B85F5103CC7EF3EACD26932B13  : public BaseItemSerializer_1_tB1B2023CF7272E438BD9D1B576F191740D92CB8E
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_t367932817B76CE47BA621243E1D5171573479633  : public BaseItemSerializer_1_t9E57EAEA29C9E0F86BA7BB25C5A9822BEA974A0F
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_tE80F5930EF9D21387436FEF8CA8B45ECB9AA4A94  : public BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_tCD565CDE8FDCE479AF4608FF7CF53479418A0171  : public BaseItemSerializer_1_tC0F9132D00198E52F063A677154A1DD3FEFD7D1A
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_t5B4C0A213FB66623C6636ADC4D8E475AAB7DC3A8  : public BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_t5C2093183B2BD9F5F4F0A2D3908E0999678AA4BF  : public BaseItemSerializer_1_tF4396F3D66F4633651CD039F848F6701753BC988
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_tBCCC13D26DF96A37B5B4D9D55BCCE7260A1E8A89  : public BaseItemSerializer_1_tDC1D02BBC784868D92FFE76492A98A979AE931D8
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_tB1E3085341E61FB5BED4CCB6084D2E66F7A96D4A  : public BaseItemSerializer_1_tB2AED0680F6AA0F4A89D71E67815737238540EB6
{
	RuntimeObject* ____untypedSerializer;
};
struct _UntypedToTypedSerializerAdapter_1_tADEA962AD566017CC5A31C8D65C69E1196AB6A57  : public BaseItemSerializer_1_t2CED2996375BD3A3DFE4F0CE2C0A548C70F27A1A
{
	RuntimeObject* ____untypedSerializer;
};
struct BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1  : public BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7
{
	_TypeDeserializationContext_tC96C9598090EBDD64977D7368D25182A219E53DE* ____context;
};
struct BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4  : public BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7
{
	_TypeSerializationContext_t4B72B95994C3FEFA286B8E05E75B1A23D4E42208* ____context;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA  : public BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB
{
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5  : public BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8
{
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539  : public BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30
{
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77  : public BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3
{
};
struct NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 
{
	uint64_t ____id;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RefreshRate_t44FF0D3F256477CC8AB97FA49D08B636AFB4F68F 
{
	uint32_t ___numerator;
	uint32_t ___denominator;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B 
{
	String_t* ____key;
	RuntimeObject* ____data;
};
struct _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B_marshaled_pinvoke
{
	char* ____key;
	Il2CppIUnknown* ____data;
};
struct _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B_marshaled_com
{
	Il2CppChar* ____key;
	Il2CppIUnknown* ____data;
};
struct KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 
{
	Guid_t ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB 
{
	Guid_t ___key;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___value;
};
struct KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202 
{
	intptr_t ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9 
{
	intptr_t ___key;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___value;
};
struct CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CFocalLengthU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CPrincipalPointU3Ek__BackingField;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____vector;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 
{
	int32_t ___m_Width;
	int32_t ___m_Height;
	RefreshRate_t44FF0D3F256477CC8AB97FA49D08B636AFB4F68F ___m_RefreshRate;
};
struct _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 
{
	intptr_t ____cppAddress;
	float ____scale;
};
struct _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0 
{
	NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ____networkId;
	RuntimeObject* ____data;
};
struct _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0_marshaled_pinvoke
{
	NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ____networkId;
	Il2CppIUnknown* ____data;
};
struct _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0_marshaled_com
{
	NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ____networkId;
	Il2CppIUnknown* ____data;
};
struct SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1 
{
	NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ___U3CPrefabIdU3Ek__BackingField;
	NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ___U3CNewIdU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CLocationU3Ek__BackingField;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField;
};
struct PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8 
{
	int32_t ____dirtyPieces;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____localScale;
};
struct KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27 
{
	_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE 
{
	_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___key;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___value;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E  : public RuntimeObject
{
	bool ___isLongReference;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle;
};
struct Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF  : public MulticastDelegate_t
{
};
struct Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7  : public MulticastDelegate_t
{
};
struct Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09  : public MulticastDelegate_t
{
};
struct Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD  : public MulticastDelegate_t
{
};
struct Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB  : public MulticastDelegate_t
{
};
struct Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03  : public MulticastDelegate_t
{
};
struct Func_2_tED7CA67878EF0FB299872769153413F97964501A  : public MulticastDelegate_t
{
};
struct Func_2_t10393AF317190525BB875DA761DDBF9E68B750C5  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct U3CU3Ec_tE8E07B0E1FFA40A11F23A540D4C9A6B462FD1FD0_StaticFields
{
	U3CU3Ec_tE8E07B0E1FFA40A11F23A540D4C9A6B462FD1FD0* ___U3CU3E9;
};
struct U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09_StaticFields
{
	U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09* ___U3CU3E9;
};
struct U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2_StaticFields
{
	U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2* ___U3CU3E9;
};
struct U3CU3Ec_t5959B0FFFDA32DB774C7E565E847DB8BCFE77EEE_StaticFields
{
	U3CU3Ec_t5959B0FFFDA32DB774C7E565E847DB8BCFE77EEE* ___U3CU3E9;
};
struct ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct _WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451_StaticFields
{
	Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7* ____createWeakReference;
};
struct _WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields
{
	Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD* ____createWeakReference;
};
struct _WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields
{
	Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03* ____createWeakReference;
};
struct _WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985_StaticFields
{
	Func_2_t10393AF317190525BB875DA761DDBF9E68B750C5* ____createWeakReference;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_StaticFields
{
	BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA* ___Instance;
};
struct CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_StaticFields
{
	CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5* ___Instance;
};
struct CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_StaticFields
{
	CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* ___Instance;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_StaticFields
{
	Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77* ___Instance;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_gshared (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, uint32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_gshared (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, bool ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_gshared (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_gshared (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_gshared (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_gshared (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_gshared (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_gshared (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_mB7548E3530287D73CC8EFDCA7CB404F4DA9C5677_gshared (BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_m3E59FF3BF0893CF7518319F2DA402CE663D7E17B_gshared (BaseItemSerializer_1_tDB1FA33E275D6380E03DF8140C917C805840BD71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_m246CA3685886CCD30A30538033F1B478A01A81EB_gshared (BaseItemSerializer_1_tA2E38A369072D9DBDE914368A20388F4BA9F366B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_m7F2C7A7DC5BB44A4C52BFC801AFD6B2EA25DF6CD_gshared (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_mEE18DE1F32CEB96C64ECEF4A36E1814D89656849_gshared (BaseItemSerializer_1_t30E75642B65CBD70446784C0800E2A651E290978* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_m4BE7E9B55F9374D4EEF428F42CFC71786C473E01_gshared (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_mC1D35A4F3351B4475CD93C1F059CAA19F4544F9E_gshared (BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_m4FE9810B54108B772427EF072D99371928C238CC_gshared (BaseItemSerializer_1_tF01E6B166C8DF4567DD22ABEC93A4D9ABDE51046* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_m9AD6D42F9725E466222C2607FDFFDAFD3E42161B_gshared (BaseItemSerializer_1_tC5B0CE38AAF1DBCF0C8E570CB04DCEE31D9C4EDA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_m760F88C77CE436C1CF620FF46FBD3C9CF7B8492B_gshared (BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_m64AC79F78AD80AF5E293594AE8E889732CA45DD0_gshared (BaseItemSerializer_1_t3A906D9AF6800F590CC7350AB213133B1DF1617D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_m1FC982816DC9965001095C2D2D7B95B3E413026B_gshared (BaseItemSerializer_1_tB9639E0B601953ACCF74369D1EBC88A301CA4B9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_m3DEA6370E0D0840FE1CFC65B0AF6C90C7922A46B_gshared (BaseItemSerializer_1_t77FA5CD0C0AC16957C4AC4114C25ACE03D7049FC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_m7AC104D41FDD70CDB4F4314D772E19716E966DA8_gshared (BaseItemSerializer_1_t334EB5CB40EBE6CE7059E60BED485E81BFDF1BD2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_m1C62F904B60B33DEBEA4390EB2D8E2A74F8840C9_gshared (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_mCB2FBCF11B4240E5288320B7AFF83E1C6710657A_gshared (BaseItemSerializer_1_tA508348603464390C6EE59FF2FFB423C4E258C68* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_m7E2C3CA679C2E433F8DE26F35890151F7EA72E6C_gshared (BaseItemSerializer_1_t5DB625EC8927CDBB82DADA1ADB66BA40AE7988F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_m9A4EDC6F7082EFFD43452C6FA45118FB8C4C1837_gshared (BaseItemSerializer_1_t09FBCBF5C557A35CBC355E9B9CE44384468B11D8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_mDDDAFEBFFA4B26A6E2ED855B28F31C6B7C0C6E99_gshared (BaseItemSerializer_1_tD1991B78D796116C8AAC337BB9D21A33740BD43C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_m2196D5705B110AAE6B81635C6007843F30228B84_gshared (BaseItemSerializer_1_tE59F01144C5E25651B595554D251B3B723DBBFEB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_mE0CF16CABDA4EC6A2982F8DE6E6CF5D769CDB511_gshared (BaseItemSerializer_1_tCBAA3E7535B91C555E04CB21F9EEA26581625CCB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_mB8A1D1715F36DFAB5FCA135C3336AB52CB41AABA_gshared (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_mAD7D49B7ADE2E0D9EF00A4F366F9D306BACB2993_gshared (BaseItemSerializer_1_tB1B2023CF7272E438BD9D1B576F191740D92CB8E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_mB198E164F65636FE495B8EAC0029469D44C1B770_gshared (BaseItemSerializer_1_t9E57EAEA29C9E0F86BA7BB25C5A9822BEA974A0F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_mAE3D6F0653FC9FED255BC3EA84322C70F8B9F639_gshared (BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_m918C946D39D4721417490EA41202BE4610F325AA_gshared (BaseItemSerializer_1_tC0F9132D00198E52F063A677154A1DD3FEFD7D1A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_m55951584AE4757CFAD169100C8CCA5719CBE9A8B_gshared (BaseItemSerializer_1_tF4396F3D66F4633651CD039F848F6701753BC988* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_mCE917AAB5167167CE5BD038DF893E416711A8786_gshared (BaseItemSerializer_1_tDC1D02BBC784868D92FFE76492A98A979AE931D8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_m58A141485138CFBA1D23A3CC280C11735E407B44_gshared (BaseItemSerializer_1_tB2AED0680F6AA0F4A89D71E67815737238540EB6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1__ctor_m326E1D23879C4BD6348AE1359C65B48D845508A9_gshared (BaseItemSerializer_1_t2CED2996375BD3A3DFE4F0CE2C0A548C70F27A1A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_mC30E84B1DE5B5862BF633886378068C42BDF0BB9_gshared (ConcurrentDictionary_2_t85DA6368A00F30B81EBB65ED020A21501D665561* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_mD5CF174A6F25FBFC0DF74716EDBA74D320E426BF_gshared (ConcurrentDictionary_2_t85DA6368A00F30B81EBB65ED020A21501D665561* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_get_Count_m0B54DFC30F96D7C1D8F7EF927DABCD77206F7C44_gshared (ConcurrentDictionary_2_t85DA6368A00F30B81EBB65ED020A21501D665561* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemove_m51CCA633DE932747E149660FF69C37DB1D9200A8_gshared (ConcurrentDictionary_2_t85DA6368A00F30B81EBB65ED020A21501D665561* __this, Guid_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetOrAdd_m24649F693E8D5151983463CDA93C8FAAFCEA4EF3_gshared (ConcurrentDictionary_2_t85DA6368A00F30B81EBB65ED020A21501D665561* __this, Guid_t ___0_key, Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF* ___1_valueFactory, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValue_m81139825AE15B9C12F187716E91D1CB03BAFE336_gshared (ConcurrentDictionary_2_t85DA6368A00F30B81EBB65ED020A21501D665561* __this, Guid_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAdd_mDF23CE72A6318CA5DC25027370DEF9C5B6673B06_gshared (ConcurrentDictionary_2_t85DA6368A00F30B81EBB65ED020A21501D665561* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m64C4128A62BECA145A6B0D3E6DFF4976B634F9D2_gshared_inline (Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF* __this, Guid_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_ContainsKey_m78E4C59C7104F456F46F093AA40207F93F1495B4_gshared (ConcurrentDictionary_2_t85DA6368A00F30B81EBB65ED020A21501D665561* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE863AA71C643D6A5AC1C7554064F472E8CA49540_gshared (Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m3F802FBA00F30B243C47564955D979C118A3AE42_gshared (ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_mA4DC512677D301AAF9B85ECABD6D3C9414E25E28_gshared (ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_get_Count_mAF770F63AD4DA58E1C0D2467440D69E10CA9DB8E_gshared (ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m93CAD86A4AF9FCE518099BD0F9D7537004B87F96_gshared_inline (KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t KeyValuePair_2_get_Key_mE8D6C2F2365FC5473829AFFBF0D5A9AF14EC5E17_gshared_inline (KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemove_m648714D9DFA663DE5F768C6908B6BAEE52A0018E_gshared (ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96* __this, intptr_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetOrAdd_m9EC04AB68C5699996164890867E4308E738AB183_gshared (ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96* __this, intptr_t ___0_key, Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09* ___1_valueFactory, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValue_m34E99255F52A7D282610874E58F017C84351E47E_gshared (ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96* __this, intptr_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAdd_m855D8CA3E8A992B3287966D0C9A74523A937C124_gshared (ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96* __this, intptr_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mEEDD427FE0A299D97308E822C93022D5BE7CA697_gshared_inline (Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09* __this, intptr_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_ContainsKey_mBDC118E4477AEFE26C920C54B4059CBD3BA3FC2E_gshared (ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96* __this, intptr_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mAFAD1CF4C74CF3EE710FB79F7B75A5B0F394B597_gshared (Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m0E6DC60F7BB2AB39F7B264BBBBFE6A8666504A43_gshared (ConcurrentDictionary_2_t69AD5E9E86DCB0358B0501FC082FA0F60011B8D8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m091754CE37C7869CF20FC86E4965A17455A39628_gshared (ConcurrentDictionary_2_t69AD5E9E86DCB0358B0501FC082FA0F60011B8D8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentDictionary_2_get_Count_mB630A88C8C77AF8138B3BC11455AD7E7F8680822_gshared (ConcurrentDictionary_2_t69AD5E9E86DCB0358B0501FC082FA0F60011B8D8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m399CAA24E6DFAF548B60F98C976B79359742D5A5_gshared_inline (KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 KeyValuePair_2_get_Key_m806A9B5B7EF0F17E380B5EDBAA6714FA2DE8E3FA_gshared_inline (KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemove_m19807881C48B71653781E0173B21BF2184A5983F_gshared (ConcurrentDictionary_2_t69AD5E9E86DCB0358B0501FC082FA0F60011B8D8* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetOrAdd_m2F432F616CD8CC96AB844F691A9EE1582D487F45_gshared (ConcurrentDictionary_2_t69AD5E9E86DCB0358B0501FC082FA0F60011B8D8* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___0_key, Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB* ___1_valueFactory, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValue_m848675358E0E0C6ECEE84332C5D278337A679615_gshared (ConcurrentDictionary_2_t69AD5E9E86DCB0358B0501FC082FA0F60011B8D8* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAdd_mA7FED1EE7477B78CE2E9E580A082AC21F5813A71_gshared (ConcurrentDictionary_2_t69AD5E9E86DCB0358B0501FC082FA0F60011B8D8* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mAEB12318A5DEA7B0B278406C5D7F0B5A1A761C73_gshared_inline (Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_ContainsKey_m83CA97C4B09B57C882D747B84FD7EFA765369E4A_gshared (ConcurrentDictionary_2_t69AD5E9E86DCB0358B0501FC082FA0F60011B8D8* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m43473327DCB5A1FC04D0B8DA4F1C93EE47C623A5_gshared (Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) ;
inline void BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, uint32_t ___1_item, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, uint32_t, const RuntimeMethod*))BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_gshared)(__this, ___0_serializer, ___1_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool _AwarenessBufferBase_get_IsKeyframe_m9C08BCEC5A2BD3706280C368F1BBAE2B78F37C64_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) ;
inline void BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35 (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, bool ___1_item, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, bool, const RuntimeMethod*))BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_gshared)(__this, ___0_serializer, ___1_item, method);
}
inline void BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917 (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_gshared)(__this, ___0_serializer, ___1_item, method);
}
inline void BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103 (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4, const RuntimeMethod*))BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_gshared)(__this, ___0_serializer, ___1_item, method);
}
inline uint32_t BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10 (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_gshared)(__this, ___0_deserializer, method);
}
inline bool BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80 (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_gshared)(__this, ___0_deserializer, method);
}
inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method)
{
	return ((  Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 (*) (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_gshared)(__this, ___0_deserializer, method);
}
inline CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683 (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method)
{
	return ((  CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 (*) (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_gshared)(__this, ___0_deserializer, method);
}
inline void BaseItemSerializer_1__ctor_mB7548E3530287D73CC8EFDCA7CB404F4DA9C5677 (BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9*, const RuntimeMethod*))BaseItemSerializer_1__ctor_mB7548E3530287D73CC8EFDCA7CB404F4DA9C5677_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_m3E59FF3BF0893CF7518319F2DA402CE663D7E17B (BaseItemSerializer_1_tDB1FA33E275D6380E03DF8140C917C805840BD71* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tDB1FA33E275D6380E03DF8140C917C805840BD71*, const RuntimeMethod*))BaseItemSerializer_1__ctor_m3E59FF3BF0893CF7518319F2DA402CE663D7E17B_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_m246CA3685886CCD30A30538033F1B478A01A81EB (BaseItemSerializer_1_tA2E38A369072D9DBDE914368A20388F4BA9F366B* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tA2E38A369072D9DBDE914368A20388F4BA9F366B*, const RuntimeMethod*))BaseItemSerializer_1__ctor_m246CA3685886CCD30A30538033F1B478A01A81EB_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_m7F2C7A7DC5BB44A4C52BFC801AFD6B2EA25DF6CD (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*, const RuntimeMethod*))BaseItemSerializer_1__ctor_m7F2C7A7DC5BB44A4C52BFC801AFD6B2EA25DF6CD_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_mEE18DE1F32CEB96C64ECEF4A36E1814D89656849 (BaseItemSerializer_1_t30E75642B65CBD70446784C0800E2A651E290978* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t30E75642B65CBD70446784C0800E2A651E290978*, const RuntimeMethod*))BaseItemSerializer_1__ctor_mEE18DE1F32CEB96C64ECEF4A36E1814D89656849_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_m4BE7E9B55F9374D4EEF428F42CFC71786C473E01 (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*, const RuntimeMethod*))BaseItemSerializer_1__ctor_m4BE7E9B55F9374D4EEF428F42CFC71786C473E01_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_mC1D35A4F3351B4475CD93C1F059CAA19F4544F9E (BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98*, const RuntimeMethod*))BaseItemSerializer_1__ctor_mC1D35A4F3351B4475CD93C1F059CAA19F4544F9E_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_m4FE9810B54108B772427EF072D99371928C238CC (BaseItemSerializer_1_tF01E6B166C8DF4567DD22ABEC93A4D9ABDE51046* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tF01E6B166C8DF4567DD22ABEC93A4D9ABDE51046*, const RuntimeMethod*))BaseItemSerializer_1__ctor_m4FE9810B54108B772427EF072D99371928C238CC_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_m9AD6D42F9725E466222C2607FDFFDAFD3E42161B (BaseItemSerializer_1_tC5B0CE38AAF1DBCF0C8E570CB04DCEE31D9C4EDA* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tC5B0CE38AAF1DBCF0C8E570CB04DCEE31D9C4EDA*, const RuntimeMethod*))BaseItemSerializer_1__ctor_m9AD6D42F9725E466222C2607FDFFDAFD3E42161B_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_m760F88C77CE436C1CF620FF46FBD3C9CF7B8492B (BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0*, const RuntimeMethod*))BaseItemSerializer_1__ctor_m760F88C77CE436C1CF620FF46FBD3C9CF7B8492B_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_m64AC79F78AD80AF5E293594AE8E889732CA45DD0 (BaseItemSerializer_1_t3A906D9AF6800F590CC7350AB213133B1DF1617D* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t3A906D9AF6800F590CC7350AB213133B1DF1617D*, const RuntimeMethod*))BaseItemSerializer_1__ctor_m64AC79F78AD80AF5E293594AE8E889732CA45DD0_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_m1FC982816DC9965001095C2D2D7B95B3E413026B (BaseItemSerializer_1_tB9639E0B601953ACCF74369D1EBC88A301CA4B9A* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tB9639E0B601953ACCF74369D1EBC88A301CA4B9A*, const RuntimeMethod*))BaseItemSerializer_1__ctor_m1FC982816DC9965001095C2D2D7B95B3E413026B_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_m3DEA6370E0D0840FE1CFC65B0AF6C90C7922A46B (BaseItemSerializer_1_t77FA5CD0C0AC16957C4AC4114C25ACE03D7049FC* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t77FA5CD0C0AC16957C4AC4114C25ACE03D7049FC*, const RuntimeMethod*))BaseItemSerializer_1__ctor_m3DEA6370E0D0840FE1CFC65B0AF6C90C7922A46B_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_m7AC104D41FDD70CDB4F4314D772E19716E966DA8 (BaseItemSerializer_1_t334EB5CB40EBE6CE7059E60BED485E81BFDF1BD2* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t334EB5CB40EBE6CE7059E60BED485E81BFDF1BD2*, const RuntimeMethod*))BaseItemSerializer_1__ctor_m7AC104D41FDD70CDB4F4314D772E19716E966DA8_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_m1C62F904B60B33DEBEA4390EB2D8E2A74F8840C9 (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*, const RuntimeMethod*))BaseItemSerializer_1__ctor_m1C62F904B60B33DEBEA4390EB2D8E2A74F8840C9_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_mCB2FBCF11B4240E5288320B7AFF83E1C6710657A (BaseItemSerializer_1_tA508348603464390C6EE59FF2FFB423C4E258C68* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tA508348603464390C6EE59FF2FFB423C4E258C68*, const RuntimeMethod*))BaseItemSerializer_1__ctor_mCB2FBCF11B4240E5288320B7AFF83E1C6710657A_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_m7E2C3CA679C2E433F8DE26F35890151F7EA72E6C (BaseItemSerializer_1_t5DB625EC8927CDBB82DADA1ADB66BA40AE7988F3* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t5DB625EC8927CDBB82DADA1ADB66BA40AE7988F3*, const RuntimeMethod*))BaseItemSerializer_1__ctor_m7E2C3CA679C2E433F8DE26F35890151F7EA72E6C_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_m9A4EDC6F7082EFFD43452C6FA45118FB8C4C1837 (BaseItemSerializer_1_t09FBCBF5C557A35CBC355E9B9CE44384468B11D8* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t09FBCBF5C557A35CBC355E9B9CE44384468B11D8*, const RuntimeMethod*))BaseItemSerializer_1__ctor_m9A4EDC6F7082EFFD43452C6FA45118FB8C4C1837_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_mDDDAFEBFFA4B26A6E2ED855B28F31C6B7C0C6E99 (BaseItemSerializer_1_tD1991B78D796116C8AAC337BB9D21A33740BD43C* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tD1991B78D796116C8AAC337BB9D21A33740BD43C*, const RuntimeMethod*))BaseItemSerializer_1__ctor_mDDDAFEBFFA4B26A6E2ED855B28F31C6B7C0C6E99_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_m2196D5705B110AAE6B81635C6007843F30228B84 (BaseItemSerializer_1_tE59F01144C5E25651B595554D251B3B723DBBFEB* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tE59F01144C5E25651B595554D251B3B723DBBFEB*, const RuntimeMethod*))BaseItemSerializer_1__ctor_m2196D5705B110AAE6B81635C6007843F30228B84_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_mE0CF16CABDA4EC6A2982F8DE6E6CF5D769CDB511 (BaseItemSerializer_1_tCBAA3E7535B91C555E04CB21F9EEA26581625CCB* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tCBAA3E7535B91C555E04CB21F9EEA26581625CCB*, const RuntimeMethod*))BaseItemSerializer_1__ctor_mE0CF16CABDA4EC6A2982F8DE6E6CF5D769CDB511_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_mB8A1D1715F36DFAB5FCA135C3336AB52CB41AABA (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*, const RuntimeMethod*))BaseItemSerializer_1__ctor_mB8A1D1715F36DFAB5FCA135C3336AB52CB41AABA_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_mAD7D49B7ADE2E0D9EF00A4F366F9D306BACB2993 (BaseItemSerializer_1_tB1B2023CF7272E438BD9D1B576F191740D92CB8E* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tB1B2023CF7272E438BD9D1B576F191740D92CB8E*, const RuntimeMethod*))BaseItemSerializer_1__ctor_mAD7D49B7ADE2E0D9EF00A4F366F9D306BACB2993_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_mB198E164F65636FE495B8EAC0029469D44C1B770 (BaseItemSerializer_1_t9E57EAEA29C9E0F86BA7BB25C5A9822BEA974A0F* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t9E57EAEA29C9E0F86BA7BB25C5A9822BEA974A0F*, const RuntimeMethod*))BaseItemSerializer_1__ctor_mB198E164F65636FE495B8EAC0029469D44C1B770_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_mAE3D6F0653FC9FED255BC3EA84322C70F8B9F639 (BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE*, const RuntimeMethod*))BaseItemSerializer_1__ctor_mAE3D6F0653FC9FED255BC3EA84322C70F8B9F639_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_m918C946D39D4721417490EA41202BE4610F325AA (BaseItemSerializer_1_tC0F9132D00198E52F063A677154A1DD3FEFD7D1A* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tC0F9132D00198E52F063A677154A1DD3FEFD7D1A*, const RuntimeMethod*))BaseItemSerializer_1__ctor_m918C946D39D4721417490EA41202BE4610F325AA_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_m55951584AE4757CFAD169100C8CCA5719CBE9A8B (BaseItemSerializer_1_tF4396F3D66F4633651CD039F848F6701753BC988* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tF4396F3D66F4633651CD039F848F6701753BC988*, const RuntimeMethod*))BaseItemSerializer_1__ctor_m55951584AE4757CFAD169100C8CCA5719CBE9A8B_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_mCE917AAB5167167CE5BD038DF893E416711A8786 (BaseItemSerializer_1_tDC1D02BBC784868D92FFE76492A98A979AE931D8* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tDC1D02BBC784868D92FFE76492A98A979AE931D8*, const RuntimeMethod*))BaseItemSerializer_1__ctor_mCE917AAB5167167CE5BD038DF893E416711A8786_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_m58A141485138CFBA1D23A3CC280C11735E407B44 (BaseItemSerializer_1_tB2AED0680F6AA0F4A89D71E67815737238540EB6* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tB2AED0680F6AA0F4A89D71E67815737238540EB6*, const RuntimeMethod*))BaseItemSerializer_1__ctor_m58A141485138CFBA1D23A3CC280C11735E407B44_gshared)(__this, method);
}
inline void BaseItemSerializer_1__ctor_m326E1D23879C4BD6348AE1359C65B48D845508A9 (BaseItemSerializer_1_t2CED2996375BD3A3DFE4F0CE2C0A548C70F27A1A* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t2CED2996375BD3A3DFE4F0CE2C0A548C70F27A1A*, const RuntimeMethod*))BaseItemSerializer_1__ctor_m326E1D23879C4BD6348AE1359C65B48D845508A9_gshared)(__this, method);
}
inline void ConcurrentDictionary_2__ctor_m0C2B411A02010D1CD59C263C38276E19B0451F26 (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_mC30E84B1DE5B5862BF633886378068C42BDF0BB9_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GcObserver_add__GcHappened_mE3F0DBE27184843AA637B871FC347C7815D3A885 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GcObserver_remove__GcHappened_mD744F7EFD1D297FF085123D3B4615A258B17F39C (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
inline RuntimeObject* ConcurrentDictionary_2_GetEnumerator_mD3998F3DB1FFCD5123B93BAF1AD2758658E6BE2A (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, const RuntimeMethod*))ConcurrentDictionary_2_GetEnumerator_mD5CF174A6F25FBFC0DF74716EDBA74D320E426BF_gshared)(__this, method);
}
inline int32_t ConcurrentDictionary_2_get_Count_mB10C8C724E4838923055846126CD27A863A64B4E (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, const RuntimeMethod*))ConcurrentDictionary_2_get_Count_m0B54DFC30F96D7C1D8F7EF927DABCD77206F7C44_gshared)(__this, method);
}
inline WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* KeyValuePair_2_get_Value_m5D9AAB60A36A15AA4A08338E1508DD40D8B29DFD_inline (KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB* __this, const RuntimeMethod* method)
{
	return ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB*, const RuntimeMethod*))KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
inline Guid_t KeyValuePair_2_get_Key_mE9143B07A8FD19370266DD2EC7CC773E4BF0E9D2_inline (KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline)(__this, method);
}
inline bool ConcurrentDictionary_2_TryRemove_m9DB3AC5FB151A99F32FC74ECBCB0300783DCA426 (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* __this, Guid_t ___0_key, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))ConcurrentDictionary_2_TryRemove_m51CCA633DE932747E149660FF69C37DB1D9200A8_gshared)(__this, ___0_key, ___1_value, method);
}
inline WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ConcurrentDictionary_2_GetOrAdd_m79F4C809661A23E7A45A18B4C459752E4C6F24FA (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* __this, Guid_t ___0_key, Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7* ___1_valueFactory, const RuntimeMethod* method)
{
	return ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7*, const RuntimeMethod*))ConcurrentDictionary_2_GetOrAdd_m24649F693E8D5151983463CDA93C8FAAFCEA4EF3_gshared)(__this, ___0_key, ___1_valueFactory, method);
}
inline bool ConcurrentDictionary_2_TryGetValue_m12C1C62D1F7FF154EA944048D904599F57F8897E (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* __this, Guid_t ___0_key, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValue_m81139825AE15B9C12F187716E91D1CB03BAFE336_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool ConcurrentDictionary_2_TryAdd_m0DED42D1F8E6F3F9A6420AD703E60F6FA1000701 (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* __this, Guid_t ___0_key, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))ConcurrentDictionary_2_TryAdd_mDF23CE72A6318CA5DC25027370DEF9C5B6673B06_gshared)(__this, ___0_key, ___1_value, method);
}
inline RuntimeObject* Func_2_Invoke_m64C4128A62BECA145A6B0D3E6DFF4976B634F9D2_inline (Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF* __this, Guid_t ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF*, Guid_t, const RuntimeMethod*))Func_2_Invoke_m64C4128A62BECA145A6B0D3E6DFF4976B634F9D2_gshared_inline)(__this, ___0_arg, method);
}
inline bool ConcurrentDictionary_2_ContainsKey_m06091B9DDFAC6894BEB00146F79607E4AE935D25 (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*, Guid_t, const RuntimeMethod*))ConcurrentDictionary_2_ContainsKey_m78E4C59C7104F456F46F093AA40207F93F1495B4_gshared)(__this, ___0_key, method);
}
inline void Func_2__ctor_m6B18FB2056B36B1DAA83571E5C329FACE3B9DA58 (Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mE863AA71C643D6A5AC1C7554064F472E8CA49540_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ConcurrentDictionary_2__ctor_mC0C87A272A498DF34D3F72EB62574E2CDC3A3E2A (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m3F802FBA00F30B243C47564955D979C118A3AE42_gshared)(__this, method);
}
inline RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m15BB0AB11AB583519A3DB7DD3896CDDFBBF3A484 (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, const RuntimeMethod*))ConcurrentDictionary_2_GetEnumerator_mA4DC512677D301AAF9B85ECABD6D3C9414E25E28_gshared)(__this, method);
}
inline int32_t ConcurrentDictionary_2_get_Count_m200A474D418F3AF0171E89644F18C24DC578DE95 (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, const RuntimeMethod*))ConcurrentDictionary_2_get_Count_mAF770F63AD4DA58E1C0D2467440D69E10CA9DB8E_gshared)(__this, method);
}
inline WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* KeyValuePair_2_get_Value_m6630CFE2DE42450FD9ED20CA31E2FC7CF071A019_inline (KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9* __this, const RuntimeMethod* method)
{
	return ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9*, const RuntimeMethod*))KeyValuePair_2_get_Value_m93CAD86A4AF9FCE518099BD0F9D7537004B87F96_gshared_inline)(__this, method);
}
inline intptr_t KeyValuePair_2_get_Key_m8E539ABF7EFC4F70F6967EC7BBE8EE41954693F3_inline (KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9* __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mE8D6C2F2365FC5473829AFFBF0D5A9AF14EC5E17_gshared_inline)(__this, method);
}
inline bool ConcurrentDictionary_2_TryRemove_m26EF0E9312CF15B6C40A9BE351A4DA1D0C37062A (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* __this, intptr_t ___0_key, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))ConcurrentDictionary_2_TryRemove_m648714D9DFA663DE5F768C6908B6BAEE52A0018E_gshared)(__this, ___0_key, ___1_value, method);
}
inline WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ConcurrentDictionary_2_GetOrAdd_m67D27E1A5F177AB6ED4887F6F52A380DE6B6168F (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* __this, intptr_t ___0_key, Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD* ___1_valueFactory, const RuntimeMethod* method)
{
	return ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD*, const RuntimeMethod*))ConcurrentDictionary_2_GetOrAdd_m9EC04AB68C5699996164890867E4308E738AB183_gshared)(__this, ___0_key, ___1_valueFactory, method);
}
inline bool ConcurrentDictionary_2_TryGetValue_m65118ACB7F3CA8A995EA690EC569BF8250F7EAE6 (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* __this, intptr_t ___0_key, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValue_m34E99255F52A7D282610874E58F017C84351E47E_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool ConcurrentDictionary_2_TryAdd_m46BFB6E50904F271788D3C336BD73C183FCC608B (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* __this, intptr_t ___0_key, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))ConcurrentDictionary_2_TryAdd_m855D8CA3E8A992B3287966D0C9A74523A937C124_gshared)(__this, ___0_key, ___1_value, method);
}
inline RuntimeObject* Func_2_Invoke_mEEDD427FE0A299D97308E822C93022D5BE7CA697_inline (Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09* __this, intptr_t ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09*, intptr_t, const RuntimeMethod*))Func_2_Invoke_mEEDD427FE0A299D97308E822C93022D5BE7CA697_gshared_inline)(__this, ___0_arg, method);
}
inline bool ConcurrentDictionary_2_ContainsKey_m2FEE778188F702F0D7687FE8C50C86A333A2D744 (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* __this, intptr_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*, intptr_t, const RuntimeMethod*))ConcurrentDictionary_2_ContainsKey_mBDC118E4477AEFE26C920C54B4059CBD3BA3FC2E_gshared)(__this, ___0_key, method);
}
inline void Func_2__ctor_m52C21CC142F3A1A761055A4ED3056826EE9834A3 (Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mAFAD1CF4C74CF3EE710FB79F7B75A5B0F394B597_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ConcurrentDictionary_2__ctor_mD17FD9C821DE1CE67F4516C81617AE250EC046D6 (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m0E6DC60F7BB2AB39F7B264BBBBFE6A8666504A43_gshared)(__this, method);
}
inline RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m2AEC6353B32C0B75521F0C66502584A06B6E103F (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, const RuntimeMethod*))ConcurrentDictionary_2_GetEnumerator_m091754CE37C7869CF20FC86E4965A17455A39628_gshared)(__this, method);
}
inline int32_t ConcurrentDictionary_2_get_Count_mF6E0B18D88F3C7A7C9B8DC9CA0105A963995006A (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, const RuntimeMethod*))ConcurrentDictionary_2_get_Count_mB630A88C8C77AF8138B3BC11455AD7E7F8680822_gshared)(__this, method);
}
inline WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* KeyValuePair_2_get_Value_m11BB92612764F88ED91E292B82EC399D8167A06D_inline (KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE* __this, const RuntimeMethod* method)
{
	return ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE*, const RuntimeMethod*))KeyValuePair_2_get_Value_m399CAA24E6DFAF548B60F98C976B79359742D5A5_gshared_inline)(__this, method);
}
inline _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 KeyValuePair_2_get_Key_mDE079F1D9DD769047A440648F1359C0542017E48_inline (KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE* __this, const RuntimeMethod* method)
{
	return ((  _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 (*) (KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE*, const RuntimeMethod*))KeyValuePair_2_get_Key_m806A9B5B7EF0F17E380B5EDBAA6714FA2DE8E3FA_gshared_inline)(__this, method);
}
inline bool ConcurrentDictionary_2_TryRemove_m15F9226BEEC5426753E452EB05784C5D7FA34AAD (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___0_key, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))ConcurrentDictionary_2_TryRemove_m19807881C48B71653781E0173B21BF2184A5983F_gshared)(__this, ___0_key, ___1_value, method);
}
inline WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ConcurrentDictionary_2_GetOrAdd_m35D11E083F2A6C5F3605BCB80585658888DA9CD3 (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___0_key, Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03* ___1_valueFactory, const RuntimeMethod* method)
{
	return ((  WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03*, const RuntimeMethod*))ConcurrentDictionary_2_GetOrAdd_m2F432F616CD8CC96AB844F691A9EE1582D487F45_gshared)(__this, ___0_key, ___1_valueFactory, method);
}
inline bool ConcurrentDictionary_2_TryGetValue_mE4DFC14E4128CE4B87C0F0B5517933FD2602744A (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___0_key, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E**, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValue_m848675358E0E0C6ECEE84332C5D278337A679615_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool ConcurrentDictionary_2_TryAdd_mFD1D8949008294C5A1CD950BDFA9560BFA0100F0 (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___0_key, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, const RuntimeMethod*))ConcurrentDictionary_2_TryAdd_mA7FED1EE7477B78CE2E9E580A082AC21F5813A71_gshared)(__this, ___0_key, ___1_value, method);
}
inline RuntimeObject* Func_2_Invoke_mAEB12318A5DEA7B0B278406C5D7F0B5A1A761C73_inline (Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, const RuntimeMethod*))Func_2_Invoke_mAEB12318A5DEA7B0B278406C5D7F0B5A1A761C73_gshared_inline)(__this, ___0_arg, method);
}
inline bool ConcurrentDictionary_2_ContainsKey_m2E552E985A457B0A32AB579F86C3057059879688 (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, const RuntimeMethod*))ConcurrentDictionary_2_ContainsKey_m83CA97C4B09B57C882D747B84FD7EFA765369E4A_gshared)(__this, ___0_key, method);
}
inline void Func_2__ctor_mA8711D4952F0EB1A5D8736A0AF69DF5A0E4D311F (Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m43473327DCB5A1FC04D0B8DA4F1C93EE47C623A5_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferSerializer_2_DoSerialize_m477884898C33B1574946B52D8A0A524230204946_gshared (_SerializableAwarenessBufferSerializer_2_t1E345FF334A704DD681DC23C9CF9D55AAAF9E7FE* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_0 = ((CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_StaticFields*)il2cpp_codegen_static_fields_for(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var))->___Instance;
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_1 = L_0;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_2 = ___0_serializer;
		RuntimeObject* L_3 = ___1_item;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_3);
		uint32_t L_4;
		L_4 = _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_3, NULL);
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_2, L_4, BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var);
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_5 = ___0_serializer;
		RuntimeObject* L_6 = ___1_item;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_6);
		uint32_t L_7;
		L_7 = _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_6, NULL);
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_5, L_7, BaseItemSerializer_1_Serialize_m1435871BAB04AD5811571547596FA473F332CA5F_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA* L_8 = ((BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_StaticFields*)il2cpp_codegen_static_fields_for(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var))->___Instance;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_9 = ___0_serializer;
		RuntimeObject* L_10 = ___1_item;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_10);
		bool L_11;
		L_11 = _AwarenessBufferBase_get_IsKeyframe_m9C08BCEC5A2BD3706280C368F1BBAE2B78F37C64_inline((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_10, NULL);
		NullCheck((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_8);
		BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_8, L_9, L_11, BaseItemSerializer_1_Serialize_mD1127A35933FBBA8DF3B61E0A7AE6FD699E97B35_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77* L_12 = ((Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var))->___Instance;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_13 = ___0_serializer;
		RuntimeObject* L_14 = ___1_item;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_14);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_15;
		L_15 = VirtualFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(11, (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_14);
		NullCheck((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_12);
		BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_12, L_13, L_15, BaseItemSerializer_1_Serialize_m498AD10692D6B85299CEF5E5CF1824C940974917_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5* L_16 = ((CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_StaticFields*)il2cpp_codegen_static_fields_for(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var))->___Instance;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_17 = ___0_serializer;
		RuntimeObject* L_18 = ___1_item;
		NullCheck((_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_18);
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_19;
		L_19 = VirtualFuncInvoker0< CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 >::Invoke(12, (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248*)L_18);
		NullCheck((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_16);
		BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_16, L_17, L_19, BaseItemSerializer_1_Serialize_mEB82031857E07CDBE9C8E6137AE29EDF536AE103_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _SerializableAwarenessBufferSerializer_2_DoDeserialize_m3BA9369A0E05ABB7DDD0B8E87310BB94A3DE63F7_gshared (_SerializableAwarenessBufferSerializer_2_t1E345FF334A704DD681DC23C9CF9D55AAAF9E7FE* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		il2cpp_codegen_runtime_class_init_inline(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var);
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_0 = ((CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_StaticFields*)il2cpp_codegen_static_fields_for(CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539_il2cpp_TypeInfo_var))->___Instance;
		CompressedUInt32Serializer_tDEC1DEE48AAA289CBECD3AAC8816F9EA146EB539* L_1 = L_0;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_2 = ___0_deserializer;
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		uint32_t L_3;
		L_3 = BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_2, BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var);
		V_0 = L_3;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_4 = ___0_deserializer;
		NullCheck((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1);
		uint32_t L_5;
		L_5 = BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)L_1, L_4, BaseItemSerializer_1_Deserialize_m0FC109C2AE146036B6F253F9A58982AEDAA3AF10_RuntimeMethod_var);
		V_1 = L_5;
		il2cpp_codegen_runtime_class_init_inline(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var);
		BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA* L_6 = ((BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_StaticFields*)il2cpp_codegen_static_fields_for(BooleanSerializer_t49B39A6ED5B1F8A2C6946E84A0BD052825368EEA_il2cpp_TypeInfo_var))->___Instance;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_7 = ___0_deserializer;
		NullCheck((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_6);
		bool L_8;
		L_8 = BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)L_6, L_7, BaseItemSerializer_1_Deserialize_mA4FA0FE1F0DC18776D9565626BA292F334892B80_RuntimeMethod_var);
		V_2 = L_8;
		il2cpp_codegen_runtime_class_init_inline(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var);
		Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77* L_9 = ((Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4Serializer_t36AB4320F1D2A8352A53E2CF588C2392C3DC2F77_il2cpp_TypeInfo_var))->___Instance;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_10 = ___0_deserializer;
		NullCheck((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_9);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
		L_11 = BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)L_9, L_10, BaseItemSerializer_1_Deserialize_mBD7280F41F81B68DA598BD37BC7A62ACD7097B4B_RuntimeMethod_var);
		V_3 = L_11;
		il2cpp_codegen_runtime_class_init_inline(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var);
		CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5* L_12 = ((CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_StaticFields*)il2cpp_codegen_static_fields_for(CameraIntrinsicsSerializer_tE41F55E2C790C09A9AA6445E3124C29E4E6506D5_il2cpp_TypeInfo_var))->___Instance;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_13 = ___0_deserializer;
		NullCheck((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_12);
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_14;
		L_14 = BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)L_12, L_13, BaseItemSerializer_1_Deserialize_m46F9C46BFB3A41BFC0ACE40FFEF0DBFF0587B683_RuntimeMethod_var);
		V_4 = L_14;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_15 = ___0_deserializer;
		uint32_t L_16 = V_0;
		uint32_t L_17 = V_1;
		bool L_18 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_19 = V_3;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_20 = V_4;
		RuntimeObject* L_21;
		L_21 = VirtualFuncInvoker6< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, uint32_t, uint32_t, bool, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 >::Invoke(11, __this, L_15, L_16, L_17, L_18, L_19, L_20);
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SerializableAwarenessBufferSerializer_2__ctor_mFEB4003ED7C63465994DD736A48880B2C10E79C5_gshared (_SerializableAwarenessBufferSerializer_2_t1E345FF334A704DD681DC23C9CF9D55AAAF9E7FE* __this, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_mB7548E3530287D73CC8EFDCA7CB404F4DA9C5677((BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mBDF4E2E517CE45C50F220547D030CC153C50AA28_gshared (_UntypedToTypedSerializerAdapter_1_tC56316B9526D7BDBE9BC7BC0EB34D5E24EC115A3* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_m3E59FF3BF0893CF7518319F2DA402CE663D7E17B((BaseItemSerializer_1_tDB1FA33E275D6380E03DF8140C917C805840BD71*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mE70E6725DEB27C8EFE4A189387DE265211195CB6_gshared (_UntypedToTypedSerializerAdapter_1_tC56316B9526D7BDBE9BC7BC0EB34D5E24EC115A3* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_2 = ___1_item;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m251714F9A8BDB58C65CE81799DBC42A80A53A54C_gshared (_UntypedToTypedSerializerAdapter_1_tC56316B9526D7BDBE9BC7BC0EB34D5E24EC115A3* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8*)((NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8*)(NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m00167614209D405B92BB9101B754EE98BF08C038_gshared (_UntypedToTypedSerializerAdapter_1_tE025374E30E1432205A650068642762DE9E353FE* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_m246CA3685886CCD30A30538033F1B478A01A81EB((BaseItemSerializer_1_tA2E38A369072D9DBDE914368A20388F4BA9F366B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m855897A9F427C6F1A1E141038D08268A639E3914_gshared (_UntypedToTypedSerializerAdapter_1_tE025374E30E1432205A650068642762DE9E353FE* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_2 = ___1_item;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF _UntypedToTypedSerializerAdapter_1_DoDeserialize_m18D46F3531305069D9E2DD0FB88F97179B9AC299_gshared (_UntypedToTypedSerializerAdapter_1_tE025374E30E1432205A650068642762DE9E353FE* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)((NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)(NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mD50DD552AAB32B513FE8F678D796B5A3C3F82872_gshared (_UntypedToTypedSerializerAdapter_1_t5019A162A796B42E1B259CB167739804FE9BC5B3* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_m7F2C7A7DC5BB44A4C52BFC801AFD6B2EA25DF6CD((BaseItemSerializer_1_tFFE5D659B19957CB13EF309488BE88167A9D47DB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m443D557918A99BC06E792AFCBFB7E2992A55A201_gshared (_UntypedToTypedSerializerAdapter_1_t5019A162A796B42E1B259CB167739804FE9BC5B3* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, bool ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		bool L_2 = ___1_item;
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _UntypedToTypedSerializerAdapter_1_DoDeserialize_m0E7A938166759802F2ED6EF2EDBD62726719B490_gshared (_UntypedToTypedSerializerAdapter_1_t5019A162A796B42E1B259CB167739804FE9BC5B3* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(bool*)((bool*)(bool*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mC9EA7030283696A661A73B14CBD8615BC9DAAB45_gshared (_UntypedToTypedSerializerAdapter_1_tB79AE0A983A9F354C30D73F8F397ACC7DBBBC1F1* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_mEE18DE1F32CEB96C64ECEF4A36E1814D89656849((BaseItemSerializer_1_t30E75642B65CBD70446784C0800E2A651E290978*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m04504C625111E959DF50524FB5588CAEE89B5872_gshared (_UntypedToTypedSerializerAdapter_1_tB79AE0A983A9F354C30D73F8F397ACC7DBBBC1F1* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, uint8_t ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		uint8_t L_2 = ___1_item;
		uint8_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m9C180618F9833EA7B06C217CED9D57DAD9FB7CB9_gshared (_UntypedToTypedSerializerAdapter_1_tB79AE0A983A9F354C30D73F8F397ACC7DBBBC1F1* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mC28354790B9626411923227DFF7D0BB4ADDBECDF_gshared (_UntypedToTypedSerializerAdapter_1_tAE78872B8E27DDBD3684A0BAAA7CA0F3627207D8* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_m4BE7E9B55F9374D4EEF428F42CFC71786C473E01((BaseItemSerializer_1_tF92B4B2C19EAA4D287B88A90746735E8DDAC15F8*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m31A65ED22256F704FA71CBB09FACDEEF54C15489_gshared (_UntypedToTypedSerializerAdapter_1_tAE78872B8E27DDBD3684A0BAAA7CA0F3627207D8* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_2 = ___1_item;
		CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4 _UntypedToTypedSerializerAdapter_1_DoDeserialize_mD4A2E29D56D74D63F0A3BAE8D32C28FF505B6B0C_gshared (_UntypedToTypedSerializerAdapter_1_tAE78872B8E27DDBD3684A0BAAA7CA0F3627207D8* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4*)((CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4*)(CameraIntrinsics_tEA03368855B78C029419DD4B274177DF8ED4A8A4*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m75522AB56EC230A7C78B687A93C2F630A41E9565_gshared (_UntypedToTypedSerializerAdapter_1_tA06A2C74EDB940CB7D35994F19CC59DD8D09AA47* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_mC1D35A4F3351B4475CD93C1F059CAA19F4544F9E((BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m8E8B8E4D327CACDF0DFF1D38DFBC53E07F21D484_gshared (_UntypedToTypedSerializerAdapter_1_tA06A2C74EDB940CB7D35994F19CC59DD8D09AA47* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_item;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _UntypedToTypedSerializerAdapter_1_DoDeserialize_m1C192BB9AA2714FC79EDFDF9B0977F8FB70475A0_gshared (_UntypedToTypedSerializerAdapter_1_tA06A2C74EDB940CB7D35994F19CC59DD8D09AA47* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m6E6444E4169CD41F777C6E1ABDDB2928DC295443_gshared (_UntypedToTypedSerializerAdapter_1_t220DCDE2343601C3A2FD929F0117330E56276651* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_m4FE9810B54108B772427EF072D99371928C238CC((BaseItemSerializer_1_tF01E6B166C8DF4567DD22ABEC93A4D9ABDE51046*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mB81708E2517CB07FE02B6A4740FDB3F2CD58D052_gshared (_UntypedToTypedSerializerAdapter_1_t220DCDE2343601C3A2FD929F0117330E56276651* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, double ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		double L_2 = ___1_item;
		double L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _UntypedToTypedSerializerAdapter_1_DoDeserialize_m375156175C007DEFE6B8110CE9198AB69DDD2FFF_gshared (_UntypedToTypedSerializerAdapter_1_t220DCDE2343601C3A2FD929F0117330E56276651* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(double*)((double*)(double*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m2BC515922FC6AA9C22CE1D030DE18394B3195FD2_gshared (_UntypedToTypedSerializerAdapter_1_t31102F1599E631B67DBA75564AF019C911A27BE6* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_m9AD6D42F9725E466222C2607FDFFDAFD3E42161B((BaseItemSerializer_1_tC5B0CE38AAF1DBCF0C8E570CB04DCEE31D9C4EDA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m9AC01E23D47461312002D98DBBE98233D7BBC01B_gshared (_UntypedToTypedSerializerAdapter_1_t31102F1599E631B67DBA75564AF019C911A27BE6* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, Guid_t ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		Guid_t L_2 = ___1_item;
		Guid_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m0974DA3DFA00BE9B72ED8EA0D6F596B708A85044_gshared (_UntypedToTypedSerializerAdapter_1_t31102F1599E631B67DBA75564AF019C911A27BE6* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m3966D188A81A30B1783C5F6D7AB4A64C3EA50C0E_gshared (_UntypedToTypedSerializerAdapter_1_t9EA39C1825A8BE6524AE975DD90C0094956BA178* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_m760F88C77CE436C1CF620FF46FBD3C9CF7B8492B((BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m2852FD8C607B3F7FE84BB1F655C10F487B4D59CE_gshared (_UntypedToTypedSerializerAdapter_1_t9EA39C1825A8BE6524AE975DD90C0094956BA178* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, int16_t ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		int16_t L_2 = ___1_item;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mF85AE30621EDDFA07019902442807728A0B892D4_gshared (_UntypedToTypedSerializerAdapter_1_t9EA39C1825A8BE6524AE975DD90C0094956BA178* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m0D228D851263BC7DAABD603CB7E84DC2A7A3A339_gshared (_UntypedToTypedSerializerAdapter_1_tBC6ECB02611CE54AB8D7466E7FD02E0F7A1AACC6* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_m64AC79F78AD80AF5E293594AE8E889732CA45DD0((BaseItemSerializer_1_t3A906D9AF6800F590CC7350AB213133B1DF1617D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m00753CF5D08414E3937AEA54D69C9B7C34963211_gshared (_UntypedToTypedSerializerAdapter_1_tBC6ECB02611CE54AB8D7466E7FD02E0F7A1AACC6* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, int32_t ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		int32_t L_2 = ___1_item;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m7D8AF0BA657BE57804319C6C2BAC02F70C53438B_gshared (_UntypedToTypedSerializerAdapter_1_tBC6ECB02611CE54AB8D7466E7FD02E0F7A1AACC6* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m6F3D35EB92C8BEB389020FAC912DC6D39CB92DAB_gshared (_UntypedToTypedSerializerAdapter_1_t844C546E0B436A5B889FDB83F1874D4FB15FDB8E* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_m1FC982816DC9965001095C2D2D7B95B3E413026B((BaseItemSerializer_1_tB9639E0B601953ACCF74369D1EBC88A301CA4B9A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m1897B9FDF14BEB8051EE2C41C44BA98646EB97F1_gshared (_UntypedToTypedSerializerAdapter_1_t844C546E0B436A5B889FDB83F1874D4FB15FDB8E* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, int32_t ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		int32_t L_2 = ___1_item;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m80C2E125623148EF06711B58CCAF12E7332BE61A_gshared (_UntypedToTypedSerializerAdapter_1_t844C546E0B436A5B889FDB83F1874D4FB15FDB8E* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m11FB7F333E8C1E02A83F0C79D00476CCAEF5806A_gshared (_UntypedToTypedSerializerAdapter_1_t5EAE13E39D8F12A969B7C89356407443C6ECADAB* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_m3DEA6370E0D0840FE1CFC65B0AF6C90C7922A46B((BaseItemSerializer_1_t77FA5CD0C0AC16957C4AC4114C25ACE03D7049FC*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m46FBA6D2DBA942566E70E7B4CC009DC058DCB87E_gshared (_UntypedToTypedSerializerAdapter_1_t5EAE13E39D8F12A969B7C89356407443C6ECADAB* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, int64_t ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		int64_t L_2 = ___1_item;
		int64_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_m98E2C12FA9C8749EEE54066C1CF13FB7AA215135_gshared (_UntypedToTypedSerializerAdapter_1_t5EAE13E39D8F12A969B7C89356407443C6ECADAB* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mACB06B7052713B8822709410E6B50C6EF6FC5E06_gshared (_UntypedToTypedSerializerAdapter_1_t9EA120345B9242D3755191100BD8C2B54B6FBD29* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_m7AC104D41FDD70CDB4F4314D772E19716E966DA8((BaseItemSerializer_1_t334EB5CB40EBE6CE7059E60BED485E81BFDF1BD2*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mDB2D70A71A23C6921FC5E3D441E9E4BB146D410E_gshared (_UntypedToTypedSerializerAdapter_1_t9EA120345B9242D3755191100BD8C2B54B6FBD29* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, intptr_t ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		intptr_t L_2 = ___1_item;
		intptr_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mBE2AEB6ACCF06577A4666CC43D14DD609DDE88D7_gshared (_UntypedToTypedSerializerAdapter_1_t9EA120345B9242D3755191100BD8C2B54B6FBD29* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(intptr_t*)((intptr_t*)(intptr_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m195C78A847189472293E0B4952BA406013F4CA08_gshared (_UntypedToTypedSerializerAdapter_1_tA0D5092D4FD648AD0FEE0A09310AB6ACB364AA30* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_m1C62F904B60B33DEBEA4390EB2D8E2A74F8840C9((BaseItemSerializer_1_t4A73147F5E26BB595420BA79EE6208BE9E4703F3*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mF65B944DA11370382441BA9B3A8EF638DF624AB4_gshared (_UntypedToTypedSerializerAdapter_1_tA0D5092D4FD648AD0FEE0A09310AB6ACB364AA30* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___1_item;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 _UntypedToTypedSerializerAdapter_1_DoDeserialize_mD5CB298EA7ADC41E47534A5EE6D39493DBF0A448_gshared (_UntypedToTypedSerializerAdapter_1_tA0D5092D4FD648AD0FEE0A09310AB6ACB364AA30* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m6DA3862992716AB6275C436ABFE035C98FE29362_gshared (_UntypedToTypedSerializerAdapter_1_t9410F09FB93C5F37176A0FE7D17A2DE8D26E10E6* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_mCB2FBCF11B4240E5288320B7AFF83E1C6710657A((BaseItemSerializer_1_tA508348603464390C6EE59FF2FFB423C4E258C68*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m3C85C8144C44E0EBD706B6B3B05C0B5393ACB963_gshared (_UntypedToTypedSerializerAdapter_1_t9410F09FB93C5F37176A0FE7D17A2DE8D26E10E6* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 L_2 = ___1_item;
		NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m81CB23EC85B9F13F9739740432F4B4C92AFD6E8A_gshared (_UntypedToTypedSerializerAdapter_1_t9410F09FB93C5F37176A0FE7D17A2DE8D26E10E6* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3*)((NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3*)(NetworkId_tA940386AFE400DEF120A9E86B180CD3A2C01FAD3*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m7E776D0205BE99ECAF6777330945A85581A3F7C7_gshared (_UntypedToTypedSerializerAdapter_1_t1C31AC4BB36D9DD454FEFA6F1CC45389471C24CB* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_mB7548E3530287D73CC8EFDCA7CB404F4DA9C5677((BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m0905EBAC67A23DC27E81345113CB87A28C226A11_gshared (_UntypedToTypedSerializerAdapter_1_t1C31AC4BB36D9DD454FEFA6F1CC45389471C24CB* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		RuntimeObject* L_2 = ___1_item;
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _UntypedToTypedSerializerAdapter_1_DoDeserialize_m0AA74943557C6D1C4231A41F98D2748D9CE97A7A_gshared (_UntypedToTypedSerializerAdapter_1_t1C31AC4BB36D9DD454FEFA6F1CC45389471C24CB* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mE7EBE48A7FAB8D0CAF7BFC18E2DA9EA13DD0F0B3_gshared (_UntypedToTypedSerializerAdapter_1_tD92A0A73A0BFB5B1077718E696BA52CF63C6A491* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_m7E2C3CA679C2E433F8DE26F35890151F7EA72E6C((BaseItemSerializer_1_t5DB625EC8927CDBB82DADA1ADB66BA40AE7988F3*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mF1931852DB779A2C6ADCCEABA0AEB3FA72816212_gshared (_UntypedToTypedSerializerAdapter_1_tD92A0A73A0BFB5B1077718E696BA52CF63C6A491* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_item;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m5F670AE5F2E517EB0767DFDF5B0CE9C3E7663D3F_gshared (_UntypedToTypedSerializerAdapter_1_tD92A0A73A0BFB5B1077718E696BA52CF63C6A491* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m17C6211759D7F27282705229D95C8B90EE0D8B4A_gshared (_UntypedToTypedSerializerAdapter_1_tBDCDECAA293CE578A463ADFBDE0EED96F847B52B* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_m9A4EDC6F7082EFFD43452C6FA45118FB8C4C1837((BaseItemSerializer_1_t09FBCBF5C557A35CBC355E9B9CE44384468B11D8*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mB693F089E1943AE4BC287B7C6CA1AF0A771661DB_gshared (_UntypedToTypedSerializerAdapter_1_tBDCDECAA293CE578A463ADFBDE0EED96F847B52B* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 L_2 = ___1_item;
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 _UntypedToTypedSerializerAdapter_1_DoDeserialize_mD747597CC97C2580B5B32F90E14E7B8E7223AC36_gshared (_UntypedToTypedSerializerAdapter_1_tBDCDECAA293CE578A463ADFBDE0EED96F847B52B* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525*)((Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525*)(Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m40EF817725B196E2165AB167B42DC7343F50DAD5_gshared (_UntypedToTypedSerializerAdapter_1_tC66B44F6445526C55FAD5775CA995538686E9630* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_mDDDAFEBFFA4B26A6E2ED855B28F31C6B7C0C6E99((BaseItemSerializer_1_tD1991B78D796116C8AAC337BB9D21A33740BD43C*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m62CFC4489B85830BCACF434BDD633BBBE73063DB_gshared (_UntypedToTypedSerializerAdapter_1_tC66B44F6445526C55FAD5775CA995538686E9630* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, int8_t ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		int8_t L_2 = ___1_item;
		int8_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mF9FB4D915158A8A3B19FAC7F071CA5D0CBD40460_gshared (_UntypedToTypedSerializerAdapter_1_tC66B44F6445526C55FAD5775CA995538686E9630* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mC5DE7EBED59736CF54C7B704574BA3C0721148DA_gshared (_UntypedToTypedSerializerAdapter_1_tAAFC2E1AF6C2825AB8FC9BD4EA7F199BFD693DCB* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_m2196D5705B110AAE6B81635C6007843F30228B84((BaseItemSerializer_1_tE59F01144C5E25651B595554D251B3B723DBBFEB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mAE110FAEDA33607660A096378D4D8E18AC59D489_gshared (_UntypedToTypedSerializerAdapter_1_tAAFC2E1AF6C2825AB8FC9BD4EA7F199BFD693DCB* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, float ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		float L_2 = ___1_item;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _UntypedToTypedSerializerAdapter_1_DoDeserialize_mB2A1357A5CF247A23AF0E3E2302CDF61ADF5A1B8_gshared (_UntypedToTypedSerializerAdapter_1_tAAFC2E1AF6C2825AB8FC9BD4EA7F199BFD693DCB* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(float*)((float*)(float*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m3BCD322B5941CDB3E6C99CBE232F921A448C4832_gshared (_UntypedToTypedSerializerAdapter_1_t673E57B50377A63F4FDDD7A454522BCE7C79B001* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_mE0CF16CABDA4EC6A2982F8DE6E6CF5D769CDB511((BaseItemSerializer_1_tCBAA3E7535B91C555E04CB21F9EEA26581625CCB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m7E249E2C46420E746E9E6900FF2715AF8AD796A9_gshared (_UntypedToTypedSerializerAdapter_1_t673E57B50377A63F4FDDD7A454522BCE7C79B001* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, uint16_t ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		uint16_t L_2 = ___1_item;
		uint16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mA34BED71995379DD2DC6E10E83D29B8C24F79124_gshared (_UntypedToTypedSerializerAdapter_1_t673E57B50377A63F4FDDD7A454522BCE7C79B001* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m30BC2F47ECB3CC56FF5C7899AD9A9C5D1EA84843_gshared (_UntypedToTypedSerializerAdapter_1_t79BA334349D1FC9F199D2CC242182FBF66FDC016* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_mB8A1D1715F36DFAB5FCA135C3336AB52CB41AABA((BaseItemSerializer_1_t48FE339E78016691A920111A67B300250F119A30*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mD5A637D6A0553BA4E9556916E740141E091F082D_gshared (_UntypedToTypedSerializerAdapter_1_t79BA334349D1FC9F199D2CC242182FBF66FDC016* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, uint32_t ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		uint32_t L_2 = ___1_item;
		uint32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mF152290FC1BA158DA226E91E955CE7CDCCF95531_gshared (_UntypedToTypedSerializerAdapter_1_t79BA334349D1FC9F199D2CC242182FBF66FDC016* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mF90B2C736C3CB25CFCE91612E82AD65DA27DE23B_gshared (_UntypedToTypedSerializerAdapter_1_tE67A979861B9D0B85F5103CC7EF3EACD26932B13* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_mAD7D49B7ADE2E0D9EF00A4F366F9D306BACB2993((BaseItemSerializer_1_tB1B2023CF7272E438BD9D1B576F191740D92CB8E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mF2ACB20D2DDBDCF951EAE8248BDDC94F091AE3E6_gshared (_UntypedToTypedSerializerAdapter_1_tE67A979861B9D0B85F5103CC7EF3EACD26932B13* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, uint64_t ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		uint64_t L_2 = ___1_item;
		uint64_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t _UntypedToTypedSerializerAdapter_1_DoDeserialize_mC616FFAE2EDB33D4404AAFEC30D37BDAA6335F77_gshared (_UntypedToTypedSerializerAdapter_1_tE67A979861B9D0B85F5103CC7EF3EACD26932B13* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m5F5C2EC6B2AA06F0CF70DE3E996F0AADE611CA26_gshared (_UntypedToTypedSerializerAdapter_1_t367932817B76CE47BA621243E1D5171573479633* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_mB198E164F65636FE495B8EAC0029469D44C1B770((BaseItemSerializer_1_t9E57EAEA29C9E0F86BA7BB25C5A9822BEA974A0F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m30A1578177DA43601BA9E0FFF5B3C630620CC045_gshared (_UntypedToTypedSerializerAdapter_1_t367932817B76CE47BA621243E1D5171573479633* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_item;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m2B27FDDE70371AF05B29B2D1E15804E5927B2378_gshared (_UntypedToTypedSerializerAdapter_1_t367932817B76CE47BA621243E1D5171573479633* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m4132C632F98BAA53B1C40D256CE79816EF28BA36_gshared (_UntypedToTypedSerializerAdapter_1_tE80F5930EF9D21387436FEF8CA8B45ECB9AA4A94* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_mAE3D6F0653FC9FED255BC3EA84322C70F8B9F639((BaseItemSerializer_1_tC0585A113ECF3688EA33D9A1878CF32440E41DAE*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m4C0FCF548B103A0675E39964C6F6D7EF27366206_gshared (_UntypedToTypedSerializerAdapter_1_tE80F5930EF9D21387436FEF8CA8B45ECB9AA4A94* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_item;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m3AD5EE78F88A78FCD3BB8959638D7B9CE7F6AFEE_gshared (_UntypedToTypedSerializerAdapter_1_tE80F5930EF9D21387436FEF8CA8B45ECB9AA4A94* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mC1F8FD5AA4079FE38EDAEBA5B84DFC7B5E7D256C_gshared (_UntypedToTypedSerializerAdapter_1_tCD565CDE8FDCE479AF4608FF7CF53479418A0171* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_m918C946D39D4721417490EA41202BE4610F325AA((BaseItemSerializer_1_tC0F9132D00198E52F063A677154A1DD3FEFD7D1A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m4C95E879337A8C135FEAAD3D3BE901833B022A9A_gshared (_UntypedToTypedSerializerAdapter_1_tCD565CDE8FDCE479AF4608FF7CF53479418A0171* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___1_item;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m29079523D15C432D6F59A44DAB219F59BA827A9E_gshared (_UntypedToTypedSerializerAdapter_1_tCD565CDE8FDCE479AF4608FF7CF53479418A0171* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m4992993A65BD68A05E337A27003BD4222283A182_gshared (_UntypedToTypedSerializerAdapter_1_t5B4C0A213FB66623C6636ADC4D8E475AAB7DC3A8* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		((  void (*) (BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((BaseItemSerializer_1_tB3DD1AB2ECCACF031DDA0A8B4B68A80F82E608B2*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mC2E626EAAC1D4667BF080D68D0CB5788E1FCC185_gshared (_UntypedToTypedSerializerAdapter_1_t5B4C0A213FB66623C6636ADC4D8E475AAB7DC3A8* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t638C83D1B0BE1BB6AA256BBE3991D9F489489E2B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t638C83D1B0BE1BB6AA256BBE3991D9F489489E2B);
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___1_item : &___1_item), SizeOf_T_t638C83D1B0BE1BB6AA256BBE3991D9F489489E2B);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_2);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoDeserialize_m97B15E2E60035E4C04BEA4C3D2EE6AEAC69FFCAC_gshared (_UntypedToTypedSerializerAdapter_1_t5B4C0A213FB66623C6636ADC4D8E475AAB7DC3A8* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t638C83D1B0BE1BB6AA256BBE3991D9F489489E2B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t638C83D1B0BE1BB6AA256BBE3991D9F489489E2B);
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), SizeOf_T_t638C83D1B0BE1BB6AA256BBE3991D9F489489E2B);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mD861C009BF0F00D9A70FC78A91E1ED7DE1C26974_gshared (_UntypedToTypedSerializerAdapter_1_t5C2093183B2BD9F5F4F0A2D3908E0999678AA4BF* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_m55951584AE4757CFAD169100C8CCA5719CBE9A8B((BaseItemSerializer_1_tF4396F3D66F4633651CD039F848F6701753BC988*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m048AE2058AEC7D4D14CEBD12E201A5006BA1E06C_gshared (_UntypedToTypedSerializerAdapter_1_t5C2093183B2BD9F5F4F0A2D3908E0999678AA4BF* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0 ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0 L_2 = ___1_item;
		_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m2BBBB6AED989E7E8F6F1C6EA9C9A9B0A529AB4AE_gshared (_UntypedToTypedSerializerAdapter_1_t5C2093183B2BD9F5F4F0A2D3908E0999678AA4BF* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0*)((_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0*)(_NetworkIdAndData_t8CC0B58C37FDE58C5322860EC78DEF3B22CAD2A0*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m77A1EEF2766B94FB22A5BBCDFB753BD583DBBB39_gshared (_UntypedToTypedSerializerAdapter_1_tBCCC13D26DF96A37B5B4D9D55BCCE7260A1E8A89* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_mCE917AAB5167167CE5BD038DF893E416711A8786((BaseItemSerializer_1_tDC1D02BBC784868D92FFE76492A98A979AE931D8*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_mD94B8575EF35B5B49C458D6F353FD794720CA2A1_gshared (_UntypedToTypedSerializerAdapter_1_tBCCC13D26DF96A37B5B4D9D55BCCE7260A1E8A89* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B L_2 = ___1_item;
		_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B _UntypedToTypedSerializerAdapter_1_DoDeserialize_m6CAFAD99D13B89697C59478FA9745B8E000297A0_gshared (_UntypedToTypedSerializerAdapter_1_tBCCC13D26DF96A37B5B4D9D55BCCE7260A1E8A89* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B*)((_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B*)(_NetworkGroupData_t3E49E00E2363F7025BCC21AE0B6C9A40283A5D2B*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_mE98349301CA77557DEE78878BE31F58F5C75452B_gshared (_UntypedToTypedSerializerAdapter_1_tB1E3085341E61FB5BED4CCB6084D2E66F7A96D4A* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_m58A141485138CFBA1D23A3CC280C11735E407B44((BaseItemSerializer_1_tB2AED0680F6AA0F4A89D71E67815737238540EB6*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m7B22F66A0CCC5EA1A38D75C6D0ECFBA55A37400E_gshared (_UntypedToTypedSerializerAdapter_1_tB1E3085341E61FB5BED4CCB6084D2E66F7A96D4A* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1 ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1 L_2 = ___1_item;
		SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1 _UntypedToTypedSerializerAdapter_1_DoDeserialize_m7AFE5495AC99FF528626738F3DC6E5E31E87DE0D_gshared (_UntypedToTypedSerializerAdapter_1_tB1E3085341E61FB5BED4CCB6084D2E66F7A96D4A* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1*)((SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1*)(SpawnMessage_tC26F98EA585B6D0609BAF72C611A053F3F46B3C1*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1__ctor_m6E91DC75047209F5576B2BF3CF835123EB302643_gshared (_UntypedToTypedSerializerAdapter_1_tADEA962AD566017CC5A31C8D65C69E1196AB6A57* __this, RuntimeObject* ___0_untypedSerializer, const RuntimeMethod* method) 
{
	{
		BaseItemSerializer_1__ctor_m326E1D23879C4BD6348AE1359C65B48D845508A9((BaseItemSerializer_1_t2CED2996375BD3A3DFE4F0CE2C0A548C70F27A1A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_untypedSerializer;
		__this->____untypedSerializer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____untypedSerializer), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _UntypedToTypedSerializerAdapter_1_DoSerialize_m1BEA5281B3E0E6519B48BF0585610AED74D9EF85_gshared (_UntypedToTypedSerializerAdapter_1_tADEA962AD566017CC5A31C8D65C69E1196AB6A57* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___0_serializer, PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8 ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_1 = ___0_serializer;
		PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8 L_2 = ___1_item;
		PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_3);
		NullCheck(L_0);
		InterfaceActionInvoker2< BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, RuntimeObject* >::Invoke(1, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8 _UntypedToTypedSerializerAdapter_1_DoDeserialize_mCF7E3B78125498C93096086E4A1AB8B02BE0B441_gshared (_UntypedToTypedSerializerAdapter_1_tADEA962AD566017CC5A31C8D65C69E1196AB6A57* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___0_deserializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____untypedSerializer;
		BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_1 = ___0_deserializer;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* >::Invoke(2, IItemSerializer_t4F4122BC80C2461D9F0E4D731221EB5880C5F60E_il2cpp_TypeInfo_var, L_0, L_1);
		return ((*(PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8*)((PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8*)(PackedTransform_tA4195F3C4449FE2866B65FCFB3EA49B5019520E8*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 3)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_m61A167D383B81B01D278B0A76921A5A5DED9A3D1_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_0 = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		ConcurrentDictionary_2__ctor_m0C2B411A02010D1CD59C263C38276E19B0451F26(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____innerDictionary = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_mE3F0DBE27184843AA637B871FC347C7815D3A885(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_m00968F5958BE0B30CF8B9A3F96DBCF115348E72C_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_mD744F7EFD1D297FF085123D3B4615A258B17F39C(L_0, NULL);
		__this->____innerDictionary = (ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary), (void*)(ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_mD7F12D50CB567AE1DF1463D0587A98A31F7246BE_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, const RuntimeMethod* method) 
{
	{
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_0 = __this->____innerDictionary;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ConcurrentDictionary_2_GetEnumerator_mD3998F3DB1FFCD5123B93BAF1AD2758658E6BE2A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_mC22F1CFF6AEA7B6772B63EE9F045892A907DE62E_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, const RuntimeMethod* method) 
{
	{
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_0 = __this->____innerDictionary;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ConcurrentDictionary_2_get_Count_mB10C8C724E4838923055846126CD27A863A64B4E(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_m16DD08A8BC7652B518E4049409ACE23EED2AC881_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB V_1;
	memset((&V_1), 0, sizeof(V_1));
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_5 = NULL;
	{
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_0 = __this->____innerDictionary;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ConcurrentDictionary_2_GetEnumerator_mD3998F3DB1FFCD5123B93BAF1AD2758658E6BE2A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_006f;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006f:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005c_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_tCE451CD9D6AB886D01012F8375A6DA1FB4ECB9CB >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4);
				V_1 = L_5;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
				L_6 = KeyValuePair_2_get_Value_m5D9AAB60A36A15AA4A08338E1508DD40D8B29DFD_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				V_2 = L_6;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_2;
				NullCheck(L_7);
				bool L_8;
				L_8 = VirtualFuncInvoker0< bool >::Invoke(5, L_7);
				if (L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_2;
				V_3 = L_9;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0051_1:
					{
						{
							bool L_10 = V_4;
							if (!L_10)
							{
								goto IL_005b_1;
							}
						}
						{
							WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_11, NULL);
						}

IL_005b_1:
						{
							return;
						}
					}
				});
				try
				{
					{
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_3;
						Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_12, (&V_4), NULL);
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
						NullCheck(L_13);
						bool L_14;
						L_14 = VirtualFuncInvoker0< bool >::Invoke(5, L_13);
						if (L_14)
						{
							goto IL_004f_2;
						}
					}
					{
						ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_15 = __this->____innerDictionary;
						Guid_t L_16;
						L_16 = KeyValuePair_2_get_Key_mE9143B07A8FD19370266DD2EC7CC773E4BF0E9D2_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
						NullCheck(L_15);
						bool L_17;
						L_17 = ConcurrentDictionary_2_TryRemove_m9DB3AC5FB151A99F32FC74ECBCB0300783DCA426(L_15, L_16, (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
					}

IL_004f_2:
					{
						goto IL_005c_1;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				RuntimeObject* L_18 = V_0;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0070;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_mEC2934B796434168E6C6246DDE4D2129E62B2AAE_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, Guid_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_1 = NULL;
	bool V_2 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	{
		goto IL_0013;
	}

IL_0013:
	{
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_1 = __this->____innerDictionary;
		Guid_t L_2 = ___0_key;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7* L_3 = ((_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 14)))->____createWeakReference;
		NullCheck(L_1);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_4;
		L_4 = ConcurrentDictionary_2_GetOrAdd_m79F4C809661A23E7A45A18B4C459752E4C6F24FA(L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_4;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(5, L_5);
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		return (bool)0;
	}

IL_002f:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_0;
		V_1 = L_7;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{
				{
					bool L_8 = V_2;
					if (!L_8)
					{
						goto IL_0086;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_9, NULL);
				}

IL_0086:
				{
					return;
				}
			}
		});
		try
		{
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_10, (&V_2), NULL);
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = VirtualFuncInvoker0< bool >::Invoke(5, L_11);
				if (!L_12)
				{
					goto IL_0048_1;
				}
			}
			{
				V_4 = (bool)0;
				goto IL_0087;
			}

IL_0048_1:
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_0;
				RuntimeObject* L_14 = ___1_value;
				NullCheck(L_13);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_13, L_14);
				ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_15 = __this->____innerDictionary;
				Guid_t L_16 = ___0_key;
				NullCheck(L_15);
				bool L_17;
				L_17 = ConcurrentDictionary_2_TryGetValue_m12C1C62D1F7FF154EA944048D904599F57F8897E(L_15, L_16, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				if (!L_17)
				{
					goto IL_006c_1;
				}
			}
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_18 = V_3;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_19 = V_0;
				V_4 = (bool)((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_18) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_19))? 1 : 0);
				goto IL_0087;
			}

IL_006c_1:
			{
				ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_20 = __this->____innerDictionary;
				Guid_t L_21 = ___0_key;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = V_0;
				NullCheck(L_20);
				bool L_23;
				L_23 = ConcurrentDictionary_2_TryAdd_m0DED42D1F8E6F3F9A6420AD703E60F6FA1000701(L_20, L_21, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				V_4 = L_23;
				goto IL_0087;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		bool L_24 = V_4;
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetOrAdd_m2DE447D293BBA83AD886273AF2867310DB91A1D0_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, Guid_t ___0_key, Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF* ___1_createValue, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	bool V_3 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		goto IL_0013;
	}

IL_0013:
	{
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_1 = __this->____innerDictionary;
		Guid_t L_2 = ___0_key;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7* L_3 = ((_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 14)))->____createWeakReference;
		NullCheck(L_1);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_4;
		L_4 = ConcurrentDictionary_2_GetOrAdd_m79F4C809661A23E7A45A18B4C459752E4C6F24FA(L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_4;
	}

IL_0025:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_5);
		V_1 = L_6;
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
	}

IL_0036:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_0;
		V_2 = L_9;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{
				{
					bool L_10 = V_3;
					if (!L_10)
					{
						goto IL_00a9;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_11, NULL);
				}

IL_00a9:
				{
					return;
				}
			}
		});
		try
		{
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_12, (&V_3), NULL);
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_0;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_13);
				V_1 = L_14;
				RuntimeObject* L_15 = V_1;
				if (!L_15)
				{
					goto IL_0056_1;
				}
			}
			{
				RuntimeObject* L_16 = V_1;
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_16, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
				goto IL_00aa;
			}

IL_0056_1:
			{
				ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_17 = __this->____innerDictionary;
				Guid_t L_18 = ___0_key;
				NullCheck(L_17);
				bool L_19;
				L_19 = ConcurrentDictionary_2_TryGetValue_m12C1C62D1F7FF154EA944048D904599F57F8897E(L_17, L_18, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_20 = V_4;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_21 = V_0;
				if ((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_20) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_21)))
				{
					goto IL_0084_1;
				}
			}
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = V_4;
				if (!L_22)
				{
					goto IL_0073_1;
				}
			}
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_4;
				V_0 = L_23;
				goto IL_0025;
			}

IL_0073_1:
			{
				ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_24 = __this->____innerDictionary;
				Guid_t L_25 = ___0_key;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_26 = V_0;
				NullCheck(L_24);
				bool L_27;
				L_27 = ConcurrentDictionary_2_TryAdd_m0DED42D1F8E6F3F9A6420AD703E60F6FA1000701(L_24, L_25, L_26, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				if (L_27)
				{
					goto IL_0084_1;
				}
			}
			{
				goto IL_0013;
			}

IL_0084_1:
			{
				Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF* L_28 = ___1_createValue;
				Guid_t L_29 = ___0_key;
				NullCheck(L_28);
				RuntimeObject* L_30;
				L_30 = Func_2_Invoke_m64C4128A62BECA145A6B0D3E6DFF4976B634F9D2_inline(L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
				V_5 = L_30;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_31 = V_0;
				RuntimeObject* L_32 = V_5;
				NullCheck(L_31);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_31, L_32);
				RuntimeObject* L_33 = V_5;
				V_6 = L_33;
				goto IL_00aa;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		RuntimeObject* L_34 = V_6;
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_TryGetValue_mBCA226ED449EBC227390A776DA942C6805533D77_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		goto IL_0013;
	}

IL_0013:
	{
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_1 = __this->____innerDictionary;
		Guid_t L_2 = ___0_key;
		NullCheck(L_1);
		bool L_3;
		L_3 = ConcurrentDictionary_2_TryGetValue_m12C1C62D1F7FF154EA944048D904599F57F8897E(L_1, L_2, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_4 = V_1;
		return L_4;
	}

IL_002d:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_5);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_mE777BB26FF7E3BDE69C99E8273930D01DE90158E_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	{
		goto IL_0013;
	}

IL_0013:
	{
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_1 = __this->____innerDictionary;
		Guid_t L_2 = ___0_key;
		NullCheck(L_1);
		bool L_3;
		L_3 = ConcurrentDictionary_2_TryRemove_m9DB3AC5FB151A99F32FC74ECBCB0300783DCA426(L_1, L_2, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_ContainsKey_mC5A0E691F9EF0CE454282A8BF5C074E0B92E0016_gshared (_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		goto IL_0013;
	}

IL_0013:
	{
		ConcurrentDictionary_2_t9DECE4EE861812A675AC944CB1056A3BB80B8CF3* L_1 = __this->____innerDictionary;
		Guid_t L_2 = ___0_key;
		NullCheck(L_1);
		bool L_3;
		L_3 = ConcurrentDictionary_2_ContainsKey_m06091B9DDFAC6894BEB00146F79607E4AE935D25(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_m112724480DC701709032C8E2C275D0A8AC7EE203_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		U3CU3Ec_tE8E07B0E1FFA40A11F23A540D4C9A6B462FD1FD0* L_0 = ((U3CU3Ec_tE8E07B0E1FFA40A11F23A540D4C9A6B462FD1FD0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 23)))->___U3CU3E9;
		Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7* L_1 = (Func_2_t18754CE566D6666B8512F9E6836445808BA4A1D7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		Func_2__ctor_m6B18FB2056B36B1DAA83571E5C329FACE3B9DA58(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		((_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))->____createWeakReference = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_WeakValueDictionary_2_t44F2DEC65B3A16C9DC310BB91F943DFD77BFB451_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))->____createWeakReference), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_m675BEDDDA063F89DA36E0F1C73B0806580A56807_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_0 = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		ConcurrentDictionary_2__ctor_mC0C87A272A498DF34D3F72EB62574E2CDC3A3E2A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____innerDictionary = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_mE3F0DBE27184843AA637B871FC347C7815D3A885(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_mC66F5B04626B1DA359517178F991EE729B64705B_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_mD744F7EFD1D297FF085123D3B4615A258B17F39C(L_0, NULL);
		__this->____innerDictionary = (ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary), (void*)(ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_m47ABFCA22E44B20981ED43EB241F064DA1814E41_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	{
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_0 = __this->____innerDictionary;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ConcurrentDictionary_2_GetEnumerator_m15BB0AB11AB583519A3DB7DD3896CDDFBBF3A484(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_mEBD1A7C2B576B029889C0AC92AFE568CAF40E674_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	{
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_0 = __this->____innerDictionary;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ConcurrentDictionary_2_get_Count_m200A474D418F3AF0171E89644F18C24DC578DE95(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_m2686F8589A793F5FF59D6EE1DE09B68DD595FB43_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_5 = NULL;
	{
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_0 = __this->____innerDictionary;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ConcurrentDictionary_2_GetEnumerator_m15BB0AB11AB583519A3DB7DD3896CDDFBBF3A484(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_006f;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006f:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005c_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9 L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_t435DD8D2BE6B5C6693A33ACA5BB3768FB10735D9 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4);
				V_1 = L_5;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
				L_6 = KeyValuePair_2_get_Value_m6630CFE2DE42450FD9ED20CA31E2FC7CF071A019_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				V_2 = L_6;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_2;
				NullCheck(L_7);
				bool L_8;
				L_8 = VirtualFuncInvoker0< bool >::Invoke(5, L_7);
				if (L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_2;
				V_3 = L_9;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0051_1:
					{
						{
							bool L_10 = V_4;
							if (!L_10)
							{
								goto IL_005b_1;
							}
						}
						{
							WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_11, NULL);
						}

IL_005b_1:
						{
							return;
						}
					}
				});
				try
				{
					{
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_3;
						Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_12, (&V_4), NULL);
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
						NullCheck(L_13);
						bool L_14;
						L_14 = VirtualFuncInvoker0< bool >::Invoke(5, L_13);
						if (L_14)
						{
							goto IL_004f_2;
						}
					}
					{
						ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_15 = __this->____innerDictionary;
						intptr_t L_16;
						L_16 = KeyValuePair_2_get_Key_m8E539ABF7EFC4F70F6967EC7BBE8EE41954693F3_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
						NullCheck(L_15);
						bool L_17;
						L_17 = ConcurrentDictionary_2_TryRemove_m26EF0E9312CF15B6C40A9BE351A4DA1D0C37062A(L_15, L_16, (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
					}

IL_004f_2:
					{
						goto IL_005c_1;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				RuntimeObject* L_18 = V_0;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0070;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_m051DEFD1FC3E71D65BEEAF038EE19E645A6B381D_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, intptr_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_1 = NULL;
	bool V_2 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	{
		goto IL_0013;
	}

IL_0013:
	{
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_1 = __this->____innerDictionary;
		intptr_t L_2 = ___0_key;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD* L_3 = ((_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 14)))->____createWeakReference;
		NullCheck(L_1);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_4;
		L_4 = ConcurrentDictionary_2_GetOrAdd_m67D27E1A5F177AB6ED4887F6F52A380DE6B6168F(L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_4;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(5, L_5);
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		return (bool)0;
	}

IL_002f:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_0;
		V_1 = L_7;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{
				{
					bool L_8 = V_2;
					if (!L_8)
					{
						goto IL_0086;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_9, NULL);
				}

IL_0086:
				{
					return;
				}
			}
		});
		try
		{
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_10, (&V_2), NULL);
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = VirtualFuncInvoker0< bool >::Invoke(5, L_11);
				if (!L_12)
				{
					goto IL_0048_1;
				}
			}
			{
				V_4 = (bool)0;
				goto IL_0087;
			}

IL_0048_1:
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_0;
				RuntimeObject* L_14 = ___1_value;
				NullCheck(L_13);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_13, L_14);
				ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_15 = __this->____innerDictionary;
				intptr_t L_16 = ___0_key;
				NullCheck(L_15);
				bool L_17;
				L_17 = ConcurrentDictionary_2_TryGetValue_m65118ACB7F3CA8A995EA690EC569BF8250F7EAE6(L_15, L_16, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				if (!L_17)
				{
					goto IL_006c_1;
				}
			}
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_18 = V_3;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_19 = V_0;
				V_4 = (bool)((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_18) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_19))? 1 : 0);
				goto IL_0087;
			}

IL_006c_1:
			{
				ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_20 = __this->____innerDictionary;
				intptr_t L_21 = ___0_key;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = V_0;
				NullCheck(L_20);
				bool L_23;
				L_23 = ConcurrentDictionary_2_TryAdd_m46BFB6E50904F271788D3C336BD73C183FCC608B(L_20, L_21, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				V_4 = L_23;
				goto IL_0087;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		bool L_24 = V_4;
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetOrAdd_m1451DB86F8AAC56900E5768864D36B7180921519_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, intptr_t ___0_key, Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09* ___1_createValue, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	bool V_3 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		goto IL_0013;
	}

IL_0013:
	{
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_1 = __this->____innerDictionary;
		intptr_t L_2 = ___0_key;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD* L_3 = ((_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 14)))->____createWeakReference;
		NullCheck(L_1);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_4;
		L_4 = ConcurrentDictionary_2_GetOrAdd_m67D27E1A5F177AB6ED4887F6F52A380DE6B6168F(L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_4;
	}

IL_0025:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_5);
		V_1 = L_6;
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
	}

IL_0036:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_0;
		V_2 = L_9;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{
				{
					bool L_10 = V_3;
					if (!L_10)
					{
						goto IL_00a9;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_11, NULL);
				}

IL_00a9:
				{
					return;
				}
			}
		});
		try
		{
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_12, (&V_3), NULL);
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_0;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_13);
				V_1 = L_14;
				RuntimeObject* L_15 = V_1;
				if (!L_15)
				{
					goto IL_0056_1;
				}
			}
			{
				RuntimeObject* L_16 = V_1;
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_16, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
				goto IL_00aa;
			}

IL_0056_1:
			{
				ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_17 = __this->____innerDictionary;
				intptr_t L_18 = ___0_key;
				NullCheck(L_17);
				bool L_19;
				L_19 = ConcurrentDictionary_2_TryGetValue_m65118ACB7F3CA8A995EA690EC569BF8250F7EAE6(L_17, L_18, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_20 = V_4;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_21 = V_0;
				if ((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_20) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_21)))
				{
					goto IL_0084_1;
				}
			}
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = V_4;
				if (!L_22)
				{
					goto IL_0073_1;
				}
			}
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_4;
				V_0 = L_23;
				goto IL_0025;
			}

IL_0073_1:
			{
				ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_24 = __this->____innerDictionary;
				intptr_t L_25 = ___0_key;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_26 = V_0;
				NullCheck(L_24);
				bool L_27;
				L_27 = ConcurrentDictionary_2_TryAdd_m46BFB6E50904F271788D3C336BD73C183FCC608B(L_24, L_25, L_26, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				if (L_27)
				{
					goto IL_0084_1;
				}
			}
			{
				goto IL_0013;
			}

IL_0084_1:
			{
				Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09* L_28 = ___1_createValue;
				intptr_t L_29 = ___0_key;
				NullCheck(L_28);
				RuntimeObject* L_30;
				L_30 = Func_2_Invoke_mEEDD427FE0A299D97308E822C93022D5BE7CA697_inline(L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
				V_5 = L_30;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_31 = V_0;
				RuntimeObject* L_32 = V_5;
				NullCheck(L_31);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_31, L_32);
				RuntimeObject* L_33 = V_5;
				V_6 = L_33;
				goto IL_00aa;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		RuntimeObject* L_34 = V_6;
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_TryGetValue_mF413E041043D6DEBBF2E3E229AEA9DE29BF1728E_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, intptr_t ___0_key, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		goto IL_0013;
	}

IL_0013:
	{
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_1 = __this->____innerDictionary;
		intptr_t L_2 = ___0_key;
		NullCheck(L_1);
		bool L_3;
		L_3 = ConcurrentDictionary_2_TryGetValue_m65118ACB7F3CA8A995EA690EC569BF8250F7EAE6(L_1, L_2, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_4 = V_1;
		return L_4;
	}

IL_002d:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_5);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_m80832D7D87735C4B87746C2C454D7D7FBBEED511_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, intptr_t ___0_key, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	{
		goto IL_0013;
	}

IL_0013:
	{
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_1 = __this->____innerDictionary;
		intptr_t L_2 = ___0_key;
		NullCheck(L_1);
		bool L_3;
		L_3 = ConcurrentDictionary_2_TryRemove_m26EF0E9312CF15B6C40A9BE351A4DA1D0C37062A(L_1, L_2, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_ContainsKey_m7749C515EC4EFDFCE06268827D263A683F550E8C_gshared (_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30* __this, intptr_t ___0_key, const RuntimeMethod* method) 
{
	{
		goto IL_0013;
	}

IL_0013:
	{
		ConcurrentDictionary_2_t3A1CE39BE1EB121D267A1F2FFC483D1AD415DCED* L_1 = __this->____innerDictionary;
		intptr_t L_2 = ___0_key;
		NullCheck(L_1);
		bool L_3;
		L_3 = ConcurrentDictionary_2_ContainsKey_m2FEE778188F702F0D7687FE8C50C86A333A2D744(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_m9EA6E33BC18A7B0F4729E0BF70528FE8B1AEB6AD_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09* L_0 = ((U3CU3Ec_t11014DFBECE8279C0F01ECE47C56E1F8D6BCEF09_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 23)))->___U3CU3E9;
		Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD* L_1 = (Func_2_t43DF0BE95E7BB0BC142E1D5C2F0BF4C0FB2E45BD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		Func_2__ctor_m52C21CC142F3A1A761055A4ED3056826EE9834A3(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		((_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))->____createWeakReference = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_WeakValueDictionary_2_tFC689A541E8D047B3D5EBF925F440B3ECB51BF30_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))->____createWeakReference), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_m46492AC8EAD3CE625B1B47E4977D6D7A97A82DD5_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_0 = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		ConcurrentDictionary_2__ctor_mD17FD9C821DE1CE67F4516C81617AE250EC046D6(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____innerDictionary = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_mE3F0DBE27184843AA637B871FC347C7815D3A885(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_m01146FC022A14ACF4258D99B7141DD941C1022A9_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_mD744F7EFD1D297FF085123D3B4615A258B17F39C(L_0, NULL);
		__this->____innerDictionary = (ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary), (void*)(ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_mB9B8FE29FA130C19B725CE28E43B5048ABE440A0_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	{
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_0 = __this->____innerDictionary;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ConcurrentDictionary_2_GetEnumerator_m2AEC6353B32C0B75521F0C66502584A06B6E103F(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_m3FCF7DBD4AC4FD7E5EC3748CDF907102743D7428_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	{
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_0 = __this->____innerDictionary;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ConcurrentDictionary_2_get_Count_mF6E0B18D88F3C7A7C9B8DC9CA0105A963995006A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_mFFEB7FC4B57870050CBA30420CCD4956C534C1B6_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE V_1;
	memset((&V_1), 0, sizeof(V_1));
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_5 = NULL;
	{
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_0 = __this->____innerDictionary;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ConcurrentDictionary_2_GetEnumerator_m2AEC6353B32C0B75521F0C66502584A06B6E103F(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_006f;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006f:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005c_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_tA7827F9882E08BE5BBE0A6A08138CC97F02F59DE >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4);
				V_1 = L_5;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
				L_6 = KeyValuePair_2_get_Value_m11BB92612764F88ED91E292B82EC399D8167A06D_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				V_2 = L_6;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_2;
				NullCheck(L_7);
				bool L_8;
				L_8 = VirtualFuncInvoker0< bool >::Invoke(5, L_7);
				if (L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_2;
				V_3 = L_9;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0051_1:
					{
						{
							bool L_10 = V_4;
							if (!L_10)
							{
								goto IL_005b_1;
							}
						}
						{
							WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_11, NULL);
						}

IL_005b_1:
						{
							return;
						}
					}
				});
				try
				{
					{
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_3;
						Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_12, (&V_4), NULL);
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
						NullCheck(L_13);
						bool L_14;
						L_14 = VirtualFuncInvoker0< bool >::Invoke(5, L_13);
						if (L_14)
						{
							goto IL_004f_2;
						}
					}
					{
						ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_15 = __this->____innerDictionary;
						_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_16;
						L_16 = KeyValuePair_2_get_Key_mDE079F1D9DD769047A440648F1359C0542017E48_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
						NullCheck(L_15);
						bool L_17;
						L_17 = ConcurrentDictionary_2_TryRemove_m15F9226BEEC5426753E452EB05784C5D7FA34AAD(L_15, L_16, (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
					}

IL_004f_2:
					{
						goto IL_005c_1;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				RuntimeObject* L_18 = V_0;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0070;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_mDA9C49EE0FD2624758FB23EDE1BA5131418A1730_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_1 = NULL;
	bool V_2 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	{
		goto IL_0013;
	}

IL_0013:
	{
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_1 = __this->____innerDictionary;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_2 = ___0_key;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03* L_3 = ((_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 14)))->____createWeakReference;
		NullCheck(L_1);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_4;
		L_4 = ConcurrentDictionary_2_GetOrAdd_m35D11E083F2A6C5F3605BCB80585658888DA9CD3(L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_4;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(5, L_5);
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		return (bool)0;
	}

IL_002f:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_0;
		V_1 = L_7;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{
				{
					bool L_8 = V_2;
					if (!L_8)
					{
						goto IL_0086;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_9, NULL);
				}

IL_0086:
				{
					return;
				}
			}
		});
		try
		{
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_10 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_10, (&V_2), NULL);
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = VirtualFuncInvoker0< bool >::Invoke(5, L_11);
				if (!L_12)
				{
					goto IL_0048_1;
				}
			}
			{
				V_4 = (bool)0;
				goto IL_0087;
			}

IL_0048_1:
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_0;
				RuntimeObject* L_14 = ___1_value;
				NullCheck(L_13);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_13, L_14);
				ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_15 = __this->____innerDictionary;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_16 = ___0_key;
				NullCheck(L_15);
				bool L_17;
				L_17 = ConcurrentDictionary_2_TryGetValue_mE4DFC14E4128CE4B87C0F0B5517933FD2602744A(L_15, L_16, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				if (!L_17)
				{
					goto IL_006c_1;
				}
			}
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_18 = V_3;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_19 = V_0;
				V_4 = (bool)((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_18) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_19))? 1 : 0);
				goto IL_0087;
			}

IL_006c_1:
			{
				ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_20 = __this->____innerDictionary;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_21 = ___0_key;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = V_0;
				NullCheck(L_20);
				bool L_23;
				L_23 = ConcurrentDictionary_2_TryAdd_mFD1D8949008294C5A1CD950BDFA9560BFA0100F0(L_20, L_21, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				V_4 = L_23;
				goto IL_0087;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		bool L_24 = V_4;
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetOrAdd_m369B1CCCEDE3BCE9606D7DDEDC66A5CF2CBE1E93_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___0_key, Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB* ___1_createValue, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	bool V_3 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		goto IL_0013;
	}

IL_0013:
	{
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_1 = __this->____innerDictionary;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_2 = ___0_key;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03* L_3 = ((_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 14)))->____createWeakReference;
		NullCheck(L_1);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_4;
		L_4 = ConcurrentDictionary_2_GetOrAdd_m35D11E083F2A6C5F3605BCB80585658888DA9CD3(L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_4;
	}

IL_0025:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_5);
		V_1 = L_6;
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
	}

IL_0036:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_0;
		V_2 = L_9;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{
				{
					bool L_10 = V_3;
					if (!L_10)
					{
						goto IL_00a9;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_11, NULL);
				}

IL_00a9:
				{
					return;
				}
			}
		});
		try
		{
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_12, (&V_3), NULL);
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_0;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_13);
				V_1 = L_14;
				RuntimeObject* L_15 = V_1;
				if (!L_15)
				{
					goto IL_0056_1;
				}
			}
			{
				RuntimeObject* L_16 = V_1;
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_16, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
				goto IL_00aa;
			}

IL_0056_1:
			{
				ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_17 = __this->____innerDictionary;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_18 = ___0_key;
				NullCheck(L_17);
				bool L_19;
				L_19 = ConcurrentDictionary_2_TryGetValue_mE4DFC14E4128CE4B87C0F0B5517933FD2602744A(L_17, L_18, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_20 = V_4;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_21 = V_0;
				if ((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_20) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_21)))
				{
					goto IL_0084_1;
				}
			}
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = V_4;
				if (!L_22)
				{
					goto IL_0073_1;
				}
			}
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_4;
				V_0 = L_23;
				goto IL_0025;
			}

IL_0073_1:
			{
				ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_24 = __this->____innerDictionary;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_25 = ___0_key;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_26 = V_0;
				NullCheck(L_24);
				bool L_27;
				L_27 = ConcurrentDictionary_2_TryAdd_mFD1D8949008294C5A1CD950BDFA9560BFA0100F0(L_24, L_25, L_26, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				if (L_27)
				{
					goto IL_0084_1;
				}
			}
			{
				goto IL_0013;
			}

IL_0084_1:
			{
				Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB* L_28 = ___1_createValue;
				_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_29 = ___0_key;
				NullCheck(L_28);
				RuntimeObject* L_30;
				L_30 = Func_2_Invoke_mAEB12318A5DEA7B0B278406C5D7F0B5A1A761C73_inline(L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
				V_5 = L_30;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_31 = V_0;
				RuntimeObject* L_32 = V_5;
				NullCheck(L_31);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_31, L_32);
				RuntimeObject* L_33 = V_5;
				V_6 = L_33;
				goto IL_00aa;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		RuntimeObject* L_34 = V_6;
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_TryGetValue_m8C5DF700E4B1994D6D9D5A7DA547DBF09F89AE22_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___0_key, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		goto IL_0013;
	}

IL_0013:
	{
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_1 = __this->____innerDictionary;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_2 = ___0_key;
		NullCheck(L_1);
		bool L_3;
		L_3 = ConcurrentDictionary_2_TryGetValue_mE4DFC14E4128CE4B87C0F0B5517933FD2602744A(L_1, L_2, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_4 = V_1;
		return L_4;
	}

IL_002d:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_5);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_mB3D9DF8FAF7AA0512B1DF9ECC72C5C0D592F7FD4_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___0_key, const RuntimeMethod* method) 
{
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	{
		goto IL_0013;
	}

IL_0013:
	{
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_1 = __this->____innerDictionary;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_2 = ___0_key;
		NullCheck(L_1);
		bool L_3;
		L_3 = ConcurrentDictionary_2_TryRemove_m15F9226BEEC5426753E452EB05784C5D7FA34AAD(L_1, L_2, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_ContainsKey_mC0CD054E555563E42966275C985DCB445F2FFA67_gshared (_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___0_key, const RuntimeMethod* method) 
{
	{
		goto IL_0013;
	}

IL_0013:
	{
		ConcurrentDictionary_2_t95131193AB91F089DD51D305B6DD7BA1D747B4AF* L_1 = __this->____innerDictionary;
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_2 = ___0_key;
		NullCheck(L_1);
		bool L_3;
		L_3 = ConcurrentDictionary_2_ContainsKey_m2E552E985A457B0A32AB579F86C3057059879688(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_m907080B8043F6D51C78377D8DF2540CE0BCD7326_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2* L_0 = ((U3CU3Ec_t5568DD4187467D8C2A91B021EDF8D61D159007D2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 23)))->___U3CU3E9;
		Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03* L_1 = (Func_2_t9F35772E46219E164BB4F8F8B496D09C215C7F03*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		Func_2__ctor_mA8711D4952F0EB1A5D8736A0AF69DF5A0E4D311F(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		((_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))->____createWeakReference = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_WeakValueDictionary_2_t01DEFB41D381D3DCE0D47B8D65695C4555C12D6B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))->____createWeakReference), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ctor_mE7952E168887DA2531B8B56C1845C1CE099C6AB7_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_0 = (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____innerDictionary = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_add__GcHappened_mE3F0DBE27184843AA637B871FC347C7815D3A885(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2_Dispose_m3F13A707FF8F68089ABA5F8F980FB5759073A6EE_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_runtime_class_init_inline(_GcObserver_t2F3F722006C0F6788A90A7266E717026C2012C06_il2cpp_TypeInfo_var);
		_GcObserver_remove__GcHappened_mD744F7EFD1D297FF085123D3B4615A258B17F39C(L_0, NULL);
		__this->____innerDictionary = (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerDictionary), (void*)(ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetEnumerator_m276FE681626550DD717177FD8539600533B8FA71_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, const RuntimeMethod* method) 
{
	{
		ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_0 = __this->____innerDictionary;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _WeakValueDictionary_2_get_Count_m23B53D23A3E5A0EDF287C90AEEF134FAD40E1911_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, const RuntimeMethod* method) 
{
	{
		ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_0 = __this->____innerDictionary;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__ClearCollectedValues_m79C650871EC0850510B5762CCA737BE04E05DECE_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_tC7C195F10DB4C7E1BFD2FD3A714FAE76FE950293 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const uint32_t SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
	const KeyValuePair_2_tE2890FA82AC448148B0285D44B4C56D447512C17 L_5 = alloca(SizeOf_KeyValuePair_2_tC7C195F10DB4C7E1BFD2FD3A714FAE76FE950293);
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tE2890FA82AC448148B0285D44B4C56D447512C17 V_1 = alloca(SizeOf_KeyValuePair_2_tC7C195F10DB4C7E1BFD2FD3A714FAE76FE950293);
	memset(V_1, 0, SizeOf_KeyValuePair_2_tC7C195F10DB4C7E1BFD2FD3A714FAE76FE950293);
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_5 = NULL;
	{
		ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_0 = __this->____innerDictionary;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_006f;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_006f:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005c_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				InterfaceActionInvoker1Invoker< KeyValuePair_2_tE2890FA82AC448148B0285D44B4C56D447512C17* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4, (KeyValuePair_2_tE2890FA82AC448148B0285D44B4C56D447512C17*)L_5);
				il2cpp_codegen_memcpy(V_1, L_5, SizeOf_KeyValuePair_2_tC7C195F10DB4C7E1BFD2FD3A714FAE76FE950293);
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
				L_6 = InvokerFuncInvoker0< WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (KeyValuePair_2_tE2890FA82AC448148B0285D44B4C56D447512C17*)V_1);
				V_2 = L_6;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_2;
				NullCheck(L_7);
				bool L_8;
				L_8 = VirtualFuncInvoker0< bool >::Invoke(5, L_7);
				if (L_8)
				{
					goto IL_005c_1;
				}
			}
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_2;
				V_3 = L_9;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0051_1:
					{
						{
							bool L_10 = V_4;
							if (!L_10)
							{
								goto IL_005b_1;
							}
						}
						{
							WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_11, NULL);
						}

IL_005b_1:
						{
							return;
						}
					}
				});
				try
				{
					{
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_3;
						Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_12, (&V_4), NULL);
						WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
						NullCheck(L_13);
						bool L_14;
						L_14 = VirtualFuncInvoker0< bool >::Invoke(5, L_13);
						if (L_14)
						{
							goto IL_004f_2;
						}
					}
					{
						ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_15 = __this->____innerDictionary;
						InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (KeyValuePair_2_tE2890FA82AC448148B0285D44B4C56D447512C17*)V_1, (Il2CppFullySharedGenericAny*)L_16);
						NullCheck(L_15);
						bool L_17;
						L_17 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_16: *(void**)L_16), (&V_5));
					}

IL_004f_2:
					{
						goto IL_005c_1;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				RuntimeObject* L_18 = V_0;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0070;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_TryAdd_m793F43A2B6F29773930F7DF665B495EED6BD5D50_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, Il2CppFullySharedGenericAny ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	const Il2CppFullySharedGenericAny L_18 = L_0;
	const Il2CppFullySharedGenericAny L_23 = L_0;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_1 = NULL;
	bool V_2 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_3 = NULL;
	bool V_4 = false;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_3 = __this->____innerDictionary;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		Func_2_t10393AF317190525BB875DA761DDBF9E68B750C5* L_5 = ((_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 14)))->____createWeakReference;
		NullCheck(L_3);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
		L_6 = InvokerFuncInvoker2< WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, Il2CppFullySharedGenericAny, Func_2_t10393AF317190525BB875DA761DDBF9E68B750C5* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_4: *(void**)L_4), L_5);
		V_0 = L_6;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(5, L_7);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		return (bool)0;
	}

IL_002f:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_9 = V_0;
		V_1 = L_9;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{
				{
					bool L_10 = V_2;
					if (!L_10)
					{
						goto IL_0086;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_11, NULL);
				}

IL_0086:
				{
					return;
				}
			}
		});
		try
		{
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_12, (&V_2), NULL);
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_0;
				NullCheck(L_13);
				bool L_14;
				L_14 = VirtualFuncInvoker0< bool >::Invoke(5, L_13);
				if (!L_14)
				{
					goto IL_0048_1;
				}
			}
			{
				V_4 = (bool)0;
				goto IL_0087;
			}

IL_0048_1:
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_15 = V_0;
				RuntimeObject* L_16 = ___1_value;
				NullCheck(L_15);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_15, L_16);
				ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_17 = __this->____innerDictionary;
				il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
				NullCheck(L_17);
				bool L_19;
				L_19 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_18: *(void**)L_18), (&V_3));
				if (!L_19)
				{
					goto IL_006c_1;
				}
			}
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_20 = V_3;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_21 = V_0;
				V_4 = (bool)((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_20) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_21))? 1 : 0);
				goto IL_0087;
			}

IL_006c_1:
			{
				ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_22 = __this->____innerDictionary;
				il2cpp_codegen_memcpy(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_24 = V_0;
				NullCheck(L_22);
				bool L_25;
				L_25 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_23: *(void**)L_23), L_24);
				V_4 = L_25;
				goto IL_0087;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		bool L_26 = V_4;
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_GetOrAdd_mADE5C4477156A27EBF0A0F4DEE6C11B867B4443E_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, Il2CppFullySharedGenericAny ___0_key, Func_2_tED7CA67878EF0FB299872769153413F97964501A* ___1_createValue, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	const Il2CppFullySharedGenericAny L_20 = L_0;
	const Il2CppFullySharedGenericAny L_27 = L_0;
	const Il2CppFullySharedGenericAny L_31 = L_0;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_2 = NULL;
	bool V_3 = false;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_3 = __this->____innerDictionary;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		Func_2_t10393AF317190525BB875DA761DDBF9E68B750C5* L_5 = ((_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 14)))->____createWeakReference;
		NullCheck(L_3);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_6;
		L_6 = InvokerFuncInvoker2< WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*, Il2CppFullySharedGenericAny, Func_2_t10393AF317190525BB875DA761DDBF9E68B750C5* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_4: *(void**)L_4), L_5);
		V_0 = L_6;
	}

IL_0025:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_7);
		V_1 = L_8;
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
	}

IL_0036:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_11 = V_0;
		V_2 = L_11;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{
				{
					bool L_12 = V_3;
					if (!L_12)
					{
						goto IL_00a9;
					}
				}
				{
					WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_13, NULL);
				}

IL_00a9:
				{
					return;
				}
			}
		});
		try
		{
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_14, (&V_3), NULL);
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_15 = V_0;
				NullCheck(L_15);
				RuntimeObject* L_16;
				L_16 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_15);
				V_1 = L_16;
				RuntimeObject* L_17 = V_1;
				if (!L_17)
				{
					goto IL_0056_1;
				}
			}
			{
				RuntimeObject* L_18 = V_1;
				V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_18, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
				goto IL_00aa;
			}

IL_0056_1:
			{
				ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_19 = __this->____innerDictionary;
				il2cpp_codegen_memcpy(L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
				NullCheck(L_19);
				bool L_21;
				L_21 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_20: *(void**)L_20), (&V_4));
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_22 = V_4;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_23 = V_0;
				if ((((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_22) == ((RuntimeObject*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)L_23)))
				{
					goto IL_0084_1;
				}
			}
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_24 = V_4;
				if (!L_24)
				{
					goto IL_0073_1;
				}
			}
			{
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_25 = V_4;
				V_0 = L_25;
				goto IL_0025;
			}

IL_0073_1:
			{
				ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_26 = __this->____innerDictionary;
				il2cpp_codegen_memcpy(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_28 = V_0;
				NullCheck(L_26);
				bool L_29;
				L_29 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_27: *(void**)L_27), L_28);
				if (L_29)
				{
					goto IL_0084_1;
				}
			}
			{
				goto IL_0013;
			}

IL_0084_1:
			{
				Func_2_tED7CA67878EF0FB299872769153413F97964501A* L_30 = ___1_createValue;
				il2cpp_codegen_memcpy(L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
				NullCheck(L_30);
				RuntimeObject* L_32;
				L_32 = InvokerFuncInvoker1< RuntimeObject*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_31: *(void**)L_31));
				V_5 = L_32;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_33 = V_0;
				RuntimeObject* L_34 = V_5;
				NullCheck(L_33);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_33, L_34);
				RuntimeObject* L_35 = V_5;
				V_6 = L_35;
				goto IL_00aa;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		RuntimeObject* L_36 = V_6;
		return L_36;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WeakValueDictionary_2_TryGetValue_m882740A6D9AC0983F533D9FA1EE13468DCCB2D92_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_3 = __this->____innerDictionary;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		NullCheck(L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_4: *(void**)L_4), (&V_0));
		if (L_5)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_6 = V_1;
		return L_6;
	}

IL_002d:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_7);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_Remove_mF68DA860A0FECC63284D09F87C28859E7DF35B7E_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_3 = __this->____innerDictionary;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		NullCheck(L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_4: *(void**)L_4), (&V_0));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _WeakValueDictionary_2_ContainsKey_m59AD6978E2FD95C845364626D9567D79207D33E7_gshared (_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		ConcurrentDictionary_2_t93F7816A757916D4BBD10611108FF0901B989D77* L_3 = __this->____innerDictionary;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_tC87756379348032FA98F010F8EA07CCD06C307EF);
		NullCheck(L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_4: *(void**)L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WeakValueDictionary_2__cctor_m01D10B2C3FA935D5CE88705DCCB2796E2D2FB6CF_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		U3CU3Ec_t5959B0FFFDA32DB774C7E565E847DB8BCFE77EEE* L_0 = ((U3CU3Ec_t5959B0FFFDA32DB774C7E565E847DB8BCFE77EEE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 23)))->___U3CU3E9;
		Func_2_t10393AF317190525BB875DA761DDBF9E68B750C5* L_1 = (Func_2_t10393AF317190525BB875DA761DDBF9E68B750C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		((  void (*) (Func_2_t10393AF317190525BB875DA761DDBF9E68B750C5*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25)))(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		((_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))->____createWeakReference = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_WeakValueDictionary_2_tBFC65E8FE27D672822E21C55B3A4B7AC5CB77985_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))->____createWeakReference), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Width_m820A3AC958F213A3DE7B8C3286C2078F33924EB8_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CWidthU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t _AwarenessBufferBase_get_Height_m10A5162DD4686371F6EE3F0FDB72A514C4544C26_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CHeightU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool _AwarenessBufferBase_get_IsKeyframe_m9C08BCEC5A2BD3706280C368F1BBAE2B78F37C64_inline (_AwarenessBufferBase_t63B9D854DD6C20E6D58036FF9CF916E6A8900248* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsKeyframeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mF91DB02B44EED18B0673E6F2CA20021DF3055E1F_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m64C4128A62BECA145A6B0D3E6DFF4976B634F9D2_gshared_inline (Func_2_t26684C79BAFB67DDC46993F49C29747FA3125ECF* __this, Guid_t ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, Guid_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m93CAD86A4AF9FCE518099BD0F9D7537004B87F96_gshared_inline (KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t KeyValuePair_2_get_Key_mE8D6C2F2365FC5473829AFFBF0D5A9AF14EC5E17_gshared_inline (KeyValuePair_2_tF5E0699CB6CD3DFA728CBCFA619E7EBC8B7A5202* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mEEDD427FE0A299D97308E822C93022D5BE7CA697_gshared_inline (Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09* __this, intptr_t ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m399CAA24E6DFAF548B60F98C976B79359742D5A5_gshared_inline (KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 KeyValuePair_2_get_Key_m806A9B5B7EF0F17E380B5EDBAA6714FA2DE8E3FA_gshared_inline (KeyValuePair_2_t78479FC7791A8932428F9955608B189439425C27* __this, const RuntimeMethod* method) 
{
	{
		_CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mAEB12318A5DEA7B0B278406C5D7F0B5A1A761C73_gshared_inline (Func_2_t25166F60C0A9DB6DAB4375B1BC4887755EBEE0EB* __this, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003 ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, _CppAddressAndScale_t921CDD6A03786C15CCADC0D4D9D4A3EB1DEA9003, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}

#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Converter`2<System.Object,System.Int64>
struct Converter_2_tC4B3A2DB6818FDA8E8C51D181150AE1FEFFCA65C;
// System.Converter`2<System.String,System.Int64>
struct Converter_2_tDCCB0EEAE7EC73B25607EF4747877FFE6B096D03;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// ObjectPooling[]
struct ObjectPoolingU5BU5D_t88EA08B912D950D9145E73D356ED3CD578C672BC;
// PlatformDestroyer[]
struct PlatformDestroyerU5BU5D_t75FA24EA077178BE339025AD2198D4A347207DCC;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B;
// UnityEngine.Audio.AudioMixer
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04;
// AudioSettings
struct AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// Camera
struct Camera_t9FA9D68A2946676AA0E9C404046C831F5535DB24;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DeathMenu
struct DeathMenu_tD45CB17A067FC8D071D872F8246C724E850C9DDE;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// GameManager2
struct GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// LoadTutorial2
struct LoadTutorial2_t8AF1633CA540AF8F76CF31F3B405488CB6B1987E;
// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectPooling
struct ObjectPooling_tED1829297FC7C173F0E6840E95FEA9F1A24B46C1;
// OptionsOnClick
struct OptionsOnClick_t0B34006F238B302B297250409FFCF96D30E7C6DD;
// Parallax
struct Parallax_t0F298CA660D0DC7DA354AA609364C48C9622AF73;
// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985;
// PlatformDestroyer
struct PlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79;
// PlatformGenerator
struct PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Scaler
struct Scaler_t658FF1A379BD963D314EDB1F0A20E8EB8251A12E;
// ScoreManager
struct ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SetMuseVolume
struct SetMuseVolume_t338D2AC3977C83442CCD1CA5282B919FEE859A78;
// SetSFXVolume
struct SetSFXVolume_tBBBF8CE4E5AE8AEA7543DF6B3BE3716DAD06D762;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TutorialCamera
struct TutorialCamera_t9AB430F8566EA351A73BA783334976A987E49CCC;
// TutorialForced
struct TutorialForced_tA2019D3403EB863BE113C33712B9D75F590F3DF6;
// TutorialManager
struct TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// VibrateSettings
struct VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE;
// VibrationExample
struct VibrationExample_tEA603AA8C1060DCCA08D5762F8EA24B93B32BE21;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// load
struct load_tCE94B1C7D1104527D81F5F9423E6762C281E5A12;
// load2
struct load2_tA77981C6C893F5F163DDC7B09B81EAB88EB5142A;
// load3
struct load3_t335876654C50F725DD182FF5897873987C8D59EB;
// movement
struct movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A;
// movimientotutorial
struct movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33;
// ontriggueramarillo
struct ontriggueramarillo_tBBA4BBCAEA07E17942D499074DF1F2949B152540;
// ontrigguerazul
struct ontrigguerazul_tE9E189D2F7EF629D682744BCA2F3FAA7FCC1ADC3;
// ontrigguercentro
struct ontrigguercentro_t026808B8D4C12DE8F05DABEB1C03347996E0B6E0;
// ontrigguerrojo
struct ontrigguerrojo_t69FB2EC82AF9FA8626269F0579B62A259536CD32;
// ontrigguerverde
struct ontrigguerverde_t05F05EF855D737CD64649E470EA553130E015535;
// secondchanceAdspurchase
struct secondchanceAdspurchase_tEC0590BA7EF0349D0A410503820EF3E6E32D1AB9;
// storepurchase
struct storepurchase_tDD4E7AB4A04119A75C28C9CB502BF883B2904585;
// tag
struct tag_tFAFCCC8B5895B098BC21FFB41F80C17409AECDEF;
// trigguerfinal
struct trigguerfinal_t9FE5AD8348D0072D65B71893D078E5416C8A3C5D;
// vibrateToggle
struct vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// GameManager/<WaitForIt_Death3>d__19
struct U3CWaitForIt_Death3U3Ed__19_t7A0450A6F25B0D9A17BD325CB911A82AE7C9EF4E;
// GameManager/<WaitForIt_Death>d__18
struct U3CWaitForIt_DeathU3Ed__18_t117055C3F242017E788891B9D59FC0554FC7DA0F;
// GameManager2/<RestartGameCo>d__14
struct U3CRestartGameCoU3Ed__14_t0173327588B6DC474EABD85ABF2D64E9250DEBF1;
// GameManager2/<WaitForIt_Death2>d__13
struct U3CWaitForIt_Death2U3Ed__13_tD013D702A8A48430AD9986EAABA8F465007170B2;
// LoadTutorial2/<LoadAsynchronously>d__1
struct U3CLoadAsynchronouslyU3Ed__1_t16E0E10C5CE925F139065506B9BBC2FB72E8830E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// TutorialManager/<Start>d__8
struct U3CStartU3Ed__8_tE67B868C225AED88B2AF57930831F0CEE12DA3BF;
// TutorialManager/<WaitAndPrint>d__11
struct U3CWaitAndPrintU3Ed__11_tA9EA7E8AFF0422EEF2771B25D606CEF43CEF37B9;
// load/<LoadAsynchronously>d__1
struct U3CLoadAsynchronouslyU3Ed__1_tCE1CBA3FD806D322B4F75A3DC0DE09AF47072CDC;
// load2/<LoadAsynchronously>d__1
struct U3CLoadAsynchronouslyU3Ed__1_t6D6206E6DAA1C56332FCB3941C3E3A653176961B;
// load3/<LoadAsynchronously>d__1
struct U3CLoadAsynchronouslyU3Ed__1_tF901312F84FDC77D57B0015A8B26B2D693D5FE83;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Converter_2_tDCCB0EEAE7EC73B25607EF4747877FFE6B096D03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TutorialForced_tA2019D3403EB863BE113C33712B9D75F590F3DF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadAsynchronouslyU3Ed__1_t16E0E10C5CE925F139065506B9BBC2FB72E8830E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadAsynchronouslyU3Ed__1_t6D6206E6DAA1C56332FCB3941C3E3A653176961B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadAsynchronouslyU3Ed__1_tCE1CBA3FD806D322B4F75A3DC0DE09AF47072CDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadAsynchronouslyU3Ed__1_tF901312F84FDC77D57B0015A8B26B2D693D5FE83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRestartGameCoU3Ed__14_t0173327588B6DC474EABD85ABF2D64E9250DEBF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__8_tE67B868C225AED88B2AF57930831F0CEE12DA3BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitAndPrintU3Ed__11_tA9EA7E8AFF0422EEF2771B25D606CEF43CEF37B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForIt_Death2U3Ed__13_tD013D702A8A48430AD9986EAABA8F465007170B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForIt_Death3U3Ed__19_t7A0450A6F25B0D9A17BD325CB911A82AE7C9EF4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForIt_DeathU3Ed__18_t117055C3F242017E788891B9D59FC0554FC7DA0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____FA99786BA4D946A38F43D6C851557B041F1D653A734F23157F46162449D185AE_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02CC9171C5B9D517738C86E8BCBBA7E053B29615;
IL2CPP_EXTERN_C String_t* _stringLiteral1645079AF0AD68877D5774BC81695A708DB69E30;
IL2CPP_EXTERN_C String_t* _stringLiteral199659E60DA2099DECBF611A47EE96A7272DDACE;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral229CDED9AC619C543D598B5CBC5C390B78B6F2D9;
IL2CPP_EXTERN_C String_t* _stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74;
IL2CPP_EXTERN_C String_t* _stringLiteral37370C58743BF67B2D2E479CB05BF72FED1F6B50;
IL2CPP_EXTERN_C String_t* _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9;
IL2CPP_EXTERN_C String_t* _stringLiteral38E1E035BD4E93EEBEA2E4E9732E46BFA9049A4E;
IL2CPP_EXTERN_C String_t* _stringLiteral39F2389D0FCAC5B1FAF79ECA2AEB00BBAA5F516D;
IL2CPP_EXTERN_C String_t* _stringLiteral3D079C3282CD7D084E678D9C90C09135FD4E8F75;
IL2CPP_EXTERN_C String_t* _stringLiteral3FBCB5FBB1AD700F70C943916A998CB280F1F67E;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral50D519035AC7B0E82E95D542C0F99BD8474E4F7F;
IL2CPP_EXTERN_C String_t* _stringLiteral5523A3BB61CC7D54163DEC2EBFE06EF3A90FF96C;
IL2CPP_EXTERN_C String_t* _stringLiteral5EE3F2D6D41F843A084FC0BC0BBB37F1547FE7A5;
IL2CPP_EXTERN_C String_t* _stringLiteral64CA105C6C2B750114C77ED815497653992266C4;
IL2CPP_EXTERN_C String_t* _stringLiteral65373026CF67EAA552DEA6AC911A60287C84EDDF;
IL2CPP_EXTERN_C String_t* _stringLiteral6F31962DB2831ACD42A73DDA5DC7AA3CA4F5B31B;
IL2CPP_EXTERN_C String_t* _stringLiteral70A70A786B560F707B20D6A71C6590E9EA3F6DB1;
IL2CPP_EXTERN_C String_t* _stringLiteral70DFB3A443EFAAF00DA135342763575F1A90FA54;
IL2CPP_EXTERN_C String_t* _stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B;
IL2CPP_EXTERN_C String_t* _stringLiteral8757D82ECB5D23A88F84EEF3E871F6B17C2A15BD;
IL2CPP_EXTERN_C String_t* _stringLiteral8B983133C476E84E06D0813B8B52F2D1FAD2C022;
IL2CPP_EXTERN_C String_t* _stringLiteral941A63816B0A40A960E907BAFB00F235B66A2187;
IL2CPP_EXTERN_C String_t* _stringLiteral943C8FF538819688439782F2AEDB69F222317B17;
IL2CPP_EXTERN_C String_t* _stringLiteral9A053A49693D46963A63E83B4F75CF40EED8D8FD;
IL2CPP_EXTERN_C String_t* _stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008;
IL2CPP_EXTERN_C String_t* _stringLiteralA60DAC9DE02D4EAA5374387706ABFB1C73570688;
IL2CPP_EXTERN_C String_t* _stringLiteralB033FD2F890CA8FC2F620F48B8407DD98B58052F;
IL2CPP_EXTERN_C String_t* _stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0;
IL2CPP_EXTERN_C String_t* _stringLiteralD5D4E0A1D0890FCE155E7B4D0FAB25CA9CE436B7;
IL2CPP_EXTERN_C String_t* _stringLiteralD662A0E5012CEA67D8FB5D1337EA9B5E900C9274;
IL2CPP_EXTERN_C String_t* _stringLiteralD89B7DAE6023B1286B4916829476BC7BFFE6779C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF727E6745884B2CBEB02B31AA55764739CC0B8;
IL2CPP_EXTERN_C String_t* _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D;
IL2CPP_EXTERN_C String_t* _stringLiteralE3A105D59F493421481242819787FDF8AA700AF8;
IL2CPP_EXTERN_C String_t* _stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4;
IL2CPP_EXTERN_C String_t* _stringLiteralECFE313B68EFC32016FCE052290F55E45D5B1226;
IL2CPP_EXTERN_C String_t* _stringLiteralEE73DE573F0F072F9B3B7838A16DBA35C72AFA50;
IL2CPP_EXTERN_C String_t* _stringLiteralF85DD2405ABFE865DC00B42D092E79BB7FECBA6D;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFA88447E4CCDBC9C10B1993A3C4FF4BF4075BF9D;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_ConvertAll_TisString_t_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9E9CEE9F888F4B4476F6BBBF78CA83DC060FC36B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Int64_Parse_m9E80FE4757A602A2CAB8571284EC2B034C0D8BD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_Tismovement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A_m1001C0694E79E1E81B0F2FBF11D7B3CB51CA3777_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_Tismovimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33_mCF4F92BA6744680D2483473D451C825864A56051_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisPlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79_m4BD02D74E6601C0B88E9FE2DB9B9A966EE3FCB09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAsynchronouslyU3Ed__1_System_Collections_IEnumerator_Reset_m7D7570126C9C0AC375C143A78D11167AD119CDC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAsynchronouslyU3Ed__1_System_Collections_IEnumerator_Reset_m87CF258403BC83D6FB542F4AB08E1203F5287A35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAsynchronouslyU3Ed__1_System_Collections_IEnumerator_Reset_m9FF8CB69C1C7F11AD219043D3C53C8C8AF0D2B29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAsynchronouslyU3Ed__1_System_Collections_IEnumerator_Reset_mA8C06F8B5C93EEE8D508EC15CDB3EFAD836031BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRestartGameCoU3Ed__14_System_Collections_IEnumerator_Reset_m7C52933997908515E6D08E16AC9488A32EAF6FFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_m8D75768092F0B742519CFA22A27C223B99BAE557_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitAndPrintU3Ed__11_System_Collections_IEnumerator_Reset_mA9F54698D744B80FDF580D9FF3B4CD0598A3B5C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForIt_Death2U3Ed__13_System_Collections_IEnumerator_Reset_mBFED10FA0A2B9E0678BD3F42DD3100532068D313_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForIt_Death3U3Ed__19_System_Collections_IEnumerator_Reset_mA2106A0EB57061DCCB7496DCFAE26E1192799E21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForIt_DeathU3Ed__18_System_Collections_IEnumerator_Reset_m6D6813F22FB54BC33DE77FE212A071EA437E3935_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObjectPoolingU5BU5D_t88EA08B912D950D9145E73D356ED3CD578C672BC;
struct PlatformDestroyerU5BU5D_t75FA24EA077178BE339025AD2198D4A347207DCC;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Vibration
struct Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497  : public RuntimeObject
{
};

struct Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields
{
	// UnityEngine.AndroidJavaClass Vibration::unityPlayer
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___unityPlayer_0;
	// UnityEngine.AndroidJavaObject Vibration::currentActivity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___currentActivity_1;
	// UnityEngine.AndroidJavaObject Vibration::vibrator
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___vibrator_2;
	// UnityEngine.AndroidJavaObject Vibration::context
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___context_3;
	// UnityEngine.AndroidJavaClass Vibration::vibrationEffect
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___vibrationEffect_4;
	// System.Boolean Vibration::initialized
	bool ___initialized_5;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// GameManager/<WaitForIt_Death3>d__19
struct U3CWaitForIt_Death3U3Ed__19_t7A0450A6F25B0D9A17BD325CB911A82AE7C9EF4E  : public RuntimeObject
{
	// System.Int32 GameManager/<WaitForIt_Death3>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<WaitForIt_Death3>d__19::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<WaitForIt_Death3>d__19::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// GameManager/<WaitForIt_Death>d__18
struct U3CWaitForIt_DeathU3Ed__18_t117055C3F242017E788891B9D59FC0554FC7DA0F  : public RuntimeObject
{
	// System.Int32 GameManager/<WaitForIt_Death>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<WaitForIt_Death>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<WaitForIt_Death>d__18::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// GameManager2/<RestartGameCo>d__14
struct U3CRestartGameCoU3Ed__14_t0173327588B6DC474EABD85ABF2D64E9250DEBF1  : public RuntimeObject
{
	// System.Int32 GameManager2/<RestartGameCo>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager2/<RestartGameCo>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager2 GameManager2/<RestartGameCo>d__14::<>4__this
	GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* ___U3CU3E4__this_2;
};

// GameManager2/<WaitForIt_Death2>d__13
struct U3CWaitForIt_Death2U3Ed__13_tD013D702A8A48430AD9986EAABA8F465007170B2  : public RuntimeObject
{
	// System.Int32 GameManager2/<WaitForIt_Death2>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager2/<WaitForIt_Death2>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// LoadTutorial2/<LoadAsynchronously>d__1
struct U3CLoadAsynchronouslyU3Ed__1_t16E0E10C5CE925F139065506B9BBC2FB72E8830E  : public RuntimeObject
{
	// System.Int32 LoadTutorial2/<LoadAsynchronously>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LoadTutorial2/<LoadAsynchronously>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.AsyncOperation LoadTutorial2/<LoadAsynchronously>d__1::<operation>5__2
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CoperationU3E5__2_2;
};

// TutorialManager/<Start>d__8
struct U3CStartU3Ed__8_tE67B868C225AED88B2AF57930831F0CEE12DA3BF  : public RuntimeObject
{
	// System.Int32 TutorialManager/<Start>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TutorialManager/<Start>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TutorialManager TutorialManager/<Start>d__8::<>4__this
	TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* ___U3CU3E4__this_2;
};

// TutorialManager/<WaitAndPrint>d__11
struct U3CWaitAndPrintU3Ed__11_tA9EA7E8AFF0422EEF2771B25D606CEF43CEF37B9  : public RuntimeObject
{
	// System.Int32 TutorialManager/<WaitAndPrint>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TutorialManager/<WaitAndPrint>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single TutorialManager/<WaitAndPrint>d__11::waitTime
	float ___waitTime_2;
};

// load/<LoadAsynchronously>d__1
struct U3CLoadAsynchronouslyU3Ed__1_tCE1CBA3FD806D322B4F75A3DC0DE09AF47072CDC  : public RuntimeObject
{
	// System.Int32 load/<LoadAsynchronously>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object load/<LoadAsynchronously>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.AsyncOperation load/<LoadAsynchronously>d__1::<operation>5__2
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CoperationU3E5__2_2;
};

// load2/<LoadAsynchronously>d__1
struct U3CLoadAsynchronouslyU3Ed__1_t6D6206E6DAA1C56332FCB3941C3E3A653176961B  : public RuntimeObject
{
	// System.Int32 load2/<LoadAsynchronously>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object load2/<LoadAsynchronously>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.AsyncOperation load2/<LoadAsynchronously>d__1::<operation>5__2
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CoperationU3E5__2_2;
};

// load3/<LoadAsynchronously>d__1
struct U3CLoadAsynchronouslyU3Ed__1_tF901312F84FDC77D57B0015A8B26B2D693D5FE83  : public RuntimeObject
{
	// System.Int32 load3/<LoadAsynchronously>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object load3/<LoadAsynchronously>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.AsyncOperation load3/<LoadAsynchronously>d__1::<operation>5__2
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CoperationU3E5__2_2;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Resolution
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 
{
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069__padding[32];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::FA99786BA4D946A38F43D6C851557B041F1D653A734F23157F46162449D185AE
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___FA99786BA4D946A38F43D6C851557B041F1D653A734F23157F46162449D185AE_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.Audio.AudioMixer
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Converter`2<System.String,System.Int64>
struct Converter_2_tDCCB0EEAE7EC73B25607EF4747877FFE6B096D03  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 AudioManager::FirstPlayInt
	int32_t ___FirstPlayInt_7;
	// UnityEngine.UI.Slider AudioManager::backgroundSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___backgroundSlider_8;
	// UnityEngine.UI.Slider AudioManager::soundEffectsSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___soundEffectsSlider_9;
	// System.Single AudioManager::backgroundFloat
	float ___backgroundFloat_10;
	// System.Single AudioManager::soundEffectsFloat
	float ___soundEffectsFloat_11;
	// UnityEngine.AudioSource AudioManager::backgroundAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___backgroundAudio_12;
	// UnityEngine.AudioSource[] AudioManager::soundEffectsAudio
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ___soundEffectsAudio_13;
};

struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields
{
	// System.String AudioManager::FirstPlay
	String_t* ___FirstPlay_4;
	// System.String AudioManager::BackgroundPref
	String_t* ___BackgroundPref_5;
	// System.String AudioManager::SoundEffectsPref
	String_t* ___SoundEffectsPref_6;
};

// AudioSettings
struct AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single AudioSettings::backgroundFloat
	float ___backgroundFloat_6;
	// System.Single AudioSettings::soundEffectsFloat
	float ___soundEffectsFloat_7;
	// UnityEngine.AudioSource AudioSettings::backgroundAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___backgroundAudio_8;
	// UnityEngine.AudioSource[] AudioSettings::soundEffectsAudio
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ___soundEffectsAudio_9;
};

struct AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D_StaticFields
{
	// System.String AudioSettings::BackgroundPref
	String_t* ___BackgroundPref_4;
	// System.String AudioSettings::SoundEffectsPref
	String_t* ___SoundEffectsPref_5;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// Camera
struct Camera_t9FA9D68A2946676AA0E9C404046C831F5535DB24  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// movement Camera::thePlayer
	movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* ___thePlayer_4;
	// UnityEngine.Vector3 Camera::lastPlayer
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastPlayer_5;
	// System.Single Camera::distancetomove
	float ___distancetomove_6;
	// System.Single Camera::distancetomovey
	float ___distancetomovey_7;
};

// DeathMenu
struct DeathMenu_tD45CB17A067FC8D071D872F8246C724E850C9DDE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource DeathMenu::beetlesauce
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___beetlesauce_4;
	// UnityEngine.AudioSource DeathMenu::MenuSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___MenuSound_5;
	// UnityEngine.AudioSource DeathMenu::RestartSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___RestartSound_6;
	// System.Boolean DeathMenu::testMode
	bool ___testMode_7;
	// UnityEngine.GameObject DeathMenu::restart
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___restart_8;
	// UnityEngine.GameObject DeathMenu::resumee
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___resumee_9;
	// UnityEngine.GameObject DeathMenu::restart2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___restart2_10;
	// System.Boolean DeathMenu::yess
	bool ___yess_11;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlatformGenerator GameManager::Distancia2
	PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* ___Distancia2_4;
	// UnityEngine.Transform GameManager::platformGenerator
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___platformGenerator_5;
	// UnityEngine.Vector3 GameManager::platformStartPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___platformStartPoint_6;
	// movement GameManager::thePlayer
	movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* ___thePlayer_7;
	// UnityEngine.Vector3 GameManager::playerStartPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___playerStartPoint_8;
	// PlatformDestroyer[] GameManager::platformList
	PlatformDestroyerU5BU5D_t75FA24EA077178BE339025AD2198D4A347207DCC* ___platformList_9;
	// DeathMenu GameManager::deathscreen
	DeathMenu_tD45CB17A067FC8D071D872F8246C724E850C9DDE* ___deathscreen_10;
	// UnityEngine.GameObject GameManager::Buttons
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Buttons_11;
	// UnityEngine.GameObject GameManager::Pause
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Pause_12;
	// UnityEngine.GameObject GameManager::playertag
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playertag_13;
	// UnityEngine.AudioSource GameManager::oofSauce
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___oofSauce_14;
	// System.Single GameManager::score
	float ___score_15;
	// System.Int32 GameManager::scoreint
	int32_t ___scoreint_16;
};

// GameManager2
struct GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlatformGenerator GameManager2::Distancia2
	PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* ___Distancia2_4;
	// UnityEngine.Transform GameManager2::platformGenerator
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___platformGenerator_5;
	// TutorialManager GameManager2::tutorial
	TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* ___tutorial_6;
	// movimientotutorial GameManager2::thePlayer2
	movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* ___thePlayer2_7;
	// UnityEngine.Vector3 GameManager2::platformStartPoint2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___platformStartPoint2_8;
	// UnityEngine.Vector3 GameManager2::playerStartPoint2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___playerStartPoint2_9;
	// PlatformDestroyer[] GameManager2::platformList
	PlatformDestroyerU5BU5D_t75FA24EA077178BE339025AD2198D4A347207DCC* ___platformList_10;
	// UnityEngine.GameObject GameManager2::Buttons
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Buttons_11;
	// UnityEngine.GameObject GameManager2::playertag
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playertag_12;
};

// LoadTutorial2
struct LoadTutorial2_t8AF1633CA540AF8F76CF31F3B405488CB6B1987E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource MainMenu::StartSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___StartSound_4;
	// UnityEngine.AudioSource MainMenu::MenuSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___MenuSound_5;
};

// ObjectPooling
struct ObjectPooling_tED1829297FC7C173F0E6840E95FEA9F1A24B46C1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ObjectPooling::pooledObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pooledObject_4;
	// System.Int32 ObjectPooling::pooledAmount
	int32_t ___pooledAmount_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectPooling::pooledObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___pooledObjects_6;
};

// OptionsOnClick
struct OptionsOnClick_t0B34006F238B302B297250409FFCF96D30E7C6DD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform OptionsOnClick::Options
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___Options_4;
	// UnityEngine.AudioSource OptionsOnClick::MenuSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___MenuSound_5;
};

// Parallax
struct Parallax_t0F298CA660D0DC7DA354AA609364C48C9622AF73  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Parallax::leng
	float ___leng_4;
	// System.Single Parallax::starPos
	float ___starPos_5;
	// UnityEngine.GameObject Parallax::camming
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___camming_6;
	// System.Single Parallax::effectParalalex
	float ___effectParalalex_7;
};

// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PauseMenu::pauseMenuUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseMenuUI_5;
	// UnityEngine.AudioSource PauseMenu::PauseSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___PauseSound_6;
	// UnityEngine.AudioSource PauseMenu::MenuSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___MenuSound_7;
	// VibrateSettings PauseMenu::vibrateactive
	VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE* ___vibrateactive_8;
};

struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_StaticFields
{
	// System.Boolean PauseMenu::GameIsPaused
	bool ___GameIsPaused_4;
};

// PlatformDestroyer
struct PlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PlatformDestroyer::destroyerpoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___destroyerpoint_4;
};

// PlatformGenerator
struct PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PlatformGenerator::thePlatform
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___thePlatform_4;
	// UnityEngine.Transform PlatformGenerator::generationPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___generationPoint_5;
	// System.Single PlatformGenerator::distanceBetween
	float ___distanceBetween_6;
	// System.Single PlatformGenerator::platformWidth
	float ___platformWidth_7;
	// System.Single PlatformGenerator::distancebetweenMin
	float ___distancebetweenMin_8;
	// System.Single PlatformGenerator::distancebetweenMax
	float ___distancebetweenMax_9;
	// System.Int32 PlatformGenerator::platformSelector
	int32_t ___platformSelector_10;
	// System.Single[] PlatformGenerator::platformWidths
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___platformWidths_11;
	// ObjectPooling[] PlatformGenerator::pool
	ObjectPoolingU5BU5D_t88EA08B912D950D9145E73D356ED3CD578C672BC* ___pool_12;
	// System.Single PlatformGenerator::minHeight
	float ___minHeight_13;
	// UnityEngine.Transform PlatformGenerator::maxHeightPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___maxHeightPoint_14;
	// System.Single PlatformGenerator::maxHeight
	float ___maxHeight_15;
	// System.Single PlatformGenerator::maxHeightChange
	float ___maxHeightChange_16;
	// System.Single PlatformGenerator::heightChange
	float ___heightChange_17;
};

// Scaler
struct Scaler_t658FF1A379BD963D314EDB1F0A20E8EB8251A12E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Scaler::Android
	bool ___Android_4;
	// System.Boolean Scaler::tablet
	bool ___tablet_5;
	// UnityEngine.UI.CanvasScaler Scaler::scaler
	CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* ___scaler_6;
	// UnityEngine.UI.Button Scaler::Red
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Red_7;
	// UnityEngine.UI.Button Scaler::Blue
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Blue_8;
	// UnityEngine.UI.Button Scaler::Green
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Green_9;
	// UnityEngine.UI.Button Scaler::Yellow
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Yellow_10;
	// UnityEngine.RectTransform Scaler::Leaderboard
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___Leaderboard_11;
	// UnityEngine.UI.Button Scaler::BackMenu
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___BackMenu_12;
	// UnityEngine.GameObject Scaler::pauseUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseUI_13;
	// UnityEngine.GameObject Scaler::LeaderUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LeaderUI_14;
	// UnityEngine.GameObject Scaler::DeathUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___DeathUI_15;
	// UnityEngine.UI.Button Scaler::Back1
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Back1_16;
	// UnityEngine.UI.Button Scaler::Back2
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Back2_17;
	// UnityEngine.UI.Button Scaler::Back3
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Back3_18;
	// UnityEngine.UI.Button Scaler::Back4
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Back4_19;
	// UnityEngine.UI.Button Scaler::Back5
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Back5_20;
	// UnityEngine.RectTransform Scaler::Logo
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___Logo_21;
	// UnityEngine.RectTransform Scaler::LogoN
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___LogoN_22;
	// UnityEngine.GameObject Scaler::scoremenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scoremenu_23;
	// UnityEngine.GameObject Scaler::pausemenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pausemenu_24;
	// UnityEngine.UI.Text Scaler::Tut1
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Tut1_25;
	// UnityEngine.UI.Text Scaler::Tut2
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Tut2_26;
	// UnityEngine.UI.Text Scaler::Tut3
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Tut3_27;
};

// ScoreManager
struct ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform ScoreManager::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_4;
	// UnityEngine.UI.Text ScoreManager::Scoretext
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Scoretext_5;
	// UnityEngine.UI.Text ScoreManager::HighScoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___HighScoreText_6;
	// System.Single ScoreManager::scoreCount
	float ___scoreCount_7;
	// System.Single ScoreManager::HighScoreCount
	float ___HighScoreCount_8;
	// System.Boolean ScoreManager::scoreIncreasing
	bool ___scoreIncreasing_9;
};

// SetMuseVolume
struct SetMuseVolume_t338D2AC3977C83442CCD1CA5282B919FEE859A78  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Audio.AudioMixer SetMuseVolume::mixer
	AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* ___mixer_4;
	// UnityEngine.UI.Slider SetMuseVolume::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_5;
};

// SetSFXVolume
struct SetSFXVolume_tBBBF8CE4E5AE8AEA7543DF6B3BE3716DAD06D762  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Audio.AudioMixer SetSFXVolume::mixer
	AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* ___mixer_4;
	// UnityEngine.UI.Slider SetSFXVolume::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_5;
};

// TutorialCamera
struct TutorialCamera_t9AB430F8566EA351A73BA783334976A987E49CCC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// movimientotutorial TutorialCamera::thePlayer2
	movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* ___thePlayer2_4;
	// UnityEngine.Vector3 TutorialCamera::lastPlayer2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastPlayer2_5;
	// System.Single TutorialCamera::distancetomove2
	float ___distancetomove2_6;
	// System.Single TutorialCamera::distancetomovey
	float ___distancetomovey_7;
};

// TutorialForced
struct TutorialForced_tA2019D3403EB863BE113C33712B9D75F590F3DF6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 TutorialForced::TutorialInt
	int32_t ___TutorialInt_5;
	// vibrateToggle TutorialForced::tutorialvib
	vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E* ___tutorialvib_6;
};

struct TutorialForced_tA2019D3403EB863BE113C33712B9D75F590F3DF6_StaticFields
{
	// System.String TutorialForced::Tutorial
	String_t* ___Tutorial_4;
};

// TutorialManager
struct TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// movimientotutorial TutorialManager::Player2
	movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* ___Player2_4;
	// UnityEngine.GameObject TutorialManager::TutorialJumpScoretext
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TutorialJumpScoretext_5;
	// UnityEngine.GameObject TutorialManager::TutorialColorChanges
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TutorialColorChanges_6;
	// UnityEngine.GameObject TutorialManager::tutorialend
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tutorialend_7;
	// UnityEngine.GameObject TutorialManager::playertag
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playertag_8;
	// UnityEngine.GameObject TutorialManager::botones
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___botones_9;
	// System.Collections.IEnumerator TutorialManager::coroutine
	RuntimeObject* ___coroutine_10;
	// GameManager2 TutorialManager::manager
	GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* ___manager_11;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VibrateSettings
struct VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 VibrateSettings::vibrateintt
	int32_t ___vibrateintt_5;
	// System.Boolean VibrateSettings::vibrateBoolActivate
	bool ___vibrateBoolActivate_6;
};

struct VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE_StaticFields
{
	// System.String VibrateSettings::VibrateString
	String_t* ___VibrateString_4;
};

// VibrationExample
struct VibrationExample_tEA603AA8C1060DCCA08D5762F8EA24B93B32BE21  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text VibrationExample::inputTime
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___inputTime_4;
	// UnityEngine.UI.Text VibrationExample::inputPattern
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___inputPattern_5;
	// UnityEngine.UI.Text VibrationExample::inputRepeat
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___inputRepeat_6;
	// UnityEngine.UI.Text VibrationExample::txtAndroidVersion
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtAndroidVersion_7;
};

// load
struct load_tCE94B1C7D1104527D81F5F9423E6762C281E5A12  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// load2
struct load2_tA77981C6C893F5F163DDC7B09B81EAB88EB5142A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// load3
struct load3_t335876654C50F725DD182FF5897873987C8D59EB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// movement
struct movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String movement::tagger
	String_t* ___tagger_4;
	// System.Boolean movement::deathonground
	bool ___deathonground_5;
	// PlatformGenerator movement::Distancia
	PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* ___Distancia_6;
	// UnityEngine.GameObject movement::playertag
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playertag_7;
	// UnityEngine.GameObject movement::BotonPausa
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BotonPausa_8;
	// System.Single movement::speed
	float ___speed_9;
	// System.Single movement::speedrester
	float ___speedrester_10;
	// System.Single movement::speedtracker
	float ___speedtracker_11;
	// System.Single movement::speedMultiplier
	float ___speedMultiplier_12;
	// System.Single movement::speedIncreaseMilestone
	float ___speedIncreaseMilestone_13;
	// System.Single movement::jumpForce
	float ___jumpForce_14;
	// System.Single movement::speedMilestoneCount
	float ___speedMilestoneCount_15;
	// System.Single movement::speedlimit
	float ___speedlimit_16;
	// System.Single movement::jumpTime
	float ___jumpTime_17;
	// System.Single movement::jumpTimeCounter
	float ___jumpTimeCounter_18;
	// System.Boolean movement::jumpb
	bool ___jumpb_19;
	// DeathMenu movement::deathscreen2
	DeathMenu_tD45CB17A067FC8D071D872F8246C724E850C9DDE* ___deathscreen2_20;
	// UnityEngine.Rigidbody2D movement::myRigidBody
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___myRigidBody_21;
	// System.Boolean movement::grounded
	bool ___grounded_22;
	// UnityEngine.LayerMask movement::whatIsGround
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___whatIsGround_23;
	// UnityEngine.Transform movement::groundCheck
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___groundCheck_24;
	// System.Single movement::groundCheckRadius
	float ___groundCheckRadius_25;
	// UnityEngine.Animator movement::myAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___myAnimator_26;
	// GameManager movement::theGameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___theGameManager_27;
	// System.Boolean movement::dummyVar
	bool ___dummyVar_28;
	// System.Boolean movement::muerte
	bool ___muerte_29;
};

// movimientotutorial
struct movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlatformGenerator movimientotutorial::Distancia
	PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* ___Distancia_4;
	// UnityEngine.GameObject movimientotutorial::playertag
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playertag_5;
	// System.Single movimientotutorial::speed
	float ___speed_6;
	// System.Single movimientotutorial::speedMultiplier
	float ___speedMultiplier_7;
	// System.Single movimientotutorial::speedIncreaseMilestone
	float ___speedIncreaseMilestone_8;
	// System.Single movimientotutorial::jumpForce
	float ___jumpForce_9;
	// System.Single movimientotutorial::speedMilestoneCount
	float ___speedMilestoneCount_10;
	// System.Single movimientotutorial::speedlimit
	float ___speedlimit_11;
	// System.Single movimientotutorial::jumpTime
	float ___jumpTime_12;
	// System.Single movimientotutorial::jumpTimeCounter
	float ___jumpTimeCounter_13;
	// System.Boolean movimientotutorial::jumpb
	bool ___jumpb_14;
	// System.Single movimientotutorial::speedrester
	float ___speedrester_15;
	// UnityEngine.Rigidbody2D movimientotutorial::myRigidBody
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___myRigidBody_16;
	// System.Boolean movimientotutorial::grounded
	bool ___grounded_17;
	// UnityEngine.LayerMask movimientotutorial::whatIsGround
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___whatIsGround_18;
	// UnityEngine.Transform movimientotutorial::groundCheck
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___groundCheck_19;
	// System.Single movimientotutorial::groundCheckRadius
	float ___groundCheckRadius_20;
	// UnityEngine.Animator movimientotutorial::myAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___myAnimator_21;
	// GameManager2 movimientotutorial::theGameManager2
	GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* ___theGameManager2_22;
	// System.Boolean movimientotutorial::dummyVar
	bool ___dummyVar_23;
	// System.Boolean movimientotutorial::muerte
	bool ___muerte_24;
};

// ontriggueramarillo
struct ontriggueramarillo_tBBA4BBCAEA07E17942D499074DF1F2949B152540  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ontriggueramarillo::manoamarilla
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___manoamarilla_4;
};

// ontrigguerazul
struct ontrigguerazul_tE9E189D2F7EF629D682744BCA2F3FAA7FCC1ADC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ontrigguerazul::manoazul
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___manoazul_4;
};

// ontrigguercentro
struct ontrigguercentro_t026808B8D4C12DE8F05DABEB1C03347996E0B6E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ontrigguercentro::manocentro
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___manocentro_4;
};

// ontrigguerrojo
struct ontrigguerrojo_t69FB2EC82AF9FA8626269F0579B62A259536CD32  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ontrigguerrojo::manorojo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___manorojo_4;
};

// ontrigguerverde
struct ontrigguerverde_t05F05EF855D737CD64649E470EA553130E015535  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ontrigguerverde::manoverde
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___manoverde_4;
};

// secondchanceAdspurchase
struct secondchanceAdspurchase_tEC0590BA7EF0349D0A410503820EF3E6E32D1AB9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text secondchanceAdspurchase::secondchance
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___secondchance_4;
};

// storepurchase
struct storepurchase_tDD4E7AB4A04119A75C28C9CB502BF883B2904585  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text storepurchase::botoncompra
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___botoncompra_4;
};

// tag
struct tag_tFAFCCC8B5895B098BC21FFB41F80C17409AECDEF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject tag::playertag
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playertag_4;
	// System.Int32 tag::color
	int32_t ___color_5;
	// UnityEngine.Animator tag::myanimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___myanimator_6;
	// VibrateSettings tag::vibrateactive
	VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE* ___vibrateactive_7;
	// UnityEngine.AudioSource tag::RedSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___RedSound_8;
	// UnityEngine.AudioSource tag::GreenSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___GreenSound_9;
	// UnityEngine.AudioSource tag::BlueSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___BlueSound_10;
	// UnityEngine.AudioSource tag::YellowSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___YellowSound_11;
};

// trigguerfinal
struct trigguerfinal_t9FE5AD8348D0072D65B71893D078E5416C8A3C5D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// vibrateToggle
struct vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Toggle vibrateToggle::Toggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___Toggle_4;
	// System.Int32 vibrateToggle::ToggleInt
	int32_t ___ToggleInt_5;
};

struct vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_StaticFields
{
	// System.String vibrateToggle::VibratePrefab
	String_t* ___VibratePrefab_6;
};

// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::m_UiScaleMode
	int32_t ___m_UiScaleMode_4;
	// System.Single UnityEngine.UI.CanvasScaler::m_ReferencePixelsPerUnit
	float ___m_ReferencePixelsPerUnit_5;
	// System.Single UnityEngine.UI.CanvasScaler::m_ScaleFactor
	float ___m_ScaleFactor_6;
	// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::m_ReferenceResolution
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ReferenceResolution_7;
	// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::m_ScreenMatchMode
	int32_t ___m_ScreenMatchMode_8;
	// System.Single UnityEngine.UI.CanvasScaler::m_MatchWidthOrHeight
	float ___m_MatchWidthOrHeight_9;
	// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::m_PhysicalUnit
	int32_t ___m_PhysicalUnit_11;
	// System.Single UnityEngine.UI.CanvasScaler::m_FallbackScreenDPI
	float ___m_FallbackScreenDPI_12;
	// System.Single UnityEngine.UI.CanvasScaler::m_DefaultSpriteDPI
	float ___m_DefaultSpriteDPI_13;
	// System.Single UnityEngine.UI.CanvasScaler::m_DynamicPixelsPerUnit
	float ___m_DynamicPixelsPerUnit_14;
	// UnityEngine.Canvas UnityEngine.UI.CanvasScaler::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevScaleFactor
	float ___m_PrevScaleFactor_16;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevReferencePixelsPerUnit
	float ___m_PrevReferencePixelsPerUnit_17;
	// System.Boolean UnityEngine.UI.CanvasScaler::m_PresetInfoIsWorld
	bool ___m_PresetInfoIsWorld_18;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* m_Items[1];

	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ObjectPooling[]
struct ObjectPoolingU5BU5D_t88EA08B912D950D9145E73D356ED3CD578C672BC  : public RuntimeArray
{
	ALIGN_FIELD (8) ObjectPooling_tED1829297FC7C173F0E6840E95FEA9F1A24B46C1* m_Items[1];

	inline ObjectPooling_tED1829297FC7C173F0E6840E95FEA9F1A24B46C1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ObjectPooling_tED1829297FC7C173F0E6840E95FEA9F1A24B46C1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ObjectPooling_tED1829297FC7C173F0E6840E95FEA9F1A24B46C1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ObjectPooling_tED1829297FC7C173F0E6840E95FEA9F1A24B46C1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ObjectPooling_tED1829297FC7C173F0E6840E95FEA9F1A24B46C1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ObjectPooling_tED1829297FC7C173F0E6840E95FEA9F1A24B46C1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Touch_t03E51455ED508492B3F278903A0114FA0E87B417 m_Items[1];

	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		m_Items[index] = value;
	}
};
// PlatformDestroyer[]
struct PlatformDestroyerU5BU5D_t75FA24EA077178BE339025AD2198D4A347207DCC  : public RuntimeArray
{
	ALIGN_FIELD (8) PlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79* m_Items[1];

	inline PlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Converter`2<System.Object,System.Int64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Converter_2__ctor_mF65FEDD4F04B13C33D32E53A43525BB6CF16A48E_gshared (Converter_2_tC4B3A2DB6818FDA8E8C51D181150AE1FEFFCA65C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TOutput[] System.Array::ConvertAll<System.Object,System.Int64>(TInput[],System.Converter`2<TInput,TOutput>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Array_ConvertAll_TisRuntimeObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m24CBD9B29803CE6C90E795F5FCBA2A6A96E3662D_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, Converter_2_tC4B3A2DB6818FDA8E8C51D181150AE1FEFFCA65C* ___converter1, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;

// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF (String_t* ___key0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void AudioManager::SaveSoundSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_SaveSoundSettings_m4D3EBC1AF77FA170E67CBCE4AA5A9E4FDCD15E07 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void AudioSettings::ContinueSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_ContinueSettings_m08D81CE1B57C2A99A82FC80660EB2F25EF177545 (AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Audio.AudioMixer::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<movement>()
inline movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* Object_FindObjectOfType_Tismovement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A_m1001C0694E79E1E81B0F2FBF11D7B3CB51CA3777 (const RuntimeMethod* method)
{
	return ((  movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<movimientotutorial>()
inline movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* Object_FindObjectOfType_Tismovimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33_mCF4F92BA6744680D2483473D451C825864A56051 (const RuntimeMethod* method)
{
	return ((  movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.BoxCollider2D::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoxCollider2D_get_size_mBB657ADFC58A79CDFDB7478956BBD9032E41D3D1 (BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.GameObject ObjectPooling::GetPooledObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPooling_GetPooledObject_mB3E6AAD3A14C87139CA45307784557C9C5A39E75 (ObjectPooling_tED1829297FC7C173F0E6840E95FEA9F1A24B46C1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<GameManager>()
inline GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1 (const RuntimeMethod* method)
{
	return ((  GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void GameManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Reset_m7584A67E642737B6C76C139B05D75584D2975106 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResumeGame_m4E9452E3FE77FD421C8178B1BFE541BA22FAC993 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void PauseMenu::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Resume_mA45D6E4F27172EF775FC2D3F694BE90882DBE831 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) ;
// System.Void PauseMenu::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Pause_m5C6B949CB19184E7227C891FF3C8AF707689AAF0 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) ;
// System.Void Vibration::VibratePop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vibration_VibratePop_mB640A3E4B33793A25830715702DC2DA32BBACB15 (const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.CanvasScaler::set_referenceResolution(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasScaler_set_referenceResolution_m793679B8505AF9BBF64F45D80AFE39F3F99FAB8D (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Physics2D_OverlapCircle_mD20DC99402D0E7514265AFF9E0B24041197D7D36 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0 (const RuntimeMethod* method) ;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Touch::get_fingerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_m238732B4FDEA343976D798FF04DB34C3221243C2 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, int32_t ___pointerId0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void GameManager::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RestartGame_m03813C863F1F1ABB9DC30BC371E2F088D7B01F75 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void GameManager2::ResetTutorial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager2_ResetTutorial_mECD9C06296F8B618BDCDA88651E2CAE91F7F39FC (GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* __this, const RuntimeMethod* method) ;
// System.Void Vibration::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vibration_Init_m42350289879AD110521736CE3CB27085B3A08B72 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::WaitForIt_Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_WaitForIt_Death_m41EEEBBF284C9BD20F002E2E05A2B056EF4D79E8 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::WaitForIt_Death3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_WaitForIt_Death3_m75EEA8E8405BE894542299BE1F8F683B2F1FDC31 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<PlatformDestroyer>()
inline PlatformDestroyerU5BU5D_t75FA24EA077178BE339025AD2198D4A347207DCC* Object_FindObjectsOfType_TisPlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79_m4BD02D74E6601C0B88E9FE2DB9B9A966EE3FCB09 (const RuntimeMethod* method)
{
	return ((  PlatformDestroyerU5BU5D_t75FA24EA077178BE339025AD2198D4A347207DCC* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// System.Void GameManager/<WaitForIt_Death>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForIt_DeathU3Ed__18__ctor_m946D81A6964E8A185A807AC187FDA3A51218998E (U3CWaitForIt_DeathU3Ed__18_t117055C3F242017E788891B9D59FC0554FC7DA0F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GameManager/<WaitForIt_Death3>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForIt_Death3U3Ed__19__ctor_m0A9D29627DA9DC3D252A893C2C139E6906B18A3B (U3CWaitForIt_Death3U3Ed__19_t7A0450A6F25B0D9A17BD325CB911A82AE7C9EF4E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager2::WaitForIt_Death2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager2_WaitForIt_Death2_mFA8AC6CDE5A9C7D0CDE6E36A8DEAF9EFDC9B651B (GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TutorialManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TutorialManager_Start_m466340A2904F24785286D74DFC501AE3F17CB5D6 (TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* __this, const RuntimeMethod* method) ;
// System.Void TutorialManager::reiniciar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialManager_reiniciar_mE259165ADA6B80D7E0A3E1E621C0FF06045298BD (TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* __this, const RuntimeMethod* method) ;
// System.Void GameManager2/<WaitForIt_Death2>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForIt_Death2U3Ed__13__ctor_m9C9C3BB43A6D1859FA53C64C66F0DF069C4D80D3 (U3CWaitForIt_Death2U3Ed__13_tD013D702A8A48430AD9986EAABA8F465007170B2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GameManager2/<RestartGameCo>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartGameCoU3Ed__14__ctor_m57C0C3431917EDF5E2834710ED173C9253DC70B0 (U3CRestartGameCoU3Ed__14_t0173327588B6DC474EABD85ABF2D64E9250DEBF1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void TutorialManager/<Start>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8__ctor_m6DEB356ABB0A22D47B5FD88A333462DD60C1C95B (U3CStartU3Ed__8_tE67B868C225AED88B2AF57930831F0CEE12DA3BF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void TutorialManager/<WaitAndPrint>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndPrintU3Ed__11__ctor_m321BB6CBD485652AB53298B27A957E59E10E9C85 (U3CWaitAndPrintU3Ed__11_tA9EA7E8AFF0422EEF2771B25D606CEF43CEF37B9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TutorialManager::WaitAndPrint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TutorialManager_WaitAndPrint_mC0F75E3B1DC1BFDC2E25CDED70FA23DA51D36455 (TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* __this, float ___waitTime0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator load::LoadAsynchronously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* load_LoadAsynchronously_m3283F2809F6B5ECB75BD8DB0922CE51AE53FBC5C (load_tCE94B1C7D1104527D81F5F9423E6762C281E5A12* __this, const RuntimeMethod* method) ;
// System.Void load/<LoadAsynchronously>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__1__ctor_m153E833D2883CD234576122BC0212AB3E9F27687 (U3CLoadAsynchronouslyU3Ed__1_tCE1CBA3FD806D322B4F75A3DC0DE09AF47072CDC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_mEF6FF8837670DA6D73FA35887D8723F51024CA09 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AsyncOperation::set_allowSceneActivation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator load2::LoadAsynchronously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* load2_LoadAsynchronously_m0F5B71096E30387E151E5B50B56148C1FB4F6CEC (load2_tA77981C6C893F5F163DDC7B09B81EAB88EB5142A* __this, const RuntimeMethod* method) ;
// System.Void load2/<LoadAsynchronously>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__1__ctor_m1377842FCBB6123811E79BC5E56CB2AE11935DFC (U3CLoadAsynchronouslyU3Ed__1_t6D6206E6DAA1C56332FCB3941C3E3A653176961B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator load3::LoadAsynchronously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* load3_LoadAsynchronously_mA03E5D9E4E834D346D8FA282DCC58F4911FC74E9 (load3_t335876654C50F725DD182FF5897873987C8D59EB* __this, const RuntimeMethod* method) ;
// System.Void load3/<LoadAsynchronously>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__1__ctor_m53C5377C017BBA90994876DF58B71F173701469D (U3CLoadAsynchronouslyU3Ed__1_tF901312F84FDC77D57B0015A8B26B2D693D5FE83* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LoadTutorial2::LoadAsynchronously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadTutorial2_LoadAsynchronously_m93733B90D47BBD7F92997F7000D8ED1B1862BF79 (LoadTutorial2_t8AF1633CA540AF8F76CF31F3B405488CB6B1987E* __this, const RuntimeMethod* method) ;
// System.Void LoadTutorial2/<LoadAsynchronously>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__1__ctor_mC66F93DA127DEBC0A68E1B6F683232A4C5514873 (U3CLoadAsynchronouslyU3Ed__1_t16E0E10C5CE925F139065506B9BBC2FB72E8830E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Resolution UnityEngine.Screen::get_currentResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 Screen_get_currentResolution_mDA9FEB72E2C16BD66D709E94CD9504BF7CAC899E (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Resolution::get_refreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_refreshRate_mBA65C6BC920F0045E798C9F096E830C135F37870 (Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.QualitySettings::set_vSyncCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_set_vSyncCount_m37CB89BA3DF4BE2E181339F5F44F03C493733360 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB (const RuntimeMethod* method) ;
// System.Void VibrateSettings::ContinueSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrateSettings_ContinueSettings_m49EB32EE4C687C833E010F70D963CAE27A623778 (VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m955ACDCBFD4161FA612BFA55007F9A9898401441 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void vibrateToggle::SaveToggleSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vibrateToggle_SaveToggleSettings_m4D70D82EC04958979FDE18E3C5844E1A4C87A263 (vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isMobilePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53 (const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Int32 Vibration::get_AndroidVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vibration_get_AndroidVersion_m95AF18750686B7A7749B0CC555B83A9894B33CE7 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void Vibration::Vibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vibration_Vibrate_mC92B909C0B0138210B675F4B5A646D5A1496B179 (const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void Vibration::Vibrate(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vibration_Vibrate_mADF65088F866DE4CA4BB7951F04F491248A9A737 (int64_t ___milliseconds0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void System.Converter`2<System.String,System.Int64>::.ctor(System.Object,System.IntPtr)
inline void Converter_2__ctor_m3415BDE6B0FDACC85B99C64B75AFDE0EB356E7E7 (Converter_2_tDCCB0EEAE7EC73B25607EF4747877FFE6B096D03* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Converter_2_tDCCB0EEAE7EC73B25607EF4747877FFE6B096D03*, RuntimeObject*, intptr_t, const RuntimeMethod*))Converter_2__ctor_mF65FEDD4F04B13C33D32E53A43525BB6CF16A48E_gshared)(__this, ___object0, ___method1, method);
}
// TOutput[] System.Array::ConvertAll<System.String,System.Int64>(TInput[],System.Converter`2<TInput,TOutput>)
inline Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Array_ConvertAll_TisString_t_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9E9CEE9F888F4B4476F6BBBF78CA83DC060FC36B (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array0, Converter_2_tDCCB0EEAE7EC73B25607EF4747877FFE6B096D03* ___converter1, const RuntimeMethod* method)
{
	return ((  Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, Converter_2_tDCCB0EEAE7EC73B25607EF4747877FFE6B096D03*, const RuntimeMethod*))Array_ConvertAll_TisRuntimeObject_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m24CBD9B29803CE6C90E795F5FCBA2A6A96E3662D_gshared)(___array0, ___converter1, method);
}
// System.Void Vibration::Vibrate(System.Int64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vibration_Vibrate_m9FC2F2554F8E550C1B989AAE4AD496CE5D016CC2 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___pattern0, int32_t ___repeat1, const RuntimeMethod* method) ;
// System.Void Vibration::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vibration_Cancel_mD5302344039B1D072D6D3CC1B91E10A9D85B3360 (const RuntimeMethod* method) ;
// System.Void Vibration::VibratePeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vibration_VibratePeek_mBA7E38EDFB462E77176E68D364CD6F835D24069B (const RuntimeMethod* method) ;
// System.Void Vibration::VibrateNope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vibration_VibrateNope_m93CE9D3F9C2CCA9AA43524337E50DE1F30F4A8D6 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.String>(System.String)
inline String_t* AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.Handheld::Vibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handheld_Vibrate_m2754B354B0DEE7D571D82D4C990DD2D53CF6A556 (const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_operatingSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_operatingSystem_m441DFAEFA81C9B5AF19D5C486469EDBD674490A8 (const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AudioManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Start_m3C0FEAF19F58B6D28A9E6D815B3AAF94FEA21B69 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FirstPlayInt = PlayerPrefs.GetInt(FirstPlay);
		il2cpp_codegen_runtime_class_init_inline(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		String_t* L_0 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___FirstPlay_4;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_0, NULL);
		__this->___FirstPlayInt_7 = L_1;
		// if (FirstPlayInt == 0)
		int32_t L_2 = __this->___FirstPlayInt_7;
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		// backgroundFloat = .75f;
		__this->___backgroundFloat_10 = (0.75f);
		// soundEffectsFloat = .4f;
		__this->___soundEffectsFloat_11 = (0.400000006f);
		// backgroundSlider.value = backgroundFloat;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___backgroundSlider_8;
		float L_4 = __this->___backgroundFloat_10;
		NullCheck(L_3);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_3, L_4);
		// soundEffectsSlider.value = soundEffectsFloat;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->___soundEffectsSlider_9;
		float L_6 = __this->___soundEffectsFloat_11;
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_5, L_6);
		// PlayerPrefs.SetFloat(BackgroundPref, backgroundFloat);
		il2cpp_codegen_runtime_class_init_inline(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		String_t* L_7 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___BackgroundPref_5;
		float L_8 = __this->___backgroundFloat_10;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(L_7, L_8, NULL);
		// PlayerPrefs.SetFloat(SoundEffectsPref, soundEffectsFloat);
		String_t* L_9 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___SoundEffectsPref_6;
		float L_10 = __this->___soundEffectsFloat_11;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(L_9, L_10, NULL);
		// PlayerPrefs.SetInt(FirstPlay, -1);
		String_t* L_11 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___FirstPlay_4;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_11, (-1), NULL);
		return;
	}

IL_007c:
	{
		// backgroundFloat = PlayerPrefs.GetFloat(BackgroundPref);
		il2cpp_codegen_runtime_class_init_inline(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		String_t* L_12 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___BackgroundPref_5;
		float L_13;
		L_13 = PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896(L_12, NULL);
		__this->___backgroundFloat_10 = L_13;
		// backgroundSlider.value = backgroundFloat;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_14 = __this->___backgroundSlider_8;
		float L_15 = __this->___backgroundFloat_10;
		NullCheck(L_14);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_14, L_15);
		// soundEffectsFloat = PlayerPrefs.GetFloat(SoundEffectsPref);
		String_t* L_16 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___SoundEffectsPref_6;
		float L_17;
		L_17 = PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896(L_16, NULL);
		__this->___soundEffectsFloat_11 = L_17;
		// soundEffectsSlider.value = soundEffectsFloat;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_18 = __this->___soundEffectsSlider_9;
		float L_19 = __this->___soundEffectsFloat_11;
		NullCheck(L_18);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_18, L_19);
		// }
		return;
	}
}
// System.Void AudioManager::SaveSoundSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_SaveSoundSettings_m4D3EBC1AF77FA170E67CBCE4AA5A9E4FDCD15E07 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat(BackgroundPref, backgroundSlider.value);
		il2cpp_codegen_runtime_class_init_inline(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		String_t* L_0 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___BackgroundPref_5;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___backgroundSlider_8;
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(L_0, L_2, NULL);
		// PlayerPrefs.SetFloat(SoundEffectsPref, soundEffectsSlider.value);
		String_t* L_3 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___SoundEffectsPref_6;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___soundEffectsSlider_9;
		NullCheck(L_4);
		float L_5;
		L_5 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_4);
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::OnAppFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_OnAppFocus_mDDCE716434A94390D987DA6835FB0EC53F52C195 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, bool ___inFocus0, const RuntimeMethod* method) 
{
	{
		// if (!inFocus)
		bool L_0 = ___inFocus0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// SaveSoundSettings();
		AudioManager_SaveSoundSettings_m4D3EBC1AF77FA170E67CBCE4AA5A9E4FDCD15E07(__this, NULL);
	}

IL_0009:
	{
		// }
		return;
	}
}
// System.Void AudioManager::UpdateSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_UpdateSound_m3D3C946FBC98B1589A4533CA82B50ACF7F24DD22 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// backgroundAudio.volume = backgroundSlider.value;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___backgroundAudio_12;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___backgroundSlider_8;
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		NullCheck(L_0);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_0, L_2, NULL);
		// for (int i = 0; i < soundEffectsAudio.Length; i++)
		V_0 = 0;
		goto IL_0036;
	}

IL_001a:
	{
		// soundEffectsAudio[i].volume = soundEffectsSlider.value;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_3 = __this->___soundEffectsAudio_13;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->___soundEffectsSlider_9;
		NullCheck(L_7);
		float L_8;
		L_8 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_7);
		NullCheck(L_6);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_6, L_8, NULL);
		// for (int i = 0; i < soundEffectsAudio.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0036:
	{
		// for (int i = 0; i < soundEffectsAudio.Length; i++)
		int32_t L_10 = V_0;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_11 = __this->___soundEffectsAudio_13;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AudioManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager__ctor_mA793A9DF6B975D03690B7C953972EFE41AE4D5E6 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AudioManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager__cctor_m726BBAB9EB5EAC597F81A8A2F596C6832B559009 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral229CDED9AC619C543D598B5CBC5C390B78B6F2D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F31962DB2831ACD42A73DDA5DC7AA3CA4F5B31B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8757D82ECB5D23A88F84EEF3E871F6B17C2A15BD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string FirstPlay = "FirstPlay";
		((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___FirstPlay_4 = _stringLiteral229CDED9AC619C543D598B5CBC5C390B78B6F2D9;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___FirstPlay_4), (void*)_stringLiteral229CDED9AC619C543D598B5CBC5C390B78B6F2D9);
		// private static readonly string BackgroundPref = "BackgroundPref";
		((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___BackgroundPref_5 = _stringLiteral8757D82ECB5D23A88F84EEF3E871F6B17C2A15BD;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___BackgroundPref_5), (void*)_stringLiteral8757D82ECB5D23A88F84EEF3E871F6B17C2A15BD);
		// private static readonly string SoundEffectsPref = "SoundEffectsPref";
		((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___SoundEffectsPref_6 = _stringLiteral6F31962DB2831ACD42A73DDA5DC7AA3CA4F5B31B;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___SoundEffectsPref_6), (void*)_stringLiteral6F31962DB2831ACD42A73DDA5DC7AA3CA4F5B31B);
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
// System.Void AudioSettings::Awaake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_Awaake_mA2C253763C828C1B6CE42454240DD52AD968A85C (AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D* __this, const RuntimeMethod* method) 
{
	{
		// ContinueSettings();
		AudioSettings_ContinueSettings_m08D81CE1B57C2A99A82FC80660EB2F25EF177545(__this, NULL);
		// }
		return;
	}
}
// System.Void AudioSettings::ContinueSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_ContinueSettings_m08D81CE1B57C2A99A82FC80660EB2F25EF177545 (AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// backgroundFloat = PlayerPrefs.GetFloat(BackgroundPref);
		il2cpp_codegen_runtime_class_init_inline(AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D_il2cpp_TypeInfo_var);
		String_t* L_0 = ((AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D_il2cpp_TypeInfo_var))->___BackgroundPref_4;
		float L_1;
		L_1 = PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896(L_0, NULL);
		__this->___backgroundFloat_6 = L_1;
		// soundEffectsFloat = PlayerPrefs.GetFloat(SoundEffectsPref);
		String_t* L_2 = ((AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D_il2cpp_TypeInfo_var))->___SoundEffectsPref_5;
		float L_3;
		L_3 = PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896(L_2, NULL);
		__this->___soundEffectsFloat_7 = L_3;
		// backgroundAudio.volume = backgroundFloat;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___backgroundAudio_8;
		float L_5 = __this->___backgroundFloat_6;
		NullCheck(L_4);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_4, L_5, NULL);
		// for (int i = 0; i < soundEffectsAudio.Length; i++)
		V_0 = 0;
		goto IL_004c;
	}

IL_0035:
	{
		// soundEffectsAudio[i].volume = soundEffectsFloat;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_6 = __this->___soundEffectsAudio_9;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = __this->___soundEffectsFloat_7;
		NullCheck(L_9);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_9, L_10, NULL);
		// for (int i = 0; i < soundEffectsAudio.Length; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		// for (int i = 0; i < soundEffectsAudio.Length; i++)
		int32_t L_12 = V_0;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_13 = __this->___soundEffectsAudio_9;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0035;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AudioSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings__ctor_m0F73BFA6F454677A5324954D0CE42D1FC8D9E7ED (AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AudioSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings__cctor_m66763B6545A9F6F92107F4986387581E259C0C8F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F31962DB2831ACD42A73DDA5DC7AA3CA4F5B31B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8757D82ECB5D23A88F84EEF3E871F6B17C2A15BD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string BackgroundPref = "BackgroundPref";
		((AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D_il2cpp_TypeInfo_var))->___BackgroundPref_4 = _stringLiteral8757D82ECB5D23A88F84EEF3E871F6B17C2A15BD;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D_il2cpp_TypeInfo_var))->___BackgroundPref_4), (void*)_stringLiteral8757D82ECB5D23A88F84EEF3E871F6B17C2A15BD);
		// private static readonly string SoundEffectsPref = "SoundEffectsPref";
		((AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D_il2cpp_TypeInfo_var))->___SoundEffectsPref_5 = _stringLiteral6F31962DB2831ACD42A73DDA5DC7AA3CA4F5B31B;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_tA785CD9174F2E30BBEC787A611DB6D5293133E9D_il2cpp_TypeInfo_var))->___SoundEffectsPref_5), (void*)_stringLiteral6F31962DB2831ACD42A73DDA5DC7AA3CA4F5B31B);
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
// System.Void SetMuseVolume::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetMuseVolume_Start_mB343BD2C22D80D4CDB4B94C66F0789306DF82B4E (SetMuseVolume_t338D2AC3977C83442CCD1CA5282B919FEE859A78* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SetMuseVolume::SetLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetMuseVolume_SetLevel_mCD26ABE52806A9C9DF4F5106F066A8FD9B6EE407 (SetMuseVolume_t338D2AC3977C83442CCD1CA5282B919FEE859A78* __this, float ___sliderValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38E1E035BD4E93EEBEA2E4E9732E46BFA9049A4E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mixer.SetFloat("musicVol", Mathf.Log10(sliderValue) * 20);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_0 = __this->___mixer_4;
		float L_1 = ___sliderValue0;
		float L_2;
		L_2 = log10f(L_1);
		NullCheck(L_0);
		bool L_3;
		L_3 = AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335(L_0, _stringLiteral38E1E035BD4E93EEBEA2E4E9732E46BFA9049A4E, ((float)il2cpp_codegen_multiply(L_2, (20.0f))), NULL);
		// }
		return;
	}
}
// System.Void SetMuseVolume::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetMuseVolume__ctor_m0D23D0FDDFA54930D50054C49817E2137441137E (SetMuseVolume_t338D2AC3977C83442CCD1CA5282B919FEE859A78* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SetSFXVolume::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetSFXVolume_Start_m39BD106FC2335069B4666DAC6AC53CA2F6C2318B (SetSFXVolume_tBBBF8CE4E5AE8AEA7543DF6B3BE3716DAD06D762* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SetSFXVolume::SetLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetSFXVolume_SetLevel_m6F71B5B404B5BD554826D836853EDEB9C24533FB (SetSFXVolume_tBBBF8CE4E5AE8AEA7543DF6B3BE3716DAD06D762* __this, float ___sliderValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD89B7DAE6023B1286B4916829476BC7BFFE6779C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mixer.SetFloat("SoundEffectsVol", Mathf.Log10(sliderValue) * 20);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_0 = __this->___mixer_4;
		float L_1 = ___sliderValue0;
		float L_2;
		L_2 = log10f(L_1);
		NullCheck(L_0);
		bool L_3;
		L_3 = AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335(L_0, _stringLiteralD89B7DAE6023B1286B4916829476BC7BFFE6779C, ((float)il2cpp_codegen_multiply(L_2, (20.0f))), NULL);
		// }
		return;
	}
}
// System.Void SetSFXVolume::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetSFXVolume__ctor_m412472491B14E89D6FA0A9BDCB922A4A5A3F78FF (SetSFXVolume_tBBBF8CE4E5AE8AEA7543DF6B3BE3716DAD06D762* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Parallax::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallax_Start_m6667EC7DA687585F96D395615FA015108E9E057E (Parallax_t0F298CA660D0DC7DA354AA609364C48C9622AF73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// starPos = transform.position.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		__this->___starPos_5 = L_2;
		// leng = GetComponent<SpriteRenderer>().bounds.size.x;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_3);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_4;
		L_4 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_3, NULL);
		V_0 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_6 = L_5.___x_2;
		__this->___leng_4 = L_6;
		// }
		return;
	}
}
// System.Void Parallax::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallax_Update_m1C1CE1907CC9AE212646371FAC08BE7FDCB116C5 (Parallax_t0F298CA660D0DC7DA354AA609364C48C9622AF73* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float temporalityControlOfWorldPulling = (camming.transform.position.x * (1 - effectParalalex));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___camming_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		float L_4 = __this->___effectParalalex_7;
		V_0 = ((float)il2cpp_codegen_multiply(L_3, ((float)il2cpp_codegen_subtract((1.0f), L_4))));
		// float disst = (camming.transform.position.x * effectParalalex);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___camming_6;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___x_2;
		float L_9 = __this->___effectParalalex_7;
		V_1 = ((float)il2cpp_codegen_multiply(L_8, L_9));
		// transform.position = new Vector3(starPos + disst, transform.position.y, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_11 = __this->___starPos_5;
		float L_12 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), ((float)il2cpp_codegen_add(L_11, L_12)), L_15, L_18, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_19, NULL);
		// if (temporalityControlOfWorldPulling > starPos + leng)
		float L_20 = V_0;
		float L_21 = __this->___starPos_5;
		float L_22 = __this->___leng_4;
		if ((!(((float)L_20) > ((float)((float)il2cpp_codegen_add(L_21, L_22))))))
		{
			goto IL_009c;
		}
	}
	{
		// starPos += leng;
		float L_23 = __this->___starPos_5;
		float L_24 = __this->___leng_4;
		__this->___starPos_5 = ((float)il2cpp_codegen_add(L_23, L_24));
		return;
	}

IL_009c:
	{
		// else if (temporalityControlOfWorldPulling < starPos - leng)
		float L_25 = V_0;
		float L_26 = __this->___starPos_5;
		float L_27 = __this->___leng_4;
		if ((!(((float)L_25) < ((float)((float)il2cpp_codegen_subtract(L_26, L_27))))))
		{
			goto IL_00bf;
		}
	}
	{
		// starPos -= leng;
		float L_28 = __this->___starPos_5;
		float L_29 = __this->___leng_4;
		__this->___starPos_5 = ((float)il2cpp_codegen_subtract(L_28, L_29));
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void Parallax::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallax__ctor_m1977D1694F369305A6582E1F215E0B882C2B0EBB (Parallax_t0F298CA660D0DC7DA354AA609364C48C9622AF73* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Camera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Start_m48167220F68C499CA52D515C89D271BB2201233D (Camera_t9FA9D68A2946676AA0E9C404046C831F5535DB24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_Tismovement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A_m1001C0694E79E1E81B0F2FBF11D7B3CB51CA3777_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thePlayer = FindObjectOfType<movement>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_0;
		L_0 = Object_FindObjectOfType_Tismovement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A_m1001C0694E79E1E81B0F2FBF11D7B3CB51CA3777(Object_FindObjectOfType_Tismovement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A_m1001C0694E79E1E81B0F2FBF11D7B3CB51CA3777_RuntimeMethod_var);
		__this->___thePlayer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thePlayer_4), (void*)L_0);
		// lastPlayer = thePlayer.transform.position;
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_1 = __this->___thePlayer_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->___lastPlayer_5 = L_3;
		// }
		return;
	}
}
// System.Void Camera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Update_m60638BE66FB3F1B5A163454A4BABAA692DE45B5F (Camera_t9FA9D68A2946676AA0E9C404046C831F5535DB24* __this, const RuntimeMethod* method) 
{
	{
		// distancetomove = thePlayer.transform.position.x - lastPlayer.x;
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_0 = __this->___thePlayer_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___lastPlayer_5);
		float L_5 = L_4->___x_2;
		__this->___distancetomove_6 = ((float)il2cpp_codegen_subtract(L_3, L_5));
		// transform.position = new Vector3(transform.position.x + distancetomove, transform.position.y, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___x_2;
		float L_10 = __this->___distancetomove_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), ((float)il2cpp_codegen_add(L_9, L_10)), L_13, L_16, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_17, NULL);
		// lastPlayer = thePlayer.transform.position;
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_18 = __this->___thePlayer_4;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		__this->___lastPlayer_5 = L_20;
		// }
		return;
	}
}
// System.Void Camera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera__ctor_m25E6BFC52C3B33D00EB7D3809145AB3A385B3EFC (Camera_t9FA9D68A2946676AA0E9C404046C831F5535DB24* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TutorialCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialCamera_Start_m3D03EDDCAC41662CEC9E706973D031631358597A (TutorialCamera_t9AB430F8566EA351A73BA783334976A987E49CCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_Tismovimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33_mCF4F92BA6744680D2483473D451C825864A56051_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thePlayer2 = FindObjectOfType<movimientotutorial>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* L_0;
		L_0 = Object_FindObjectOfType_Tismovimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33_mCF4F92BA6744680D2483473D451C825864A56051(Object_FindObjectOfType_Tismovimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33_mCF4F92BA6744680D2483473D451C825864A56051_RuntimeMethod_var);
		__this->___thePlayer2_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thePlayer2_4), (void*)L_0);
		// lastPlayer2 = thePlayer2.transform.position;
		movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* L_1 = __this->___thePlayer2_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->___lastPlayer2_5 = L_3;
		// }
		return;
	}
}
// System.Void TutorialCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialCamera_Update_m18A925B0F242CF5CA562104398FA2EFBC6D7E94A (TutorialCamera_t9AB430F8566EA351A73BA783334976A987E49CCC* __this, const RuntimeMethod* method) 
{
	{
		// distancetomove2 = thePlayer2.transform.position.x - lastPlayer2.x;
		movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* L_0 = __this->___thePlayer2_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___lastPlayer2_5);
		float L_5 = L_4->___x_2;
		__this->___distancetomove2_6 = ((float)il2cpp_codegen_subtract(L_3, L_5));
		// transform.position = new Vector3(transform.position.x + distancetomove2, transform.position.y, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___x_2;
		float L_10 = __this->___distancetomove2_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), ((float)il2cpp_codegen_add(L_9, L_10)), L_13, L_16, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_17, NULL);
		// lastPlayer2 = thePlayer2.transform.position;
		movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* L_18 = __this->___thePlayer2_4;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		__this->___lastPlayer2_5 = L_20;
		// }
		return;
	}
}
// System.Void TutorialCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialCamera__ctor_m2CEB03DE18D18F3DC6B48CEFF0A93D5A3A6D7F3C (TutorialCamera_t9AB430F8566EA351A73BA783334976A987E49CCC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlatformDestroyer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDestroyer_Start_m6F43B9E4D35F49D3032A3DEAA4C0CF876326AB45 (PlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D4E0A1D0890FCE155E7B4D0FAB25CA9CE436B7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// destroyerpoint = GameObject.Find("PlatformDestructionPoint");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralD5D4E0A1D0890FCE155E7B4D0FAB25CA9CE436B7, NULL);
		__this->___destroyerpoint_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___destroyerpoint_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlatformDestroyer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDestroyer_Update_m3193F635A6A513140156402FD1D3F234D5C1E40E (PlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79* __this, const RuntimeMethod* method) 
{
	{
		// if (transform.position.x < destroyerpoint.transform.position.x)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___destroyerpoint_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___x_2;
		if ((!(((float)L_2) < ((float)L_6))))
		{
			goto IL_0033;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void PlatformDestroyer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformDestroyer__ctor_m15D62F4D629407D0ED14CDD4269A56FA46CAD79C (PlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlatformGenerator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformGenerator_Start_mC73D62E87D273C9D109097AC1C5B11F6B6DF7874 (PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// platformWidths = new float[pool.Length];
		ObjectPoolingU5BU5D_t88EA08B912D950D9145E73D356ED3CD578C672BC* L_0 = __this->___pool_12;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		__this->___platformWidths_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___platformWidths_11), (void*)L_1);
		// for (int i = 0; i < pool.Length; i++)
		V_0 = 0;
		goto IL_003f;
	}

IL_0017:
	{
		// platformWidths[i] = pool[i].pooledObject.GetComponent<BoxCollider2D>().size.x;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___platformWidths_11;
		int32_t L_3 = V_0;
		ObjectPoolingU5BU5D_t88EA08B912D950D9145E73D356ED3CD578C672BC* L_4 = __this->___pool_12;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		ObjectPooling_tED1829297FC7C173F0E6840E95FEA9F1A24B46C1* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___pooledObject_4;
		NullCheck(L_8);
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_9;
		L_9 = GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C(L_8, GameObject_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m48A5F1846C88218467F6C441C4C005887487412C_RuntimeMethod_var);
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = BoxCollider2D_get_size_mBB657ADFC58A79CDFDB7478956BBD9032E41D3D1(L_9, NULL);
		float L_11 = L_10.___x_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (float)L_11);
		// for (int i = 0; i < pool.Length; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_003f:
	{
		// for (int i = 0; i < pool.Length; i++)
		int32_t L_13 = V_0;
		ObjectPoolingU5BU5D_t88EA08B912D950D9145E73D356ED3CD578C672BC* L_14 = __this->___pool_12;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// minHeight = transform.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___y_3;
		__this->___minHeight_13 = L_17;
		// maxHeight = maxHeightPoint.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___maxHeightPoint_14;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___y_3;
		__this->___maxHeight_15 = L_20;
		// }
		return;
	}
}
// System.Void PlatformGenerator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformGenerator_Update_m6742501DF3CEF882B8F276976A1B0A81C0F8FA84 (PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* __this, const RuntimeMethod* method) 
{
	{
		// if(transform.position.x < generationPoint.position.x)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___generationPoint_5;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		if ((!(((float)L_2) < ((float)L_5))))
		{
			goto IL_0198;
		}
	}
	{
		// distanceBetween = Random.Range(distancebetweenMin, distancebetweenMax);
		float L_6 = __this->___distancebetweenMin_8;
		float L_7 = __this->___distancebetweenMax_9;
		float L_8;
		L_8 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_6, L_7, NULL);
		__this->___distanceBetween_6 = L_8;
		// platformSelector = Random.Range(0, pool.Length);
		ObjectPoolingU5BU5D_t88EA08B912D950D9145E73D356ED3CD578C672BC* L_9 = __this->___pool_12;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		__this->___platformSelector_10 = L_10;
		// heightChange = transform.position.y + Random.Range(maxHeightChange, -maxHeightChange);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___y_3;
		float L_14 = __this->___maxHeightChange_16;
		float L_15 = __this->___maxHeightChange_16;
		float L_16;
		L_16 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_14, ((-L_15)), NULL);
		__this->___heightChange_17 = ((float)il2cpp_codegen_add(L_13, L_16));
		// if(heightChange > maxHeight)
		float L_17 = __this->___heightChange_17;
		float L_18 = __this->___maxHeight_15;
		if ((!(((float)L_17) > ((float)L_18))))
		{
			goto IL_0095;
		}
	}
	{
		// heightChange = maxHeight;
		float L_19 = __this->___maxHeight_15;
		__this->___heightChange_17 = L_19;
		goto IL_00af;
	}

IL_0095:
	{
		// } else if (heightChange <minHeight)
		float L_20 = __this->___heightChange_17;
		float L_21 = __this->___minHeight_13;
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_00af;
		}
	}
	{
		// heightChange = minHeight;
		float L_22 = __this->___minHeight_13;
		__this->___heightChange_17 = L_22;
	}

IL_00af:
	{
		// transform.position = new Vector3(transform.position.x + (platformWidths[platformSelector] / 2) + distanceBetween, heightChange, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		float L_26 = L_25.___x_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = __this->___platformWidths_11;
		int32_t L_28 = __this->___platformSelector_10;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		float L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		float L_31 = __this->___distanceBetween_6;
		float L_32 = __this->___heightChange_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		float L_35 = L_34.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_26, ((float)(L_30/(2.0f))))), L_31)), L_32, L_35, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_23, L_36, NULL);
		// GameObject newPlatform = pool[platformSelector].GetPooledObject();
		ObjectPoolingU5BU5D_t88EA08B912D950D9145E73D356ED3CD578C672BC* L_37 = __this->___pool_12;
		int32_t L_38 = __this->___platformSelector_10;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		ObjectPooling_tED1829297FC7C173F0E6840E95FEA9F1A24B46C1* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = ObjectPooling_GetPooledObject_mB3E6AAD3A14C87139CA45307784557C9C5A39E75(L_40, NULL);
		// newPlatform.transform.position = transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = L_41;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_42, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_44, NULL);
		NullCheck(L_43);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_43, L_45, NULL);
		// newPlatform.transform.rotation = transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = L_42;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_48);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_48, NULL);
		NullCheck(L_47);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_47, L_49, NULL);
		// newPlatform.SetActive(true);
		NullCheck(L_46);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)1, NULL);
		// transform.position = new Vector3(transform.position.x + (platformWidths[platformSelector] / 2), transform.position.y, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_51, NULL);
		float L_53 = L_52.___x_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_54 = __this->___platformWidths_11;
		int32_t L_55 = __this->___platformSelector_10;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		float L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_58);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_58, NULL);
		float L_60 = L_59.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_61, NULL);
		float L_63 = L_62.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_64), ((float)il2cpp_codegen_add(L_53, ((float)(L_57/(2.0f))))), L_60, L_63, /*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_50, L_64, NULL);
	}

IL_0198:
	{
		// }
		return;
	}
}
// System.Void PlatformGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformGenerator__ctor_m2AE51255746EB7C006E6002400EC2981CFCE28BB (PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void secondchanceAdspurchase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void secondchanceAdspurchase_Start_m965654887CA2CAF548534CAEF0E8ADEC97DED3B9 (secondchanceAdspurchase_tEC0590BA7EF0349D0A410503820EF3E6E32D1AB9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void secondchanceAdspurchase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void secondchanceAdspurchase_Update_m41EE4CC551D7E5CEEACC7DBCCFD907337768BAEE (secondchanceAdspurchase_tEC0590BA7EF0349D0A410503820EF3E6E32D1AB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02CC9171C5B9D517738C86E8BCBBA7E053B29615);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral941A63816B0A40A960E907BAFB00F235B66A2187);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.HasKey("AdFree"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteral941A63816B0A40A960E907BAFB00F235B66A2187, NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// secondchance.text = "Second Chance Free!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___secondchance_4;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral02CC9171C5B9D517738C86E8BCBBA7E053B29615);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void secondchanceAdspurchase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void secondchanceAdspurchase__ctor_m6D7282566CEF2D61636E71FBBBA3EA15B136AD8F (secondchanceAdspurchase_tEC0590BA7EF0349D0A410503820EF3E6E32D1AB9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void storepurchase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void storepurchase_Start_m8ACDE2A5C8E233B967014CD71914E423ECF4E0CC (storepurchase_tDD4E7AB4A04119A75C28C9CB502BF883B2904585* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void storepurchase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void storepurchase_Update_m657F014DF7077338F7537D5A720C4F97FD848779 (storepurchase_tDD4E7AB4A04119A75C28C9CB502BF883B2904585* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral941A63816B0A40A960E907BAFB00F235B66A2187);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF727E6745884B2CBEB02B31AA55764739CC0B8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PlayerPrefs.HasKey("AdFree"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteral941A63816B0A40A960E907BAFB00F235B66A2187, NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// botoncompra.text = "Thank you for your purchase!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___botoncompra_4;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralDAF727E6745884B2CBEB02B31AA55764739CC0B8);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void storepurchase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void storepurchase__ctor_mE9C916636C1E2539C1C3E2CB5612BDB8329113AC (storepurchase_tDD4E7AB4A04119A75C28C9CB502BF883B2904585* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DeathMenu::RestarGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathMenu_RestarGame_mE8DEB2D3FF0983219D8448C9CE7A62E540AFB3A8 (DeathMenu_tD45CB17A067FC8D071D872F8246C724E850C9DDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RestartSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___RestartSound_6;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// FindObjectOfType<GameManager>().Reset();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1;
		L_1 = Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1(Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var);
		NullCheck(L_1);
		GameManager_Reset_m7584A67E642737B6C76C139B05D75584D2975106(L_1, NULL);
		// beetlesauce.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___beetlesauce_4;
		NullCheck(L_2);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_2, NULL);
		// }
		return;
	}
}
// System.Void DeathMenu::Quittomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathMenu_Quittomain_mEE7BFF3DCB84CDE71F3B50B58DE30397C35B1ECA (DeathMenu_tD45CB17A067FC8D071D872F8246C724E850C9DDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// beetlesauce.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___beetlesauce_4;
		NullCheck(L_0);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_0, NULL);
		// MenuSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___MenuSound_5;
		NullCheck(L_1);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// SceneManager.LoadScene(3);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(3, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// }
		return;
	}
}
// System.Void DeathMenu::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathMenu_Resume_mE5B2938036821EDD0C328806408B358217B54FC7 (DeathMenu_tD45CB17A067FC8D071D872F8246C724E850C9DDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindObjectOfType<GameManager>().ResumeGame();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1(Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_m83DB1EC21A137A0D15428F3CDC56E435AC2B5EB1_RuntimeMethod_var);
		NullCheck(L_0);
		GameManager_ResumeGame_m4E9452E3FE77FD421C8178B1BFE541BA22FAC993(L_0, NULL);
		// beetlesauce.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___beetlesauce_4;
		NullCheck(L_1);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_1, NULL);
		// }
		return;
	}
}
// System.Void DeathMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathMenu__ctor_m4DF49E84992B9D1E16C31DEE7A749D19D0FABF63 (DeathMenu_tD45CB17A067FC8D071D872F8246C724E850C9DDE* __this, const RuntimeMethod* method) 
{
	{
		// public bool testMode = true;
		__this->___testMode_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MainMenu::PlayGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_PlayGame_mEC2DA4274CDD4D658AE27480E2C70C6049A496B5 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___StartSound_4;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(1, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::PlayTutorial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_PlayTutorial_m51D82FA85C318835CC3D9E88838804B75C58D58D (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___StartSound_4;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// SceneManager.LoadScene(5);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(5, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Store()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Store_m91FA884F49DA1ABA19A1B74D0A1B3545265D7FE8 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// MenuSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___MenuSound_5;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::SonidoComprar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_SonidoComprar_m8793170DF6D8B0546AFEEE22FA324ABD2AE78F41 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// StartSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___StartSound_4;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Leaderboardsound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Leaderboardsound_m3BB333F3C4C9FAEA564E61A74AB0289C65113D77 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// MenuSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___MenuSound_5;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Credits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Credits_m3ADF6EE56BDE85CE41B3A66B4B9C39BA5481B1B8 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// MenuSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___MenuSound_5;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Quit_m2B85ACAF7EFBA8E95FAE62830FEB6D390A4CC78E (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF85DD2405ABFE865DC00B42D092E79BB7FECBA6D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("QUIT!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF85DD2405ABFE865DC00B42D092E79BB7FECBA6D, NULL);
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m8209CEC1D907C87A96D777961F4D0536E6E948DD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void OptionsOnClick::CambiarMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionsOnClick_CambiarMenu_mF101E459741812F1F6E7AF3871A2208B7C38595C (OptionsOnClick_t0B34006F238B302B297250409FFCF96D30E7C6DD* __this, const RuntimeMethod* method) 
{
	{
		// MenuSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___MenuSound_5;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// Options.localPosition = new Vector3(0, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___Options_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void OptionsOnClick::RegresarMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionsOnClick_RegresarMenu_mA2FAEEE1A650A1197AFDA425AFEBE11752A00E6C (OptionsOnClick_t0B34006F238B302B297250409FFCF96D30E7C6DD* __this, const RuntimeMethod* method) 
{
	{
		// MenuSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___MenuSound_5;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// Options.localPosition = new Vector3(1930, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___Options_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_2), (1930.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void OptionsOnClick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionsOnClick__ctor_m52C4C0E505F6F41B817A4019EBF4F886A832550D (OptionsOnClick_t0B34006F238B302B297250409FFCF96D30E7C6DD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PauseMenu::LoadMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_LoadMenu_m301E8408F8C5253F3753113332BBC089863B19A9 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MenuSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___MenuSound_7;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// pauseMenuUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___pauseMenuUI_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// GameIsPaused = false;
		((PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var))->___GameIsPaused_4 = (bool)0;
		// SceneManager.LoadScene(3);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(3, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::LoadMenuTutorial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_LoadMenuTutorial_m58BB15CB23D36F51DECFEA02E950EBFDA1AAC4D2 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MenuSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___MenuSound_7;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// SceneManager.LoadScene(6);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(6, NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Update_m5097E74BFD4385B73BA9EF7198886DCEC7DF9A83 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// if (GameIsPaused)
		bool L_1 = ((PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var))->___GameIsPaused_4;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Resume();
		PauseMenu_Resume_mA45D6E4F27172EF775FC2D3F694BE90882DBE831(__this, NULL);
		return;
	}

IL_0017:
	{
		// Pause();
		PauseMenu_Pause_m5C6B949CB19184E7227C891FF3C8AF707689AAF0(__this, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::PAUSE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_PAUSE_mF2030ADD94B1B8CB00B4C074F2B07B7C50959C98 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameIsPaused)
		bool L_0 = ((PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var))->___GameIsPaused_4;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Resume();
		PauseMenu_Resume_mA45D6E4F27172EF775FC2D3F694BE90882DBE831(__this, NULL);
		return;
	}

IL_000e:
	{
		// Pause();
		PauseMenu_Pause_m5C6B949CB19184E7227C891FF3C8AF707689AAF0(__this, NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Resume_mA45D6E4F27172EF775FC2D3F694BE90882DBE831 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PauseSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___PauseSound_6;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// if (vibrateactive.vibrateBoolActivate == true)
		VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE* L_1 = __this->___vibrateactive_8;
		NullCheck(L_1);
		bool L_2 = L_1->___vibrateBoolActivate_6;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// Vibration.VibratePop();
		Vibration_VibratePop_mB640A3E4B33793A25830715702DC2DA32BBACB15(NULL);
	}

IL_001d:
	{
		// pauseMenuUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___pauseMenuUI_5;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// GameIsPaused = false;
		((PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var))->___GameIsPaused_4 = (bool)0;
		// }
		return;
	}
}
// System.Void PauseMenu::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Pause_m5C6B949CB19184E7227C891FF3C8AF707689AAF0 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PauseSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___PauseSound_6;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// if (vibrateactive.vibrateBoolActivate == true)
		VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE* L_1 = __this->___vibrateactive_8;
		NullCheck(L_1);
		bool L_2 = L_1->___vibrateBoolActivate_6;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// Vibration.VibratePop();
		Vibration_VibratePop_mB640A3E4B33793A25830715702DC2DA32BBACB15(NULL);
	}

IL_001d:
	{
		// pauseMenuUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___pauseMenuUI_5;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// GameIsPaused = true;
		((PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var))->___GameIsPaused_4 = (bool)1;
		// }
		return;
	}
}
// System.Void PauseMenu::Sound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Sound_mB736A2A2743307DF941AA3DD22ABF7C9BEF47A8A (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// MenuSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___MenuSound_7;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_QuitGame_m699C16B5AE66C12C48F4D7B4821169679C5FF760 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_m81B0E020DC5008DA4D414200BAAF7122B430D826 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Scaler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scaler_Start_mB0DB0A8FF651DBFDC1A84E4FF554AB50017D4904 (Scaler_t658FF1A379BD963D314EDB1F0A20E8EB8251A12E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD662A0E5012CEA67D8FB5D1337EA9B5E900C9274);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Android = true;
		__this->___Android_4 = (bool)1;
		// tablet = false;
		__this->___tablet_5 = (bool)0;
		// Scene scene = SceneManager.GetActiveScene();
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		// if (Android == true)
		bool L_1 = __this->___Android_4;
		if (!L_1)
		{
			goto IL_0079;
		}
	}
	{
		// scaler.referenceResolution = new Vector2(2960, 1440);
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_2 = __this->___scaler_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), (2960.0f), (1440.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		CanvasScaler_set_referenceResolution_m793679B8505AF9BBF64F45D80AFE39F3F99FAB8D(L_2, L_3, NULL);
		// if (scene.name == "Tutorial")
		String_t* L_4;
		L_4 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteralD662A0E5012CEA67D8FB5D1337EA9B5E900C9274, NULL);
		if (!L_5)
		{
			goto IL_0079;
		}
	}
	{
		// Tut1.fontSize = 300;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___Tut1_25;
		NullCheck(L_6);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_6, ((int32_t)300), NULL);
		// Tut2.fontSize = 300;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___Tut2_26;
		NullCheck(L_7);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_7, ((int32_t)300), NULL);
		// Tut3.fontSize = 300;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___Tut3_27;
		NullCheck(L_8);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_8, ((int32_t)300), NULL);
	}

IL_0079:
	{
		// if (tablet == true)
		bool L_9 = __this->___tablet_5;
		if (!L_9)
		{
			goto IL_01df;
		}
	}
	{
		// scaler.referenceResolution = new Vector2(3600, 1248);
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_10 = __this->___scaler_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), (3600.0f), (1248.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		CanvasScaler_set_referenceResolution_m793679B8505AF9BBF64F45D80AFE39F3F99FAB8D(L_10, L_11, NULL);
		// Red.transform.position = Red.transform.position + new Vector3(-180, 0, 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->___Red_7;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = __this->___Red_7;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), (-180.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_16, L_17, NULL);
		NullCheck(L_13);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_18, NULL);
		// Green.transform.position = Green.transform.position + new Vector3(-180, -10, 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_19 = __this->___Green_9;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_21 = __this->___Green_9;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), (-180.0f), (-10.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_23, L_24, NULL);
		NullCheck(L_20);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_25, NULL);
		// Blue.transform.position = Blue.transform.position + new Vector3(180, 0, 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_26 = __this->___Blue_8;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_28 = __this->___Blue_8;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), (180.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_30, L_31, NULL);
		NullCheck(L_27);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_27, L_32, NULL);
		// Yellow.transform.position = Yellow.transform.position + new Vector3(180, -10, 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_33 = __this->___Yellow_10;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_33, NULL);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_35 = __this->___Yellow_10;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_38), (180.0f), (-10.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_37, L_38, NULL);
		NullCheck(L_34);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_34, L_39, NULL);
		// Leaderboard.transform.localScale = new Vector3(1.85f, 1.85f, 1.85f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_40 = __this->___Leaderboard_11;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), (1.85000002f), (1.85000002f), (1.85000002f), /*hidden argument*/NULL);
		NullCheck(L_41);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_41, L_42, NULL);
		// BackMenu.transform.position = BackMenu.transform.position + new Vector3(0, 180, 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_43 = __this->___BackMenu_12;
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_43, NULL);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_45 = __this->___BackMenu_12;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_45, NULL);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_48), (0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_47, L_48, NULL);
		NullCheck(L_44);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_44, L_49, NULL);
	}

IL_01df:
	{
		// }
		return;
	}
}
// System.Void Scaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scaler__ctor_m4E7735BDFAA10AE3331B6EFB248E9EE696DF6798 (Scaler_t658FF1A379BD963D314EDB1F0A20E8EB8251A12E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ScoreManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Start_m7E00370AD0134DB3AEA647B9BA69055725AA83FE (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.HasKey("HighScore"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// HighScoreCount = PlayerPrefs.GetFloat("HighScore");
		float L_1;
		L_1 = PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, NULL);
		__this->___HighScoreCount_8 = L_1;
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void ScoreManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Update_m68EC29B04B4118B51E293C1C3077D87FF3FE7811 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70DFB3A443EFAAF00DA135342763575F1A90FA54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// scoreCount = float.Parse(Player.position.x.ToString("0"));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		float* L_2 = (&(&V_0)->___x_2);
		String_t* L_3;
		L_3 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_2, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		float L_4;
		L_4 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_3, NULL);
		__this->___scoreCount_7 = L_4;
		// if(scoreCount > HighScoreCount)
		float L_5 = __this->___scoreCount_7;
		float L_6 = __this->___HighScoreCount_8;
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_0052;
		}
	}
	{
		// HighScoreCount = scoreCount;
		float L_7 = __this->___scoreCount_7;
		__this->___HighScoreCount_8 = L_7;
		// PlayerPrefs.SetFloat("HighScore", HighScoreCount);
		float L_8 = __this->___HighScoreCount_8;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, L_8, NULL);
	}

IL_0052:
	{
		// Scoretext.text = "Score: " + scoreCount;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___Scoretext_5;
		float* L_10 = (&__this->___scoreCount_7);
		String_t* L_11;
		L_11 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_11, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_12);
		// HighScoreText.text = "High Score: " + HighScoreCount;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___HighScoreText_6;
		float* L_14 = (&__this->___HighScoreCount_8);
		String_t* L_15;
		L_15 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral70DFB3A443EFAAF00DA135342763575F1A90FA54, L_15, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_16);
		// }
		return;
	}
}
// System.Void ScoreManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager__ctor_mE5C264C34A9CBBAB72DCF99CCCC9841AF8F9FEE6 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ontriggueramarillo::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ontriggueramarillo_OnTriggerEnter2D_mD4E0A7C69C95A7C7D32D9A3DEEFFD5C38F3F0784 (ontriggueramarillo_tBBA4BBCAEA07E17942D499074DF1F2949B152540* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	{
		// manoamarilla.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___manoamarilla_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ontriggueramarillo::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ontriggueramarillo_OnTriggerExit2D_m5CB92253E6EDE6243432210180088178404BB65D (ontriggueramarillo_tBBA4BBCAEA07E17942D499074DF1F2949B152540* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	{
		// manoamarilla.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___manoamarilla_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ontriggueramarillo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ontriggueramarillo__ctor_m85999633D85BE0D61B91626A2F50CCA8160E2B69 (ontriggueramarillo_tBBA4BBCAEA07E17942D499074DF1F2949B152540* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ontrigguercentro::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ontrigguercentro_OnTriggerEnter2D_m7C2F56C105F372B79EC1309E023D80303ED6A8EE (ontrigguercentro_t026808B8D4C12DE8F05DABEB1C03347996E0B6E0* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	{
		// manocentro.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___manocentro_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ontrigguercentro::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ontrigguercentro_OnTriggerExit2D_mD00A7335AE9E63F57F69F5089F8F4BABB199A321 (ontrigguercentro_t026808B8D4C12DE8F05DABEB1C03347996E0B6E0* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	{
		// manocentro.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___manocentro_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ontrigguercentro::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ontrigguercentro__ctor_m88EFF23F166564D8E82B64798BD724957C84181E (ontrigguercentro_t026808B8D4C12DE8F05DABEB1C03347996E0B6E0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void movement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movement_Start_mB803991913926D44F9E2D76ECEDCDACE3971335F (movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74);
		s_Il2CppMethodInitialized = true;
	}
	{
		// muerte = false;
		__this->___muerte_29 = (bool)0;
		// myRigidBody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___myRigidBody_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myRigidBody_21), (void*)L_0);
		// myAnimator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___myAnimator_26 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myAnimator_26), (void*)L_1);
		// jumpTimeCounter = jumpTime; //hold to jump
		float L_2 = __this->___jumpTime_17;
		__this->___jumpTimeCounter_18 = L_2;
		// speedMilestoneCount = speedIncreaseMilestone;
		float L_3 = __this->___speedIncreaseMilestone_13;
		__this->___speedMilestoneCount_15 = L_3;
		// playertag.gameObject.tag = "red";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___playertag_7;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_4, NULL);
		NullCheck(L_5);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_5, _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74, NULL);
		// }
		return;
	}
}
// System.Void movement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movement_Update_mFB82A170B00874121F868ADDF49BA689EB71C004 (movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// grounded = Physics2D.OverlapCircle(groundCheck.position, groundCheckRadius, whatIsGround);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___groundCheck_24;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_1, NULL);
		float L_3 = __this->___groundCheckRadius_25;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_4 = __this->___whatIsGround_23;
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_6;
		L_6 = Physics2D_OverlapCircle_mD20DC99402D0E7514265AFF9E0B24041197D7D36(L_2, L_3, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		__this->___grounded_22 = L_7;
		// if (transform.position.x > speedMilestoneCount && speed <= speedlimit)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___x_2;
		float L_11 = __this->___speedMilestoneCount_15;
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_0090;
		}
	}
	{
		float L_12 = __this->___speed_9;
		float L_13 = __this->___speedlimit_16;
		if ((!(((float)L_12) <= ((float)L_13))))
		{
			goto IL_0090;
		}
	}
	{
		// speedMilestoneCount += speedIncreaseMilestone;
		float L_14 = __this->___speedMilestoneCount_15;
		float L_15 = __this->___speedIncreaseMilestone_13;
		__this->___speedMilestoneCount_15 = ((float)il2cpp_codegen_add(L_14, L_15));
		// speedIncreaseMilestone = (speedIncreaseMilestone * speedMultiplier);
		float L_16 = __this->___speedIncreaseMilestone_13;
		float L_17 = __this->___speedMultiplier_12;
		__this->___speedIncreaseMilestone_13 = ((float)il2cpp_codegen_multiply(L_16, L_17));
		// speed = speed * speedMultiplier;
		float L_18 = __this->___speed_9;
		float L_19 = __this->___speedMultiplier_12;
		__this->___speed_9 = ((float)il2cpp_codegen_multiply(L_18, L_19));
	}

IL_0090:
	{
		// myRigidBody.velocity = new Vector2(speed, myRigidBody.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_20 = __this->___myRigidBody_21;
		float L_21 = __this->___speed_9;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_22 = __this->___myRigidBody_21;
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_22, NULL);
		float L_24 = L_23.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_25), L_21, L_24, /*hidden argument*/NULL);
		NullCheck(L_20);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_20, L_25, NULL);
		// speedrester = Random.Range(1.0f, 5.5f);
		float L_26;
		L_26 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((1.0f), (5.5f), NULL);
		__this->___speedrester_10 = L_26;
		// if (speed < 14)
		float L_27 = __this->___speed_9;
		if ((!(((float)L_27) < ((float)(14.0f)))))
		{
			goto IL_012e;
		}
	}
	{
		// Distancia.distanceBetween = 7;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_28 = __this->___Distancia_6;
		NullCheck(L_28);
		L_28->___distanceBetween_6 = (7.0f);
		// Distancia.distancebetweenMin = 6;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_29 = __this->___Distancia_6;
		NullCheck(L_29);
		L_29->___distancebetweenMin_8 = (6.0f);
		// Distancia.distancebetweenMax = 9;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_30 = __this->___Distancia_6;
		NullCheck(L_30);
		L_30->___distancebetweenMax_9 = (9.0f);
		// speedMultiplier = 1.1f;
		__this->___speedMultiplier_12 = (1.10000002f);
		// myRigidBody.gravityScale = 3.1f;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_31 = __this->___myRigidBody_21;
		NullCheck(L_31);
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_31, (3.0999999f), NULL);
		// jumpForce = 18.7f;
		__this->___jumpForce_14 = (18.7000008f);
	}

IL_012e:
	{
		// if (speed >= 14 && speed < 18.5)
		float L_32 = __this->___speed_9;
		if ((!(((float)L_32) >= ((float)(14.0f)))))
		{
			goto IL_01a3;
		}
	}
	{
		float L_33 = __this->___speed_9;
		if ((!(((double)((double)L_33)) < ((double)(18.5)))))
		{
			goto IL_01a3;
		}
	}
	{
		// Distancia.distanceBetween = 7;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_34 = __this->___Distancia_6;
		NullCheck(L_34);
		L_34->___distanceBetween_6 = (7.0f);
		// Distancia.distancebetweenMin = 6;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_35 = __this->___Distancia_6;
		NullCheck(L_35);
		L_35->___distancebetweenMin_8 = (6.0f);
		// Distancia.distancebetweenMax = 9;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_36 = __this->___Distancia_6;
		NullCheck(L_36);
		L_36->___distancebetweenMax_9 = (9.0f);
		// speedMultiplier = 1.15f;
		__this->___speedMultiplier_12 = (1.14999998f);
		// myRigidBody.gravityScale = 3.2f;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_37 = __this->___myRigidBody_21;
		NullCheck(L_37);
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_37, (3.20000005f), NULL);
		// jumpForce = 17.7f;
		__this->___jumpForce_14 = (17.7000008f);
	}

IL_01a3:
	{
		// if (speed >= 18.5 && speed < 22)
		float L_38 = __this->___speed_9;
		if ((!(((double)((double)L_38)) >= ((double)(18.5)))))
		{
			goto IL_0218;
		}
	}
	{
		float L_39 = __this->___speed_9;
		if ((!(((float)L_39) < ((float)(22.0f)))))
		{
			goto IL_0218;
		}
	}
	{
		// Distancia.distanceBetween = 11;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_40 = __this->___Distancia_6;
		NullCheck(L_40);
		L_40->___distanceBetween_6 = (11.0f);
		// Distancia.distancebetweenMin = 10;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_41 = __this->___Distancia_6;
		NullCheck(L_41);
		L_41->___distancebetweenMin_8 = (10.0f);
		// Distancia.distancebetweenMax = 13;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_42 = __this->___Distancia_6;
		NullCheck(L_42);
		L_42->___distancebetweenMax_9 = (13.0f);
		// speedMultiplier = 1.2f;
		__this->___speedMultiplier_12 = (1.20000005f);
		// myRigidBody.gravityScale = 3.3f;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_43 = __this->___myRigidBody_21;
		NullCheck(L_43);
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_43, (3.29999995f), NULL);
		// jumpForce = 16.7f;
		__this->___jumpForce_14 = (16.7000008f);
	}

IL_0218:
	{
		// if (speed >= 22 && speed < 25)
		float L_44 = __this->___speed_9;
		if ((!(((float)L_44) >= ((float)(22.0f)))))
		{
			goto IL_0288;
		}
	}
	{
		float L_45 = __this->___speed_9;
		if ((!(((float)L_45) < ((float)(25.0f)))))
		{
			goto IL_0288;
		}
	}
	{
		// Distancia.distanceBetween = 12;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_46 = __this->___Distancia_6;
		NullCheck(L_46);
		L_46->___distanceBetween_6 = (12.0f);
		// Distancia.distancebetweenMin = 12;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_47 = __this->___Distancia_6;
		NullCheck(L_47);
		L_47->___distancebetweenMin_8 = (12.0f);
		// Distancia.distancebetweenMax = 14;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_48 = __this->___Distancia_6;
		NullCheck(L_48);
		L_48->___distancebetweenMax_9 = (14.0f);
		// speedMultiplier = 1.06f;
		__this->___speedMultiplier_12 = (1.05999994f);
		// jumpForce = 16.4f;
		__this->___jumpForce_14 = (16.3999996f);
		// myRigidBody.gravityScale = 3.5f;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_49 = __this->___myRigidBody_21;
		NullCheck(L_49);
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_49, (3.5f), NULL);
	}

IL_0288:
	{
		// if (speed >= 25 && speed < 28)
		float L_50 = __this->___speed_9;
		if ((!(((float)L_50) >= ((float)(25.0f)))))
		{
			goto IL_02f8;
		}
	}
	{
		float L_51 = __this->___speed_9;
		if ((!(((float)L_51) < ((float)(28.0f)))))
		{
			goto IL_02f8;
		}
	}
	{
		// Distancia.distanceBetween = 12;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_52 = __this->___Distancia_6;
		NullCheck(L_52);
		L_52->___distanceBetween_6 = (12.0f);
		// Distancia.distancebetweenMin = 13;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_53 = __this->___Distancia_6;
		NullCheck(L_53);
		L_53->___distancebetweenMin_8 = (13.0f);
		// Distancia.distancebetweenMax = 15;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_54 = __this->___Distancia_6;
		NullCheck(L_54);
		L_54->___distancebetweenMax_9 = (15.0f);
		// speedMultiplier = 1.03f;
		__this->___speedMultiplier_12 = (1.02999997f);
		// myRigidBody.gravityScale = 3.9f;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_55 = __this->___myRigidBody_21;
		NullCheck(L_55);
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_55, (3.9000001f), NULL);
		// jumpForce = 16.2f;
		__this->___jumpForce_14 = (16.2000008f);
	}

IL_02f8:
	{
		// if (speed >= 28 && speed < 32)
		float L_56 = __this->___speed_9;
		if ((!(((float)L_56) >= ((float)(28.0f)))))
		{
			goto IL_0368;
		}
	}
	{
		float L_57 = __this->___speed_9;
		if ((!(((float)L_57) < ((float)(32.0f)))))
		{
			goto IL_0368;
		}
	}
	{
		// Distancia.distanceBetween = 12;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_58 = __this->___Distancia_6;
		NullCheck(L_58);
		L_58->___distanceBetween_6 = (12.0f);
		// Distancia.distancebetweenMin = 13;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_59 = __this->___Distancia_6;
		NullCheck(L_59);
		L_59->___distancebetweenMin_8 = (13.0f);
		// Distancia.distancebetweenMax = 15;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_60 = __this->___Distancia_6;
		NullCheck(L_60);
		L_60->___distancebetweenMax_9 = (15.0f);
		// speedMultiplier = 1.04f;
		__this->___speedMultiplier_12 = (1.03999996f);
		// myRigidBody.gravityScale = 4.4f;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_61 = __this->___myRigidBody_21;
		NullCheck(L_61);
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_61, (4.4000001f), NULL);
		// jumpForce = 16.0f;
		__this->___jumpForce_14 = (16.0f);
	}

IL_0368:
	{
		// if (speed >= 32)
		float L_62 = __this->___speed_9;
		if ((!(((float)L_62) >= ((float)(32.0f)))))
		{
			goto IL_03d3;
		}
	}
	{
		// speed = speed - speedrester;
		float L_63 = __this->___speed_9;
		float L_64 = __this->___speedrester_10;
		__this->___speed_9 = ((float)il2cpp_codegen_subtract(L_63, L_64));
		// Distancia.distanceBetween = 12.5f;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_65 = __this->___Distancia_6;
		NullCheck(L_65);
		L_65->___distanceBetween_6 = (12.5f);
		// Distancia.distancebetweenMin = 13.5f;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_66 = __this->___Distancia_6;
		NullCheck(L_66);
		L_66->___distancebetweenMin_8 = (13.5f);
		// Distancia.distancebetweenMax = 15.5f;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_67 = __this->___Distancia_6;
		NullCheck(L_67);
		L_67->___distancebetweenMax_9 = (15.5f);
		// myRigidBody.gravityScale = 4.5f;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_68 = __this->___myRigidBody_21;
		NullCheck(L_68);
		Rigidbody2D_set_gravityScale_mAFD1A72661304467D20971BBCAA7E04B418F80FD(L_68, (4.5f), NULL);
		// jumpForce = 15.8f;
		__this->___jumpForce_14 = (15.8000002f);
	}

IL_03d3:
	{
		// if (Input.GetKeyDown(KeyCode.Space) || Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
		bool L_69;
		L_69 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)32), NULL);
		if (L_69)
		{
			goto IL_03f4;
		}
	}
	{
		int32_t L_70;
		L_70 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0446;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_71;
		L_71 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_71;
		int32_t L_72;
		L_72 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_72)
		{
			goto IL_0446;
		}
	}

IL_03f4:
	{
		// if (grounded)
		bool L_73 = __this->___grounded_22;
		if (!L_73)
		{
			goto IL_0446;
		}
	}
	{
		// if (EventSystem.current.IsPointerOverGameObject(Input.touches[0].fingerId))
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_74;
		L_74 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_75;
		L_75 = Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B(NULL);
		NullCheck(L_75);
		int32_t L_76;
		L_76 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD(((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		NullCheck(L_74);
		bool L_77;
		L_77 = EventSystem_IsPointerOverGameObject_m238732B4FDEA343976D798FF04DB34C3221243C2(L_74, L_76, NULL);
		if (!L_77)
		{
			goto IL_0419;
		}
	}
	{
		// return;
		return;
	}

IL_0419:
	{
		// myRigidBody.velocity = new Vector2(myRigidBody.velocity.x, jumpForce); //myRigidBody.velocity.x
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_78 = __this->___myRigidBody_21;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_79 = __this->___myRigidBody_21;
		NullCheck(L_79);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80;
		L_80 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_79, NULL);
		float L_81 = L_80.___x_0;
		float L_82 = __this->___jumpForce_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_83), L_81, L_82, /*hidden argument*/NULL);
		NullCheck(L_78);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_78, L_83, NULL);
		// jumpb = false;
		__this->___jumpb_19 = (bool)0;
	}

IL_0446:
	{
		// if (Input.GetKey(KeyCode.Space) || Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Stationary && !jumpb)
		bool L_84;
		L_84 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)32), NULL);
		if (L_84)
		{
			goto IL_0470;
		}
	}
	{
		int32_t L_85;
		L_85 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_85) <= ((int32_t)0)))
		{
			goto IL_04b5;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_86;
		L_86 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_86;
		int32_t L_87;
		L_87 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_04b5;
		}
	}
	{
		bool L_88 = __this->___jumpb_19;
		if (L_88)
		{
			goto IL_04b5;
		}
	}

IL_0470:
	{
		// if (jumpTimeCounter > 0)
		float L_89 = __this->___jumpTimeCounter_18;
		if ((!(((float)L_89) > ((float)(0.0f)))))
		{
			goto IL_04b5;
		}
	}
	{
		// myRigidBody.velocity = new Vector2(myRigidBody.velocity.x, jumpForce);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_90 = __this->___myRigidBody_21;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_91 = __this->___myRigidBody_21;
		NullCheck(L_91);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92;
		L_92 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_91, NULL);
		float L_93 = L_92.___x_0;
		float L_94 = __this->___jumpForce_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_95;
		memset((&L_95), 0, sizeof(L_95));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_95), L_93, L_94, /*hidden argument*/NULL);
		NullCheck(L_90);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_90, L_95, NULL);
		// jumpTimeCounter -= Time.deltaTime;
		float L_96 = __this->___jumpTimeCounter_18;
		float L_97;
		L_97 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___jumpTimeCounter_18 = ((float)il2cpp_codegen_subtract(L_96, L_97));
	}

IL_04b5:
	{
		// if (Input.GetKeyUp(KeyCode.Space) || Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended)
		bool L_98;
		L_98 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)32), NULL);
		if (L_98)
		{
			goto IL_04d7;
		}
	}
	{
		int32_t L_99;
		L_99 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_99) <= ((int32_t)0)))
		{
			goto IL_04e9;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_100;
		L_100 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_100;
		int32_t L_101;
		L_101 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_101) == ((uint32_t)3))))
		{
			goto IL_04e9;
		}
	}

IL_04d7:
	{
		// jumpTimeCounter = 0;
		__this->___jumpTimeCounter_18 = (0.0f);
		// jumpb = true;
		__this->___jumpb_19 = (bool)1;
	}

IL_04e9:
	{
		// if (grounded)
		bool L_102 = __this->___grounded_22;
		if (!L_102)
		{
			goto IL_04fd;
		}
	}
	{
		// jumpTimeCounter = jumpTime;
		float L_103 = __this->___jumpTime_17;
		__this->___jumpTimeCounter_18 = L_103;
	}

IL_04fd:
	{
		// myAnimator.SetBool("Grounded", grounded);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_104 = __this->___myAnimator_26;
		bool L_105 = __this->___grounded_22;
		NullCheck(L_104);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_104, _stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4, L_105, NULL);
		// }
		return;
	}
}
// System.Void movement::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movement_OnCollisionEnter2D_m3FEFF1A4AD0690CFE5C3CF429934470D55D251E2 (movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37370C58743BF67B2D2E479CB05BF72FED1F6B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FBCB5FBB1AD700F70C943916A998CB280F1F67E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5523A3BB61CC7D54163DEC2EBFE06EF3A90FF96C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65373026CF67EAA552DEA6AC911A60287C84EDDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA60DAC9DE02D4EAA5374387706ABFB1C73570688);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB033FD2F890CA8FC2F620F48B8407DD98B58052F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE73DE573F0F072F9B3B7838A16DBA35C72AFA50);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "killer")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralA60DAC9DE02D4EAA5374387706ABFB1C73570688, NULL);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// speed = 0;
		__this->___speed_9 = (0.0f);
		// deathonground = true;
		__this->___deathonground_5 = (bool)1;
		// theGameManager.RestartGame();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = __this->___theGameManager_27;
		NullCheck(L_4);
		GameManager_RestartGame_m03813C863F1F1ABB9DC30BC371E2F088D7B01F75(L_4, NULL);
		goto IL_01c5;
	}

IL_0039:
	{
		// else if (other.gameObject.tag == "greenkiller" && playertag.gameObject.tag != "green")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_5 = ___other0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_5, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_6, NULL);
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteral5523A3BB61CC7D54163DEC2EBFE06EF3A90FF96C, NULL);
		if (!L_8)
		{
			goto IL_009e;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___playertag_7;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_10, NULL);
		bool L_12;
		L_12 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_11, _stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615, NULL);
		if (!L_12)
		{
			goto IL_009e;
		}
	}
	{
		// theGameManager.RestartGame();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = __this->___theGameManager_27;
		NullCheck(L_13);
		GameManager_RestartGame_m03813C863F1F1ABB9DC30BC371E2F088D7B01F75(L_13, NULL);
		// speedtracker = speed;
		float L_14 = __this->___speed_9;
		__this->___speedtracker_11 = L_14;
		// speed = 0;
		__this->___speed_9 = (0.0f);
		// tagger = "green";
		__this->___tagger_4 = _stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tagger_4), (void*)_stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615);
		goto IL_01c5;
	}

IL_009e:
	{
		// else if (other.gameObject.tag == "redkiller" && playertag.gameObject.tag != "red")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_15 = ___other0;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_15, NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_16, NULL);
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral65373026CF67EAA552DEA6AC911A60287C84EDDF, NULL);
		if (!L_18)
		{
			goto IL_0103;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___playertag_7;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_19, NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_20, NULL);
		bool L_22;
		L_22 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_21, _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74, NULL);
		if (!L_22)
		{
			goto IL_0103;
		}
	}
	{
		// theGameManager.RestartGame();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_23 = __this->___theGameManager_27;
		NullCheck(L_23);
		GameManager_RestartGame_m03813C863F1F1ABB9DC30BC371E2F088D7B01F75(L_23, NULL);
		// speedtracker = speed;
		float L_24 = __this->___speed_9;
		__this->___speedtracker_11 = L_24;
		// speed = 0;
		__this->___speed_9 = (0.0f);
		// tagger = "red";
		__this->___tagger_4 = _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tagger_4), (void*)_stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74);
		goto IL_01c5;
	}

IL_0103:
	{
		// else if (other.gameObject.tag == "yellowkiller" && playertag.gameObject.tag != "yellow")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_25 = ___other0;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_25, NULL);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_26, NULL);
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral37370C58743BF67B2D2E479CB05BF72FED1F6B50, NULL);
		if (!L_28)
		{
			goto IL_0165;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___playertag_7;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_29, NULL);
		NullCheck(L_30);
		String_t* L_31;
		L_31 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_30, NULL);
		bool L_32;
		L_32 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_31, _stringLiteralB033FD2F890CA8FC2F620F48B8407DD98B58052F, NULL);
		if (!L_32)
		{
			goto IL_0165;
		}
	}
	{
		// theGameManager.RestartGame();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_33 = __this->___theGameManager_27;
		NullCheck(L_33);
		GameManager_RestartGame_m03813C863F1F1ABB9DC30BC371E2F088D7B01F75(L_33, NULL);
		// speedtracker = speed;
		float L_34 = __this->___speed_9;
		__this->___speedtracker_11 = L_34;
		// speed = 0;
		__this->___speed_9 = (0.0f);
		// tagger = "yellow";
		__this->___tagger_4 = _stringLiteralB033FD2F890CA8FC2F620F48B8407DD98B58052F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tagger_4), (void*)_stringLiteralB033FD2F890CA8FC2F620F48B8407DD98B58052F);
		goto IL_01c5;
	}

IL_0165:
	{
		// else if (other.gameObject.tag == "bluekiller" && playertag.gameObject.tag != "blue")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_35 = ___other0;
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_35, NULL);
		NullCheck(L_36);
		String_t* L_37;
		L_37 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_36, NULL);
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteralEE73DE573F0F072F9B3B7838A16DBA35C72AFA50, NULL);
		if (!L_38)
		{
			goto IL_01c5;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___playertag_7;
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_39, NULL);
		NullCheck(L_40);
		String_t* L_41;
		L_41 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_40, NULL);
		bool L_42;
		L_42 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_41, _stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008, NULL);
		if (!L_42)
		{
			goto IL_01c5;
		}
	}
	{
		// theGameManager.RestartGame();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_43 = __this->___theGameManager_27;
		NullCheck(L_43);
		GameManager_RestartGame_m03813C863F1F1ABB9DC30BC371E2F088D7B01F75(L_43, NULL);
		// speedtracker = speed;
		float L_44 = __this->___speed_9;
		__this->___speedtracker_11 = L_44;
		// speed = 0;
		__this->___speed_9 = (0.0f);
		// tagger = "blue";
		__this->___tagger_4 = _stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tagger_4), (void*)_stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008);
	}

IL_01c5:
	{
		// myAnimator.SetBool("Muerte", muerte);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_45 = __this->___myAnimator_26;
		bool L_46 = __this->___muerte_29;
		NullCheck(L_45);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_45, _stringLiteral3FBCB5FBB1AD700F70C943916A998CB280F1F67E, L_46, NULL);
		// }
		return;
	}
}
// System.Void movement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movement__ctor_m9180C30E0535C7178264BF34B10988F59EA86217 (movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void movimientotutorial::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movimientotutorial_Start_mA4FFA60BDC779E9060CC70C46456F5DD84DB49A1 (movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64CA105C6C2B750114C77ED815497653992266C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// muerte = false;
		__this->___muerte_24 = (bool)0;
		// myRigidBody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___myRigidBody_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myRigidBody_16), (void*)L_0);
		// myAnimator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___myAnimator_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myAnimator_21), (void*)L_1);
		// jumpTimeCounter = jumpTime; //hold to jump
		float L_2 = __this->___jumpTime_12;
		__this->___jumpTimeCounter_13 = L_2;
		// speedMilestoneCount = speedIncreaseMilestone;
		float L_3 = __this->___speedIncreaseMilestone_8;
		__this->___speedMilestoneCount_10 = L_3;
		// playertag.gameObject.tag = "ola";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___playertag_5;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_4, NULL);
		NullCheck(L_5);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_5, _stringLiteral64CA105C6C2B750114C77ED815497653992266C4, NULL);
		// }
		return;
	}
}
// System.Void movimientotutorial::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movimientotutorial_Update_mD9F4BB73213F74172831D402FAC3E6EB0BC2B53C (movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// grounded = Physics2D.OverlapCircle(groundCheck.position, groundCheckRadius, whatIsGround);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___groundCheck_19;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_1, NULL);
		float L_3 = __this->___groundCheckRadius_20;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_4 = __this->___whatIsGround_18;
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_6;
		L_6 = Physics2D_OverlapCircle_mD20DC99402D0E7514265AFF9E0B24041197D7D36(L_2, L_3, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		__this->___grounded_17 = L_7;
		// if (transform.position.x > speedMilestoneCount && speed <= speedlimit)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___x_2;
		float L_11 = __this->___speedMilestoneCount_10;
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_0090;
		}
	}
	{
		float L_12 = __this->___speed_6;
		float L_13 = __this->___speedlimit_11;
		if ((!(((float)L_12) <= ((float)L_13))))
		{
			goto IL_0090;
		}
	}
	{
		// speedMilestoneCount += speedIncreaseMilestone;
		float L_14 = __this->___speedMilestoneCount_10;
		float L_15 = __this->___speedIncreaseMilestone_8;
		__this->___speedMilestoneCount_10 = ((float)il2cpp_codegen_add(L_14, L_15));
		// speedIncreaseMilestone = (speedIncreaseMilestone * speedMultiplier);
		float L_16 = __this->___speedIncreaseMilestone_8;
		float L_17 = __this->___speedMultiplier_7;
		__this->___speedIncreaseMilestone_8 = ((float)il2cpp_codegen_multiply(L_16, L_17));
		// speed = speed * speedMultiplier;
		float L_18 = __this->___speed_6;
		float L_19 = __this->___speedMultiplier_7;
		__this->___speed_6 = ((float)il2cpp_codegen_multiply(L_18, L_19));
	}

IL_0090:
	{
		// myRigidBody.velocity = new Vector2(speed, myRigidBody.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_20 = __this->___myRigidBody_16;
		float L_21 = __this->___speed_6;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_22 = __this->___myRigidBody_16;
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_22, NULL);
		float L_24 = L_23.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_25), L_21, L_24, /*hidden argument*/NULL);
		NullCheck(L_20);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_20, L_25, NULL);
		// if (Input.GetKeyDown(KeyCode.Space) || Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
		bool L_26;
		L_26 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)32), NULL);
		if (L_26)
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_27;
		L_27 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_0129;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_28;
		L_28 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_28;
		int32_t L_29;
		L_29 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_29)
		{
			goto IL_0129;
		}
	}

IL_00d7:
	{
		// if (EventSystem.current.IsPointerOverGameObject(Input.touches[0].fingerId))
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_30;
		L_30 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_31;
		L_31 = Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B(NULL);
		NullCheck(L_31);
		int32_t L_32;
		L_32 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD(((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		NullCheck(L_30);
		bool L_33;
		L_33 = EventSystem_IsPointerOverGameObject_m238732B4FDEA343976D798FF04DB34C3221243C2(L_30, L_32, NULL);
		if (!L_33)
		{
			goto IL_00f4;
		}
	}
	{
		// return;
		return;
	}

IL_00f4:
	{
		// if (grounded)
		bool L_34 = __this->___grounded_17;
		if (!L_34)
		{
			goto IL_0129;
		}
	}
	{
		// myRigidBody.velocity = new Vector2(myRigidBody.velocity.x, jumpForce); //myRigidBody.velocity.x
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_35 = __this->___myRigidBody_16;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_36 = __this->___myRigidBody_16;
		NullCheck(L_36);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		L_37 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_36, NULL);
		float L_38 = L_37.___x_0;
		float L_39 = __this->___jumpForce_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_40), L_38, L_39, /*hidden argument*/NULL);
		NullCheck(L_35);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_35, L_40, NULL);
		// jumpb = false;
		__this->___jumpb_14 = (bool)0;
	}

IL_0129:
	{
		// if (Input.GetKey(KeyCode.Space) || Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Stationary && !jumpb)
		bool L_41;
		L_41 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)32), NULL);
		if (L_41)
		{
			goto IL_0153;
		}
	}
	{
		int32_t L_42;
		L_42 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			goto IL_0198;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_43;
		L_43 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_43;
		int32_t L_44;
		L_44 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_44) == ((uint32_t)2))))
		{
			goto IL_0198;
		}
	}
	{
		bool L_45 = __this->___jumpb_14;
		if (L_45)
		{
			goto IL_0198;
		}
	}

IL_0153:
	{
		// if (jumpTimeCounter > 0)
		float L_46 = __this->___jumpTimeCounter_13;
		if ((!(((float)L_46) > ((float)(0.0f)))))
		{
			goto IL_0198;
		}
	}
	{
		// myRigidBody.velocity = new Vector2(myRigidBody.velocity.x, jumpForce);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_47 = __this->___myRigidBody_16;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_48 = __this->___myRigidBody_16;
		NullCheck(L_48);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49;
		L_49 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_48, NULL);
		float L_50 = L_49.___x_0;
		float L_51 = __this->___jumpForce_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_52), L_50, L_51, /*hidden argument*/NULL);
		NullCheck(L_47);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_47, L_52, NULL);
		// jumpTimeCounter -= Time.deltaTime;
		float L_53 = __this->___jumpTimeCounter_13;
		float L_54;
		L_54 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___jumpTimeCounter_13 = ((float)il2cpp_codegen_subtract(L_53, L_54));
	}

IL_0198:
	{
		// if (Input.GetKeyUp(KeyCode.Space) || Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended)
		bool L_55;
		L_55 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)32), NULL);
		if (L_55)
		{
			goto IL_01ba;
		}
	}
	{
		int32_t L_56;
		L_56 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_01cc;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_57;
		L_57 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_57;
		int32_t L_58;
		L_58 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_58) == ((uint32_t)3))))
		{
			goto IL_01cc;
		}
	}

IL_01ba:
	{
		// jumpTimeCounter = 0;
		__this->___jumpTimeCounter_13 = (0.0f);
		// jumpb = true;
		__this->___jumpb_14 = (bool)1;
	}

IL_01cc:
	{
		// if (grounded)
		bool L_59 = __this->___grounded_17;
		if (!L_59)
		{
			goto IL_01e0;
		}
	}
	{
		// jumpTimeCounter = jumpTime;
		float L_60 = __this->___jumpTime_12;
		__this->___jumpTimeCounter_13 = L_60;
	}

IL_01e0:
	{
		// myAnimator.SetBool("Grounded", grounded);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_61 = __this->___myAnimator_21;
		bool L_62 = __this->___grounded_17;
		NullCheck(L_61);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_61, _stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4, L_62, NULL);
		// }
		return;
	}
}
// System.Void movimientotutorial::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movimientotutorial_OnCollisionEnter2D_m9BFDE8E4FFD1C6BA7ACA221A7DB87B4CE80E8DCB (movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37370C58743BF67B2D2E479CB05BF72FED1F6B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FBCB5FBB1AD700F70C943916A998CB280F1F67E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5523A3BB61CC7D54163DEC2EBFE06EF3A90FF96C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65373026CF67EAA552DEA6AC911A60287C84EDDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA60DAC9DE02D4EAA5374387706ABFB1C73570688);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB033FD2F890CA8FC2F620F48B8407DD98B58052F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE73DE573F0F072F9B3B7838A16DBA35C72AFA50);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "killer")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralA60DAC9DE02D4EAA5374387706ABFB1C73570688, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// theGameManager2.ResetTutorial();
		GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* L_4 = __this->___theGameManager2_22;
		NullCheck(L_4);
		GameManager2_ResetTutorial_mECD9C06296F8B618BDCDA88651E2CAE91F7F39FC(L_4, NULL);
		goto IL_0128;
	}

IL_0027:
	{
		// else if (other.gameObject.tag == "greenkiller" && playertag.gameObject.tag != "green")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_5 = ___other0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_5, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_6, NULL);
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteral5523A3BB61CC7D54163DEC2EBFE06EF3A90FF96C, NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___playertag_5;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_10, NULL);
		bool L_12;
		L_12 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_11, _stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// theGameManager2.ResetTutorial();
		GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* L_13 = __this->___theGameManager2_22;
		NullCheck(L_13);
		GameManager2_ResetTutorial_mECD9C06296F8B618BDCDA88651E2CAE91F7F39FC(L_13, NULL);
		goto IL_0128;
	}

IL_006a:
	{
		// else if (other.gameObject.tag == "redkiller" && playertag.gameObject.tag != "red")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_14 = ___other0;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_14, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_15, NULL);
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral65373026CF67EAA552DEA6AC911A60287C84EDDF, NULL);
		if (!L_17)
		{
			goto IL_00aa;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___playertag_5;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_19, NULL);
		bool L_21;
		L_21 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_20, _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74, NULL);
		if (!L_21)
		{
			goto IL_00aa;
		}
	}
	{
		// theGameManager2.ResetTutorial();
		GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* L_22 = __this->___theGameManager2_22;
		NullCheck(L_22);
		GameManager2_ResetTutorial_mECD9C06296F8B618BDCDA88651E2CAE91F7F39FC(L_22, NULL);
		goto IL_0128;
	}

IL_00aa:
	{
		// else if (other.gameObject.tag == "yellowkiller" && playertag.gameObject.tag != "yellow")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_23 = ___other0;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_23, NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_24, NULL);
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral37370C58743BF67B2D2E479CB05BF72FED1F6B50, NULL);
		if (!L_26)
		{
			goto IL_00ea;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___playertag_5;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_27, NULL);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_28, NULL);
		bool L_30;
		L_30 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_29, _stringLiteralB033FD2F890CA8FC2F620F48B8407DD98B58052F, NULL);
		if (!L_30)
		{
			goto IL_00ea;
		}
	}
	{
		// theGameManager2.ResetTutorial();
		GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* L_31 = __this->___theGameManager2_22;
		NullCheck(L_31);
		GameManager2_ResetTutorial_mECD9C06296F8B618BDCDA88651E2CAE91F7F39FC(L_31, NULL);
		goto IL_0128;
	}

IL_00ea:
	{
		// else if (other.gameObject.tag == "bluekiller" && playertag.gameObject.tag != "blue")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_32 = ___other0;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_32, NULL);
		NullCheck(L_33);
		String_t* L_34;
		L_34 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_33, NULL);
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralEE73DE573F0F072F9B3B7838A16DBA35C72AFA50, NULL);
		if (!L_35)
		{
			goto IL_0128;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___playertag_5;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_36, NULL);
		NullCheck(L_37);
		String_t* L_38;
		L_38 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_37, NULL);
		bool L_39;
		L_39 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_38, _stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008, NULL);
		if (!L_39)
		{
			goto IL_0128;
		}
	}
	{
		// theGameManager2.ResetTutorial();
		GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* L_40 = __this->___theGameManager2_22;
		NullCheck(L_40);
		GameManager2_ResetTutorial_mECD9C06296F8B618BDCDA88651E2CAE91F7F39FC(L_40, NULL);
	}

IL_0128:
	{
		// myAnimator.SetBool("Muerte", muerte);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_41 = __this->___myAnimator_21;
		bool L_42 = __this->___muerte_24;
		NullCheck(L_41);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_41, _stringLiteral3FBCB5FBB1AD700F70C943916A998CB280F1F67E, L_42, NULL);
		// }
		return;
	}
}
// System.Void movimientotutorial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movimientotutorial__ctor_mC73D709397CEC747780E25405A878A066AFAC469 (movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void tag::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tag_Start_mF29C35B90CD88DE619019E20B30931CCFD4EF1E4 (tag_tFAFCCC8B5895B098BC21FFB41F80C17409AECDEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playertag.gameObject.tag = "red";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___playertag_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		NullCheck(L_1);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_1, _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74, NULL);
		// color = 0;
		__this->___color_5 = 0;
		// myanimator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2;
		L_2 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___myanimator_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myanimator_6), (void*)L_2);
		// Vibration.Init();
		Vibration_Init_m42350289879AD110521736CE3CB27085B3A08B72(NULL);
		// }
		return;
	}
}
// System.Void tag::Red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tag_Red_mD3488711BDDBF0B625EB96733575067C75E98189 (tag_tFAFCCC8B5895B098BC21FFB41F80C17409AECDEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (vibrateactive.vibrateBoolActivate == true)
		VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE* L_0 = __this->___vibrateactive_7;
		NullCheck(L_0);
		bool L_1 = L_0->___vibrateBoolActivate_6;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// Vibration.VibratePop();
		Vibration_VibratePop_mB640A3E4B33793A25830715702DC2DA32BBACB15(NULL);
	}

IL_0012:
	{
		// RedSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___RedSound_8;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// playertag.gameObject.tag = "red";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___playertag_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_3, NULL);
		NullCheck(L_4);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_4, _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74, NULL);
		// color = 0;
		__this->___color_5 = 0;
		// myanimator.SetInteger("color", color);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___myanimator_6;
		int32_t L_6 = __this->___color_5;
		NullCheck(L_5);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_5, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, L_6, NULL);
		// }
		return;
	}
}
// System.Void tag::Blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tag_Blue_m285659BB3314CA50E494E973EAA9B734EBADE7E1 (tag_tFAFCCC8B5895B098BC21FFB41F80C17409AECDEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (vibrateactive.vibrateBoolActivate == true)
		VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE* L_0 = __this->___vibrateactive_7;
		NullCheck(L_0);
		bool L_1 = L_0->___vibrateBoolActivate_6;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// Vibration.VibratePop();
		Vibration_VibratePop_mB640A3E4B33793A25830715702DC2DA32BBACB15(NULL);
	}

IL_0012:
	{
		// BlueSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___BlueSound_10;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// playertag.gameObject.tag = "blue";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___playertag_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_3, NULL);
		NullCheck(L_4);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_4, _stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008, NULL);
		// color = 1;
		__this->___color_5 = 1;
		// myanimator.SetInteger("color", color);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___myanimator_6;
		int32_t L_6 = __this->___color_5;
		NullCheck(L_5);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_5, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, L_6, NULL);
		// }
		return;
	}
}
// System.Void tag::Green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tag_Green_m8BF8C9F4ACAF2908F0D5D20B3026DDD1BEEE0992 (tag_tFAFCCC8B5895B098BC21FFB41F80C17409AECDEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (vibrateactive.vibrateBoolActivate == true)
		VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE* L_0 = __this->___vibrateactive_7;
		NullCheck(L_0);
		bool L_1 = L_0->___vibrateBoolActivate_6;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// Vibration.VibratePop();
		Vibration_VibratePop_mB640A3E4B33793A25830715702DC2DA32BBACB15(NULL);
	}

IL_0012:
	{
		// GreenSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___GreenSound_9;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// playertag.gameObject.tag = "green";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___playertag_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_3, NULL);
		NullCheck(L_4);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_4, _stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615, NULL);
		// color = 2;
		__this->___color_5 = 2;
		// myanimator.SetInteger("color", color);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___myanimator_6;
		int32_t L_6 = __this->___color_5;
		NullCheck(L_5);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_5, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, L_6, NULL);
		// }
		return;
	}
}
// System.Void tag::Yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tag_Yellow_m06064E65186A40C108A3F8CAB913BE21E9BEDE80 (tag_tFAFCCC8B5895B098BC21FFB41F80C17409AECDEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB033FD2F890CA8FC2F620F48B8407DD98B58052F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (vibrateactive.vibrateBoolActivate == true)
		VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE* L_0 = __this->___vibrateactive_7;
		NullCheck(L_0);
		bool L_1 = L_0->___vibrateBoolActivate_6;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// Vibration.VibratePop();
		Vibration_VibratePop_mB640A3E4B33793A25830715702DC2DA32BBACB15(NULL);
	}

IL_0012:
	{
		// YellowSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___YellowSound_11;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// playertag.gameObject.tag = "yellow";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___playertag_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_3, NULL);
		NullCheck(L_4);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_4, _stringLiteralB033FD2F890CA8FC2F620F48B8407DD98B58052F, NULL);
		// color = 3;
		__this->___color_5 = 3;
		// myanimator.SetInteger("color", color);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___myanimator_6;
		int32_t L_6 = __this->___color_5;
		NullCheck(L_5);
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_5, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, L_6, NULL);
		// }
		return;
	}
}
// System.Void tag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tag__ctor_m18E43C6A756887045A618A04380114D6FD807D8F (tag_tFAFCCC8B5895B098BC21FFB41F80C17409AECDEF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// platformStartPoint = platformGenerator.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___platformGenerator_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___platformStartPoint_6 = L_1;
		// playerStartPoint = thePlayer.transform.position;
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_2 = __this->___thePlayer_7;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___playerStartPoint_8 = L_4;
		// thePlayer.deathonground = false;
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_5 = __this->___thePlayer_7;
		NullCheck(L_5);
		L_5->___deathonground_5 = (bool)0;
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameManager::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RestartGame_m03813C863F1F1ABB9DC30BC371E2F088D7B01F75 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thePlayer.muerte = true;
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_0 = __this->___thePlayer_7;
		NullCheck(L_0);
		L_0->___muerte_29 = (bool)1;
		// StartCoroutine(WaitForIt_Death());
		RuntimeObject* L_1;
		L_1 = GameManager_WaitForIt_Death_m41EEEBBF284C9BD20F002E2E05A2B056EF4D79E8(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// Buttons.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___Buttons_11;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// Pause.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___Pause_12;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// score = PlayerPrefs.GetFloat("HighScore");
		float L_7;
		L_7 = PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, NULL);
		__this->___score_15 = L_7;
		// scoreint = (int) score;
		float L_8 = __this->___score_15;
		__this->___scoreint_16 = il2cpp_codegen_cast_double_to_int<int32_t>(L_8);
		// oofSauce.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___oofSauce_14;
		NullCheck(L_9);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_9, NULL);
		// }
		return;
	}
}
// System.Void GameManager::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResumeGame_m4E9452E3FE77FD421C8178B1BFE541BA22FAC993 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// thePlayer.muerte = false;
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_0 = __this->___thePlayer_7;
		NullCheck(L_0);
		L_0->___muerte_29 = (bool)0;
		// deathscreen.gameObject.SetActive(false);
		DeathMenu_tD45CB17A067FC8D071D872F8246C724E850C9DDE* L_1 = __this->___deathscreen_10;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// Buttons.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___Buttons_11;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// Pause.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___Pause_12;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// thePlayer.gameObject.SetActive(true);
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_7 = __this->___thePlayer_7;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// deathscreen.resumee.gameObject.SetActive(false);
		DeathMenu_tD45CB17A067FC8D071D872F8246C724E850C9DDE* L_9 = __this->___deathscreen_10;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___resumee_9;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_10, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// deathscreen.restart.gameObject.SetActive(false);
		DeathMenu_tD45CB17A067FC8D071D872F8246C724E850C9DDE* L_12 = __this->___deathscreen_10;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___restart_8;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_13, NULL);
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// deathscreen.restart2.gameObject.SetActive(true);
		DeathMenu_tD45CB17A067FC8D071D872F8246C724E850C9DDE* L_15 = __this->___deathscreen_10;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15->___restart2_10;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_16, NULL);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// thePlayer.speed = thePlayer.speedtracker-(thePlayer.speedtracker*.15f);
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_18 = __this->___thePlayer_7;
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_19 = __this->___thePlayer_7;
		NullCheck(L_19);
		float L_20 = L_19->___speedtracker_11;
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_21 = __this->___thePlayer_7;
		NullCheck(L_21);
		float L_22 = L_21->___speedtracker_11;
		NullCheck(L_18);
		L_18->___speed_9 = ((float)il2cpp_codegen_subtract(L_20, ((float)il2cpp_codegen_multiply(L_22, (0.150000006f)))));
		// thePlayer.tag = thePlayer.tagger;
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_23 = __this->___thePlayer_7;
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_24 = __this->___thePlayer_7;
		NullCheck(L_24);
		String_t* L_25 = L_24->___tagger_4;
		NullCheck(L_23);
		Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(L_23, L_25, NULL);
		// deathscreen.yess = false;
		DeathMenu_tD45CB17A067FC8D071D872F8246C724E850C9DDE* L_26 = __this->___deathscreen_10;
		NullCheck(L_26);
		L_26->___yess_11 = (bool)0;
		// StartCoroutine(WaitForIt_Death3());
		RuntimeObject* L_27;
		L_27 = GameManager_WaitForIt_Death3_m75EEA8E8405BE894542299BE1F8F683B2F1FDC31(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_28;
		L_28 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_27, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Reset_m7584A67E642737B6C76C139B05D75584D2975106 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisPlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79_m4BD02D74E6601C0B88E9FE2DB9B9A966EE3FCB09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// thePlayer.muerte = false;
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_0 = __this->___thePlayer_7;
		NullCheck(L_0);
		L_0->___muerte_29 = (bool)0;
		// playertag.gameObject.tag = "red";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___playertag_13;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_1, NULL);
		NullCheck(L_2);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_2, _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74, NULL);
		// deathscreen.gameObject.SetActive(false);
		DeathMenu_tD45CB17A067FC8D071D872F8246C724E850C9DDE* L_3 = __this->___deathscreen_10;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// Buttons.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___Buttons_11;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// Pause.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Pause_12;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// platformList = FindObjectsOfType<PlatformDestroyer>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PlatformDestroyerU5BU5D_t75FA24EA077178BE339025AD2198D4A347207DCC* L_9;
		L_9 = Object_FindObjectsOfType_TisPlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79_m4BD02D74E6601C0B88E9FE2DB9B9A966EE3FCB09(Object_FindObjectsOfType_TisPlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79_m4BD02D74E6601C0B88E9FE2DB9B9A966EE3FCB09_RuntimeMethod_var);
		__this->___platformList_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___platformList_9), (void*)L_9);
		// thePlayer.speed = 10.26316f;
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_10 = __this->___thePlayer_7;
		NullCheck(L_10);
		L_10->___speed_9 = (10.2631598f);
		// thePlayer.speedIncreaseMilestone = 100;
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_11 = __this->___thePlayer_7;
		NullCheck(L_11);
		L_11->___speedIncreaseMilestone_13 = (100.0f);
		// thePlayer.speedMilestoneCount = 100;
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_12 = __this->___thePlayer_7;
		NullCheck(L_12);
		L_12->___speedMilestoneCount_15 = (100.0f);
		// Distancia2.distanceBetween = 7;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_13 = __this->___Distancia2_4;
		NullCheck(L_13);
		L_13->___distanceBetween_6 = (7.0f);
		// Distancia2.distancebetweenMin = 6;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_14 = __this->___Distancia2_4;
		NullCheck(L_14);
		L_14->___distancebetweenMin_8 = (6.0f);
		// Distancia2.distancebetweenMax = 9;
		PlatformGenerator_t154C90DE8650F3D5170E1774C8F0C8E17889145B* L_15 = __this->___Distancia2_4;
		NullCheck(L_15);
		L_15->___distancebetweenMax_9 = (9.0f);
		// thePlayer.speedMultiplier = 1.1f;
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_16 = __this->___thePlayer_7;
		NullCheck(L_16);
		L_16->___speedMultiplier_12 = (1.10000002f);
		// thePlayer.jumpForce = 17f;
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_17 = __this->___thePlayer_7;
		NullCheck(L_17);
		L_17->___jumpForce_14 = (17.0f);
		// for (int i = 0; i < platformList.Length; i++)
		V_0 = 0;
		goto IL_00fa;
	}

IL_00e3:
	{
		// platformList[i].gameObject.SetActive(false);
		PlatformDestroyerU5BU5D_t75FA24EA077178BE339025AD2198D4A347207DCC* L_18 = __this->___platformList_9;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		PlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
		// for (int i = 0; i < platformList.Length; i++)
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00fa:
	{
		// for (int i = 0; i < platformList.Length; i++)
		int32_t L_24 = V_0;
		PlatformDestroyerU5BU5D_t75FA24EA077178BE339025AD2198D4A347207DCC* L_25 = __this->___platformList_9;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_00e3;
		}
	}
	{
		// if (thePlayer.deathonground == true)
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_26 = __this->___thePlayer_7;
		NullCheck(L_26);
		bool L_27 = L_26->___deathonground_5;
		if (!L_27)
		{
			goto IL_011e;
		}
	}
	{
		// thePlayer.deathonground = false;
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_28 = __this->___thePlayer_7;
		NullCheck(L_28);
		L_28->___deathonground_5 = (bool)0;
	}

IL_011e:
	{
		// thePlayer.transform.position = playerStartPoint;
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_29 = __this->___thePlayer_7;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = __this->___playerStartPoint_8;
		NullCheck(L_30);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_30, L_31, NULL);
		// platformGenerator.position = platformStartPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___platformGenerator_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = __this->___platformStartPoint_6;
		NullCheck(L_32);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_32, L_33, NULL);
		// thePlayer.gameObject.SetActive(true);
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_34 = __this->___thePlayer_7;
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_34, NULL);
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::WaitForIt_Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_WaitForIt_Death_m41EEEBBF284C9BD20F002E2E05A2B056EF4D79E8 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForIt_DeathU3Ed__18_t117055C3F242017E788891B9D59FC0554FC7DA0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForIt_DeathU3Ed__18_t117055C3F242017E788891B9D59FC0554FC7DA0F* L_0 = (U3CWaitForIt_DeathU3Ed__18_t117055C3F242017E788891B9D59FC0554FC7DA0F*)il2cpp_codegen_object_new(U3CWaitForIt_DeathU3Ed__18_t117055C3F242017E788891B9D59FC0554FC7DA0F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitForIt_DeathU3Ed__18__ctor_m946D81A6964E8A185A807AC187FDA3A51218998E(L_0, 0, NULL);
		U3CWaitForIt_DeathU3Ed__18_t117055C3F242017E788891B9D59FC0554FC7DA0F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameManager::WaitForIt_Death3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_WaitForIt_Death3_m75EEA8E8405BE894542299BE1F8F683B2F1FDC31 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForIt_Death3U3Ed__19_t7A0450A6F25B0D9A17BD325CB911A82AE7C9EF4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForIt_Death3U3Ed__19_t7A0450A6F25B0D9A17BD325CB911A82AE7C9EF4E* L_0 = (U3CWaitForIt_Death3U3Ed__19_t7A0450A6F25B0D9A17BD325CB911A82AE7C9EF4E*)il2cpp_codegen_object_new(U3CWaitForIt_Death3U3Ed__19_t7A0450A6F25B0D9A17BD325CB911A82AE7C9EF4E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitForIt_Death3U3Ed__19__ctor_m0A9D29627DA9DC3D252A893C2C139E6906B18A3B(L_0, 0, NULL);
		U3CWaitForIt_Death3U3Ed__19_t7A0450A6F25B0D9A17BD325CB911A82AE7C9EF4E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameManager/<WaitForIt_Death>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForIt_DeathU3Ed__18__ctor_m946D81A6964E8A185A807AC187FDA3A51218998E (U3CWaitForIt_DeathU3Ed__18_t117055C3F242017E788891B9D59FC0554FC7DA0F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<WaitForIt_Death>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForIt_DeathU3Ed__18_System_IDisposable_Dispose_m5B6B49BDB38402F150543C31AD866236B0BEFA45 (U3CWaitForIt_DeathU3Ed__18_t117055C3F242017E788891B9D59FC0554FC7DA0F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<WaitForIt_Death>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForIt_DeathU3Ed__18_MoveNext_m3D5722D1A4C65B555CA8D7EB8ACDF2245A50A8A6 (U3CWaitForIt_DeathU3Ed__18_t117055C3F242017E788891B9D59FC0554FC7DA0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// thePlayer.gameObject.SetActive(false);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = V_1;
		NullCheck(L_5);
		movement_t4C0DE3BA55654C00F6167BA204BEB12F96FB839A* L_6 = L_5->___thePlayer_7;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// deathscreen.gameObject.SetActive(true);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = V_1;
		NullCheck(L_8);
		DeathMenu_tD45CB17A067FC8D071D872F8246C724E850C9DDE* L_9 = L_8->___deathscreen_10;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// deathscreen.beetlesauce.Play();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_11 = V_1;
		NullCheck(L_11);
		DeathMenu_tD45CB17A067FC8D071D872F8246C724E850C9DDE* L_12 = L_11->___deathscreen_10;
		NullCheck(L_12);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13 = L_12->___beetlesauce_4;
		NullCheck(L_13);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_13, NULL);
		// deathscreen.beetlesauce.loop = false;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_14 = V_1;
		NullCheck(L_14);
		DeathMenu_tD45CB17A067FC8D071D872F8246C724E850C9DDE* L_15 = L_14->___deathscreen_10;
		NullCheck(L_15);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = L_15->___beetlesauce_4;
		NullCheck(L_16);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_16, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<WaitForIt_Death>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForIt_DeathU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7CFDC36EC724F476ED049DE87BFCB13F6B9914E1 (U3CWaitForIt_DeathU3Ed__18_t117055C3F242017E788891B9D59FC0554FC7DA0F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<WaitForIt_Death>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForIt_DeathU3Ed__18_System_Collections_IEnumerator_Reset_m6D6813F22FB54BC33DE77FE212A071EA437E3935 (U3CWaitForIt_DeathU3Ed__18_t117055C3F242017E788891B9D59FC0554FC7DA0F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForIt_DeathU3Ed__18_System_Collections_IEnumerator_Reset_m6D6813F22FB54BC33DE77FE212A071EA437E3935_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<WaitForIt_Death>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForIt_DeathU3Ed__18_System_Collections_IEnumerator_get_Current_mD8B28AB89E1EA35D3019831D2E0765301757D90B (U3CWaitForIt_DeathU3Ed__18_t117055C3F242017E788891B9D59FC0554FC7DA0F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void GameManager/<WaitForIt_Death3>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForIt_Death3U3Ed__19__ctor_m0A9D29627DA9DC3D252A893C2C139E6906B18A3B (U3CWaitForIt_Death3U3Ed__19_t7A0450A6F25B0D9A17BD325CB911A82AE7C9EF4E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<WaitForIt_Death3>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForIt_Death3U3Ed__19_System_IDisposable_Dispose_m4D5868A9E77F9753A65C12ACC89C757C2D8E6BAE (U3CWaitForIt_Death3U3Ed__19_t7A0450A6F25B0D9A17BD325CB911A82AE7C9EF4E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<WaitForIt_Death3>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForIt_Death3U3Ed__19_MoveNext_m0E12C484455D23A7092896146C038F8DEAA788DE (U3CWaitForIt_Death3U3Ed__19_t7A0450A6F25B0D9A17BD325CB911A82AE7C9EF4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(35);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (35.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// deathscreen.restart.gameObject.SetActive(true);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = V_1;
		NullCheck(L_5);
		DeathMenu_tD45CB17A067FC8D071D872F8246C724E850C9DDE* L_6 = L_5->___deathscreen_10;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___restart_8;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<WaitForIt_Death3>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForIt_Death3U3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC386790552CE1E671478C6DF5161E83874377075 (U3CWaitForIt_Death3U3Ed__19_t7A0450A6F25B0D9A17BD325CB911A82AE7C9EF4E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<WaitForIt_Death3>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForIt_Death3U3Ed__19_System_Collections_IEnumerator_Reset_mA2106A0EB57061DCCB7496DCFAE26E1192799E21 (U3CWaitForIt_Death3U3Ed__19_t7A0450A6F25B0D9A17BD325CB911A82AE7C9EF4E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForIt_Death3U3Ed__19_System_Collections_IEnumerator_Reset_mA2106A0EB57061DCCB7496DCFAE26E1192799E21_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<WaitForIt_Death3>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForIt_Death3U3Ed__19_System_Collections_IEnumerator_get_Current_mED7C988C2616DA0E416A984521BA3A7C5A5EBB21 (U3CWaitForIt_Death3U3Ed__19_t7A0450A6F25B0D9A17BD325CB911A82AE7C9EF4E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void GameManager2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager2_Start_m9105ABC58251F3F2C9068FE0C2079FE5C21F1BDC (GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* __this, const RuntimeMethod* method) 
{
	{
		// platformStartPoint2 = platformGenerator.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___platformGenerator_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___platformStartPoint2_8 = L_1;
		// playerStartPoint2 = thePlayer2.transform.position;
		movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* L_2 = __this->___thePlayer2_7;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___playerStartPoint2_9 = L_4;
		// }
		return;
	}
}
// System.Void GameManager2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager2_Update_m7B38AED7A96908A8523DC4DD0B05BF1A70CA7F4B (GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameManager2::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager2_RestartGame_mCE997E35F41E504883278EC51A3DC6774A00AC4D (GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* __this, const RuntimeMethod* method) 
{
	{
		// thePlayer2.muerte = true;
		movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* L_0 = __this->___thePlayer2_7;
		NullCheck(L_0);
		L_0->___muerte_24 = (bool)1;
		// StartCoroutine(WaitForIt_Death2());
		RuntimeObject* L_1;
		L_1 = GameManager2_WaitForIt_Death2_mFA8AC6CDE5A9C7D0CDE6E36A8DEAF9EFDC9B651B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// Buttons.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___Buttons_11;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GameManager2::ResetTutorial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager2_ResetTutorial_mECD9C06296F8B618BDCDA88651E2CAE91F7F39FC (GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisPlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79_m4BD02D74E6601C0B88E9FE2DB9B9A966EE3FCB09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64CA105C6C2B750114C77ED815497653992266C4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// thePlayer2.muerte = true;
		movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* L_0 = __this->___thePlayer2_7;
		NullCheck(L_0);
		L_0->___muerte_24 = (bool)1;
		// thePlayer2.muerte = false;
		movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* L_1 = __this->___thePlayer2_7;
		NullCheck(L_1);
		L_1->___muerte_24 = (bool)0;
		// Buttons.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Buttons_11;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// playertag.gameObject.tag = "ola";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___playertag_12;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_4, NULL);
		NullCheck(L_5);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_5, _stringLiteral64CA105C6C2B750114C77ED815497653992266C4, NULL);
		// Buttons.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___Buttons_11;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// platformList = FindObjectsOfType<PlatformDestroyer>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PlatformDestroyerU5BU5D_t75FA24EA077178BE339025AD2198D4A347207DCC* L_8;
		L_8 = Object_FindObjectsOfType_TisPlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79_m4BD02D74E6601C0B88E9FE2DB9B9A966EE3FCB09(Object_FindObjectsOfType_TisPlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79_m4BD02D74E6601C0B88E9FE2DB9B9A966EE3FCB09_RuntimeMethod_var);
		__this->___platformList_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___platformList_10), (void*)L_8);
		// thePlayer2.gameObject.SetActive(false);
		movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* L_9 = __this->___thePlayer2_7;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// for (int i = 0; i < platformList.Length; i++)
		V_0 = 0;
		goto IL_0086;
	}

IL_006f:
	{
		// platformList[i].gameObject.SetActive(false);
		PlatformDestroyerU5BU5D_t75FA24EA077178BE339025AD2198D4A347207DCC* L_11 = __this->___platformList_10;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		PlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// for (int i = 0; i < platformList.Length; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0086:
	{
		// for (int i = 0; i < platformList.Length; i++)
		int32_t L_17 = V_0;
		PlatformDestroyerU5BU5D_t75FA24EA077178BE339025AD2198D4A347207DCC* L_18 = __this->___platformList_10;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_006f;
		}
	}
	{
		// thePlayer2.transform.position = playerStartPoint2;
		movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* L_19 = __this->___thePlayer2_7;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___playerStartPoint2_9;
		NullCheck(L_20);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_21, NULL);
		// platformGenerator.position = platformStartPoint2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___platformGenerator_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___platformStartPoint2_8;
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_23, NULL);
		// thePlayer2.gameObject.SetActive(true);
		movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* L_24 = __this->___thePlayer2_7;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)1, NULL);
		// tutorial.Start();
		TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* L_26 = __this->___tutorial_6;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = TutorialManager_Start_m466340A2904F24785286D74DFC501AE3F17CB5D6(L_26, NULL);
		// tutorial.reiniciar();
		TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* L_28 = __this->___tutorial_6;
		NullCheck(L_28);
		TutorialManager_reiniciar_mE259165ADA6B80D7E0A3E1E621C0FF06045298BD(L_28, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager2::WaitForIt_Death2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager2_WaitForIt_Death2_mFA8AC6CDE5A9C7D0CDE6E36A8DEAF9EFDC9B651B (GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForIt_Death2U3Ed__13_tD013D702A8A48430AD9986EAABA8F465007170B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForIt_Death2U3Ed__13_tD013D702A8A48430AD9986EAABA8F465007170B2* L_0 = (U3CWaitForIt_Death2U3Ed__13_tD013D702A8A48430AD9986EAABA8F465007170B2*)il2cpp_codegen_object_new(U3CWaitForIt_Death2U3Ed__13_tD013D702A8A48430AD9986EAABA8F465007170B2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitForIt_Death2U3Ed__13__ctor_m9C9C3BB43A6D1859FA53C64C66F0DF069C4D80D3(L_0, 0, NULL);
		return L_0;
	}
}
// System.Collections.IEnumerator GameManager2::RestartGameCo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager2_RestartGameCo_m656D5331E88FA622221051ED0EB858CC86AF946A (GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRestartGameCoU3Ed__14_t0173327588B6DC474EABD85ABF2D64E9250DEBF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRestartGameCoU3Ed__14_t0173327588B6DC474EABD85ABF2D64E9250DEBF1* L_0 = (U3CRestartGameCoU3Ed__14_t0173327588B6DC474EABD85ABF2D64E9250DEBF1*)il2cpp_codegen_object_new(U3CRestartGameCoU3Ed__14_t0173327588B6DC474EABD85ABF2D64E9250DEBF1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRestartGameCoU3Ed__14__ctor_m57C0C3431917EDF5E2834710ED173C9253DC70B0(L_0, 0, NULL);
		U3CRestartGameCoU3Ed__14_t0173327588B6DC474EABD85ABF2D64E9250DEBF1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager2__ctor_m67535A6292F6E9629F746CB1E4F69FB9F5806C76 (GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameManager2/<WaitForIt_Death2>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForIt_Death2U3Ed__13__ctor_m9C9C3BB43A6D1859FA53C64C66F0DF069C4D80D3 (U3CWaitForIt_Death2U3Ed__13_tD013D702A8A48430AD9986EAABA8F465007170B2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager2/<WaitForIt_Death2>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForIt_Death2U3Ed__13_System_IDisposable_Dispose_mA5B110193B277EE34CC6D2DB09EFCCCCC13EBE02 (U3CWaitForIt_Death2U3Ed__13_tD013D702A8A48430AD9986EAABA8F465007170B2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager2/<WaitForIt_Death2>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForIt_Death2U3Ed__13_MoveNext_m185446B8F5756423A71E82AA062AB82A871AEC86 (U3CWaitForIt_Death2U3Ed__13_tD013D702A8A48430AD9986EAABA8F465007170B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1.3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (1.29999995f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object GameManager2/<WaitForIt_Death2>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForIt_Death2U3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDD48F0AC460BB3C4A00DD3408DBE49D4E86BEA4A (U3CWaitForIt_Death2U3Ed__13_tD013D702A8A48430AD9986EAABA8F465007170B2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager2/<WaitForIt_Death2>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForIt_Death2U3Ed__13_System_Collections_IEnumerator_Reset_mBFED10FA0A2B9E0678BD3F42DD3100532068D313 (U3CWaitForIt_Death2U3Ed__13_tD013D702A8A48430AD9986EAABA8F465007170B2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForIt_Death2U3Ed__13_System_Collections_IEnumerator_Reset_mBFED10FA0A2B9E0678BD3F42DD3100532068D313_RuntimeMethod_var)));
	}
}
// System.Object GameManager2/<WaitForIt_Death2>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForIt_Death2U3Ed__13_System_Collections_IEnumerator_get_Current_m26F55929EE450B29A6D8A5785CDA84A3385D0210 (U3CWaitForIt_Death2U3Ed__13_tD013D702A8A48430AD9986EAABA8F465007170B2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void GameManager2/<RestartGameCo>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartGameCoU3Ed__14__ctor_m57C0C3431917EDF5E2834710ED173C9253DC70B0 (U3CRestartGameCoU3Ed__14_t0173327588B6DC474EABD85ABF2D64E9250DEBF1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager2/<RestartGameCo>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartGameCoU3Ed__14_System_IDisposable_Dispose_m834E418C7F1BD6E6589F8795B06961D590114405 (U3CRestartGameCoU3Ed__14_t0173327588B6DC474EABD85ABF2D64E9250DEBF1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager2/<RestartGameCo>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRestartGameCoU3Ed__14_MoveNext_mBBBFF0F8D5B92A5278D20F14EB94834847B75C34 (U3CRestartGameCoU3Ed__14_t0173327588B6DC474EABD85ABF2D64E9250DEBF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisPlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79_m4BD02D74E6601C0B88E9FE2DB9B9A966EE3FCB09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// thePlayer2.gameObject.SetActive(false);
		GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* L_4 = V_1;
		NullCheck(L_4);
		movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* L_5 = L_4->___thePlayer2_7;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0048:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// platformList = FindObjectsOfType<PlatformDestroyer>();
		GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PlatformDestroyerU5BU5D_t75FA24EA077178BE339025AD2198D4A347207DCC* L_9;
		L_9 = Object_FindObjectsOfType_TisPlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79_m4BD02D74E6601C0B88E9FE2DB9B9A966EE3FCB09(Object_FindObjectsOfType_TisPlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79_m4BD02D74E6601C0B88E9FE2DB9B9A966EE3FCB09_RuntimeMethod_var);
		NullCheck(L_8);
		L_8->___platformList_10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___platformList_10), (void*)L_9);
		// for (int i = 0; i < platformList.Length; i++)
		V_2 = 0;
		goto IL_0075;
	}

IL_005e:
	{
		// platformList[i].gameObject.SetActive(false);
		GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* L_10 = V_1;
		NullCheck(L_10);
		PlatformDestroyerU5BU5D_t75FA24EA077178BE339025AD2198D4A347207DCC* L_11 = L_10->___platformList_10;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		PlatformDestroyer_t107CCD6DDB5C8CD2A4965EFB4FEB5B95C5300C79* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// for (int i = 0; i < platformList.Length; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0075:
	{
		// for (int i = 0; i < platformList.Length; i++)
		int32_t L_17 = V_2;
		GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* L_18 = V_1;
		NullCheck(L_18);
		PlatformDestroyerU5BU5D_t75FA24EA077178BE339025AD2198D4A347207DCC* L_19 = L_18->___platformList_10;
		NullCheck(L_19);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_005e;
		}
	}
	{
		// thePlayer2.transform.position = playerStartPoint2;
		GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* L_20 = V_1;
		NullCheck(L_20);
		movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* L_21 = L_20->___thePlayer2_7;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* L_23 = V_1;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23->___playerStartPoint2_9;
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_24, NULL);
		// platformGenerator.position = platformStartPoint2;
		GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* L_25 = V_1;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = L_25->___platformGenerator_5;
		GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* L_27 = V_1;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = L_27->___platformStartPoint2_8;
		NullCheck(L_26);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_26, L_28, NULL);
		// thePlayer2.gameObject.SetActive(true);
		GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* L_29 = V_1;
		NullCheck(L_29);
		movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* L_30 = L_29->___thePlayer2_7;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
		NullCheck(L_31);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)1, NULL);
		// tutorial.Start();
		GameManager2_t414B3F89504FFD71A4844225A7ACFA17F51F40F3* L_32 = V_1;
		NullCheck(L_32);
		TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* L_33 = L_32->___tutorial_6;
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = TutorialManager_Start_m466340A2904F24785286D74DFC501AE3F17CB5D6(L_33, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager2/<RestartGameCo>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRestartGameCoU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m90B69CDAA880EE44C69AF90F13F48A75369C1509 (U3CRestartGameCoU3Ed__14_t0173327588B6DC474EABD85ABF2D64E9250DEBF1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager2/<RestartGameCo>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartGameCoU3Ed__14_System_Collections_IEnumerator_Reset_m7C52933997908515E6D08E16AC9488A32EAF6FFA (U3CRestartGameCoU3Ed__14_t0173327588B6DC474EABD85ABF2D64E9250DEBF1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRestartGameCoU3Ed__14_System_Collections_IEnumerator_Reset_m7C52933997908515E6D08E16AC9488A32EAF6FFA_RuntimeMethod_var)));
	}
}
// System.Object GameManager2/<RestartGameCo>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRestartGameCoU3Ed__14_System_Collections_IEnumerator_get_Current_m33961FBEA99637324036FB4D85739F6D9A36FCD7 (U3CRestartGameCoU3Ed__14_t0173327588B6DC474EABD85ABF2D64E9250DEBF1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void ObjectPooling::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPooling_Start_mC6CB63468CFC8BCDAD1E48BA223A033D9D0D9AFA (ObjectPooling_tED1829297FC7C173F0E6840E95FEA9F1A24B46C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// pooledObjects = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___pooledObjects_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pooledObjects_6), (void*)L_0);
		// for (int i = 0; i < pooledAmount; i++)
		V_0 = 0;
		goto IL_0032;
	}

IL_000f:
	{
		// GameObject obj = (GameObject)Instantiate(pooledObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___pooledObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		V_1 = L_2;
		// obj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_1;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// pooledObjects.Add(obj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___pooledObjects_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
		NullCheck(L_4);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_4, L_5, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// for (int i = 0; i < pooledAmount; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0032:
	{
		// for (int i = 0; i < pooledAmount; i++)
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___pooledAmount_5;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject ObjectPooling::GetPooledObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPooling_GetPooledObject_mB3E6AAD3A14C87139CA45307784557C9C5A39E75 (ObjectPooling_tED1829297FC7C173F0E6840E95FEA9F1A24B46C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < pooledObjects.Count; i++)
		V_1 = 0;
		goto IL_0028;
	}

IL_0004:
	{
		// if (!pooledObjects[i].activeInHierarchy)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___pooledObjects_6;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_2, NULL);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return pooledObjects[i];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___pooledObjects_6;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_4, L_5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		return L_6;
	}

IL_0024:
	{
		// for (int i = 0; i < pooledObjects.Count; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < pooledObjects.Count; i++)
		int32_t L_8 = V_1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___pooledObjects_6;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_9, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// GameObject obj = (GameObject)Instantiate(pooledObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___pooledObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		V_0 = L_12;
		// obj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// pooledObjects.Add(obj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = __this->___pooledObjects_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_0;
		NullCheck(L_14);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_14, L_15, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// return obj;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_0;
		return L_16;
	}
}
// System.Void ObjectPooling::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPooling__ctor_mC60F5EE979D1AD8FB8A06AE577FC64448C5660B0 (ObjectPooling_tED1829297FC7C173F0E6840E95FEA9F1A24B46C1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Collections.IEnumerator TutorialManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TutorialManager_Start_m466340A2904F24785286D74DFC501AE3F17CB5D6 (TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__8_tE67B868C225AED88B2AF57930831F0CEE12DA3BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__8_tE67B868C225AED88B2AF57930831F0CEE12DA3BF* L_0 = (U3CStartU3Ed__8_tE67B868C225AED88B2AF57930831F0CEE12DA3BF*)il2cpp_codegen_object_new(U3CStartU3Ed__8_tE67B868C225AED88B2AF57930831F0CEE12DA3BF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__8__ctor_m6DEB356ABB0A22D47B5FD88A333462DD60C1C95B(L_0, 0, NULL);
		U3CStartU3Ed__8_tE67B868C225AED88B2AF57930831F0CEE12DA3BF* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TutorialManager::reiniciar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialManager_reiniciar_mE259165ADA6B80D7E0A3E1E621C0FF06045298BD (TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64CA105C6C2B750114C77ED815497653992266C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Player2.jumpForce = 17f;
		movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* L_0 = __this->___Player2_4;
		NullCheck(L_0);
		L_0->___jumpForce_9 = (17.0f);
		// Player2.grounded = true;
		movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* L_1 = __this->___Player2_4;
		NullCheck(L_1);
		L_1->___grounded_17 = (bool)1;
		// playertag.gameObject.tag = "ola";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___playertag_8;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		NullCheck(L_3);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_3, _stringLiteral64CA105C6C2B750114C77ED815497653992266C4, NULL);
		// tutorialend.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___tutorialend_7;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// botones.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___botones_9;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// TutorialColorChanges.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___TutorialColorChanges_6;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// TutorialJumpScoretext.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___TutorialJumpScoretext_5;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_10, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// TutorialJumpScoretext.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___TutorialJumpScoretext_5;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_12, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TutorialManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialManager_Update_m70510E69FAE81B019F2427B18E6F2F4D80A20DB5 (TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB033FD2F890CA8FC2F620F48B8407DD98B58052F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player2.grounded is false)
		movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* L_0 = __this->___Player2_4;
		NullCheck(L_0);
		bool L_1 = L_0->___grounded_17;
		if (L_1)
		{
			goto IL_005b;
		}
	}
	{
		// tutorialend.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___tutorialend_7;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// TutorialColorChanges.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___TutorialColorChanges_6;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// TutorialJumpScoretext.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___TutorialJumpScoretext_5;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// botones.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___botones_9;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// Time.timeScale = 0.19f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.189999998f), NULL);
	}

IL_005b:
	{
		// if (playertag.gameObject.tag == "green")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___playertag_8;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_10, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_11, NULL);
		bool L_13;
		L_13 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_12, _stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615, NULL);
		if (!L_13)
		{
			goto IL_00a3;
		}
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// TutorialColorChanges.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___TutorialColorChanges_6;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_14, NULL);
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// tutorialend.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___tutorialend_7;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_16, NULL);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
	}

IL_00a3:
	{
		// if (playertag.gameObject.tag == "blue")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___playertag_8;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_19, NULL);
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008, NULL);
		if (!L_21)
		{
			goto IL_00eb;
		}
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// TutorialColorChanges.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___TutorialColorChanges_6;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_22, NULL);
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)0, NULL);
		// tutorialend.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___tutorialend_7;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_24, NULL);
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)1, NULL);
	}

IL_00eb:
	{
		// if (playertag.gameObject.tag == "yellow")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___playertag_8;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_26, NULL);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_27, NULL);
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralB033FD2F890CA8FC2F620F48B8407DD98B58052F, NULL);
		if (!L_29)
		{
			goto IL_0133;
		}
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// TutorialColorChanges.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___TutorialColorChanges_6;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_30, NULL);
		NullCheck(L_31);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)0, NULL);
		// tutorialend.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___tutorialend_7;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_32, NULL);
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)1, NULL);
	}

IL_0133:
	{
		// if (playertag.gameObject.tag == "red")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___playertag_8;
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_34, NULL);
		NullCheck(L_35);
		String_t* L_36;
		L_36 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_35, NULL);
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74, NULL);
		if (!L_37)
		{
			goto IL_017b;
		}
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// TutorialColorChanges.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->___TutorialColorChanges_6;
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_38, NULL);
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)0, NULL);
		// tutorialend.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___tutorialend_7;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_40, NULL);
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)1, NULL);
	}

IL_017b:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TutorialManager::WaitAndPrint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TutorialManager_WaitAndPrint_mC0F75E3B1DC1BFDC2E25CDED70FA23DA51D36455 (TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* __this, float ___waitTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitAndPrintU3Ed__11_tA9EA7E8AFF0422EEF2771B25D606CEF43CEF37B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitAndPrintU3Ed__11_tA9EA7E8AFF0422EEF2771B25D606CEF43CEF37B9* L_0 = (U3CWaitAndPrintU3Ed__11_tA9EA7E8AFF0422EEF2771B25D606CEF43CEF37B9*)il2cpp_codegen_object_new(U3CWaitAndPrintU3Ed__11_tA9EA7E8AFF0422EEF2771B25D606CEF43CEF37B9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitAndPrintU3Ed__11__ctor_m321BB6CBD485652AB53298B27A957E59E10E9C85(L_0, 0, NULL);
		U3CWaitAndPrintU3Ed__11_tA9EA7E8AFF0422EEF2771B25D606CEF43CEF37B9* L_1 = L_0;
		float L_2 = ___waitTime0;
		NullCheck(L_1);
		L_1->___waitTime_2 = L_2;
		return L_1;
	}
}
// System.Void TutorialManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialManager__ctor_m5DF15FACAE927F11F4CD3E6162A8FEE01B406E16 (TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TutorialManager/<Start>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8__ctor_m6DEB356ABB0A22D47B5FD88A333462DD60C1C95B (U3CStartU3Ed__8_tE67B868C225AED88B2AF57930831F0CEE12DA3BF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TutorialManager/<Start>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8_System_IDisposable_Dispose_m441D8CEE2D4AADB46357BCF31DDC21FB90B1D1B0 (U3CStartU3Ed__8_tE67B868C225AED88B2AF57930831F0CEE12DA3BF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TutorialManager/<Start>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__8_MoveNext_m4B15E8EAED179685693F67CCD888F527B86169D5 (U3CStartU3Ed__8_tE67B868C225AED88B2AF57930831F0CEE12DA3BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64CA105C6C2B750114C77ED815497653992266C4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_009c;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// playertag.gameObject.tag = "ola";
		TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___playertag_8;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_5, NULL);
		NullCheck(L_6);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_6, _stringLiteral64CA105C6C2B750114C77ED815497653992266C4, NULL);
		// botones.gameObject.SetActive(false);
		TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___botones_9;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// TutorialColorChanges.gameObject.SetActive(false);
		TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* L_10 = V_1;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10->___TutorialColorChanges_6;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// Player2.jumpForce = 0;
		TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* L_13 = V_1;
		NullCheck(L_13);
		movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* L_14 = L_13->___Player2_4;
		NullCheck(L_14);
		L_14->___jumpForce_9 = (0.0f);
		// TutorialJumpScoretext.gameObject.SetActive(false);
		TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* L_15 = V_1;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15->___TutorialJumpScoretext_5;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_16, NULL);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// yield return new WaitForSeconds(1.3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_18 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_18, (1.29999995f), NULL);
		__this->___U3CU3E2__current_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Player2.jumpForce = 17f;
		TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* L_19 = V_1;
		NullCheck(L_19);
		movimientotutorial_t512FA31A939B843A37F4AB6B9801E131DABEBA33* L_20 = L_19->___Player2_4;
		NullCheck(L_20);
		L_20->___jumpForce_9 = (17.0f);
		// Time.timeScale = 0.18f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.180000007f), NULL);
		// TutorialJumpScoretext.gameObject.SetActive(true);
		TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* L_21 = V_1;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = L_21->___TutorialJumpScoretext_5;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_22, NULL);
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)1, NULL);
		// coroutine = WaitAndPrint(21f);
		TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* L_24 = V_1;
		TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* L_25 = V_1;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = TutorialManager_WaitAndPrint_mC0F75E3B1DC1BFDC2E25CDED70FA23DA51D36455(L_25, (21.0f), NULL);
		NullCheck(L_24);
		L_24->___coroutine_10 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___coroutine_10), (void*)L_26);
		// StartCoroutine(coroutine);
		TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* L_27 = V_1;
		TutorialManager_tA517EF826FE03300C6A8ED492158E82A0E210CCF* L_28 = V_1;
		NullCheck(L_28);
		RuntimeObject* L_29 = L_28->___coroutine_10;
		NullCheck(L_27);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_30;
		L_30 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_27, L_29, NULL);
		// }
		return (bool)0;
	}
}
// System.Object TutorialManager/<Start>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFEDD209A0285498CE18E9434AA2763968F9A7627 (U3CStartU3Ed__8_tE67B868C225AED88B2AF57930831F0CEE12DA3BF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TutorialManager/<Start>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_m8D75768092F0B742519CFA22A27C223B99BAE557 (U3CStartU3Ed__8_tE67B868C225AED88B2AF57930831F0CEE12DA3BF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_m8D75768092F0B742519CFA22A27C223B99BAE557_RuntimeMethod_var)));
	}
}
// System.Object TutorialManager/<Start>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__8_System_Collections_IEnumerator_get_Current_m37911C69AB472905B17DCF5E9DDB48BCD05311C3 (U3CStartU3Ed__8_tE67B868C225AED88B2AF57930831F0CEE12DA3BF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void TutorialManager/<WaitAndPrint>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndPrintU3Ed__11__ctor_m321BB6CBD485652AB53298B27A957E59E10E9C85 (U3CWaitAndPrintU3Ed__11_tA9EA7E8AFF0422EEF2771B25D606CEF43CEF37B9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TutorialManager/<WaitAndPrint>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndPrintU3Ed__11_System_IDisposable_Dispose_m776E8848F9EE601BC22E995B908B6A5007786BDF (U3CWaitAndPrintU3Ed__11_tA9EA7E8AFF0422EEF2771B25D606CEF43CEF37B9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TutorialManager/<WaitAndPrint>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitAndPrintU3Ed__11_MoveNext_m42C78E3745ECBA003BBAC6B2FDC989BCEA1A2F81 (U3CWaitAndPrintU3Ed__11_tA9EA7E8AFF0422EEF2771B25D606CEF43CEF37B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0017:
	{
		// yield return new WaitForSeconds(waitTime);
		float L_3 = __this->___waitTime_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0031:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene(6);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(6, NULL);
		// while (true)
		goto IL_0017;
	}
}
// System.Object TutorialManager/<WaitAndPrint>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitAndPrintU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7A5E658F5F86EC78F9BD90BCA989D36F5CBE5578 (U3CWaitAndPrintU3Ed__11_tA9EA7E8AFF0422EEF2771B25D606CEF43CEF37B9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TutorialManager/<WaitAndPrint>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndPrintU3Ed__11_System_Collections_IEnumerator_Reset_mA9F54698D744B80FDF580D9FF3B4CD0598A3B5C8 (U3CWaitAndPrintU3Ed__11_tA9EA7E8AFF0422EEF2771B25D606CEF43CEF37B9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitAndPrintU3Ed__11_System_Collections_IEnumerator_Reset_mA9F54698D744B80FDF580D9FF3B4CD0598A3B5C8_RuntimeMethod_var)));
	}
}
// System.Object TutorialManager/<WaitAndPrint>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitAndPrintU3Ed__11_System_Collections_IEnumerator_get_Current_mC0BE442AE03C009A77345D4ADCB2EC424D557728 (U3CWaitAndPrintU3Ed__11_tA9EA7E8AFF0422EEF2771B25D606CEF43CEF37B9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void load::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void load_Start_m26FA25D5B88BB18CADDF1BE0363FDFA671CD29EA (load_tCE94B1C7D1104527D81F5F9423E6762C281E5A12* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(LoadAsynchronously());
		RuntimeObject* L_0;
		L_0 = load_LoadAsynchronously_m3283F2809F6B5ECB75BD8DB0922CE51AE53FBC5C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator load::LoadAsynchronously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* load_LoadAsynchronously_m3283F2809F6B5ECB75BD8DB0922CE51AE53FBC5C (load_tCE94B1C7D1104527D81F5F9423E6762C281E5A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAsynchronouslyU3Ed__1_tCE1CBA3FD806D322B4F75A3DC0DE09AF47072CDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadAsynchronouslyU3Ed__1_tCE1CBA3FD806D322B4F75A3DC0DE09AF47072CDC* L_0 = (U3CLoadAsynchronouslyU3Ed__1_tCE1CBA3FD806D322B4F75A3DC0DE09AF47072CDC*)il2cpp_codegen_object_new(U3CLoadAsynchronouslyU3Ed__1_tCE1CBA3FD806D322B4F75A3DC0DE09AF47072CDC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadAsynchronouslyU3Ed__1__ctor_m153E833D2883CD234576122BC0212AB3E9F27687(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void load::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void load__ctor_mD8DFC5652030DC209A3EF1585DD1AB2942FC42A7 (load_tCE94B1C7D1104527D81F5F9423E6762C281E5A12* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void load/<LoadAsynchronously>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__1__ctor_m153E833D2883CD234576122BC0212AB3E9F27687 (U3CLoadAsynchronouslyU3Ed__1_tCE1CBA3FD806D322B4F75A3DC0DE09AF47072CDC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void load/<LoadAsynchronously>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__1_System_IDisposable_Dispose_mC2EDA33073F0985798045FB0B4BE76523AEA11E6 (U3CLoadAsynchronouslyU3Ed__1_tCE1CBA3FD806D322B4F75A3DC0DE09AF47072CDC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean load/<LoadAsynchronously>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadAsynchronouslyU3Ed__1_MoveNext_mEFFBBFC866E8051187A4FD16E6E9E9870280AD56 (U3CLoadAsynchronouslyU3Ed__1_tCE1CBA3FD806D322B4F75A3DC0DE09AF47072CDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0053;
			}
			case 2:
			{
				goto IL_0078;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AsyncOperation operation = SceneManager.LoadSceneAsync(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_2;
		L_2 = SceneManager_LoadSceneAsync_mEF6FF8837670DA6D73FA35887D8723F51024CA09(2, NULL);
		__this->___U3CoperationU3E5__2_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoperationU3E5__2_2), (void*)L_2);
		// operation.allowSceneActivation = false;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_3 = __this->___U3CoperationU3E5__2_2;
		NullCheck(L_3);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_3, (bool)0, NULL);
		// yield return new WaitForSeconds(1.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.20000005f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0053:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// operation.allowSceneActivation = true;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_5 = __this->___U3CoperationU3E5__2_2;
		NullCheck(L_5);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_5, (bool)1, NULL);
		goto IL_007f;
	}

IL_0068:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0078:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_007f:
	{
		// while (!operation.isDone)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_6 = __this->___U3CoperationU3E5__2_2;
		NullCheck(L_6);
		bool L_7;
		L_7 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_6, NULL);
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object load/<LoadAsynchronously>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAsynchronouslyU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1F8D5167617AF5B8FE86348B7B863BCC1D36B4A6 (U3CLoadAsynchronouslyU3Ed__1_tCE1CBA3FD806D322B4F75A3DC0DE09AF47072CDC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void load/<LoadAsynchronously>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__1_System_Collections_IEnumerator_Reset_m87CF258403BC83D6FB542F4AB08E1203F5287A35 (U3CLoadAsynchronouslyU3Ed__1_tCE1CBA3FD806D322B4F75A3DC0DE09AF47072CDC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadAsynchronouslyU3Ed__1_System_Collections_IEnumerator_Reset_m87CF258403BC83D6FB542F4AB08E1203F5287A35_RuntimeMethod_var)));
	}
}
// System.Object load/<LoadAsynchronously>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAsynchronouslyU3Ed__1_System_Collections_IEnumerator_get_Current_mFC380AB2FED58369C0DDA8E226C8DE279AB8C0DB (U3CLoadAsynchronouslyU3Ed__1_tCE1CBA3FD806D322B4F75A3DC0DE09AF47072CDC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void load2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void load2_Start_m63D6A282CF03068756B7A7284FCB16D44FE8E9AB (load2_tA77981C6C893F5F163DDC7B09B81EAB88EB5142A* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(LoadAsynchronously());
		RuntimeObject* L_0;
		L_0 = load2_LoadAsynchronously_m0F5B71096E30387E151E5B50B56148C1FB4F6CEC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator load2::LoadAsynchronously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* load2_LoadAsynchronously_m0F5B71096E30387E151E5B50B56148C1FB4F6CEC (load2_tA77981C6C893F5F163DDC7B09B81EAB88EB5142A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAsynchronouslyU3Ed__1_t6D6206E6DAA1C56332FCB3941C3E3A653176961B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadAsynchronouslyU3Ed__1_t6D6206E6DAA1C56332FCB3941C3E3A653176961B* L_0 = (U3CLoadAsynchronouslyU3Ed__1_t6D6206E6DAA1C56332FCB3941C3E3A653176961B*)il2cpp_codegen_object_new(U3CLoadAsynchronouslyU3Ed__1_t6D6206E6DAA1C56332FCB3941C3E3A653176961B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadAsynchronouslyU3Ed__1__ctor_m1377842FCBB6123811E79BC5E56CB2AE11935DFC(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void load2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void load2__ctor_mFC065FEE48F082EA5C7B5823AA66739E448ACA73 (load2_tA77981C6C893F5F163DDC7B09B81EAB88EB5142A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void load2/<LoadAsynchronously>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__1__ctor_m1377842FCBB6123811E79BC5E56CB2AE11935DFC (U3CLoadAsynchronouslyU3Ed__1_t6D6206E6DAA1C56332FCB3941C3E3A653176961B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void load2/<LoadAsynchronously>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__1_System_IDisposable_Dispose_m994DC0DF9B3CB960956BB1232218FC5BC41D3E73 (U3CLoadAsynchronouslyU3Ed__1_t6D6206E6DAA1C56332FCB3941C3E3A653176961B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean load2/<LoadAsynchronously>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadAsynchronouslyU3Ed__1_MoveNext_m275BA91BDEACE5F5776FF1EBA006CAD1E1CC61C2 (U3CLoadAsynchronouslyU3Ed__1_t6D6206E6DAA1C56332FCB3941C3E3A653176961B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0053;
			}
			case 2:
			{
				goto IL_0078;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AsyncOperation operation = SceneManager.LoadSceneAsync(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_2;
		L_2 = SceneManager_LoadSceneAsync_mEF6FF8837670DA6D73FA35887D8723F51024CA09(0, NULL);
		__this->___U3CoperationU3E5__2_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoperationU3E5__2_2), (void*)L_2);
		// operation.allowSceneActivation = false;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_3 = __this->___U3CoperationU3E5__2_2;
		NullCheck(L_3);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_3, (bool)0, NULL);
		// yield return new WaitForSeconds(1.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.20000005f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0053:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// operation.allowSceneActivation = true;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_5 = __this->___U3CoperationU3E5__2_2;
		NullCheck(L_5);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_5, (bool)1, NULL);
		goto IL_007f;
	}

IL_0068:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0078:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_007f:
	{
		// while (!operation.isDone)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_6 = __this->___U3CoperationU3E5__2_2;
		NullCheck(L_6);
		bool L_7;
		L_7 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_6, NULL);
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object load2/<LoadAsynchronously>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAsynchronouslyU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m25A45C0C1D5D95645EEF798EA657C62B37DDA305 (U3CLoadAsynchronouslyU3Ed__1_t6D6206E6DAA1C56332FCB3941C3E3A653176961B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void load2/<LoadAsynchronously>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__1_System_Collections_IEnumerator_Reset_m7D7570126C9C0AC375C143A78D11167AD119CDC3 (U3CLoadAsynchronouslyU3Ed__1_t6D6206E6DAA1C56332FCB3941C3E3A653176961B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadAsynchronouslyU3Ed__1_System_Collections_IEnumerator_Reset_m7D7570126C9C0AC375C143A78D11167AD119CDC3_RuntimeMethod_var)));
	}
}
// System.Object load2/<LoadAsynchronously>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAsynchronouslyU3Ed__1_System_Collections_IEnumerator_get_Current_m974609E0ECB1BAB28E986615ED0E2FC6D50B3907 (U3CLoadAsynchronouslyU3Ed__1_t6D6206E6DAA1C56332FCB3941C3E3A653176961B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void load3::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void load3_Start_m98D29DC852ECDA1F48BC9C8ECD1BD265EC62CE2F (load3_t335876654C50F725DD182FF5897873987C8D59EB* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(LoadAsynchronously());
		RuntimeObject* L_0;
		L_0 = load3_LoadAsynchronously_mA03E5D9E4E834D346D8FA282DCC58F4911FC74E9(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator load3::LoadAsynchronously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* load3_LoadAsynchronously_mA03E5D9E4E834D346D8FA282DCC58F4911FC74E9 (load3_t335876654C50F725DD182FF5897873987C8D59EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAsynchronouslyU3Ed__1_tF901312F84FDC77D57B0015A8B26B2D693D5FE83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadAsynchronouslyU3Ed__1_tF901312F84FDC77D57B0015A8B26B2D693D5FE83* L_0 = (U3CLoadAsynchronouslyU3Ed__1_tF901312F84FDC77D57B0015A8B26B2D693D5FE83*)il2cpp_codegen_object_new(U3CLoadAsynchronouslyU3Ed__1_tF901312F84FDC77D57B0015A8B26B2D693D5FE83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadAsynchronouslyU3Ed__1__ctor_m53C5377C017BBA90994876DF58B71F173701469D(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void load3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void load3__ctor_m0D0446201E9D3B57A4E7747337C37AEA6DBD4D49 (load3_t335876654C50F725DD182FF5897873987C8D59EB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void load3/<LoadAsynchronously>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__1__ctor_m53C5377C017BBA90994876DF58B71F173701469D (U3CLoadAsynchronouslyU3Ed__1_tF901312F84FDC77D57B0015A8B26B2D693D5FE83* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void load3/<LoadAsynchronously>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__1_System_IDisposable_Dispose_m6097B5D71D0492E4C35D8D727BB7C7DA8396794A (U3CLoadAsynchronouslyU3Ed__1_tF901312F84FDC77D57B0015A8B26B2D693D5FE83* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean load3/<LoadAsynchronously>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadAsynchronouslyU3Ed__1_MoveNext_mD30C4BA5D9BE24E8E0B16458C63FDF67A01BE537 (U3CLoadAsynchronouslyU3Ed__1_tF901312F84FDC77D57B0015A8B26B2D693D5FE83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0053;
			}
			case 2:
			{
				goto IL_0078;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AsyncOperation operation = SceneManager.LoadSceneAsync(4);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_2;
		L_2 = SceneManager_LoadSceneAsync_mEF6FF8837670DA6D73FA35887D8723F51024CA09(4, NULL);
		__this->___U3CoperationU3E5__2_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoperationU3E5__2_2), (void*)L_2);
		// operation.allowSceneActivation = false;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_3 = __this->___U3CoperationU3E5__2_2;
		NullCheck(L_3);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_3, (bool)0, NULL);
		// yield return new WaitForSeconds(1.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.20000005f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0053:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// operation.allowSceneActivation = true;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_5 = __this->___U3CoperationU3E5__2_2;
		NullCheck(L_5);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_5, (bool)1, NULL);
		goto IL_007f;
	}

IL_0068:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0078:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_007f:
	{
		// while (!operation.isDone)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_6 = __this->___U3CoperationU3E5__2_2;
		NullCheck(L_6);
		bool L_7;
		L_7 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_6, NULL);
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object load3/<LoadAsynchronously>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAsynchronouslyU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m761A1875FD8C10B25BD3A41BB2E397CBAE83CDD8 (U3CLoadAsynchronouslyU3Ed__1_tF901312F84FDC77D57B0015A8B26B2D693D5FE83* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void load3/<LoadAsynchronously>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__1_System_Collections_IEnumerator_Reset_m9FF8CB69C1C7F11AD219043D3C53C8C8AF0D2B29 (U3CLoadAsynchronouslyU3Ed__1_tF901312F84FDC77D57B0015A8B26B2D693D5FE83* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadAsynchronouslyU3Ed__1_System_Collections_IEnumerator_Reset_m9FF8CB69C1C7F11AD219043D3C53C8C8AF0D2B29_RuntimeMethod_var)));
	}
}
// System.Object load3/<LoadAsynchronously>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAsynchronouslyU3Ed__1_System_Collections_IEnumerator_get_Current_mEC10596CE29FDDAE1F2615A239E322B7F57005D7 (U3CLoadAsynchronouslyU3Ed__1_tF901312F84FDC77D57B0015A8B26B2D693D5FE83* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void LoadTutorial2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadTutorial2_Start_m57852B55AA61A4B98ADD26561AF7179EC77F1BB4 (LoadTutorial2_t8AF1633CA540AF8F76CF31F3B405488CB6B1987E* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// StartCoroutine(LoadAsynchronously());
		RuntimeObject* L_0;
		L_0 = LoadTutorial2_LoadAsynchronously_m93733B90D47BBD7F92997F7000D8ED1B1862BF79(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LoadTutorial2::LoadAsynchronously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadTutorial2_LoadAsynchronously_m93733B90D47BBD7F92997F7000D8ED1B1862BF79 (LoadTutorial2_t8AF1633CA540AF8F76CF31F3B405488CB6B1987E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAsynchronouslyU3Ed__1_t16E0E10C5CE925F139065506B9BBC2FB72E8830E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadAsynchronouslyU3Ed__1_t16E0E10C5CE925F139065506B9BBC2FB72E8830E* L_0 = (U3CLoadAsynchronouslyU3Ed__1_t16E0E10C5CE925F139065506B9BBC2FB72E8830E*)il2cpp_codegen_object_new(U3CLoadAsynchronouslyU3Ed__1_t16E0E10C5CE925F139065506B9BBC2FB72E8830E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadAsynchronouslyU3Ed__1__ctor_mC66F93DA127DEBC0A68E1B6F683232A4C5514873(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void LoadTutorial2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadTutorial2__ctor_mB7531166C68F0D170F1215D7DE69C310C6C3E009 (LoadTutorial2_t8AF1633CA540AF8F76CF31F3B405488CB6B1987E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LoadTutorial2/<LoadAsynchronously>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__1__ctor_mC66F93DA127DEBC0A68E1B6F683232A4C5514873 (U3CLoadAsynchronouslyU3Ed__1_t16E0E10C5CE925F139065506B9BBC2FB72E8830E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LoadTutorial2/<LoadAsynchronously>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__1_System_IDisposable_Dispose_mF390D92A8AEAAC23EE902E29856057219E31E12C (U3CLoadAsynchronouslyU3Ed__1_t16E0E10C5CE925F139065506B9BBC2FB72E8830E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LoadTutorial2/<LoadAsynchronously>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadAsynchronouslyU3Ed__1_MoveNext_m063D38BD8C296CDE01A09014BA438F60E187E64E (U3CLoadAsynchronouslyU3Ed__1_t16E0E10C5CE925F139065506B9BBC2FB72E8830E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0053;
			}
			case 2:
			{
				goto IL_0078;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AsyncOperation operation = SceneManager.LoadSceneAsync(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_2;
		L_2 = SceneManager_LoadSceneAsync_mEF6FF8837670DA6D73FA35887D8723F51024CA09(0, NULL);
		__this->___U3CoperationU3E5__2_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoperationU3E5__2_2), (void*)L_2);
		// operation.allowSceneActivation = false;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_3 = __this->___U3CoperationU3E5__2_2;
		NullCheck(L_3);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_3, (bool)0, NULL);
		// yield return new WaitForSeconds(1.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.20000005f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0053:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// operation.allowSceneActivation = true;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_5 = __this->___U3CoperationU3E5__2_2;
		NullCheck(L_5);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_5, (bool)1, NULL);
		goto IL_007f;
	}

IL_0068:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0078:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_007f:
	{
		// while (!operation.isDone)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_6 = __this->___U3CoperationU3E5__2_2;
		NullCheck(L_6);
		bool L_7;
		L_7 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_6, NULL);
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object LoadTutorial2/<LoadAsynchronously>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAsynchronouslyU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF3B3F6FBEAAEC3D21B610854C9C868442471D1C4 (U3CLoadAsynchronouslyU3Ed__1_t16E0E10C5CE925F139065506B9BBC2FB72E8830E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LoadTutorial2/<LoadAsynchronously>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__1_System_Collections_IEnumerator_Reset_mA8C06F8B5C93EEE8D508EC15CDB3EFAD836031BA (U3CLoadAsynchronouslyU3Ed__1_t16E0E10C5CE925F139065506B9BBC2FB72E8830E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadAsynchronouslyU3Ed__1_System_Collections_IEnumerator_Reset_mA8C06F8B5C93EEE8D508EC15CDB3EFAD836031BA_RuntimeMethod_var)));
	}
}
// System.Object LoadTutorial2/<LoadAsynchronously>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAsynchronouslyU3Ed__1_System_Collections_IEnumerator_get_Current_m5349266A30F4C84B15959CE7F8F070DCF206ACC8 (U3CLoadAsynchronouslyU3Ed__1_t16E0E10C5CE925F139065506B9BBC2FB72E8830E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void TutorialForced::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialForced_Awake_m28C208CAD027EC7DC69EF5A50E3801F55B5956CE (TutorialForced_tA2019D3403EB863BE113C33712B9D75F590F3DF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TutorialForced_tA2019D3403EB863BE113C33712B9D75F590F3DF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD662A0E5012CEA67D8FB5D1337EA9B5E900C9274);
		s_Il2CppMethodInitialized = true;
	}
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Application.targetFrameRate = Screen.currentResolution.refreshRate;
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 L_0;
		L_0 = Screen_get_currentResolution_mDA9FEB72E2C16BD66D709E94CD9504BF7CAC899E(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Resolution_get_refreshRate_mBA65C6BC920F0045E798C9F096E830C135F37870((&V_0), NULL);
		Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325(L_1, NULL);
		// QualitySettings.vSyncCount = 0;
		QualitySettings_set_vSyncCount_m37CB89BA3DF4BE2E181339F5F44F03C493733360(0, NULL);
		// TutorialInt = PlayerPrefs.GetInt(Tutorial);
		il2cpp_codegen_runtime_class_init_inline(TutorialForced_tA2019D3403EB863BE113C33712B9D75F590F3DF6_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TutorialForced_tA2019D3403EB863BE113C33712B9D75F590F3DF6_StaticFields*)il2cpp_codegen_static_fields_for(TutorialForced_tA2019D3403EB863BE113C33712B9D75F590F3DF6_il2cpp_TypeInfo_var))->___Tutorial_4;
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_2, NULL);
		__this->___TutorialInt_5 = L_3;
		// if (TutorialInt == 0)
		int32_t L_4 = __this->___TutorialInt_5;
		if (L_4)
		{
			goto IL_0067;
		}
	}
	{
		// SceneManager.LoadScene(4);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(4, NULL);
		// PlayerPrefs.SetInt("Tutorial", 1);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralD662A0E5012CEA67D8FB5D1337EA9B5E900C9274, 1, NULL);
		// tutorialvib.ToggleInt = 1;
		vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E* L_5 = __this->___tutorialvib_6;
		NullCheck(L_5);
		L_5->___ToggleInt_5 = 1;
		// PlayerPrefs.SetInt("Vibrate", tutorialvib.ToggleInt);
		vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E* L_6 = __this->___tutorialvib_6;
		NullCheck(L_6);
		int32_t L_7 = L_6->___ToggleInt_5;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0, L_7, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void TutorialForced::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialForced__ctor_m5E17C9D4C17EE00A15EDAE9A94BD3DFBBEE870D9 (TutorialForced_tA2019D3403EB863BE113C33712B9D75F590F3DF6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void TutorialForced::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialForced__cctor_m16C2A2E4C819892F74EF62A19FB7E075F29075EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TutorialForced_tA2019D3403EB863BE113C33712B9D75F590F3DF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD662A0E5012CEA67D8FB5D1337EA9B5E900C9274);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string Tutorial = "Tutorial";
		((TutorialForced_tA2019D3403EB863BE113C33712B9D75F590F3DF6_StaticFields*)il2cpp_codegen_static_fields_for(TutorialForced_tA2019D3403EB863BE113C33712B9D75F590F3DF6_il2cpp_TypeInfo_var))->___Tutorial_4 = _stringLiteralD662A0E5012CEA67D8FB5D1337EA9B5E900C9274;
		Il2CppCodeGenWriteBarrier((void**)(&((TutorialForced_tA2019D3403EB863BE113C33712B9D75F590F3DF6_StaticFields*)il2cpp_codegen_static_fields_for(TutorialForced_tA2019D3403EB863BE113C33712B9D75F590F3DF6_il2cpp_TypeInfo_var))->___Tutorial_4), (void*)_stringLiteralD662A0E5012CEA67D8FB5D1337EA9B5E900C9274);
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
// System.Void ontrigguerazul::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ontrigguerazul_OnTriggerEnter2D_mDDEAAD7C144EC2F66779A8ECD6FA0A58F9A689B3 (ontrigguerazul_tE9E189D2F7EF629D682744BCA2F3FAA7FCC1ADC3* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	{
		// manoazul.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___manoazul_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ontrigguerazul::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ontrigguerazul_OnTriggerExit2D_m417B2AAC0B4FCFAF10748BD44A31E2DE52FDB944 (ontrigguerazul_tE9E189D2F7EF629D682744BCA2F3FAA7FCC1ADC3* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	{
		// manoazul.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___manoazul_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ontrigguerazul::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ontrigguerazul__ctor_m7C4767142A631A4186E7BBC4B7402ABC9437E0BB (ontrigguerazul_tE9E189D2F7EF629D682744BCA2F3FAA7FCC1ADC3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ontrigguerrojo::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ontrigguerrojo_OnTriggerEnter2D_mD09E43EE8CFC7C31E1837F4F15EECF182D712B70 (ontrigguerrojo_t69FB2EC82AF9FA8626269F0579B62A259536CD32* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	{
		// manorojo.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___manorojo_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ontrigguerrojo::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ontrigguerrojo_OnTriggerExit2D_m8120227D990DF4423C1572E66A01761958B93536 (ontrigguerrojo_t69FB2EC82AF9FA8626269F0579B62A259536CD32* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	{
		// manorojo.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___manorojo_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ontrigguerrojo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ontrigguerrojo__ctor_m886ECB66C2AEE07F2D3047829172EA31C1214A9C (ontrigguerrojo_t69FB2EC82AF9FA8626269F0579B62A259536CD32* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ontrigguerverde::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ontrigguerverde_OnTriggerEnter2D_m44B0CCB009B813FDB969BEF90D7A89A23C44D9E6 (ontrigguerverde_t05F05EF855D737CD64649E470EA553130E015535* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	{
		// manoverde.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___manoverde_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ontrigguerverde::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ontrigguerverde_OnTriggerExit2D_mC5E2710F233BD76EAA094BD6A82FDB100DEAFA8A (ontrigguerverde_t05F05EF855D737CD64649E470EA553130E015535* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	{
		// manoverde.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___manoverde_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ontrigguerverde::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ontrigguerverde__ctor_m431F17E3073DDF7D556EC0E441C4DD1FD3BC34E3 (ontrigguerverde_t05F05EF855D737CD64649E470EA553130E015535* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void trigguerfinal::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trigguerfinal_OnTriggerEnter2D_m0A48B64149F3C147C3864A50BAE24BC4F2B1F762 (trigguerfinal_t9FE5AD8348D0072D65B71893D078E5416C8A3C5D* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(6);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(6, NULL);
		// }
		return;
	}
}
// System.Void trigguerfinal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trigguerfinal__ctor_m8E21A644A3ED40B7DC2D2057418B0F6A82E1B564 (trigguerfinal_t9FE5AD8348D0072D65B71893D078E5416C8A3C5D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void VibrateSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrateSettings_Awake_m4BB6CF14A3F9D8D3253E5C73206FB3E32B7379E9 (VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE* __this, const RuntimeMethod* method) 
{
	{
		// ContinueSettings();
		VibrateSettings_ContinueSettings_m49EB32EE4C687C833E010F70D963CAE27A623778(__this, NULL);
		// }
		return;
	}
}
// System.Void VibrateSettings::ContinueSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrateSettings_ContinueSettings_m49EB32EE4C687C833E010F70D963CAE27A623778 (VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// vibrateintt = PlayerPrefs.GetInt(VibrateString);
		il2cpp_codegen_runtime_class_init_inline(VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE_il2cpp_TypeInfo_var);
		String_t* L_0 = ((VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE_StaticFields*)il2cpp_codegen_static_fields_for(VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE_il2cpp_TypeInfo_var))->___VibrateString_4;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_0, NULL);
		__this->___vibrateintt_5 = L_1;
		// vibrateBoolActivate = Convert.ToBoolean(vibrateintt);
		int32_t L_2 = __this->___vibrateintt_5;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Convert_ToBoolean_m955ACDCBFD4161FA612BFA55007F9A9898401441(L_2, NULL);
		__this->___vibrateBoolActivate_6 = L_3;
		// }
		return;
	}
}
// System.Void VibrateSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrateSettings__ctor_m16541A86024283102E2CD6E401748DBDE17AE065 (VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void VibrateSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrateSettings__cctor_m26095C3BDB1CF15B83D571398DD2467D98B4713C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string VibrateString= "Vibrate";
		((VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE_StaticFields*)il2cpp_codegen_static_fields_for(VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE_il2cpp_TypeInfo_var))->___VibrateString_4 = _stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0;
		Il2CppCodeGenWriteBarrier((void**)(&((VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE_StaticFields*)il2cpp_codegen_static_fields_for(VibrateSettings_tE47DA2700B657AC64B47BF32B3B32444B1D97EDE_il2cpp_TypeInfo_var))->___VibrateString_4), (void*)_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0);
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
// System.Void vibrateToggle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vibrateToggle_Start_m1784C75C50F2E023039B0D73C4A005B9D98B0C0F (vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ToggleInt = PlayerPrefs.GetInt(VibratePrefab);
		il2cpp_codegen_runtime_class_init_inline(vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_il2cpp_TypeInfo_var);
		String_t* L_0 = ((vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_StaticFields*)il2cpp_codegen_static_fields_for(vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_il2cpp_TypeInfo_var))->___VibratePrefab_6;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_0, NULL);
		__this->___ToggleInt_5 = L_1;
		// }
		return;
	}
}
// System.Void vibrateToggle::VibrateToggle(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vibrateToggle_VibrateToggle_m0D5C9C30B00A5F2F52E20840562E3EAE47B48601 (vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E* __this, bool ___vibrate0, const RuntimeMethod* method) 
{
	vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E* G_B2_0 = NULL;
	vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E* G_B3_1 = NULL;
	{
		// Toggle.isOn = vibrate;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___Toggle_4;
		bool L_1 = ___vibrate0;
		NullCheck(L_0);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_0, L_1, NULL);
		// ToggleInt = vibrate ? 1 : 0;
		bool L_2 = ___vibrate0;
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		NullCheck(G_B3_1);
		G_B3_1->___ToggleInt_5 = G_B3_0;
		// SaveToggleSettings();
		vibrateToggle_SaveToggleSettings_m4D70D82EC04958979FDE18E3C5844E1A4C87A263(__this, NULL);
		// }
		return;
	}
}
// System.Void vibrateToggle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vibrateToggle_Update_m57990CE32ED87703C7838EB361DF96B8F1735468 (vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PlayerPrefs.GetInt(VibratePrefab) == 1)
		il2cpp_codegen_runtime_class_init_inline(vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_il2cpp_TypeInfo_var);
		String_t* L_0 = ((vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_StaticFields*)il2cpp_codegen_static_fields_for(vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_il2cpp_TypeInfo_var))->___VibratePrefab_6;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		// Toggle.isOn = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_2 = __this->___Toggle_4;
		NullCheck(L_2);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_2, (bool)1, NULL);
	}

IL_0019:
	{
		// if (PlayerPrefs.GetInt(VibratePrefab) == 0)
		il2cpp_codegen_runtime_class_init_inline(vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_il2cpp_TypeInfo_var);
		String_t* L_3 = ((vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_StaticFields*)il2cpp_codegen_static_fields_for(vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_il2cpp_TypeInfo_var))->___VibratePrefab_6;
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_3, NULL);
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		// Toggle.isOn = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_5 = __this->___Toggle_4;
		NullCheck(L_5);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_5, (bool)0, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void vibrateToggle::SaveToggleSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vibrateToggle_SaveToggleSettings_m4D70D82EC04958979FDE18E3C5844E1A4C87A263 (vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt(VibratePrefab, ToggleInt);
		il2cpp_codegen_runtime_class_init_inline(vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_il2cpp_TypeInfo_var);
		String_t* L_0 = ((vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_StaticFields*)il2cpp_codegen_static_fields_for(vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_il2cpp_TypeInfo_var))->___VibratePrefab_6;
		int32_t L_1 = __this->___ToggleInt_5;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void vibrateToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vibrateToggle__ctor_m32BDC4276D46EF8C0DB6AB4041378EF22E7B0155 (vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void vibrateToggle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vibrateToggle__cctor_m20D281599316C44DD38A2A4DB9D98EFE537D143B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string VibratePrefab = "Vibrate";
		((vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_StaticFields*)il2cpp_codegen_static_fields_for(vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_il2cpp_TypeInfo_var))->___VibratePrefab_6 = _stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0;
		Il2CppCodeGenWriteBarrier((void**)(&((vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_StaticFields*)il2cpp_codegen_static_fields_for(vibrateToggle_t508C8A1F6A21A47A2F5821C2D12E1BD3B48F146E_il2cpp_TypeInfo_var))->___VibratePrefab_6), (void*)_stringLiteralB28D0F35D53ED1EC61DC2352320DD31FC13085D0);
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
// System.Void VibrationExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrationExample_Start_mBCA55DC1DAF8099C6767BC56D95EFDD1B3B2045B (VibrationExample_tEA603AA8C1060DCCA08D5762F8EA24B93B32BE21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50D519035AC7B0E82E95D542C0F99BD8474E4F7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECFE313B68EFC32016FCE052290F55E45D5B1226);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// Vibration.Init ();
		Vibration_Init_m42350289879AD110521736CE3CB27085B3A08B72(NULL);
		// Debug.Log ( "Application.isMobilePlatform: " + Application.isMobilePlatform );
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralECFE313B68EFC32016FCE052290F55E45D5B1226, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// txtAndroidVersion.text = "Android Version: " + Vibration.AndroidVersion.ToString ();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___txtAndroidVersion_7;
		int32_t L_4;
		L_4 = Vibration_get_AndroidVersion_m95AF18750686B7A7749B0CC555B83A9894B33CE7(NULL);
		V_1 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral50D519035AC7B0E82E95D542C0F99BD8474E4F7F, L_5, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// }
		return;
	}
}
// System.Void VibrationExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrationExample_Update_mB541000807D251629428BCAE8F66FB5623DF17FB (VibrationExample_tEA603AA8C1060DCCA08D5762F8EA24B93B32BE21* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void VibrationExample::TapVibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrationExample_TapVibrate_m9FCCA4C50B6F180026446639F7C23BB2587B70EC (VibrationExample_tEA603AA8C1060DCCA08D5762F8EA24B93B32BE21* __this, const RuntimeMethod* method) 
{
	{
		// Vibration.Vibrate ();
		Vibration_Vibrate_mC92B909C0B0138210B675F4B5A646D5A1496B179(NULL);
		// }
		return;
	}
}
// System.Void VibrationExample::TapVibrateCustom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrationExample_TapVibrateCustom_mFF37704F2973B8FB5D58C3E8941099D4BA4C399F (VibrationExample_tEA603AA8C1060DCCA08D5762F8EA24B93B32BE21* __this, const RuntimeMethod* method) 
{
	{
		// Vibration.Vibrate ( int.Parse ( inputTime.text ) );
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___inputTime_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		int32_t L_2;
		L_2 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_1, NULL);
		Vibration_Vibrate_mADF65088F866DE4CA4BB7951F04F491248A9A737(((int64_t)L_2), NULL);
		// }
		return;
	}
}
// System.Void VibrationExample::TapVibratePattern()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrationExample_TapVibratePattern_m69D29207C42BF8B8483BBE07509BB04594157824 (VibrationExample_tEA603AA8C1060DCCA08D5762F8EA24B93B32BE21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_ConvertAll_TisString_t_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9E9CEE9F888F4B4476F6BBBF78CA83DC060FC36B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_2_tDCCB0EEAE7EC73B25607EF4747877FFE6B096D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_Parse_m9E80FE4757A602A2CAB8571284EC2B034C0D8BD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string[] patterns = inputPattern.text.Replace ( " ", "" ).Split ( ',' );
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___inputPattern_5;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_1, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_2, ((int32_t)44), 0, NULL);
		// long[] longs = Array.ConvertAll<string, long> ( patterns, long.Parse );
		Converter_2_tDCCB0EEAE7EC73B25607EF4747877FFE6B096D03* L_4 = (Converter_2_tDCCB0EEAE7EC73B25607EF4747877FFE6B096D03*)il2cpp_codegen_object_new(Converter_2_tDCCB0EEAE7EC73B25607EF4747877FFE6B096D03_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Converter_2__ctor_m3415BDE6B0FDACC85B99C64B75AFDE0EB356E7E7(L_4, NULL, (intptr_t)((void*)Int64_Parse_m9E80FE4757A602A2CAB8571284EC2B034C0D8BD7_RuntimeMethod_var), NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5;
		L_5 = Array_ConvertAll_TisString_t_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9E9CEE9F888F4B4476F6BBBF78CA83DC060FC36B(L_3, L_4, Array_ConvertAll_TisString_t_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9E9CEE9F888F4B4476F6BBBF78CA83DC060FC36B_RuntimeMethod_var);
		// Debug.Log ( longs.Length );
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_8, NULL);
		// Vibration.Vibrate ( longs, int.Parse ( inputRepeat.text ) );
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___inputRepeat_6;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_9);
		int32_t L_11;
		L_11 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_10, NULL);
		Vibration_Vibrate_m9FC2F2554F8E550C1B989AAE4AD496CE5D016CC2(L_6, L_11, NULL);
		// }
		return;
	}
}
// System.Void VibrationExample::TapCancelVibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrationExample_TapCancelVibrate_m7862756120EC4F7063C3ED1634B834E9A4DCBDE1 (VibrationExample_tEA603AA8C1060DCCA08D5762F8EA24B93B32BE21* __this, const RuntimeMethod* method) 
{
	{
		// Vibration.Cancel ();
		Vibration_Cancel_mD5302344039B1D072D6D3CC1B91E10A9D85B3360(NULL);
		// }
		return;
	}
}
// System.Void VibrationExample::TapPopVibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrationExample_TapPopVibrate_mE49ADC9D23E69283988B1851B1D579816CAF3893 (VibrationExample_tEA603AA8C1060DCCA08D5762F8EA24B93B32BE21* __this, const RuntimeMethod* method) 
{
	{
		// Vibration.VibratePop ();
		Vibration_VibratePop_mB640A3E4B33793A25830715702DC2DA32BBACB15(NULL);
		// }
		return;
	}
}
// System.Void VibrationExample::TapPeekVibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrationExample_TapPeekVibrate_m62B9BC2B560864CAA67BB5D24F351E915D164E43 (VibrationExample_tEA603AA8C1060DCCA08D5762F8EA24B93B32BE21* __this, const RuntimeMethod* method) 
{
	{
		// Vibration.VibratePeek ();
		Vibration_VibratePeek_mBA7E38EDFB462E77176E68D364CD6F835D24069B(NULL);
		// }
		return;
	}
}
// System.Void VibrationExample::TapNopeVibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrationExample_TapNopeVibrate_m3700B3923978ADB0D05FEC4D74D327D7C3015960 (VibrationExample_tEA603AA8C1060DCCA08D5762F8EA24B93B32BE21* __this, const RuntimeMethod* method) 
{
	{
		// Vibration.VibrateNope ();
		Vibration_VibrateNope_m93CE9D3F9C2CCA9AA43524337E50DE1F30F4A8D6(NULL);
		// }
		return;
	}
}
// System.Void VibrationExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VibrationExample__ctor_mBF178E873650F1356EAAE7D7A5084FFE1C7E64B6 (VibrationExample_tEA603AA8C1060DCCA08D5762F8EA24B93B32BE21* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Vibration::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vibration_Init_m42350289879AD110521736CE3CB27085B3A08B72 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D079C3282CD7D084E678D9C90C09135FD4E8F75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral943C8FF538819688439782F2AEDB69F222317B17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A053A49693D46963A63E83B4F75CF40EED8D8FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( initialized ) return;
		bool L_0 = ((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___initialized_5;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if ( initialized ) return;
		return;
	}

IL_0008:
	{
		// if ( Application.isMobilePlatform ) {
		bool L_1;
		L_1 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		if (!L_1)
		{
			goto IL_0085;
		}
	}
	{
		// unityPlayer = new AndroidJavaClass ( "com.unity3d.player.UnityPlayer" );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___unityPlayer_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___unityPlayer_0), (void*)L_2);
		// currentActivity = unityPlayer.GetStatic<AndroidJavaObject> ( "currentActivity" );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = ((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___unityPlayer_0;
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___currentActivity_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___currentActivity_1), (void*)L_4);
		// vibrator = currentActivity.Call<AndroidJavaObject> ( "getSystemService", "vibrator" );
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___currentActivity_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral943C8FF538819688439782F2AEDB69F222317B17);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral943C8FF538819688439782F2AEDB69F222317B17);
		NullCheck(L_5);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_5, _stringLiteral9A053A49693D46963A63E83B4F75CF40EED8D8FD, L_7, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___vibrator_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___vibrator_2), (void*)L_8);
		// context = currentActivity.Call<AndroidJavaObject> ( "getApplicationContext" );
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = ((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___currentActivity_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_9);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11;
		L_11 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_9, _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9, L_10, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___context_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___context_3), (void*)L_11);
		// if ( AndroidVersion >= 26 ) {
		int32_t L_12;
		L_12 = Vibration_get_AndroidVersion_m95AF18750686B7A7749B0CC555B83A9894B33CE7(NULL);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)26))))
		{
			goto IL_0085;
		}
	}
	{
		// vibrationEffect = new AndroidJavaClass ( "android.os.VibrationEffect" );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_13 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_13, _stringLiteral3D079C3282CD7D084E678D9C90C09135FD4E8F75, NULL);
		((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___vibrationEffect_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___vibrationEffect_4), (void*)L_13);
	}

IL_0085:
	{
		// initialized = true;
		((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___initialized_5 = (bool)1;
		// }
		return;
	}
}
// System.Void Vibration::VibratePop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vibration_VibratePop_mB640A3E4B33793A25830715702DC2DA32BBACB15 (const RuntimeMethod* method) 
{
	{
		// if ( Application.isMobilePlatform ) {
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// Vibrate ( 50 );
		Vibration_Vibrate_mADF65088F866DE4CA4BB7951F04F491248A9A737(((int64_t)((int32_t)50)), NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void Vibration::VibratePeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vibration_VibratePeek_mBA7E38EDFB462E77176E68D364CD6F835D24069B (const RuntimeMethod* method) 
{
	{
		// if ( Application.isMobilePlatform ) {
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// Vibrate ( 100 );
		Vibration_Vibrate_mADF65088F866DE4CA4BB7951F04F491248A9A737(((int64_t)((int32_t)100)), NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void Vibration::VibrateNope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vibration_VibrateNope_m93CE9D3F9C2CCA9AA43524337E50DE1F30F4A8D6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____FA99786BA4D946A38F43D6C851557B041F1D653A734F23157F46162449D185AE_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( Application.isMobilePlatform ) {
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// long[] pattern = { 0, 50, 50, 50 };
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)4);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____FA99786BA4D946A38F43D6C851557B041F1D653A734F23157F46162449D185AE_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_2, L_3, NULL);
		// Vibrate ( pattern, -1 );
		Vibration_Vibrate_m9FC2F2554F8E550C1B989AAE4AD496CE5D016CC2(L_2, (-1), NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Vibration::Vibrate(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vibration_Vibrate_mADF65088F866DE4CA4BB7951F04F491248A9A737 (int64_t ___milliseconds0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1645079AF0AD68877D5774BC81695A708DB69E30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B983133C476E84E06D0813B8B52F2D1FAD2C022);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// if ( Application.isMobilePlatform ) {
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		if (!L_0)
		{
			goto IL_0070;
		}
	}
	{
		// if ( AndroidVersion >= 26 ) {
		int32_t L_1;
		L_1 = Vibration_get_AndroidVersion_m95AF18750686B7A7749B0CC555B83A9894B33CE7(NULL);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)26))))
		{
			goto IL_0052;
		}
	}
	{
		// AndroidJavaObject createOneShot = vibrationEffect.CallStatic<AndroidJavaObject> ( "createOneShot", milliseconds, -1 );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = ((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___vibrationEffect_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int64_t L_5 = ___milliseconds0;
		int64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = (-1);
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11;
		L_11 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_2, _stringLiteral8B983133C476E84E06D0813B8B52F2D1FAD2C022, L_8, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		V_0 = L_11;
		// vibrator.Call ( "vibrate", createOneShot );
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = ((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___vibrator_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = V_0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		NullCheck(L_12);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_12, _stringLiteral1645079AF0AD68877D5774BC81695A708DB69E30, L_14, NULL);
		return;
	}

IL_0052:
	{
		// vibrator.Call ( "vibrate", milliseconds );
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = ((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___vibrator_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
		int64_t L_19 = ___milliseconds0;
		int64_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_21);
		NullCheck(L_16);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_16, _stringLiteral1645079AF0AD68877D5774BC81695A708DB69E30, L_18, NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void Vibration::Vibrate(System.Int64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vibration_Vibrate_m9FC2F2554F8E550C1B989AAE4AD496CE5D016CC2 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___pattern0, int32_t ___repeat1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1645079AF0AD68877D5774BC81695A708DB69E30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A105D59F493421481242819787FDF8AA700AF8);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// if ( Application.isMobilePlatform ) {
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		// if ( AndroidVersion >= 26 ) {
		int32_t L_1;
		L_1 = Vibration_get_AndroidVersion_m95AF18750686B7A7749B0CC555B83A9894B33CE7(NULL);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)26))))
		{
			goto IL_004d;
		}
	}
	{
		// AndroidJavaObject createWaveform = vibrationEffect.CallStatic<AndroidJavaObject> ( "createWaveform", pattern, repeat );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = ((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___vibrationEffect_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = ___pattern0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		int32_t L_7 = ___repeat1;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10;
		L_10 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_2, _stringLiteralE3A105D59F493421481242819787FDF8AA700AF8, L_6, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		V_0 = L_10;
		// vibrator.Call ( "vibrate", createWaveform );
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = ((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___vibrator_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = V_0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_14);
		NullCheck(L_11);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_11, _stringLiteral1645079AF0AD68877D5774BC81695A708DB69E30, L_13, NULL);
		return;
	}

IL_004d:
	{
		// vibrator.Call ( "vibrate", pattern, repeat );
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = ((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___vibrator_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_18 = ___pattern0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		int32_t L_20 = ___repeat1;
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_22);
		NullCheck(L_15);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_15, _stringLiteral1645079AF0AD68877D5774BC81695A708DB69E30, L_19, NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void Vibration::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vibration_Cancel_mD5302344039B1D072D6D3CC1B91E10A9D85B3360 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39F2389D0FCAC5B1FAF79ECA2AEB00BBAA5F516D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( Application.isMobilePlatform ) {
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// vibrator.Call ( "cancel" );
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___vibrator_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteral39F2389D0FCAC5B1FAF79ECA2AEB00BBAA5F516D, L_2, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Boolean Vibration::HasVibrator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vibration_HasVibrator_mC1DE8B10402D31494546FFBCB63EF7373DC314D9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral199659E60DA2099DECBF611A47EE96A7272DDACE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EE3F2D6D41F843A084FC0BC0BBB37F1547FE7A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A053A49693D46963A63E83B4F75CF40EED8D8FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA88447E4CCDBC9C10B1993A3C4FF4BF4075BF9D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if ( Application.isMobilePlatform ) {
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		// AndroidJavaClass contextClass = new AndroidJavaClass ( "android.content.Context" );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral5EE3F2D6D41F843A084FC0BC0BBB37F1547FE7A5, NULL);
		// string Context_VIBRATOR_SERVICE = contextClass.GetStatic<string> ( "VIBRATOR_SERVICE" );
		NullCheck(L_1);
		String_t* L_2;
		L_2 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_1, _stringLiteralFA88447E4CCDBC9C10B1993A3C4FF4BF4075BF9D, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		V_0 = L_2;
		// AndroidJavaObject systemService = context.Call<AndroidJavaObject> ( "getSystemService", Context_VIBRATOR_SERVICE );
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ((Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_StaticFields*)il2cpp_codegen_static_fields_for(Vibration_t7916F940859FB83231F3C6CD2A017D1CA9B9B497_il2cpp_TypeInfo_var))->___context_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_3, _stringLiteral9A053A49693D46963A63E83B4F75CF40EED8D8FD, L_5, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// if ( systemService.Call<bool> ( "hasVibrator" ) ) {
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
		L_8 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_7);
		bool L_9;
		L_9 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_7, _stringLiteral199659E60DA2099DECBF611A47EE96A7272DDACE, L_8, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0048:
	{
		// return false;
		return (bool)0;
	}

IL_004a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Vibration::Vibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vibration_Vibrate_mC92B909C0B0138210B675F4B5A646D5A1496B179 (const RuntimeMethod* method) 
{
	{
		// if ( Application.isMobilePlatform ) {
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// Handheld.Vibrate ();
		Handheld_Vibrate_m2754B354B0DEE7D571D82D4C990DD2D53CF6A556(NULL);
	}

IL_000c:
	{
		// }
		return;
	}
}
// System.Int32 Vibration::get_AndroidVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vibration_get_AndroidVersion_m95AF18750686B7A7749B0CC555B83A9894B33CE7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70A70A786B560F707B20D6A71C6590E9EA3F6DB1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int iVersionNumber = 0;
		V_0 = 0;
		// if ( Application.platform == RuntimePlatform.Android ) {
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0030;
		}
	}
	{
		// string androidVersion = SystemInfo.operatingSystem;
		String_t* L_1;
		L_1 = SystemInfo_get_operatingSystem_m441DFAEFA81C9B5AF19D5C486469EDBD674490A8(NULL);
		// int sdkPos = androidVersion.IndexOf ( "API-" );
		String_t* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_2, _stringLiteral70A70A786B560F707B20D6A71C6590E9EA3F6DB1, NULL);
		V_1 = L_3;
		// iVersionNumber = int.Parse ( androidVersion.Substring ( sdkPos + 4, 2 ).ToString () );
		int32_t L_4 = V_1;
		NullCheck(L_2);
		String_t* L_5;
		L_5 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_2, ((int32_t)il2cpp_codegen_add(L_4, 4)), 2, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		int32_t L_7;
		L_7 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_6, NULL);
		V_0 = L_7;
	}

IL_0030:
	{
		// return iVersionNumber;
		int32_t L_8 = V_0;
		return L_8;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}

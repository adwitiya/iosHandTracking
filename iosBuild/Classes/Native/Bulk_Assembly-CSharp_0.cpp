#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// ApplicationManager
struct ApplicationManager_t3254129643;
// BWEffect
struct BWEffect_t874564846;
// BackgroundModeButtonSelector
struct BackgroundModeButtonSelector_t3867668448;
// BoundingBoxUI
struct BoundingBoxUI_t541593408;
// BoundingBoxUI[]
struct BoundingBoxUIU5BU5D_t466324417;
// CalibrationArea
struct CalibrationArea_t2245642022;
// Category
struct Category_t1110218350;
// Category/<AlignIcons>c__Iterator1
struct U3CAlignIconsU3Ec__Iterator1_t2874318377;
// Category/<Calculate>c__Iterator0
struct U3CCalculateU3Ec__Iterator0_t1249670162;
// CategoryManager
struct CategoryManager_t1388308348;
// CategoryManager/<PositionCategoriesAfter>c__Iterator0
struct U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547;
// GizmoManager
struct GizmoManager_t3350963123;
// GrabPass
struct GrabPass_t3251792315;
// Grayscale
struct Grayscale_t659308017;
// HandDetectionModeButtonBehavior
struct HandDetectionModeButtonBehavior_t259638122;
// HandInfo
struct HandInfo_t3661823187;
// HandInfoUnity[]
struct HandInfoUnityU5BU5D_t4085119228;
// InstructionsManager
struct InstructionsManager_t4057271102;
// InteractionArea
struct InteractionArea_t1281659222;
// ManoCalibration
struct ManoCalibration_t699436447;
// ManoCalibration/<Calibrate>c__Iterator0
struct U3CCalibrateU3Ec__Iterator0_t904254568;
// ManoEvents
struct ManoEvents_t757003538;
// ManoEvents/ManoEvent
struct ManoEvent_t2837598491;
// ManoUtils
struct ManoUtils_t3463694697;
// ManoVisualization
struct ManoVisualization_t1421820612;
// ManoVisualization/<FadeColorAfterDelay>c__Iterator0
struct U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384;
// ManomotionManager
struct ManomotionManager_t565502280;
// ManomotionUIManagment
struct ManomotionUIManagment_t1133875195;
// MenuManager
struct MenuManager_t2761117704;
// MenuOrientation
struct MenuOrientation_t2641058044;
// MenuOrientation/OrientationChange
struct OrientationChange_t2630486480;
// SwipeInput
struct SwipeInput_t4249063973;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Void
struct Void_t1185182177;
// ToggleGizmos
struct ToggleGizmos_t1626358663;
// ToggleUIRow
struct ToggleUIRow_t356789805;
// ToggleVisualizationValues
struct ToggleVisualizationValues_t3491163021;
// TrackingInfo
struct TrackingInfo_t3990182144;
// TwoHandSupport
struct TwoHandSupport_t1057924416;
// UIIconBehavior
struct UIIconBehavior_t2038039704;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2581268647;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[0...,0...]
struct GameObjectU5B0___U2C0___U5D_t3328599147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.LineRenderer
struct LineRenderer_t3154350270;
// UnityEngine.LineRenderer[]
struct LineRendererU5BU5D_t976293515;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MeshRenderer
struct MeshRenderer_t587009260;
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_t2132764133;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.TextMesh
struct TextMesh_t1536577757;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Touch[]
struct TouchU5BU5D_t1849554061;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// UnityEngine.Transform[][]
struct TransformU5BU5DU5BU5D_t2335906965;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2297175928;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t2439009922;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t4294070825;
// UnityEngine.WebCamTexture
struct WebCamTexture_t1514609158;

extern RuntimeClass* ApplicationManager_t3254129643_il2cpp_TypeInfo_var;
extern RuntimeClass* BoundingBoxUIU5BU5D_t466324417_il2cpp_TypeInfo_var;
extern RuntimeClass* CategoryManager_t1388308348_il2cpp_TypeInfo_var;
extern RuntimeClass* Color32U5BU5D_t3850468773_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObjectU5B0___U2C0___U5D_t3328599147_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* GizmoManager_t3350963123_il2cpp_TypeInfo_var;
extern RuntimeClass* Graphics_t783367614_il2cpp_TypeInfo_var;
extern RuntimeClass* HandInfoUnityU5BU5D_t4085119228_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* InstructionsManager_t4057271102_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* LineRendererU5BU5D_t976293515_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern RuntimeClass* ManoCalibration_t699436447_il2cpp_TypeInfo_var;
extern RuntimeClass* ManoEvent_t2837598491_il2cpp_TypeInfo_var;
extern RuntimeClass* ManoEvents_t757003538_il2cpp_TypeInfo_var;
extern RuntimeClass* ManoUtils_t3463694697_il2cpp_TypeInfo_var;
extern RuntimeClass* ManomotionManager_t565502280_il2cpp_TypeInfo_var;
extern RuntimeClass* Material_t340375123_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* MenuOrientation_t2641058044_il2cpp_TypeInfo_var;
extern RuntimeClass* MeshRendererU5BU5D_t2132764133_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* OrientationChange_t2630486480_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* ToggleUIRow_t356789805_il2cpp_TypeInfo_var;
extern RuntimeClass* TransformU5BU5DU5BU5D_t2335906965_il2cpp_TypeInfo_var;
extern RuntimeClass* TransformU5BU5D_t807237628_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CAlignIconsU3Ec__Iterator1_t2874318377_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CCalculateU3Ec__Iterator0_t1249670162_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CCalibrateU3Ec__Iterator0_t904254568_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_t3245792599_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern RuntimeClass* WebCamTexture_t1514609158_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral103808004;
extern String_t* _stringLiteral1048603959;
extern String_t* _stringLiteral1053060875;
extern String_t* _stringLiteral1056289935;
extern String_t* _stringLiteral1126222431;
extern String_t* _stringLiteral1136159307;
extern String_t* _stringLiteral1136951736;
extern String_t* _stringLiteral1191393827;
extern String_t* _stringLiteral1202992997;
extern String_t* _stringLiteral1280553607;
extern String_t* _stringLiteral1332919482;
extern String_t* _stringLiteral1335211471;
extern String_t* _stringLiteral1374822268;
extern String_t* _stringLiteral1401107910;
extern String_t* _stringLiteral1411260438;
extern String_t* _stringLiteral145536416;
extern String_t* _stringLiteral1505233648;
extern String_t* _stringLiteral1615928643;
extern String_t* _stringLiteral1654389065;
extern String_t* _stringLiteral1661725156;
extern String_t* _stringLiteral1661725157;
extern String_t* _stringLiteral1859541978;
extern String_t* _stringLiteral1865470623;
extern String_t* _stringLiteral2053565589;
extern String_t* _stringLiteral2065537912;
extern String_t* _stringLiteral2067140013;
extern String_t* _stringLiteral2091876680;
extern String_t* _stringLiteral2097867494;
extern String_t* _stringLiteral2207933956;
extern String_t* _stringLiteral228252146;
extern String_t* _stringLiteral2290260569;
extern String_t* _stringLiteral2305519984;
extern String_t* _stringLiteral2323893671;
extern String_t* _stringLiteral2382919665;
extern String_t* _stringLiteral2409795906;
extern String_t* _stringLiteral2553712224;
extern String_t* _stringLiteral2565379526;
extern String_t* _stringLiteral2573074067;
extern String_t* _stringLiteral2584261539;
extern String_t* _stringLiteral2650608877;
extern String_t* _stringLiteral2703724416;
extern String_t* _stringLiteral2756225712;
extern String_t* _stringLiteral2813438880;
extern String_t* _stringLiteral2818667124;
extern String_t* _stringLiteral2832136060;
extern String_t* _stringLiteral2833616318;
extern String_t* _stringLiteral3005200362;
extern String_t* _stringLiteral3208958723;
extern String_t* _stringLiteral3211649803;
extern String_t* _stringLiteral321369003;
extern String_t* _stringLiteral3242180649;
extern String_t* _stringLiteral326140460;
extern String_t* _stringLiteral3266464985;
extern String_t* _stringLiteral3347781157;
extern String_t* _stringLiteral3406298716;
extern String_t* _stringLiteral3451434970;
extern String_t* _stringLiteral3452614544;
extern String_t* _stringLiteral3456122812;
extern String_t* _stringLiteral3493619321;
extern String_t* _stringLiteral3519606079;
extern String_t* _stringLiteral3526709249;
extern String_t* _stringLiteral3592064769;
extern String_t* _stringLiteral3605615956;
extern String_t* _stringLiteral362697042;
extern String_t* _stringLiteral3669834792;
extern String_t* _stringLiteral3715273391;
extern String_t* _stringLiteral3744473304;
extern String_t* _stringLiteral3789898458;
extern String_t* _stringLiteral3793920202;
extern String_t* _stringLiteral3801568913;
extern String_t* _stringLiteral3850736999;
extern String_t* _stringLiteral3856614199;
extern String_t* _stringLiteral3891636781;
extern String_t* _stringLiteral3957048425;
extern String_t* _stringLiteral3967813675;
extern String_t* _stringLiteral4035306809;
extern String_t* _stringLiteral4079432750;
extern String_t* _stringLiteral410892746;
extern String_t* _stringLiteral4119825963;
extern String_t* _stringLiteral416089558;
extern String_t* _stringLiteral4239595059;
extern String_t* _stringLiteral4286212219;
extern String_t* _stringLiteral462454621;
extern String_t* _stringLiteral481518672;
extern String_t* _stringLiteral558737761;
extern String_t* _stringLiteral604406464;
extern String_t* _stringLiteral61421061;
extern String_t* _stringLiteral640906131;
extern String_t* _stringLiteral673443485;
extern String_t* _stringLiteral797641419;
extern String_t* _stringLiteral835293500;
extern String_t* _stringLiteral885495112;
extern const RuntimeMethod* CategoryManager_PositionCategories_m4212116905_RuntimeMethod_var;
extern const RuntimeMethod* Category_CalculateDimensions_m4154216520_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisTextMesh_t1536577757_m1883617852_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisButton_t4055032469_m1381873113_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisGizmoManager_t3350963123_m91259053_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisLineRenderer_t3154350270_m1658315391_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisManoVisualization_t1421820612_m3996609868_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisTextMesh_t1536577757_m1070281259_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisTransform_t3600365921_m1200784320_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisLineRenderer_t3154350270_m2920077551_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisBoundingBoxUI_t541593408_m956544729_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisCategory_t1110218350_m2330124262_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisHandDetectionModeButtonBehavior_t259638122_m1201928477_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m697420525_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m2154023298_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1628857705_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m361000296_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m888956288_RuntimeMethod_var;
extern const RuntimeMethod* ManoVisualization_AdjustcorrectionRatio_m611340864_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisTransform_t3600365921_m3433092333_RuntimeMethod_var;
extern const RuntimeMethod* ToggleUIRow_ClickedBackgroundMode_m3422804074_RuntimeMethod_var;
extern const RuntimeMethod* ToggleUIRow_ClickedMenuButoon_m629596037_RuntimeMethod_var;
extern const RuntimeMethod* U3CAlignIconsU3Ec__Iterator1_Reset_m1097718101_RuntimeMethod_var;
extern const RuntimeMethod* U3CCalculateU3Ec__Iterator0_Reset_m4245667973_RuntimeMethod_var;
extern const RuntimeMethod* U3CCalibrateU3Ec__Iterator0_Reset_m196198914_RuntimeMethod_var;
extern const RuntimeMethod* U3CFadeColorAfterDelayU3Ec__Iterator0_Reset_m2425417101_RuntimeMethod_var;
extern const RuntimeMethod* U3CPositionCategoriesAfterU3Ec__Iterator0_Reset_m3637728035_RuntimeMethod_var;
extern const uint32_t ApplicationManager_Awake_m407904840_MetadataUsageId;
extern const uint32_t ApplicationManager_get_Instance_m1871727214_MetadataUsageId;
extern const uint32_t ApplicationManager_set_Instance_m3627480815_MetadataUsageId;
extern const uint32_t BWEffect_Awake_m1292441030_MetadataUsageId;
extern const uint32_t BWEffect_OnRenderImage_m3966362791_MetadataUsageId;
extern const uint32_t BackgroundModeButtonSelector_Start_m2560814202_MetadataUsageId;
extern const uint32_t BoundingBoxUI_UpdateInfo_m812903281_MetadataUsageId;
extern const uint32_t CategoryManager_Awake_m2478157640_MetadataUsageId;
extern const uint32_t CategoryManager_PositionCategoriesAfter_m1864741891_MetadataUsageId;
extern const uint32_t CategoryManager_Start_m3470368898_MetadataUsageId;
extern const uint32_t CategoryManager_get_Instance_m3818612611_MetadataUsageId;
extern const uint32_t CategoryManager_set_Instance_m852071690_MetadataUsageId;
extern const uint32_t Category_AlignIcons_m1574798448_MetadataUsageId;
extern const uint32_t Category_Calculate_m208315117_MetadataUsageId;
extern const uint32_t Category_InitializeUIValues_m2246248377_MetadataUsageId;
extern const uint32_t Category_Start_m4085259045_MetadataUsageId;
extern const uint32_t GizmoManager_DisplayContinuousGesture_m3731156484_MetadataUsageId;
extern const uint32_t GizmoManager_DisplayManoclass_m1731841311_MetadataUsageId;
extern const uint32_t GizmoManager_DisplayRotationGizmo_m2044688722_MetadataUsageId;
extern const uint32_t GizmoManager_DisplayTriggerGesture_m1947760828_MetadataUsageId;
extern const uint32_t GizmoManager_SetDepthGizmoParts_m2950274697_MetadataUsageId;
extern const uint32_t GizmoManager_SetGestureDescriptionParts_m1448043559_MetadataUsageId;
extern const uint32_t GizmoManager_SetRotationGizmoParts_m3918050831_MetadataUsageId;
extern const uint32_t GizmoManager_Start_m1732806194_MetadataUsageId;
extern const uint32_t GizmoManager_get_Instance_m3631841779_MetadataUsageId;
extern const uint32_t GizmoManager_set_Instance_m1806799066_MetadataUsageId;
extern const uint32_t GrabPass_Awake_m1270351104_MetadataUsageId;
extern const uint32_t GrabPass_Update_m3930286213_MetadataUsageId;
extern const uint32_t Grayscale_Awake_m464093682_MetadataUsageId;
extern const uint32_t Grayscale_OnRenderImage_m3063846902_MetadataUsageId;
extern const uint32_t HandDetectionModeButtonBehavior_SelectHandDetectionMode_m2274407642_MetadataUsageId;
extern const uint32_t InstructionsManager_Awake_m3648086290_MetadataUsageId;
extern const uint32_t InstructionsManager_ForceInstructions_m1967337545_MetadataUsageId;
extern const uint32_t InstructionsManager_StartInstructions_m4068909607_MetadataUsageId;
extern const uint32_t InstructionsManager_UpdateVisualComponents_m4250240927_MetadataUsageId;
extern const uint32_t InstructionsManager_get_Instance_m729986502_MetadataUsageId;
extern const uint32_t InstructionsManager_set_Instance_m1537497967_MetadataUsageId;
extern const uint32_t InteractionArea_Start_m1456313097_MetadataUsageId;
extern const uint32_t ManoCalibration_Calibrate_m3265996810_MetadataUsageId;
extern const uint32_t ManoCalibration_DetectCalibration_m3995771785_MetadataUsageId;
extern const uint32_t ManoCalibration_LoadCalibration_m3892309791_MetadataUsageId;
extern const uint32_t ManoCalibration_SaveCalibration_m2986985369_MetadataUsageId;
extern const uint32_t ManoCalibration_Start_m2200442273_MetadataUsageId;
extern const uint32_t ManoCalibration_get_Instance_m3658540507_MetadataUsageId;
extern const uint32_t ManoCalibration_set_Instance_m2832289072_MetadataUsageId;
extern const uint32_t ManoEvents_Awake_m1811135084_MetadataUsageId;
extern const uint32_t ManoEvents_DisplayLogMessage_m1291210979_MetadataUsageId;
extern const uint32_t ManoEvents_HandleManomotionMessages_m1985167583_MetadataUsageId;
extern const uint32_t ManoEvents__ctor_m2529373155_MetadataUsageId;
extern const uint32_t ManoEvents_add_OnCalibrationFailed_m1497540964_MetadataUsageId;
extern const uint32_t ManoEvents_add_OnCalibrationSuccess_m1488224112_MetadataUsageId;
extern const uint32_t ManoEvents_get_Instance_m3054493996_MetadataUsageId;
extern const uint32_t ManoEvents_remove_OnCalibrationFailed_m3291517799_MetadataUsageId;
extern const uint32_t ManoEvents_remove_OnCalibrationSuccess_m129815440_MetadataUsageId;
extern const uint32_t ManoEvents_set_Instance_m295419745_MetadataUsageId;
extern const uint32_t ManoUtils_AjustBorders_m2636642314_MetadataUsageId;
extern const uint32_t ManoUtils_Awake_m2644807939_MetadataUsageId;
extern const uint32_t ManoUtils_CalculateNewPosition_m854440501_MetadataUsageId;
extern const uint32_t ManoUtils_VectorAbs_m1236136217_MetadataUsageId;
extern const uint32_t ManoUtils__ctor_m569204907_MetadataUsageId;
extern const uint32_t ManoUtils_get_Instance_m912192132_MetadataUsageId;
extern const uint32_t ManoVisualization_AdjustcorrectionRatio_m611340864_MetadataUsageId;
extern const uint32_t ManoVisualization_CreateBoundingBoxes_m5014831_MetadataUsageId;
extern const uint32_t ManoVisualization_CreateContourParticles_m3062722412_MetadataUsageId;
extern const uint32_t ManoVisualization_CreateFingerTipLabelParticles_m2612068125_MetadataUsageId;
extern const uint32_t ManoVisualization_CreateFingerTipParticles_m3661147252_MetadataUsageId;
extern const uint32_t ManoVisualization_CreateInnerParticles_m3288915901_MetadataUsageId;
extern const uint32_t ManoVisualization_CreatePalmCenterParticle_m3112594675_MetadataUsageId;
extern const uint32_t ManoVisualization_FadeColorAfterDelay_m910648034_MetadataUsageId;
extern const uint32_t ManoVisualization_InstantiateManomotionMeshes_m3412892994_MetadataUsageId;
extern const uint32_t ManoVisualization_SetPointsBasedOnHandNumber_m3584150994_MetadataUsageId;
extern const uint32_t ManoVisualization_ShowBackground_m178765366_MetadataUsageId;
extern const uint32_t ManoVisualization_ShowFingerTips_m2583851885_MetadataUsageId;
extern const uint32_t ManoVisualization_ShowInnerPoints_m1700325034_MetadataUsageId;
extern const uint32_t ManoVisualization_ShowLayering_m1603922788_MetadataUsageId;
extern const uint32_t ManoVisualization_ShowPalmCenter_m3667673413_MetadataUsageId;
extern const uint32_t ManoVisualization_Start_m3586912147_MetadataUsageId;
extern const uint32_t ManoVisualization_UpdatePalmColor_m192033858_MetadataUsageId;
extern const uint32_t ManoVisualization_Update_m607741188_MetadataUsageId;
extern const uint32_t ManoVisualization__ctor_m3299232695_MetadataUsageId;
extern const uint32_t ManomotionManager_Awake_m3342334431_MetadataUsageId;
extern const uint32_t ManomotionManager_CalculateProcessingTime_m262869436_MetadataUsageId;
extern const uint32_t ManomotionManager_InitiateLibrary_m1366715823_MetadataUsageId;
extern const uint32_t ManomotionManager_InitiateTextures_m1798072223_MetadataUsageId;
extern const uint32_t ManomotionManager_InstantiateHandInfos_m1635090002_MetadataUsageId;
extern const uint32_t ManomotionManager_InstantiateVisualisationInfo_m570477272_MetadataUsageId;
extern const uint32_t ManomotionManager_ProcessManomotion_m2809079058_MetadataUsageId;
extern const uint32_t ManomotionManager_SetHandInfo_m1989486101_MetadataUsageId;
extern const uint32_t ManomotionManager_SetManoManagerVariables_m667905901_MetadataUsageId;
extern const uint32_t ManomotionManager_SetVisualizationInfo_m3407118122_MetadataUsageId;
extern const uint32_t ManomotionManager_StartWebCamTexture_m758989726_MetadataUsageId;
extern const uint32_t ManomotionManager_UpdateOrientation_m3935688125_MetadataUsageId;
extern const uint32_t ManomotionManager_Update_m408114061_MetadataUsageId;
extern const uint32_t ManomotionManager__ctor_m1117834695_MetadataUsageId;
extern const uint32_t ManomotionManager_get_Instance_m1503785506_MetadataUsageId;
extern const uint32_t ManomotionUIManagment_UpdateProcessingTime_m2069571183_MetadataUsageId;
extern const uint32_t MenuManager_Start_m2906916493_MetadataUsageId;
extern const uint32_t MenuOrientation_CheckForScreenOrientationChange_m1694487744_MetadataUsageId;
extern const uint32_t MenuOrientation_OnEnable_m3958811327_MetadataUsageId;
extern const uint32_t MenuOrientation_add_OnOrientationChanged_m1240686245_MetadataUsageId;
extern const uint32_t MenuOrientation_remove_OnOrientationChanged_m808801842_MetadataUsageId;
extern const uint32_t SwipeInput_DetectSwipe_m2790431000_MetadataUsageId;
extern const uint32_t SwipeInput_EvaluateTouch_m4092136656_MetadataUsageId;
extern const uint32_t ToggleGizmos_Start_m1683588176_MetadataUsageId;
extern const uint32_t ToggleUIRow_Start_m3436007693_MetadataUsageId;
extern const uint32_t ToggleUIRow_get_Instance_m3991570607_MetadataUsageId;
extern const uint32_t ToggleVisualizationValues_Start_m3570687182_MetadataUsageId;
extern const uint32_t TrackingInfo_t3990182144_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t TrackingInfo_t3990182144_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t TwoHandSupport_Update_m3412762990_MetadataUsageId;
extern const uint32_t U3CAlignIconsU3Ec__Iterator1_MoveNext_m3147411907_MetadataUsageId;
extern const uint32_t U3CAlignIconsU3Ec__Iterator1_Reset_m1097718101_MetadataUsageId;
extern const uint32_t U3CCalculateU3Ec__Iterator0_MoveNext_m1408248546_MetadataUsageId;
extern const uint32_t U3CCalculateU3Ec__Iterator0_Reset_m4245667973_MetadataUsageId;
extern const uint32_t U3CCalibrateU3Ec__Iterator0_MoveNext_m2043742850_MetadataUsageId;
extern const uint32_t U3CCalibrateU3Ec__Iterator0_Reset_m196198914_MetadataUsageId;
extern const uint32_t U3CFadeColorAfterDelayU3Ec__Iterator0_MoveNext_m3483890930_MetadataUsageId;
extern const uint32_t U3CFadeColorAfterDelayU3Ec__Iterator0_Reset_m2425417101_MetadataUsageId;
extern const uint32_t U3CPositionCategoriesAfterU3Ec__Iterator0_MoveNext_m1585220542_MetadataUsageId;
extern const uint32_t U3CPositionCategoriesAfterU3Ec__Iterator0_Reset_m3637728035_MetadataUsageId;
extern const uint32_t UIIconBehavior_Start_m500251274_MetadataUsageId;
struct HandInfo_t3661823187;;
struct HandInfo_t3661823187_marshaled_com;
struct HandInfo_t3661823187_marshaled_com;;
struct HandInfo_t3661823187_marshaled_pinvoke;
struct HandInfo_t3661823187_marshaled_pinvoke;;
struct TrackingInfo_t3990182144;;
struct TrackingInfo_t3990182144_marshaled_com;
struct TrackingInfo_t3990182144_marshaled_com;;
struct TrackingInfo_t3990182144_marshaled_pinvoke;
struct TrackingInfo_t3990182144_marshaled_pinvoke;;
struct Vector3_t3722313464 ;

struct BoundingBoxUIU5BU5D_t466324417;
struct HandInfoUnityU5BU5D_t4085119228;
struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;
struct Color32U5BU5D_t3850468773;
struct GameObjectU5B0___U2C0___U5D_t3328599147;
struct GameObjectU5BU5D_t3328599146;
struct LineRendererU5BU5D_t976293515;
struct MeshRendererU5BU5D_t2132764133;
struct TouchU5BU5D_t1849554061;
struct TransformU5BU5D_t807237628;
struct TransformU5BU5DU5BU5D_t2335906965;
struct ButtonU5BU5D_t2297175928;
struct ImageU5BU5D_t2439009922;
struct Vector3U5BU5D_t1718750761;
struct WebCamDeviceU5BU5D_t4294070825;


#ifndef U3CMODULEU3E_T692745545_H
#define U3CMODULEU3E_T692745545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745545 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745545_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CALIGNICONSU3EC__ITERATOR1_T2874318377_H
#define U3CALIGNICONSU3EC__ITERATOR1_T2874318377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Category/<AlignIcons>c__Iterator1
struct  U3CAlignIconsU3Ec__Iterator1_t2874318377  : public RuntimeObject
{
public:
	// System.Int32 Category/<AlignIcons>c__Iterator1::<totalNumber>__0
	int32_t ___U3CtotalNumberU3E__0_0;
	// Category Category/<AlignIcons>c__Iterator1::$this
	Category_t1110218350 * ___U24this_1;
	// System.Object Category/<AlignIcons>c__Iterator1::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean Category/<AlignIcons>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 Category/<AlignIcons>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CtotalNumberU3E__0_0() { return static_cast<int32_t>(offsetof(U3CAlignIconsU3Ec__Iterator1_t2874318377, ___U3CtotalNumberU3E__0_0)); }
	inline int32_t get_U3CtotalNumberU3E__0_0() const { return ___U3CtotalNumberU3E__0_0; }
	inline int32_t* get_address_of_U3CtotalNumberU3E__0_0() { return &___U3CtotalNumberU3E__0_0; }
	inline void set_U3CtotalNumberU3E__0_0(int32_t value)
	{
		___U3CtotalNumberU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CAlignIconsU3Ec__Iterator1_t2874318377, ___U24this_1)); }
	inline Category_t1110218350 * get_U24this_1() const { return ___U24this_1; }
	inline Category_t1110218350 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Category_t1110218350 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CAlignIconsU3Ec__Iterator1_t2874318377, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CAlignIconsU3Ec__Iterator1_t2874318377, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CAlignIconsU3Ec__Iterator1_t2874318377, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CALIGNICONSU3EC__ITERATOR1_T2874318377_H
#ifndef U3CCALCULATEU3EC__ITERATOR0_T1249670162_H
#define U3CCALCULATEU3EC__ITERATOR0_T1249670162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Category/<Calculate>c__Iterator0
struct  U3CCalculateU3Ec__Iterator0_t1249670162  : public RuntimeObject
{
public:
	// Category Category/<Calculate>c__Iterator0::$this
	Category_t1110218350 * ___U24this_0;
	// System.Object Category/<Calculate>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean Category/<Calculate>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 Category/<Calculate>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CCalculateU3Ec__Iterator0_t1249670162, ___U24this_0)); }
	inline Category_t1110218350 * get_U24this_0() const { return ___U24this_0; }
	inline Category_t1110218350 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(Category_t1110218350 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CCalculateU3Ec__Iterator0_t1249670162, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CCalculateU3Ec__Iterator0_t1249670162, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CCalculateU3Ec__Iterator0_t1249670162, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCALCULATEU3EC__ITERATOR0_T1249670162_H
#ifndef U3CPOSITIONCATEGORIESAFTERU3EC__ITERATOR0_T4230049547_H
#define U3CPOSITIONCATEGORIESAFTERU3EC__ITERATOR0_T4230049547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CategoryManager/<PositionCategoriesAfter>c__Iterator0
struct  U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547  : public RuntimeObject
{
public:
	// System.Single CategoryManager/<PositionCategoriesAfter>c__Iterator0::time
	float ___time_0;
	// CategoryManager CategoryManager/<PositionCategoriesAfter>c__Iterator0::$this
	CategoryManager_t1388308348 * ___U24this_1;
	// System.Object CategoryManager/<PositionCategoriesAfter>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean CategoryManager/<PositionCategoriesAfter>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 CategoryManager/<PositionCategoriesAfter>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547, ___U24this_1)); }
	inline CategoryManager_t1388308348 * get_U24this_1() const { return ___U24this_1; }
	inline CategoryManager_t1388308348 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(CategoryManager_t1388308348 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPOSITIONCATEGORIESAFTERU3EC__ITERATOR0_T4230049547_H
#ifndef U3CCALIBRATEU3EC__ITERATOR0_T904254568_H
#define U3CCALIBRATEU3EC__ITERATOR0_T904254568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ManoCalibration/<Calibrate>c__Iterator0
struct  U3CCalibrateU3Ec__Iterator0_t904254568  : public RuntimeObject
{
public:
	// System.Single ManoCalibration/<Calibrate>c__Iterator0::delay
	float ___delay_0;
	// ManoCalibration ManoCalibration/<Calibrate>c__Iterator0::$this
	ManoCalibration_t699436447 * ___U24this_1;
	// System.Object ManoCalibration/<Calibrate>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean ManoCalibration/<Calibrate>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 ManoCalibration/<Calibrate>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(U3CCalibrateU3Ec__Iterator0_t904254568, ___delay_0)); }
	inline float get_delay_0() const { return ___delay_0; }
	inline float* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(float value)
	{
		___delay_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CCalibrateU3Ec__Iterator0_t904254568, ___U24this_1)); }
	inline ManoCalibration_t699436447 * get_U24this_1() const { return ___U24this_1; }
	inline ManoCalibration_t699436447 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(ManoCalibration_t699436447 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CCalibrateU3Ec__Iterator0_t904254568, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CCalibrateU3Ec__Iterator0_t904254568, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CCalibrateU3Ec__Iterator0_t904254568, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCALIBRATEU3EC__ITERATOR0_T904254568_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t385246372* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t385246372* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t385246372* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef COLOR32_T2600501292_H
#define COLOR32_T2600501292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t2600501292 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2600501292_H
#ifndef UNITYEVENT_T2581268647_H
#define UNITYEVENT_T2581268647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2581268647  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2581268647, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2581268647_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef WEBCAMDEVICE_T1322781432_H
#define WEBCAMDEVICE_T1322781432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamDevice
struct  WebCamDevice_t1322781432 
{
public:
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_1;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(WebCamDevice_t1322781432, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Flags_1() { return static_cast<int32_t>(offsetof(WebCamDevice_t1322781432, ___m_Flags_1)); }
	inline int32_t get_m_Flags_1() const { return ___m_Flags_1; }
	inline int32_t* get_address_of_m_Flags_1() { return &___m_Flags_1; }
	inline void set_m_Flags_1(int32_t value)
	{
		___m_Flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t1322781432_marshaled_pinvoke
{
	char* ___m_Name_0;
	int32_t ___m_Flags_1;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t1322781432_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	int32_t ___m_Flags_1;
};
#endif // WEBCAMDEVICE_T1322781432_H
#ifndef VISUALIZATIONINFO_T4138410502_H
#define VISUALIZATIONINFO_T4138410502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VisualizationInfo
struct  VisualizationInfo_t4138410502 
{
public:
	// UnityEngine.Texture2D VisualizationInfo::binary_image
	Texture2D_t3840446185 * ___binary_image_0;
	// UnityEngine.Texture2D VisualizationInfo::rgb_image
	Texture2D_t3840446185 * ___rgb_image_1;

public:
	inline static int32_t get_offset_of_binary_image_0() { return static_cast<int32_t>(offsetof(VisualizationInfo_t4138410502, ___binary_image_0)); }
	inline Texture2D_t3840446185 * get_binary_image_0() const { return ___binary_image_0; }
	inline Texture2D_t3840446185 ** get_address_of_binary_image_0() { return &___binary_image_0; }
	inline void set_binary_image_0(Texture2D_t3840446185 * value)
	{
		___binary_image_0 = value;
		Il2CppCodeGenWriteBarrier((&___binary_image_0), value);
	}

	inline static int32_t get_offset_of_rgb_image_1() { return static_cast<int32_t>(offsetof(VisualizationInfo_t4138410502, ___rgb_image_1)); }
	inline Texture2D_t3840446185 * get_rgb_image_1() const { return ___rgb_image_1; }
	inline Texture2D_t3840446185 ** get_address_of_rgb_image_1() { return &___rgb_image_1; }
	inline void set_rgb_image_1(Texture2D_t3840446185 * value)
	{
		___rgb_image_1 = value;
		Il2CppCodeGenWriteBarrier((&___rgb_image_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of VisualizationInfo
struct VisualizationInfo_t4138410502_marshaled_pinvoke
{
	Texture2D_t3840446185 * ___binary_image_0;
	Texture2D_t3840446185 * ___rgb_image_1;
};
// Native definition for COM marshalling of VisualizationInfo
struct VisualizationInfo_t4138410502_marshaled_com
{
	Texture2D_t3840446185 * ___binary_image_0;
	Texture2D_t3840446185 * ___rgb_image_1;
};
#endif // VISUALIZATIONINFO_T4138410502_H
#ifndef BACKGROUNDMODE_T1236096841_H
#define BACKGROUNDMODE_T1236096841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BackgroundMode
struct  BackgroundMode_t1236096841 
{
public:
	// System.Int32 BackgroundMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BackgroundMode_t1236096841, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKGROUNDMODE_T1236096841_H
#ifndef BOUNDINGBOX_T2874819887_H
#define BOUNDINGBOX_T2874819887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoundingBox
struct  BoundingBox_t2874819887 
{
public:
	// UnityEngine.Vector3 BoundingBox::top_left
	Vector3_t3722313464  ___top_left_0;
	// System.Single BoundingBox::width
	float ___width_1;
	// System.Single BoundingBox::height
	float ___height_2;

public:
	inline static int32_t get_offset_of_top_left_0() { return static_cast<int32_t>(offsetof(BoundingBox_t2874819887, ___top_left_0)); }
	inline Vector3_t3722313464  get_top_left_0() const { return ___top_left_0; }
	inline Vector3_t3722313464 * get_address_of_top_left_0() { return &___top_left_0; }
	inline void set_top_left_0(Vector3_t3722313464  value)
	{
		___top_left_0 = value;
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(BoundingBox_t2874819887, ___width_1)); }
	inline float get_width_1() const { return ___width_1; }
	inline float* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(float value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(BoundingBox_t2874819887, ___height_2)); }
	inline float get_height_2() const { return ___height_2; }
	inline float* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(float value)
	{
		___height_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDINGBOX_T2874819887_H
#ifndef FINGERTIPINDEX_T1626671473_H
#define FINGERTIPINDEX_T1626671473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FingerTipIndex
struct  FingerTipIndex_t1626671473 
{
public:
	// System.Int32 FingerTipIndex::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FingerTipIndex_t1626671473, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FINGERTIPINDEX_T1626671473_H
#ifndef FLAGS_T1827738092_H
#define FLAGS_T1827738092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Flags
struct  Flags_t1827738092 
{
public:
	// System.Int32 Flags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Flags_t1827738092, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGS_T1827738092_H
#ifndef HAND_T1840117894_H
#define HAND_T1840117894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Hand
struct  Hand_t1840117894 
{
public:
	// System.Int32 Hand::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Hand_t1840117894, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HAND_T1840117894_H
#ifndef HANDSIDE_T115807143_H
#define HANDSIDE_T115807143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HandSide
struct  HandSide_t115807143 
{
public:
	// System.Int32 HandSide::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HandSide_t115807143, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDSIDE_T115807143_H
#ifndef IMAGEFORMAT_T3328188177_H
#define IMAGEFORMAT_T3328188177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ImageFormat
struct  ImageFormat_t3328188177 
{
public:
	// System.Int32 ImageFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ImageFormat_t3328188177, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGEFORMAT_T3328188177_H
#ifndef INSTRUCTIONSTATE_T1968407955_H
#define INSTRUCTIONSTATE_T1968407955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InstructionsManager/InstructionState
struct  InstructionState_t1968407955 
{
public:
	// System.Int32 InstructionsManager/InstructionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InstructionState_t1968407955, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTRUCTIONSTATE_T1968407955_H
#ifndef CALIBRATIONTIME_T1112466818_H
#define CALIBRATIONTIME_T1112466818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ManoCalibration/CalibrationTime
struct  CalibrationTime_t1112466818 
{
public:
	// System.Int32 ManoCalibration/CalibrationTime::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CalibrationTime_t1112466818, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALIBRATIONTIME_T1112466818_H
#ifndef CALIBRATIONTRIGGER_T800041576_H
#define CALIBRATIONTRIGGER_T800041576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ManoCalibration/CalibrationTrigger
struct  CalibrationTrigger_t800041576 
{
public:
	// System.Int32 ManoCalibration/CalibrationTrigger::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CalibrationTrigger_t800041576, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALIBRATIONTRIGGER_T800041576_H
#ifndef MANOCLASS_T3934069219_H
#define MANOCLASS_T3934069219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ManoClass
struct  ManoClass_t3934069219 
{
public:
	// System.Int32 ManoClass::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ManoClass_t3934069219, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANOCLASS_T3934069219_H
#ifndef MANOGESTURECONTINUOUS_T3178513972_H
#define MANOGESTURECONTINUOUS_T3178513972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ManoGestureContinuous
struct  ManoGestureContinuous_t3178513972 
{
public:
	// System.Int32 ManoGestureContinuous::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ManoGestureContinuous_t3178513972, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANOGESTURECONTINUOUS_T3178513972_H
#ifndef MANOGESTURETRIGGER_T3326661207_H
#define MANOGESTURETRIGGER_T3326661207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ManoGestureTrigger
struct  ManoGestureTrigger_t3326661207 
{
public:
	// System.Int32 ManoGestureTrigger::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ManoGestureTrigger_t3326661207, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANOGESTURETRIGGER_T3326661207_H
#ifndef U3CFADECOLORAFTERDELAYU3EC__ITERATOR0_T1138696384_H
#define U3CFADECOLORAFTERDELAYU3EC__ITERATOR0_T1138696384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ManoVisualization/<FadeColorAfterDelay>c__Iterator0
struct  U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384  : public RuntimeObject
{
public:
	// System.Int32 ManoVisualization/<FadeColorAfterDelay>c__Iterator0::<i>__1
	int32_t ___U3CiU3E__1_0;
	// System.Single ManoVisualization/<FadeColorAfterDelay>c__Iterator0::delay
	float ___delay_1;
	// System.Int32 ManoVisualization/<FadeColorAfterDelay>c__Iterator0::index
	int32_t ___index_2;
	// System.Single ManoVisualization/<FadeColorAfterDelay>c__Iterator0::<r>__2
	float ___U3CrU3E__2_3;
	// System.Single ManoVisualization/<FadeColorAfterDelay>c__Iterator0::<g>__2
	float ___U3CgU3E__2_4;
	// System.Single ManoVisualization/<FadeColorAfterDelay>c__Iterator0::<b>__2
	float ___U3CbU3E__2_5;
	// System.Single ManoVisualization/<FadeColorAfterDelay>c__Iterator0::<a>__2
	float ___U3CaU3E__2_6;
	// UnityEngine.Color ManoVisualization/<FadeColorAfterDelay>c__Iterator0::<newColor>__2
	Color_t2555686324  ___U3CnewColorU3E__2_7;
	// ManoVisualization ManoVisualization/<FadeColorAfterDelay>c__Iterator0::$this
	ManoVisualization_t1421820612 * ___U24this_8;
	// System.Object ManoVisualization/<FadeColorAfterDelay>c__Iterator0::$current
	RuntimeObject * ___U24current_9;
	// System.Boolean ManoVisualization/<FadeColorAfterDelay>c__Iterator0::$disposing
	bool ___U24disposing_10;
	// System.Int32 ManoVisualization/<FadeColorAfterDelay>c__Iterator0::$PC
	int32_t ___U24PC_11;

public:
	inline static int32_t get_offset_of_U3CiU3E__1_0() { return static_cast<int32_t>(offsetof(U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384, ___U3CiU3E__1_0)); }
	inline int32_t get_U3CiU3E__1_0() const { return ___U3CiU3E__1_0; }
	inline int32_t* get_address_of_U3CiU3E__1_0() { return &___U3CiU3E__1_0; }
	inline void set_U3CiU3E__1_0(int32_t value)
	{
		___U3CiU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_delay_1() { return static_cast<int32_t>(offsetof(U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384, ___delay_1)); }
	inline float get_delay_1() const { return ___delay_1; }
	inline float* get_address_of_delay_1() { return &___delay_1; }
	inline void set_delay_1(float value)
	{
		___delay_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_U3CrU3E__2_3() { return static_cast<int32_t>(offsetof(U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384, ___U3CrU3E__2_3)); }
	inline float get_U3CrU3E__2_3() const { return ___U3CrU3E__2_3; }
	inline float* get_address_of_U3CrU3E__2_3() { return &___U3CrU3E__2_3; }
	inline void set_U3CrU3E__2_3(float value)
	{
		___U3CrU3E__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CgU3E__2_4() { return static_cast<int32_t>(offsetof(U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384, ___U3CgU3E__2_4)); }
	inline float get_U3CgU3E__2_4() const { return ___U3CgU3E__2_4; }
	inline float* get_address_of_U3CgU3E__2_4() { return &___U3CgU3E__2_4; }
	inline void set_U3CgU3E__2_4(float value)
	{
		___U3CgU3E__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CbU3E__2_5() { return static_cast<int32_t>(offsetof(U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384, ___U3CbU3E__2_5)); }
	inline float get_U3CbU3E__2_5() const { return ___U3CbU3E__2_5; }
	inline float* get_address_of_U3CbU3E__2_5() { return &___U3CbU3E__2_5; }
	inline void set_U3CbU3E__2_5(float value)
	{
		___U3CbU3E__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CaU3E__2_6() { return static_cast<int32_t>(offsetof(U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384, ___U3CaU3E__2_6)); }
	inline float get_U3CaU3E__2_6() const { return ___U3CaU3E__2_6; }
	inline float* get_address_of_U3CaU3E__2_6() { return &___U3CaU3E__2_6; }
	inline void set_U3CaU3E__2_6(float value)
	{
		___U3CaU3E__2_6 = value;
	}

	inline static int32_t get_offset_of_U3CnewColorU3E__2_7() { return static_cast<int32_t>(offsetof(U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384, ___U3CnewColorU3E__2_7)); }
	inline Color_t2555686324  get_U3CnewColorU3E__2_7() const { return ___U3CnewColorU3E__2_7; }
	inline Color_t2555686324 * get_address_of_U3CnewColorU3E__2_7() { return &___U3CnewColorU3E__2_7; }
	inline void set_U3CnewColorU3E__2_7(Color_t2555686324  value)
	{
		___U3CnewColorU3E__2_7 = value;
	}

	inline static int32_t get_offset_of_U24this_8() { return static_cast<int32_t>(offsetof(U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384, ___U24this_8)); }
	inline ManoVisualization_t1421820612 * get_U24this_8() const { return ___U24this_8; }
	inline ManoVisualization_t1421820612 ** get_address_of_U24this_8() { return &___U24this_8; }
	inline void set_U24this_8(ManoVisualization_t1421820612 * value)
	{
		___U24this_8 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_8), value);
	}

	inline static int32_t get_offset_of_U24current_9() { return static_cast<int32_t>(offsetof(U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384, ___U24current_9)); }
	inline RuntimeObject * get_U24current_9() const { return ___U24current_9; }
	inline RuntimeObject ** get_address_of_U24current_9() { return &___U24current_9; }
	inline void set_U24current_9(RuntimeObject * value)
	{
		___U24current_9 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_9), value);
	}

	inline static int32_t get_offset_of_U24disposing_10() { return static_cast<int32_t>(offsetof(U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384, ___U24disposing_10)); }
	inline bool get_U24disposing_10() const { return ___U24disposing_10; }
	inline bool* get_address_of_U24disposing_10() { return &___U24disposing_10; }
	inline void set_U24disposing_10(bool value)
	{
		___U24disposing_10 = value;
	}

	inline static int32_t get_offset_of_U24PC_11() { return static_cast<int32_t>(offsetof(U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384, ___U24PC_11)); }
	inline int32_t get_U24PC_11() const { return ___U24PC_11; }
	inline int32_t* get_address_of_U24PC_11() { return &___U24PC_11; }
	inline void set_U24PC_11(int32_t value)
	{
		___U24PC_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADECOLORAFTERDELAYU3EC__ITERATOR0_T1138696384_H
#ifndef PLATFORM_T1043456379_H
#define PLATFORM_T1043456379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Platform
struct  Platform_t1043456379 
{
public:
	// System.Int32 Platform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Platform_t1043456379, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORM_T1043456379_H
#ifndef SELECTEDHAND_T2935599139_H
#define SELECTEDHAND_T2935599139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SelectedHand
struct  SelectedHand_t2935599139 
{
public:
	// System.Int32 SelectedHand::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectedHand_t2935599139, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTEDHAND_T2935599139_H
#ifndef SUPPORTEDORIENTATION_T3770602754_H
#define SUPPORTEDORIENTATION_T3770602754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SupportedOrientation
struct  SupportedOrientation_t3770602754 
{
public:
	// System.Int32 SupportedOrientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SupportedOrientation_t3770602754, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPORTEDORIENTATION_T3770602754_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef DEVICEORIENTATION_T3526859474_H
#define DEVICEORIENTATION_T3526859474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DeviceOrientation
struct  DeviceOrientation_t3526859474 
{
public:
	// System.Int32 UnityEngine.DeviceOrientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DeviceOrientation_t3526859474, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICEORIENTATION_T3526859474_H
#ifndef DRIVENTRANSFORMPROPERTIES_T3813433528_H
#define DRIVENTRANSFORMPROPERTIES_T3813433528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenTransformProperties
struct  DrivenTransformProperties_t3813433528 
{
public:
	// System.Int32 UnityEngine.DrivenTransformProperties::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DrivenTransformProperties_t3813433528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENTRANSFORMPROPERTIES_T3813433528_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef SCREENORIENTATION_T1705519499_H
#define SCREENORIENTATION_T1705519499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScreenOrientation
struct  ScreenOrientation_t1705519499 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScreenOrientation_t1705519499, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENORIENTATION_T1705519499_H
#ifndef TOUCHPHASE_T72348083_H
#define TOUCHPHASE_T72348083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t72348083 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t72348083, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPHASE_T72348083_H
#ifndef TOUCHTYPE_T2034578258_H
#define TOUCHTYPE_T2034578258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t2034578258 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t2034578258, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHTYPE_T2034578258_H
#ifndef BUTTONCLICKEDEVENT_T48803504_H
#define BUTTONCLICKEDEVENT_T48803504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button/ButtonClickedEvent
struct  ButtonClickedEvent_t48803504  : public UnityEvent_t2581268647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONCLICKEDEVENT_T48803504_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILLMETHOD_T1167457570_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T1152881528_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef WARNING_T2465895317_H
#define WARNING_T2465895317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Warning
struct  Warning_t2465895317 
{
public:
	// System.Int32 Warning::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Warning_t2465895317, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WARNING_T2465895317_H
#ifndef GESTUREINFO_T2431102658_H
#define GESTUREINFO_T2431102658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GestureInfo
struct  GestureInfo_t2431102658 
{
public:
	// ManoClass GestureInfo::mano_class
	int32_t ___mano_class_0;
	// ManoGestureContinuous GestureInfo::mano_gesture_continuous
	int32_t ___mano_gesture_continuous_1;
	// ManoGestureTrigger GestureInfo::mano_gesture_trigger
	int32_t ___mano_gesture_trigger_2;
	// System.Int32 GestureInfo::state
	int32_t ___state_3;
	// HandSide GestureInfo::hand_side
	int32_t ___hand_side_4;

public:
	inline static int32_t get_offset_of_mano_class_0() { return static_cast<int32_t>(offsetof(GestureInfo_t2431102658, ___mano_class_0)); }
	inline int32_t get_mano_class_0() const { return ___mano_class_0; }
	inline int32_t* get_address_of_mano_class_0() { return &___mano_class_0; }
	inline void set_mano_class_0(int32_t value)
	{
		___mano_class_0 = value;
	}

	inline static int32_t get_offset_of_mano_gesture_continuous_1() { return static_cast<int32_t>(offsetof(GestureInfo_t2431102658, ___mano_gesture_continuous_1)); }
	inline int32_t get_mano_gesture_continuous_1() const { return ___mano_gesture_continuous_1; }
	inline int32_t* get_address_of_mano_gesture_continuous_1() { return &___mano_gesture_continuous_1; }
	inline void set_mano_gesture_continuous_1(int32_t value)
	{
		___mano_gesture_continuous_1 = value;
	}

	inline static int32_t get_offset_of_mano_gesture_trigger_2() { return static_cast<int32_t>(offsetof(GestureInfo_t2431102658, ___mano_gesture_trigger_2)); }
	inline int32_t get_mano_gesture_trigger_2() const { return ___mano_gesture_trigger_2; }
	inline int32_t* get_address_of_mano_gesture_trigger_2() { return &___mano_gesture_trigger_2; }
	inline void set_mano_gesture_trigger_2(int32_t value)
	{
		___mano_gesture_trigger_2 = value;
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(GestureInfo_t2431102658, ___state_3)); }
	inline int32_t get_state_3() const { return ___state_3; }
	inline int32_t* get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(int32_t value)
	{
		___state_3 = value;
	}

	inline static int32_t get_offset_of_hand_side_4() { return static_cast<int32_t>(offsetof(GestureInfo_t2431102658, ___hand_side_4)); }
	inline int32_t get_hand_side_4() const { return ___hand_side_4; }
	inline int32_t* get_address_of_hand_side_4() { return &___hand_side_4; }
	inline void set_hand_side_4(int32_t value)
	{
		___hand_side_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GESTUREINFO_T2431102658_H
#ifndef SESSION_T4211189121_H
#define SESSION_T4211189121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Session
struct  Session_t4211189121 
{
public:
	// Flags Session::flag
	int32_t ___flag_0;
	// Platform Session::current_plataform
	int32_t ___current_plataform_1;
	// BackgroundMode Session::background_mode
	int32_t ___background_mode_2;
	// ImageFormat Session::image_format
	int32_t ___image_format_3;
	// SupportedOrientation Session::orientation
	int32_t ___orientation_4;
	// System.Int32 Session::calibration_value
	int32_t ___calibration_value_5;
	// SelectedHand Session::hand_selection
	int32_t ___hand_selection_6;
	// System.Int32 Session::version
	int32_t ___version_7;
	// System.Int32 Session::is_two_hands_enabled_by_developer
	int32_t ___is_two_hands_enabled_by_developer_8;
	// System.Int32 Session::two_hands_supported
	int32_t ___two_hands_supported_9;

public:
	inline static int32_t get_offset_of_flag_0() { return static_cast<int32_t>(offsetof(Session_t4211189121, ___flag_0)); }
	inline int32_t get_flag_0() const { return ___flag_0; }
	inline int32_t* get_address_of_flag_0() { return &___flag_0; }
	inline void set_flag_0(int32_t value)
	{
		___flag_0 = value;
	}

	inline static int32_t get_offset_of_current_plataform_1() { return static_cast<int32_t>(offsetof(Session_t4211189121, ___current_plataform_1)); }
	inline int32_t get_current_plataform_1() const { return ___current_plataform_1; }
	inline int32_t* get_address_of_current_plataform_1() { return &___current_plataform_1; }
	inline void set_current_plataform_1(int32_t value)
	{
		___current_plataform_1 = value;
	}

	inline static int32_t get_offset_of_background_mode_2() { return static_cast<int32_t>(offsetof(Session_t4211189121, ___background_mode_2)); }
	inline int32_t get_background_mode_2() const { return ___background_mode_2; }
	inline int32_t* get_address_of_background_mode_2() { return &___background_mode_2; }
	inline void set_background_mode_2(int32_t value)
	{
		___background_mode_2 = value;
	}

	inline static int32_t get_offset_of_image_format_3() { return static_cast<int32_t>(offsetof(Session_t4211189121, ___image_format_3)); }
	inline int32_t get_image_format_3() const { return ___image_format_3; }
	inline int32_t* get_address_of_image_format_3() { return &___image_format_3; }
	inline void set_image_format_3(int32_t value)
	{
		___image_format_3 = value;
	}

	inline static int32_t get_offset_of_orientation_4() { return static_cast<int32_t>(offsetof(Session_t4211189121, ___orientation_4)); }
	inline int32_t get_orientation_4() const { return ___orientation_4; }
	inline int32_t* get_address_of_orientation_4() { return &___orientation_4; }
	inline void set_orientation_4(int32_t value)
	{
		___orientation_4 = value;
	}

	inline static int32_t get_offset_of_calibration_value_5() { return static_cast<int32_t>(offsetof(Session_t4211189121, ___calibration_value_5)); }
	inline int32_t get_calibration_value_5() const { return ___calibration_value_5; }
	inline int32_t* get_address_of_calibration_value_5() { return &___calibration_value_5; }
	inline void set_calibration_value_5(int32_t value)
	{
		___calibration_value_5 = value;
	}

	inline static int32_t get_offset_of_hand_selection_6() { return static_cast<int32_t>(offsetof(Session_t4211189121, ___hand_selection_6)); }
	inline int32_t get_hand_selection_6() const { return ___hand_selection_6; }
	inline int32_t* get_address_of_hand_selection_6() { return &___hand_selection_6; }
	inline void set_hand_selection_6(int32_t value)
	{
		___hand_selection_6 = value;
	}

	inline static int32_t get_offset_of_version_7() { return static_cast<int32_t>(offsetof(Session_t4211189121, ___version_7)); }
	inline int32_t get_version_7() const { return ___version_7; }
	inline int32_t* get_address_of_version_7() { return &___version_7; }
	inline void set_version_7(int32_t value)
	{
		___version_7 = value;
	}

	inline static int32_t get_offset_of_is_two_hands_enabled_by_developer_8() { return static_cast<int32_t>(offsetof(Session_t4211189121, ___is_two_hands_enabled_by_developer_8)); }
	inline int32_t get_is_two_hands_enabled_by_developer_8() const { return ___is_two_hands_enabled_by_developer_8; }
	inline int32_t* get_address_of_is_two_hands_enabled_by_developer_8() { return &___is_two_hands_enabled_by_developer_8; }
	inline void set_is_two_hands_enabled_by_developer_8(int32_t value)
	{
		___is_two_hands_enabled_by_developer_8 = value;
	}

	inline static int32_t get_offset_of_two_hands_supported_9() { return static_cast<int32_t>(offsetof(Session_t4211189121, ___two_hands_supported_9)); }
	inline int32_t get_two_hands_supported_9() const { return ___two_hands_supported_9; }
	inline int32_t* get_address_of_two_hands_supported_9() { return &___two_hands_supported_9; }
	inline void set_two_hands_supported_9(int32_t value)
	{
		___two_hands_supported_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSION_T4211189121_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef TRACKINGINFO_T3990182144_H
#define TRACKINGINFO_T3990182144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackingInfo
struct  TrackingInfo_t3990182144 
{
public:
	// BoundingBox TrackingInfo::bounding_box
	BoundingBox_t2874819887  ___bounding_box_0;
	// UnityEngine.Vector3 TrackingInfo::palm_center
	Vector3_t3722313464  ___palm_center_1;
	// System.Single TrackingInfo::rotation
	float ___rotation_2;
	// System.Single TrackingInfo::relative_depth
	float ___relative_depth_3;
	// System.Int32 TrackingInfo::amount_of_contour_points
	int32_t ___amount_of_contour_points_4;
	// System.Int32 TrackingInfo::amount_of_inner_points
	int32_t ___amount_of_inner_points_5;
	// UnityEngine.Vector3[] TrackingInfo::finger_tips
	Vector3U5BU5D_t1718750761* ___finger_tips_6;
	// UnityEngine.Vector3[] TrackingInfo::contour_points
	Vector3U5BU5D_t1718750761* ___contour_points_7;
	// UnityEngine.Vector3[] TrackingInfo::inner_points
	Vector3U5BU5D_t1718750761* ___inner_points_8;

public:
	inline static int32_t get_offset_of_bounding_box_0() { return static_cast<int32_t>(offsetof(TrackingInfo_t3990182144, ___bounding_box_0)); }
	inline BoundingBox_t2874819887  get_bounding_box_0() const { return ___bounding_box_0; }
	inline BoundingBox_t2874819887 * get_address_of_bounding_box_0() { return &___bounding_box_0; }
	inline void set_bounding_box_0(BoundingBox_t2874819887  value)
	{
		___bounding_box_0 = value;
	}

	inline static int32_t get_offset_of_palm_center_1() { return static_cast<int32_t>(offsetof(TrackingInfo_t3990182144, ___palm_center_1)); }
	inline Vector3_t3722313464  get_palm_center_1() const { return ___palm_center_1; }
	inline Vector3_t3722313464 * get_address_of_palm_center_1() { return &___palm_center_1; }
	inline void set_palm_center_1(Vector3_t3722313464  value)
	{
		___palm_center_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(TrackingInfo_t3990182144, ___rotation_2)); }
	inline float get_rotation_2() const { return ___rotation_2; }
	inline float* get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(float value)
	{
		___rotation_2 = value;
	}

	inline static int32_t get_offset_of_relative_depth_3() { return static_cast<int32_t>(offsetof(TrackingInfo_t3990182144, ___relative_depth_3)); }
	inline float get_relative_depth_3() const { return ___relative_depth_3; }
	inline float* get_address_of_relative_depth_3() { return &___relative_depth_3; }
	inline void set_relative_depth_3(float value)
	{
		___relative_depth_3 = value;
	}

	inline static int32_t get_offset_of_amount_of_contour_points_4() { return static_cast<int32_t>(offsetof(TrackingInfo_t3990182144, ___amount_of_contour_points_4)); }
	inline int32_t get_amount_of_contour_points_4() const { return ___amount_of_contour_points_4; }
	inline int32_t* get_address_of_amount_of_contour_points_4() { return &___amount_of_contour_points_4; }
	inline void set_amount_of_contour_points_4(int32_t value)
	{
		___amount_of_contour_points_4 = value;
	}

	inline static int32_t get_offset_of_amount_of_inner_points_5() { return static_cast<int32_t>(offsetof(TrackingInfo_t3990182144, ___amount_of_inner_points_5)); }
	inline int32_t get_amount_of_inner_points_5() const { return ___amount_of_inner_points_5; }
	inline int32_t* get_address_of_amount_of_inner_points_5() { return &___amount_of_inner_points_5; }
	inline void set_amount_of_inner_points_5(int32_t value)
	{
		___amount_of_inner_points_5 = value;
	}

	inline static int32_t get_offset_of_finger_tips_6() { return static_cast<int32_t>(offsetof(TrackingInfo_t3990182144, ___finger_tips_6)); }
	inline Vector3U5BU5D_t1718750761* get_finger_tips_6() const { return ___finger_tips_6; }
	inline Vector3U5BU5D_t1718750761** get_address_of_finger_tips_6() { return &___finger_tips_6; }
	inline void set_finger_tips_6(Vector3U5BU5D_t1718750761* value)
	{
		___finger_tips_6 = value;
		Il2CppCodeGenWriteBarrier((&___finger_tips_6), value);
	}

	inline static int32_t get_offset_of_contour_points_7() { return static_cast<int32_t>(offsetof(TrackingInfo_t3990182144, ___contour_points_7)); }
	inline Vector3U5BU5D_t1718750761* get_contour_points_7() const { return ___contour_points_7; }
	inline Vector3U5BU5D_t1718750761** get_address_of_contour_points_7() { return &___contour_points_7; }
	inline void set_contour_points_7(Vector3U5BU5D_t1718750761* value)
	{
		___contour_points_7 = value;
		Il2CppCodeGenWriteBarrier((&___contour_points_7), value);
	}

	inline static int32_t get_offset_of_inner_points_8() { return static_cast<int32_t>(offsetof(TrackingInfo_t3990182144, ___inner_points_8)); }
	inline Vector3U5BU5D_t1718750761* get_inner_points_8() const { return ___inner_points_8; }
	inline Vector3U5BU5D_t1718750761** get_address_of_inner_points_8() { return &___inner_points_8; }
	inline void set_inner_points_8(Vector3U5BU5D_t1718750761* value)
	{
		___inner_points_8 = value;
		Il2CppCodeGenWriteBarrier((&___inner_points_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TrackingInfo
struct TrackingInfo_t3990182144_marshaled_pinvoke
{
	BoundingBox_t2874819887  ___bounding_box_0;
	Vector3_t3722313464  ___palm_center_1;
	float ___rotation_2;
	float ___relative_depth_3;
	int32_t ___amount_of_contour_points_4;
	int32_t ___amount_of_inner_points_5;
	Vector3_t3722313464  ___finger_tips_6[5];
	Vector3_t3722313464  ___contour_points_7[200];
	Vector3_t3722313464  ___inner_points_8[200];
};
// Native definition for COM marshalling of TrackingInfo
struct TrackingInfo_t3990182144_marshaled_com
{
	BoundingBox_t2874819887  ___bounding_box_0;
	Vector3_t3722313464  ___palm_center_1;
	float ___rotation_2;
	float ___relative_depth_3;
	int32_t ___amount_of_contour_points_4;
	int32_t ___amount_of_inner_points_5;
	Vector3_t3722313464  ___finger_tips_6[5];
	Vector3_t3722313464  ___contour_points_7[200];
	Vector3_t3722313464  ___inner_points_8[200];
};
#endif // TRACKINGINFO_T3990182144_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef SHADER_T4151988712_H
#define SHADER_T4151988712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t4151988712  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T4151988712_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef TOUCH_T1921856868_H
#define TOUCH_T1921856868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t1921856868 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t2156229523  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t2156229523  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t2156229523  ___m_PositionDelta_3;
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

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Position_1)); }
	inline Vector2_t2156229523  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t2156229523 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t2156229523  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RawPosition_2)); }
	inline Vector2_t2156229523  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t2156229523 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t2156229523  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_PositionDelta_3)); }
	inline Vector2_t2156229523  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t2156229523 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t2156229523  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T1921856868_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef HANDINFO_T3661823187_H
#define HANDINFO_T3661823187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HandInfo
struct  HandInfo_t3661823187 
{
public:
	// TrackingInfo HandInfo::tracking_info
	TrackingInfo_t3990182144  ___tracking_info_0;
	// GestureInfo HandInfo::gesture_info
	GestureInfo_t2431102658  ___gesture_info_1;
	// Warning HandInfo::warning
	int32_t ___warning_2;
	// Hand HandInfo::hand
	int32_t ___hand_3;

public:
	inline static int32_t get_offset_of_tracking_info_0() { return static_cast<int32_t>(offsetof(HandInfo_t3661823187, ___tracking_info_0)); }
	inline TrackingInfo_t3990182144  get_tracking_info_0() const { return ___tracking_info_0; }
	inline TrackingInfo_t3990182144 * get_address_of_tracking_info_0() { return &___tracking_info_0; }
	inline void set_tracking_info_0(TrackingInfo_t3990182144  value)
	{
		___tracking_info_0 = value;
	}

	inline static int32_t get_offset_of_gesture_info_1() { return static_cast<int32_t>(offsetof(HandInfo_t3661823187, ___gesture_info_1)); }
	inline GestureInfo_t2431102658  get_gesture_info_1() const { return ___gesture_info_1; }
	inline GestureInfo_t2431102658 * get_address_of_gesture_info_1() { return &___gesture_info_1; }
	inline void set_gesture_info_1(GestureInfo_t2431102658  value)
	{
		___gesture_info_1 = value;
	}

	inline static int32_t get_offset_of_warning_2() { return static_cast<int32_t>(offsetof(HandInfo_t3661823187, ___warning_2)); }
	inline int32_t get_warning_2() const { return ___warning_2; }
	inline int32_t* get_address_of_warning_2() { return &___warning_2; }
	inline void set_warning_2(int32_t value)
	{
		___warning_2 = value;
	}

	inline static int32_t get_offset_of_hand_3() { return static_cast<int32_t>(offsetof(HandInfo_t3661823187, ___hand_3)); }
	inline int32_t get_hand_3() const { return ___hand_3; }
	inline int32_t* get_address_of_hand_3() { return &___hand_3; }
	inline void set_hand_3(int32_t value)
	{
		___hand_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of HandInfo
struct HandInfo_t3661823187_marshaled_pinvoke
{
	TrackingInfo_t3990182144_marshaled_pinvoke ___tracking_info_0;
	GestureInfo_t2431102658  ___gesture_info_1;
	int32_t ___warning_2;
	int32_t ___hand_3;
};
// Native definition for COM marshalling of HandInfo
struct HandInfo_t3661823187_marshaled_com
{
	TrackingInfo_t3990182144_marshaled_com ___tracking_info_0;
	GestureInfo_t2431102658  ___gesture_info_1;
	int32_t ___warning_2;
	int32_t ___hand_3;
};
#endif // HANDINFO_T3661823187_H
#ifndef MANOEVENT_T2837598491_H
#define MANOEVENT_T2837598491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ManoEvents/ManoEvent
struct  ManoEvent_t2837598491  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANOEVENT_T2837598491_H
#ifndef ORIENTATIONCHANGE_T2630486480_H
#define ORIENTATIONCHANGE_T2630486480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuOrientation/OrientationChange
struct  OrientationChange_t2630486480  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORIENTATIONCHANGE_T2630486480_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef UNITYACTION_T3245792599_H
#define UNITYACTION_T3245792599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t3245792599  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T3245792599_H
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TEXTMESH_T1536577757_H
#define TEXTMESH_T1536577757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextMesh
struct  TextMesh_t1536577757  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTMESH_T1536577757_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:
	// System.Int32 UnityEngine.Transform::<hierarchyCount>k__BackingField
	int32_t ___U3ChierarchyCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ChierarchyCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Transform_t3600365921, ___U3ChierarchyCountU3Ek__BackingField_4)); }
	inline int32_t get_U3ChierarchyCountU3Ek__BackingField_4() const { return ___U3ChierarchyCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ChierarchyCountU3Ek__BackingField_4() { return &___U3ChierarchyCountU3Ek__BackingField_4; }
	inline void set_U3ChierarchyCountU3Ek__BackingField_4(int32_t value)
	{
		___U3ChierarchyCountU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef WEBCAMTEXTURE_T1514609158_H
#define WEBCAMTEXTURE_T1514609158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamTexture
struct  WebCamTexture_t1514609158  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMTEXTURE_T1514609158_H
#ifndef HANDINFOUNITY_T1978403937_H
#define HANDINFOUNITY_T1978403937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HandInfoUnity
struct  HandInfoUnity_t1978403937 
{
public:
	// HandInfo HandInfoUnity::hand_info
	HandInfo_t3661823187  ___hand_info_0;
	// UnityEngine.Texture2D HandInfoUnity::cut_rgb
	Texture2D_t3840446185 * ___cut_rgb_1;

public:
	inline static int32_t get_offset_of_hand_info_0() { return static_cast<int32_t>(offsetof(HandInfoUnity_t1978403937, ___hand_info_0)); }
	inline HandInfo_t3661823187  get_hand_info_0() const { return ___hand_info_0; }
	inline HandInfo_t3661823187 * get_address_of_hand_info_0() { return &___hand_info_0; }
	inline void set_hand_info_0(HandInfo_t3661823187  value)
	{
		___hand_info_0 = value;
	}

	inline static int32_t get_offset_of_cut_rgb_1() { return static_cast<int32_t>(offsetof(HandInfoUnity_t1978403937, ___cut_rgb_1)); }
	inline Texture2D_t3840446185 * get_cut_rgb_1() const { return ___cut_rgb_1; }
	inline Texture2D_t3840446185 ** get_address_of_cut_rgb_1() { return &___cut_rgb_1; }
	inline void set_cut_rgb_1(Texture2D_t3840446185 * value)
	{
		___cut_rgb_1 = value;
		Il2CppCodeGenWriteBarrier((&___cut_rgb_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of HandInfoUnity
struct HandInfoUnity_t1978403937_marshaled_pinvoke
{
	HandInfo_t3661823187_marshaled_pinvoke ___hand_info_0;
	Texture2D_t3840446185 * ___cut_rgb_1;
};
// Native definition for COM marshalling of HandInfoUnity
struct HandInfoUnity_t1978403937_marshaled_com
{
	HandInfo_t3661823187_marshaled_com ___hand_info_0;
	Texture2D_t3840446185 * ___cut_rgb_1;
};
#endif // HANDINFOUNITY_T1978403937_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef LINERENDERER_T3154350270_H
#define LINERENDERER_T3154350270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LineRenderer
struct  LineRenderer_t3154350270  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINERENDERER_T3154350270_H
#ifndef MESHRENDERER_T587009260_H
#define MESHRENDERER_T587009260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t587009260  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T587009260_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:
	// UnityEngine.Object UnityEngine.RectTransform::<drivenByObject>k__BackingField
	Object_t631007953 * ___U3CdrivenByObjectU3Ek__BackingField_6;
	// UnityEngine.DrivenTransformProperties UnityEngine.RectTransform::<drivenProperties>k__BackingField
	int32_t ___U3CdrivenPropertiesU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CdrivenByObjectU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025, ___U3CdrivenByObjectU3Ek__BackingField_6)); }
	inline Object_t631007953 * get_U3CdrivenByObjectU3Ek__BackingField_6() const { return ___U3CdrivenByObjectU3Ek__BackingField_6; }
	inline Object_t631007953 ** get_address_of_U3CdrivenByObjectU3Ek__BackingField_6() { return &___U3CdrivenByObjectU3Ek__BackingField_6; }
	inline void set_U3CdrivenByObjectU3Ek__BackingField_6(Object_t631007953 * value)
	{
		___U3CdrivenByObjectU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdrivenByObjectU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CdrivenPropertiesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025, ___U3CdrivenPropertiesU3Ek__BackingField_7)); }
	inline int32_t get_U3CdrivenPropertiesU3Ek__BackingField_7() const { return ___U3CdrivenPropertiesU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CdrivenPropertiesU3Ek__BackingField_7() { return &___U3CdrivenPropertiesU3Ek__BackingField_7; }
	inline void set_U3CdrivenPropertiesU3Ek__BackingField_7(int32_t value)
	{
		___U3CdrivenPropertiesU3Ek__BackingField_7 = value;
	}
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_5;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_5() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_5)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_5() const { return ___reapplyDrivenProperties_5; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_5() { return &___reapplyDrivenProperties_5; }
	inline void set_reapplyDrivenProperties_5(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_5 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef APPLICATIONMANAGER_T3254129643_H
#define APPLICATIONMANAGER_T3254129643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ApplicationManager
struct  ApplicationManager_t3254129643  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct ApplicationManager_t3254129643_StaticFields
{
public:
	// ApplicationManager ApplicationManager::_instance
	ApplicationManager_t3254129643 * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(ApplicationManager_t3254129643_StaticFields, ____instance_4)); }
	inline ApplicationManager_t3254129643 * get__instance_4() const { return ____instance_4; }
	inline ApplicationManager_t3254129643 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(ApplicationManager_t3254129643 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((&____instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONMANAGER_T3254129643_H
#ifndef BWEFFECT_T874564846_H
#define BWEFFECT_T874564846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BWEffect
struct  BWEffect_t874564846  : public MonoBehaviour_t3962482529
{
public:
	// System.Single BWEffect::intensity
	float ___intensity_4;
	// UnityEngine.Material BWEffect::material
	Material_t340375123 * ___material_5;

public:
	inline static int32_t get_offset_of_intensity_4() { return static_cast<int32_t>(offsetof(BWEffect_t874564846, ___intensity_4)); }
	inline float get_intensity_4() const { return ___intensity_4; }
	inline float* get_address_of_intensity_4() { return &___intensity_4; }
	inline void set_intensity_4(float value)
	{
		___intensity_4 = value;
	}

	inline static int32_t get_offset_of_material_5() { return static_cast<int32_t>(offsetof(BWEffect_t874564846, ___material_5)); }
	inline Material_t340375123 * get_material_5() const { return ___material_5; }
	inline Material_t340375123 ** get_address_of_material_5() { return &___material_5; }
	inline void set_material_5(Material_t340375123 * value)
	{
		___material_5 = value;
		Il2CppCodeGenWriteBarrier((&___material_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BWEFFECT_T874564846_H
#ifndef BACKGROUNDMODEBUTTONSELECTOR_T3867668448_H
#define BACKGROUNDMODEBUTTONSELECTOR_T3867668448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BackgroundModeButtonSelector
struct  BackgroundModeButtonSelector_t3867668448  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject BackgroundModeButtonSelector::availableModesMenu
	GameObject_t1113636619 * ___availableModesMenu_4;
	// UnityEngine.UI.Image BackgroundModeButtonSelector::currentModeImage
	Image_t2670269651 * ___currentModeImage_5;
	// BackgroundMode BackgroundModeButtonSelector::myBackgroundMode
	int32_t ___myBackgroundMode_6;
	// UnityEngine.Color BackgroundModeButtonSelector::thisModeColor
	Color_t2555686324  ___thisModeColor_7;

public:
	inline static int32_t get_offset_of_availableModesMenu_4() { return static_cast<int32_t>(offsetof(BackgroundModeButtonSelector_t3867668448, ___availableModesMenu_4)); }
	inline GameObject_t1113636619 * get_availableModesMenu_4() const { return ___availableModesMenu_4; }
	inline GameObject_t1113636619 ** get_address_of_availableModesMenu_4() { return &___availableModesMenu_4; }
	inline void set_availableModesMenu_4(GameObject_t1113636619 * value)
	{
		___availableModesMenu_4 = value;
		Il2CppCodeGenWriteBarrier((&___availableModesMenu_4), value);
	}

	inline static int32_t get_offset_of_currentModeImage_5() { return static_cast<int32_t>(offsetof(BackgroundModeButtonSelector_t3867668448, ___currentModeImage_5)); }
	inline Image_t2670269651 * get_currentModeImage_5() const { return ___currentModeImage_5; }
	inline Image_t2670269651 ** get_address_of_currentModeImage_5() { return &___currentModeImage_5; }
	inline void set_currentModeImage_5(Image_t2670269651 * value)
	{
		___currentModeImage_5 = value;
		Il2CppCodeGenWriteBarrier((&___currentModeImage_5), value);
	}

	inline static int32_t get_offset_of_myBackgroundMode_6() { return static_cast<int32_t>(offsetof(BackgroundModeButtonSelector_t3867668448, ___myBackgroundMode_6)); }
	inline int32_t get_myBackgroundMode_6() const { return ___myBackgroundMode_6; }
	inline int32_t* get_address_of_myBackgroundMode_6() { return &___myBackgroundMode_6; }
	inline void set_myBackgroundMode_6(int32_t value)
	{
		___myBackgroundMode_6 = value;
	}

	inline static int32_t get_offset_of_thisModeColor_7() { return static_cast<int32_t>(offsetof(BackgroundModeButtonSelector_t3867668448, ___thisModeColor_7)); }
	inline Color_t2555686324  get_thisModeColor_7() const { return ___thisModeColor_7; }
	inline Color_t2555686324 * get_address_of_thisModeColor_7() { return &___thisModeColor_7; }
	inline void set_thisModeColor_7(Color_t2555686324  value)
	{
		___thisModeColor_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKGROUNDMODEBUTTONSELECTOR_T3867668448_H
#ifndef BOUNDINGBOXUI_T541593408_H
#define BOUNDINGBOXUI_T541593408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoundingBoxUI
struct  BoundingBoxUI_t541593408  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.TextMesh BoundingBoxUI::top_left
	TextMesh_t1536577757 * ___top_left_4;
	// UnityEngine.TextMesh BoundingBoxUI::width
	TextMesh_t1536577757 * ___width_5;
	// UnityEngine.TextMesh BoundingBoxUI::height
	TextMesh_t1536577757 * ___height_6;
	// UnityEngine.LineRenderer BoundingBoxUI::bound_line_renderer
	LineRenderer_t3154350270 * ___bound_line_renderer_7;
	// ManoUtils BoundingBoxUI::mano_utils
	ManoUtils_t3463694697 * ___mano_utils_8;

public:
	inline static int32_t get_offset_of_top_left_4() { return static_cast<int32_t>(offsetof(BoundingBoxUI_t541593408, ___top_left_4)); }
	inline TextMesh_t1536577757 * get_top_left_4() const { return ___top_left_4; }
	inline TextMesh_t1536577757 ** get_address_of_top_left_4() { return &___top_left_4; }
	inline void set_top_left_4(TextMesh_t1536577757 * value)
	{
		___top_left_4 = value;
		Il2CppCodeGenWriteBarrier((&___top_left_4), value);
	}

	inline static int32_t get_offset_of_width_5() { return static_cast<int32_t>(offsetof(BoundingBoxUI_t541593408, ___width_5)); }
	inline TextMesh_t1536577757 * get_width_5() const { return ___width_5; }
	inline TextMesh_t1536577757 ** get_address_of_width_5() { return &___width_5; }
	inline void set_width_5(TextMesh_t1536577757 * value)
	{
		___width_5 = value;
		Il2CppCodeGenWriteBarrier((&___width_5), value);
	}

	inline static int32_t get_offset_of_height_6() { return static_cast<int32_t>(offsetof(BoundingBoxUI_t541593408, ___height_6)); }
	inline TextMesh_t1536577757 * get_height_6() const { return ___height_6; }
	inline TextMesh_t1536577757 ** get_address_of_height_6() { return &___height_6; }
	inline void set_height_6(TextMesh_t1536577757 * value)
	{
		___height_6 = value;
		Il2CppCodeGenWriteBarrier((&___height_6), value);
	}

	inline static int32_t get_offset_of_bound_line_renderer_7() { return static_cast<int32_t>(offsetof(BoundingBoxUI_t541593408, ___bound_line_renderer_7)); }
	inline LineRenderer_t3154350270 * get_bound_line_renderer_7() const { return ___bound_line_renderer_7; }
	inline LineRenderer_t3154350270 ** get_address_of_bound_line_renderer_7() { return &___bound_line_renderer_7; }
	inline void set_bound_line_renderer_7(LineRenderer_t3154350270 * value)
	{
		___bound_line_renderer_7 = value;
		Il2CppCodeGenWriteBarrier((&___bound_line_renderer_7), value);
	}

	inline static int32_t get_offset_of_mano_utils_8() { return static_cast<int32_t>(offsetof(BoundingBoxUI_t541593408, ___mano_utils_8)); }
	inline ManoUtils_t3463694697 * get_mano_utils_8() const { return ___mano_utils_8; }
	inline ManoUtils_t3463694697 ** get_address_of_mano_utils_8() { return &___mano_utils_8; }
	inline void set_mano_utils_8(ManoUtils_t3463694697 * value)
	{
		___mano_utils_8 = value;
		Il2CppCodeGenWriteBarrier((&___mano_utils_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDINGBOXUI_T541593408_H
#ifndef CALIBRATIONAREA_T2245642022_H
#define CALIBRATIONAREA_T2245642022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CalibrationArea
struct  CalibrationArea_t2245642022  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALIBRATIONAREA_T2245642022_H
#ifndef CATEGORY_T1110218350_H
#define CATEGORY_T1110218350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Category
struct  Category_t1110218350  : public MonoBehaviour_t3962482529
{
public:
	// System.String Category::categoryName
	String_t* ___categoryName_4;
	// System.Int32 Category::categoryOrder
	int32_t ___categoryOrder_5;
	// UnityEngine.GameObject[] Category::icons
	GameObjectU5BU5D_t3328599146* ___icons_6;
	// System.Int32 Category::defaultHeight
	int32_t ___defaultHeight_7;
	// System.Int32 Category::extraHeightForRow
	int32_t ___extraHeightForRow_8;
	// System.Int32 Category::iconWidth
	int32_t ___iconWidth_9;
	// System.Int32 Category::iconLeftMargin
	int32_t ___iconLeftMargin_10;
	// System.Int32 Category::iconRightMargin
	int32_t ___iconRightMargin_11;
	// System.Int32 Category::iconSpaceTaken
	int32_t ___iconSpaceTaken_12;
	// System.Int32 Category::maxIconsForRow
	int32_t ___maxIconsForRow_13;
	// System.Single Category::categoryPositionY
	float ___categoryPositionY_14;
	// System.Int32 Category::categoryWidth
	int32_t ___categoryWidth_15;
	// System.Int32 Category::categoryHeight
	int32_t ___categoryHeight_16;
	// System.Int32 Category::numberOfRows
	int32_t ___numberOfRows_17;
	// UnityEngine.RectTransform Category::rt
	RectTransform_t3704657025 * ___rt_18;
	// UnityEngine.GameObject[0...,0...] Category::iconArray
	GameObjectU5B0___U2C0___U5D_t3328599147* ___iconArray_19;

public:
	inline static int32_t get_offset_of_categoryName_4() { return static_cast<int32_t>(offsetof(Category_t1110218350, ___categoryName_4)); }
	inline String_t* get_categoryName_4() const { return ___categoryName_4; }
	inline String_t** get_address_of_categoryName_4() { return &___categoryName_4; }
	inline void set_categoryName_4(String_t* value)
	{
		___categoryName_4 = value;
		Il2CppCodeGenWriteBarrier((&___categoryName_4), value);
	}

	inline static int32_t get_offset_of_categoryOrder_5() { return static_cast<int32_t>(offsetof(Category_t1110218350, ___categoryOrder_5)); }
	inline int32_t get_categoryOrder_5() const { return ___categoryOrder_5; }
	inline int32_t* get_address_of_categoryOrder_5() { return &___categoryOrder_5; }
	inline void set_categoryOrder_5(int32_t value)
	{
		___categoryOrder_5 = value;
	}

	inline static int32_t get_offset_of_icons_6() { return static_cast<int32_t>(offsetof(Category_t1110218350, ___icons_6)); }
	inline GameObjectU5BU5D_t3328599146* get_icons_6() const { return ___icons_6; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_icons_6() { return &___icons_6; }
	inline void set_icons_6(GameObjectU5BU5D_t3328599146* value)
	{
		___icons_6 = value;
		Il2CppCodeGenWriteBarrier((&___icons_6), value);
	}

	inline static int32_t get_offset_of_defaultHeight_7() { return static_cast<int32_t>(offsetof(Category_t1110218350, ___defaultHeight_7)); }
	inline int32_t get_defaultHeight_7() const { return ___defaultHeight_7; }
	inline int32_t* get_address_of_defaultHeight_7() { return &___defaultHeight_7; }
	inline void set_defaultHeight_7(int32_t value)
	{
		___defaultHeight_7 = value;
	}

	inline static int32_t get_offset_of_extraHeightForRow_8() { return static_cast<int32_t>(offsetof(Category_t1110218350, ___extraHeightForRow_8)); }
	inline int32_t get_extraHeightForRow_8() const { return ___extraHeightForRow_8; }
	inline int32_t* get_address_of_extraHeightForRow_8() { return &___extraHeightForRow_8; }
	inline void set_extraHeightForRow_8(int32_t value)
	{
		___extraHeightForRow_8 = value;
	}

	inline static int32_t get_offset_of_iconWidth_9() { return static_cast<int32_t>(offsetof(Category_t1110218350, ___iconWidth_9)); }
	inline int32_t get_iconWidth_9() const { return ___iconWidth_9; }
	inline int32_t* get_address_of_iconWidth_9() { return &___iconWidth_9; }
	inline void set_iconWidth_9(int32_t value)
	{
		___iconWidth_9 = value;
	}

	inline static int32_t get_offset_of_iconLeftMargin_10() { return static_cast<int32_t>(offsetof(Category_t1110218350, ___iconLeftMargin_10)); }
	inline int32_t get_iconLeftMargin_10() const { return ___iconLeftMargin_10; }
	inline int32_t* get_address_of_iconLeftMargin_10() { return &___iconLeftMargin_10; }
	inline void set_iconLeftMargin_10(int32_t value)
	{
		___iconLeftMargin_10 = value;
	}

	inline static int32_t get_offset_of_iconRightMargin_11() { return static_cast<int32_t>(offsetof(Category_t1110218350, ___iconRightMargin_11)); }
	inline int32_t get_iconRightMargin_11() const { return ___iconRightMargin_11; }
	inline int32_t* get_address_of_iconRightMargin_11() { return &___iconRightMargin_11; }
	inline void set_iconRightMargin_11(int32_t value)
	{
		___iconRightMargin_11 = value;
	}

	inline static int32_t get_offset_of_iconSpaceTaken_12() { return static_cast<int32_t>(offsetof(Category_t1110218350, ___iconSpaceTaken_12)); }
	inline int32_t get_iconSpaceTaken_12() const { return ___iconSpaceTaken_12; }
	inline int32_t* get_address_of_iconSpaceTaken_12() { return &___iconSpaceTaken_12; }
	inline void set_iconSpaceTaken_12(int32_t value)
	{
		___iconSpaceTaken_12 = value;
	}

	inline static int32_t get_offset_of_maxIconsForRow_13() { return static_cast<int32_t>(offsetof(Category_t1110218350, ___maxIconsForRow_13)); }
	inline int32_t get_maxIconsForRow_13() const { return ___maxIconsForRow_13; }
	inline int32_t* get_address_of_maxIconsForRow_13() { return &___maxIconsForRow_13; }
	inline void set_maxIconsForRow_13(int32_t value)
	{
		___maxIconsForRow_13 = value;
	}

	inline static int32_t get_offset_of_categoryPositionY_14() { return static_cast<int32_t>(offsetof(Category_t1110218350, ___categoryPositionY_14)); }
	inline float get_categoryPositionY_14() const { return ___categoryPositionY_14; }
	inline float* get_address_of_categoryPositionY_14() { return &___categoryPositionY_14; }
	inline void set_categoryPositionY_14(float value)
	{
		___categoryPositionY_14 = value;
	}

	inline static int32_t get_offset_of_categoryWidth_15() { return static_cast<int32_t>(offsetof(Category_t1110218350, ___categoryWidth_15)); }
	inline int32_t get_categoryWidth_15() const { return ___categoryWidth_15; }
	inline int32_t* get_address_of_categoryWidth_15() { return &___categoryWidth_15; }
	inline void set_categoryWidth_15(int32_t value)
	{
		___categoryWidth_15 = value;
	}

	inline static int32_t get_offset_of_categoryHeight_16() { return static_cast<int32_t>(offsetof(Category_t1110218350, ___categoryHeight_16)); }
	inline int32_t get_categoryHeight_16() const { return ___categoryHeight_16; }
	inline int32_t* get_address_of_categoryHeight_16() { return &___categoryHeight_16; }
	inline void set_categoryHeight_16(int32_t value)
	{
		___categoryHeight_16 = value;
	}

	inline static int32_t get_offset_of_numberOfRows_17() { return static_cast<int32_t>(offsetof(Category_t1110218350, ___numberOfRows_17)); }
	inline int32_t get_numberOfRows_17() const { return ___numberOfRows_17; }
	inline int32_t* get_address_of_numberOfRows_17() { return &___numberOfRows_17; }
	inline void set_numberOfRows_17(int32_t value)
	{
		___numberOfRows_17 = value;
	}

	inline static int32_t get_offset_of_rt_18() { return static_cast<int32_t>(offsetof(Category_t1110218350, ___rt_18)); }
	inline RectTransform_t3704657025 * get_rt_18() const { return ___rt_18; }
	inline RectTransform_t3704657025 ** get_address_of_rt_18() { return &___rt_18; }
	inline void set_rt_18(RectTransform_t3704657025 * value)
	{
		___rt_18 = value;
		Il2CppCodeGenWriteBarrier((&___rt_18), value);
	}

	inline static int32_t get_offset_of_iconArray_19() { return static_cast<int32_t>(offsetof(Category_t1110218350, ___iconArray_19)); }
	inline GameObjectU5B0___U2C0___U5D_t3328599147* get_iconArray_19() const { return ___iconArray_19; }
	inline GameObjectU5B0___U2C0___U5D_t3328599147** get_address_of_iconArray_19() { return &___iconArray_19; }
	inline void set_iconArray_19(GameObjectU5B0___U2C0___U5D_t3328599147* value)
	{
		___iconArray_19 = value;
		Il2CppCodeGenWriteBarrier((&___iconArray_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORY_T1110218350_H
#ifndef CATEGORYMANAGER_T1388308348_H
#define CATEGORYMANAGER_T1388308348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CategoryManager
struct  CategoryManager_t1388308348  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject[] CategoryManager::categories
	GameObjectU5BU5D_t3328599146* ___categories_5;
	// UnityEngine.Vector2 CategoryManager::categoryPosition
	Vector2_t2156229523  ___categoryPosition_6;
	// Category CategoryManager::previousCategory
	Category_t1110218350 * ___previousCategory_7;

public:
	inline static int32_t get_offset_of_categories_5() { return static_cast<int32_t>(offsetof(CategoryManager_t1388308348, ___categories_5)); }
	inline GameObjectU5BU5D_t3328599146* get_categories_5() const { return ___categories_5; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_categories_5() { return &___categories_5; }
	inline void set_categories_5(GameObjectU5BU5D_t3328599146* value)
	{
		___categories_5 = value;
		Il2CppCodeGenWriteBarrier((&___categories_5), value);
	}

	inline static int32_t get_offset_of_categoryPosition_6() { return static_cast<int32_t>(offsetof(CategoryManager_t1388308348, ___categoryPosition_6)); }
	inline Vector2_t2156229523  get_categoryPosition_6() const { return ___categoryPosition_6; }
	inline Vector2_t2156229523 * get_address_of_categoryPosition_6() { return &___categoryPosition_6; }
	inline void set_categoryPosition_6(Vector2_t2156229523  value)
	{
		___categoryPosition_6 = value;
	}

	inline static int32_t get_offset_of_previousCategory_7() { return static_cast<int32_t>(offsetof(CategoryManager_t1388308348, ___previousCategory_7)); }
	inline Category_t1110218350 * get_previousCategory_7() const { return ___previousCategory_7; }
	inline Category_t1110218350 ** get_address_of_previousCategory_7() { return &___previousCategory_7; }
	inline void set_previousCategory_7(Category_t1110218350 * value)
	{
		___previousCategory_7 = value;
		Il2CppCodeGenWriteBarrier((&___previousCategory_7), value);
	}
};

struct CategoryManager_t1388308348_StaticFields
{
public:
	// CategoryManager CategoryManager::instance
	CategoryManager_t1388308348 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(CategoryManager_t1388308348_StaticFields, ___instance_4)); }
	inline CategoryManager_t1388308348 * get_instance_4() const { return ___instance_4; }
	inline CategoryManager_t1388308348 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(CategoryManager_t1388308348 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORYMANAGER_T1388308348_H
#ifndef GIZMOMANAGER_T3350963123_H
#define GIZMOMANAGER_T3350963123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GizmoManager
struct  GizmoManager_t3350963123  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Image[] GizmoManager::flagImages
	ImageU5BU5D_t2439009922* ___flagImages_5;
	// UnityEngine.UI.Image[] GizmoManager::stateImages
	ImageU5BU5D_t2439009922* ___stateImages_6;
	// UnityEngine.GameObject GizmoManager::rotationGizmo
	GameObject_t1113636619 * ___rotationGizmo_7;
	// UnityEngine.GameObject GizmoManager::handStatesGizmo
	GameObject_t1113636619 * ___handStatesGizmo_8;
	// UnityEngine.GameObject GizmoManager::manoClassGizmo
	GameObject_t1113636619 * ___manoClassGizmo_9;
	// UnityEngine.GameObject GizmoManager::triggerGestureGizmo
	GameObject_t1113636619 * ___triggerGestureGizmo_10;
	// UnityEngine.GameObject GizmoManager::continuousGestureGizmo
	GameObject_t1113636619 * ___continuousGestureGizmo_11;
	// UnityEngine.GameObject GizmoManager::depthGizmo
	GameObject_t1113636619 * ___depthGizmo_12;
	// UnityEngine.GameObject GizmoManager::flagGizmo
	GameObject_t1113636619 * ___flagGizmo_13;
	// UnityEngine.Color GizmoManager::disabledStateColor
	Color_t2555686324  ___disabledStateColor_14;
	// System.Boolean GizmoManager::_show_hand_states
	bool ____show_hand_states_15;
	// System.Boolean GizmoManager::_show_rotation
	bool ____show_rotation_16;
	// System.Boolean GizmoManager::_show_mano_class
	bool ____show_mano_class_17;
	// System.Boolean GizmoManager::_show_trigger_gesture
	bool ____show_trigger_gesture_18;
	// System.Boolean GizmoManager::_show_continuous_gesture
	bool ____show_continuous_gesture_19;
	// System.Boolean GizmoManager::_show_bounding_box
	bool ____show_bounding_box_20;
	// System.Boolean GizmoManager::_show_depth
	bool ____show_depth_21;
	// System.Boolean GizmoManager::_show_flags
	bool ____show_flags_22;
	// UnityEngine.Transform GizmoManager::rotationIconTransform
	Transform_t3600365921 * ___rotationIconTransform_23;
	// UnityEngine.Transform GizmoManager::rotationTriangleTransform
	Transform_t3600365921 * ___rotationTriangleTransform_24;
	// UnityEngine.UI.Text GizmoManager::rotationValueText
	Text_t1901882714 * ___rotationValueText_25;
	// UnityEngine.UI.Text GizmoManager::depthValueText
	Text_t1901882714 * ___depthValueText_26;
	// UnityEngine.UI.Text GizmoManager::manoClassText
	Text_t1901882714 * ___manoClassText_27;
	// UnityEngine.UI.Text GizmoManager::continuousGestureText
	Text_t1901882714 * ___continuousGestureText_28;
	// UnityEngine.UI.Text GizmoManager::triggerGestureText
	Text_t1901882714 * ___triggerGestureText_29;
	// UnityEngine.UI.Image GizmoManager::depthValueImage
	Image_t2670269651 * ___depthValueImage_30;
	// UnityEngine.UI.Image GizmoManager::leftEdgeFlag
	Image_t2670269651 * ___leftEdgeFlag_31;
	// UnityEngine.UI.Image GizmoManager::rightEdgeFlag
	Image_t2670269651 * ___rightEdgeFlag_32;
	// UnityEngine.UI.Image GizmoManager::topEdgeFlag
	Image_t2670269651 * ___topEdgeFlag_33;
	// UnityEngine.UI.Image GizmoManager::botEdgeFlag
	Image_t2670269651 * ___botEdgeFlag_34;

public:
	inline static int32_t get_offset_of_flagImages_5() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___flagImages_5)); }
	inline ImageU5BU5D_t2439009922* get_flagImages_5() const { return ___flagImages_5; }
	inline ImageU5BU5D_t2439009922** get_address_of_flagImages_5() { return &___flagImages_5; }
	inline void set_flagImages_5(ImageU5BU5D_t2439009922* value)
	{
		___flagImages_5 = value;
		Il2CppCodeGenWriteBarrier((&___flagImages_5), value);
	}

	inline static int32_t get_offset_of_stateImages_6() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___stateImages_6)); }
	inline ImageU5BU5D_t2439009922* get_stateImages_6() const { return ___stateImages_6; }
	inline ImageU5BU5D_t2439009922** get_address_of_stateImages_6() { return &___stateImages_6; }
	inline void set_stateImages_6(ImageU5BU5D_t2439009922* value)
	{
		___stateImages_6 = value;
		Il2CppCodeGenWriteBarrier((&___stateImages_6), value);
	}

	inline static int32_t get_offset_of_rotationGizmo_7() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___rotationGizmo_7)); }
	inline GameObject_t1113636619 * get_rotationGizmo_7() const { return ___rotationGizmo_7; }
	inline GameObject_t1113636619 ** get_address_of_rotationGizmo_7() { return &___rotationGizmo_7; }
	inline void set_rotationGizmo_7(GameObject_t1113636619 * value)
	{
		___rotationGizmo_7 = value;
		Il2CppCodeGenWriteBarrier((&___rotationGizmo_7), value);
	}

	inline static int32_t get_offset_of_handStatesGizmo_8() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___handStatesGizmo_8)); }
	inline GameObject_t1113636619 * get_handStatesGizmo_8() const { return ___handStatesGizmo_8; }
	inline GameObject_t1113636619 ** get_address_of_handStatesGizmo_8() { return &___handStatesGizmo_8; }
	inline void set_handStatesGizmo_8(GameObject_t1113636619 * value)
	{
		___handStatesGizmo_8 = value;
		Il2CppCodeGenWriteBarrier((&___handStatesGizmo_8), value);
	}

	inline static int32_t get_offset_of_manoClassGizmo_9() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___manoClassGizmo_9)); }
	inline GameObject_t1113636619 * get_manoClassGizmo_9() const { return ___manoClassGizmo_9; }
	inline GameObject_t1113636619 ** get_address_of_manoClassGizmo_9() { return &___manoClassGizmo_9; }
	inline void set_manoClassGizmo_9(GameObject_t1113636619 * value)
	{
		___manoClassGizmo_9 = value;
		Il2CppCodeGenWriteBarrier((&___manoClassGizmo_9), value);
	}

	inline static int32_t get_offset_of_triggerGestureGizmo_10() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___triggerGestureGizmo_10)); }
	inline GameObject_t1113636619 * get_triggerGestureGizmo_10() const { return ___triggerGestureGizmo_10; }
	inline GameObject_t1113636619 ** get_address_of_triggerGestureGizmo_10() { return &___triggerGestureGizmo_10; }
	inline void set_triggerGestureGizmo_10(GameObject_t1113636619 * value)
	{
		___triggerGestureGizmo_10 = value;
		Il2CppCodeGenWriteBarrier((&___triggerGestureGizmo_10), value);
	}

	inline static int32_t get_offset_of_continuousGestureGizmo_11() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___continuousGestureGizmo_11)); }
	inline GameObject_t1113636619 * get_continuousGestureGizmo_11() const { return ___continuousGestureGizmo_11; }
	inline GameObject_t1113636619 ** get_address_of_continuousGestureGizmo_11() { return &___continuousGestureGizmo_11; }
	inline void set_continuousGestureGizmo_11(GameObject_t1113636619 * value)
	{
		___continuousGestureGizmo_11 = value;
		Il2CppCodeGenWriteBarrier((&___continuousGestureGizmo_11), value);
	}

	inline static int32_t get_offset_of_depthGizmo_12() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___depthGizmo_12)); }
	inline GameObject_t1113636619 * get_depthGizmo_12() const { return ___depthGizmo_12; }
	inline GameObject_t1113636619 ** get_address_of_depthGizmo_12() { return &___depthGizmo_12; }
	inline void set_depthGizmo_12(GameObject_t1113636619 * value)
	{
		___depthGizmo_12 = value;
		Il2CppCodeGenWriteBarrier((&___depthGizmo_12), value);
	}

	inline static int32_t get_offset_of_flagGizmo_13() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___flagGizmo_13)); }
	inline GameObject_t1113636619 * get_flagGizmo_13() const { return ___flagGizmo_13; }
	inline GameObject_t1113636619 ** get_address_of_flagGizmo_13() { return &___flagGizmo_13; }
	inline void set_flagGizmo_13(GameObject_t1113636619 * value)
	{
		___flagGizmo_13 = value;
		Il2CppCodeGenWriteBarrier((&___flagGizmo_13), value);
	}

	inline static int32_t get_offset_of_disabledStateColor_14() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___disabledStateColor_14)); }
	inline Color_t2555686324  get_disabledStateColor_14() const { return ___disabledStateColor_14; }
	inline Color_t2555686324 * get_address_of_disabledStateColor_14() { return &___disabledStateColor_14; }
	inline void set_disabledStateColor_14(Color_t2555686324  value)
	{
		___disabledStateColor_14 = value;
	}

	inline static int32_t get_offset_of__show_hand_states_15() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ____show_hand_states_15)); }
	inline bool get__show_hand_states_15() const { return ____show_hand_states_15; }
	inline bool* get_address_of__show_hand_states_15() { return &____show_hand_states_15; }
	inline void set__show_hand_states_15(bool value)
	{
		____show_hand_states_15 = value;
	}

	inline static int32_t get_offset_of__show_rotation_16() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ____show_rotation_16)); }
	inline bool get__show_rotation_16() const { return ____show_rotation_16; }
	inline bool* get_address_of__show_rotation_16() { return &____show_rotation_16; }
	inline void set__show_rotation_16(bool value)
	{
		____show_rotation_16 = value;
	}

	inline static int32_t get_offset_of__show_mano_class_17() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ____show_mano_class_17)); }
	inline bool get__show_mano_class_17() const { return ____show_mano_class_17; }
	inline bool* get_address_of__show_mano_class_17() { return &____show_mano_class_17; }
	inline void set__show_mano_class_17(bool value)
	{
		____show_mano_class_17 = value;
	}

	inline static int32_t get_offset_of__show_trigger_gesture_18() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ____show_trigger_gesture_18)); }
	inline bool get__show_trigger_gesture_18() const { return ____show_trigger_gesture_18; }
	inline bool* get_address_of__show_trigger_gesture_18() { return &____show_trigger_gesture_18; }
	inline void set__show_trigger_gesture_18(bool value)
	{
		____show_trigger_gesture_18 = value;
	}

	inline static int32_t get_offset_of__show_continuous_gesture_19() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ____show_continuous_gesture_19)); }
	inline bool get__show_continuous_gesture_19() const { return ____show_continuous_gesture_19; }
	inline bool* get_address_of__show_continuous_gesture_19() { return &____show_continuous_gesture_19; }
	inline void set__show_continuous_gesture_19(bool value)
	{
		____show_continuous_gesture_19 = value;
	}

	inline static int32_t get_offset_of__show_bounding_box_20() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ____show_bounding_box_20)); }
	inline bool get__show_bounding_box_20() const { return ____show_bounding_box_20; }
	inline bool* get_address_of__show_bounding_box_20() { return &____show_bounding_box_20; }
	inline void set__show_bounding_box_20(bool value)
	{
		____show_bounding_box_20 = value;
	}

	inline static int32_t get_offset_of__show_depth_21() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ____show_depth_21)); }
	inline bool get__show_depth_21() const { return ____show_depth_21; }
	inline bool* get_address_of__show_depth_21() { return &____show_depth_21; }
	inline void set__show_depth_21(bool value)
	{
		____show_depth_21 = value;
	}

	inline static int32_t get_offset_of__show_flags_22() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ____show_flags_22)); }
	inline bool get__show_flags_22() const { return ____show_flags_22; }
	inline bool* get_address_of__show_flags_22() { return &____show_flags_22; }
	inline void set__show_flags_22(bool value)
	{
		____show_flags_22 = value;
	}

	inline static int32_t get_offset_of_rotationIconTransform_23() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___rotationIconTransform_23)); }
	inline Transform_t3600365921 * get_rotationIconTransform_23() const { return ___rotationIconTransform_23; }
	inline Transform_t3600365921 ** get_address_of_rotationIconTransform_23() { return &___rotationIconTransform_23; }
	inline void set_rotationIconTransform_23(Transform_t3600365921 * value)
	{
		___rotationIconTransform_23 = value;
		Il2CppCodeGenWriteBarrier((&___rotationIconTransform_23), value);
	}

	inline static int32_t get_offset_of_rotationTriangleTransform_24() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___rotationTriangleTransform_24)); }
	inline Transform_t3600365921 * get_rotationTriangleTransform_24() const { return ___rotationTriangleTransform_24; }
	inline Transform_t3600365921 ** get_address_of_rotationTriangleTransform_24() { return &___rotationTriangleTransform_24; }
	inline void set_rotationTriangleTransform_24(Transform_t3600365921 * value)
	{
		___rotationTriangleTransform_24 = value;
		Il2CppCodeGenWriteBarrier((&___rotationTriangleTransform_24), value);
	}

	inline static int32_t get_offset_of_rotationValueText_25() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___rotationValueText_25)); }
	inline Text_t1901882714 * get_rotationValueText_25() const { return ___rotationValueText_25; }
	inline Text_t1901882714 ** get_address_of_rotationValueText_25() { return &___rotationValueText_25; }
	inline void set_rotationValueText_25(Text_t1901882714 * value)
	{
		___rotationValueText_25 = value;
		Il2CppCodeGenWriteBarrier((&___rotationValueText_25), value);
	}

	inline static int32_t get_offset_of_depthValueText_26() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___depthValueText_26)); }
	inline Text_t1901882714 * get_depthValueText_26() const { return ___depthValueText_26; }
	inline Text_t1901882714 ** get_address_of_depthValueText_26() { return &___depthValueText_26; }
	inline void set_depthValueText_26(Text_t1901882714 * value)
	{
		___depthValueText_26 = value;
		Il2CppCodeGenWriteBarrier((&___depthValueText_26), value);
	}

	inline static int32_t get_offset_of_manoClassText_27() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___manoClassText_27)); }
	inline Text_t1901882714 * get_manoClassText_27() const { return ___manoClassText_27; }
	inline Text_t1901882714 ** get_address_of_manoClassText_27() { return &___manoClassText_27; }
	inline void set_manoClassText_27(Text_t1901882714 * value)
	{
		___manoClassText_27 = value;
		Il2CppCodeGenWriteBarrier((&___manoClassText_27), value);
	}

	inline static int32_t get_offset_of_continuousGestureText_28() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___continuousGestureText_28)); }
	inline Text_t1901882714 * get_continuousGestureText_28() const { return ___continuousGestureText_28; }
	inline Text_t1901882714 ** get_address_of_continuousGestureText_28() { return &___continuousGestureText_28; }
	inline void set_continuousGestureText_28(Text_t1901882714 * value)
	{
		___continuousGestureText_28 = value;
		Il2CppCodeGenWriteBarrier((&___continuousGestureText_28), value);
	}

	inline static int32_t get_offset_of_triggerGestureText_29() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___triggerGestureText_29)); }
	inline Text_t1901882714 * get_triggerGestureText_29() const { return ___triggerGestureText_29; }
	inline Text_t1901882714 ** get_address_of_triggerGestureText_29() { return &___triggerGestureText_29; }
	inline void set_triggerGestureText_29(Text_t1901882714 * value)
	{
		___triggerGestureText_29 = value;
		Il2CppCodeGenWriteBarrier((&___triggerGestureText_29), value);
	}

	inline static int32_t get_offset_of_depthValueImage_30() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___depthValueImage_30)); }
	inline Image_t2670269651 * get_depthValueImage_30() const { return ___depthValueImage_30; }
	inline Image_t2670269651 ** get_address_of_depthValueImage_30() { return &___depthValueImage_30; }
	inline void set_depthValueImage_30(Image_t2670269651 * value)
	{
		___depthValueImage_30 = value;
		Il2CppCodeGenWriteBarrier((&___depthValueImage_30), value);
	}

	inline static int32_t get_offset_of_leftEdgeFlag_31() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___leftEdgeFlag_31)); }
	inline Image_t2670269651 * get_leftEdgeFlag_31() const { return ___leftEdgeFlag_31; }
	inline Image_t2670269651 ** get_address_of_leftEdgeFlag_31() { return &___leftEdgeFlag_31; }
	inline void set_leftEdgeFlag_31(Image_t2670269651 * value)
	{
		___leftEdgeFlag_31 = value;
		Il2CppCodeGenWriteBarrier((&___leftEdgeFlag_31), value);
	}

	inline static int32_t get_offset_of_rightEdgeFlag_32() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___rightEdgeFlag_32)); }
	inline Image_t2670269651 * get_rightEdgeFlag_32() const { return ___rightEdgeFlag_32; }
	inline Image_t2670269651 ** get_address_of_rightEdgeFlag_32() { return &___rightEdgeFlag_32; }
	inline void set_rightEdgeFlag_32(Image_t2670269651 * value)
	{
		___rightEdgeFlag_32 = value;
		Il2CppCodeGenWriteBarrier((&___rightEdgeFlag_32), value);
	}

	inline static int32_t get_offset_of_topEdgeFlag_33() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___topEdgeFlag_33)); }
	inline Image_t2670269651 * get_topEdgeFlag_33() const { return ___topEdgeFlag_33; }
	inline Image_t2670269651 ** get_address_of_topEdgeFlag_33() { return &___topEdgeFlag_33; }
	inline void set_topEdgeFlag_33(Image_t2670269651 * value)
	{
		___topEdgeFlag_33 = value;
		Il2CppCodeGenWriteBarrier((&___topEdgeFlag_33), value);
	}

	inline static int32_t get_offset_of_botEdgeFlag_34() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123, ___botEdgeFlag_34)); }
	inline Image_t2670269651 * get_botEdgeFlag_34() const { return ___botEdgeFlag_34; }
	inline Image_t2670269651 ** get_address_of_botEdgeFlag_34() { return &___botEdgeFlag_34; }
	inline void set_botEdgeFlag_34(Image_t2670269651 * value)
	{
		___botEdgeFlag_34 = value;
		Il2CppCodeGenWriteBarrier((&___botEdgeFlag_34), value);
	}
};

struct GizmoManager_t3350963123_StaticFields
{
public:
	// GizmoManager GizmoManager::_instance
	GizmoManager_t3350963123 * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(GizmoManager_t3350963123_StaticFields, ____instance_4)); }
	inline GizmoManager_t3350963123 * get__instance_4() const { return ____instance_4; }
	inline GizmoManager_t3350963123 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(GizmoManager_t3350963123 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((&____instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GIZMOMANAGER_T3350963123_H
#ifndef GRABPASS_T3251792315_H
#define GRABPASS_T3251792315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GrabPass
struct  GrabPass_t3251792315  : public MonoBehaviour_t3962482529
{
public:
	// System.Single GrabPass::Distortion
	float ___Distortion_4;
	// UnityEngine.Color GrabPass::color
	Color_t2555686324  ___color_5;

public:
	inline static int32_t get_offset_of_Distortion_4() { return static_cast<int32_t>(offsetof(GrabPass_t3251792315, ___Distortion_4)); }
	inline float get_Distortion_4() const { return ___Distortion_4; }
	inline float* get_address_of_Distortion_4() { return &___Distortion_4; }
	inline void set_Distortion_4(float value)
	{
		___Distortion_4 = value;
	}

	inline static int32_t get_offset_of_color_5() { return static_cast<int32_t>(offsetof(GrabPass_t3251792315, ___color_5)); }
	inline Color_t2555686324  get_color_5() const { return ___color_5; }
	inline Color_t2555686324 * get_address_of_color_5() { return &___color_5; }
	inline void set_color_5(Color_t2555686324  value)
	{
		___color_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRABPASS_T3251792315_H
#ifndef GRAYSCALE_T659308017_H
#define GRAYSCALE_T659308017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grayscale
struct  Grayscale_t659308017  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material Grayscale::material
	Material_t340375123 * ___material_4;

public:
	inline static int32_t get_offset_of_material_4() { return static_cast<int32_t>(offsetof(Grayscale_t659308017, ___material_4)); }
	inline Material_t340375123 * get_material_4() const { return ___material_4; }
	inline Material_t340375123 ** get_address_of_material_4() { return &___material_4; }
	inline void set_material_4(Material_t340375123 * value)
	{
		___material_4 = value;
		Il2CppCodeGenWriteBarrier((&___material_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAYSCALE_T659308017_H
#ifndef HANDDETECTIONMODEBUTTONBEHAVIOR_T259638122_H
#define HANDDETECTIONMODEBUTTONBEHAVIOR_T259638122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HandDetectionModeButtonBehavior
struct  HandDetectionModeButtonBehavior_t259638122  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Color HandDetectionModeButtonBehavior::transparentWhite
	Color_t2555686324  ___transparentWhite_4;
	// UnityEngine.GameObject[] HandDetectionModeButtonBehavior::handButtons
	GameObjectU5BU5D_t3328599146* ___handButtons_5;
	// SelectedHand HandDetectionModeButtonBehavior::_handModeID
	int32_t ____handModeID_6;
	// System.Boolean HandDetectionModeButtonBehavior::isSelected
	bool ___isSelected_7;

public:
	inline static int32_t get_offset_of_transparentWhite_4() { return static_cast<int32_t>(offsetof(HandDetectionModeButtonBehavior_t259638122, ___transparentWhite_4)); }
	inline Color_t2555686324  get_transparentWhite_4() const { return ___transparentWhite_4; }
	inline Color_t2555686324 * get_address_of_transparentWhite_4() { return &___transparentWhite_4; }
	inline void set_transparentWhite_4(Color_t2555686324  value)
	{
		___transparentWhite_4 = value;
	}

	inline static int32_t get_offset_of_handButtons_5() { return static_cast<int32_t>(offsetof(HandDetectionModeButtonBehavior_t259638122, ___handButtons_5)); }
	inline GameObjectU5BU5D_t3328599146* get_handButtons_5() const { return ___handButtons_5; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_handButtons_5() { return &___handButtons_5; }
	inline void set_handButtons_5(GameObjectU5BU5D_t3328599146* value)
	{
		___handButtons_5 = value;
		Il2CppCodeGenWriteBarrier((&___handButtons_5), value);
	}

	inline static int32_t get_offset_of__handModeID_6() { return static_cast<int32_t>(offsetof(HandDetectionModeButtonBehavior_t259638122, ____handModeID_6)); }
	inline int32_t get__handModeID_6() const { return ____handModeID_6; }
	inline int32_t* get_address_of__handModeID_6() { return &____handModeID_6; }
	inline void set__handModeID_6(int32_t value)
	{
		____handModeID_6 = value;
	}

	inline static int32_t get_offset_of_isSelected_7() { return static_cast<int32_t>(offsetof(HandDetectionModeButtonBehavior_t259638122, ___isSelected_7)); }
	inline bool get_isSelected_7() const { return ___isSelected_7; }
	inline bool* get_address_of_isSelected_7() { return &___isSelected_7; }
	inline void set_isSelected_7(bool value)
	{
		___isSelected_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDDETECTIONMODEBUTTONBEHAVIOR_T259638122_H
#ifndef INSTRUCTIONSMANAGER_T4057271102_H
#define INSTRUCTIONSMANAGER_T4057271102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InstructionsManager
struct  InstructionsManager_t4057271102  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject[] InstructionsManager::componentsToStart
	GameObjectU5BU5D_t3328599146* ___componentsToStart_5;
	// UnityEngine.GameObject[] InstructionsManager::slides
	GameObjectU5BU5D_t3328599146* ___slides_6;
	// UnityEngine.UI.Text InstructionsManager::currentStateText
	Text_t1901882714 * ___currentStateText_7;
	// UnityEngine.GameObject InstructionsManager::startButton
	GameObject_t1113636619 * ___startButton_8;
	// UnityEngine.Color32 InstructionsManager::transparentWhite
	Color32_t2600501292  ___transparentWhite_9;
	// UnityEngine.UI.Image[] InstructionsManager::circles
	ImageU5BU5D_t2439009922* ___circles_10;
	// UnityEngine.GameObject[] InstructionsManager::visualComponents
	GameObjectU5BU5D_t3328599146* ___visualComponents_11;
	// InstructionsManager/InstructionState InstructionsManager::currentInstractionState
	int32_t ___currentInstractionState_12;
	// ManoVisualization InstructionsManager::manoVisualization
	ManoVisualization_t1421820612 * ___manoVisualization_13;
	// System.Boolean InstructionsManager::showBoundingBox
	bool ___showBoundingBox_14;
	// System.Boolean InstructionsManager::showContour
	bool ___showContour_15;
	// System.Boolean InstructionsManager::showInner
	bool ___showInner_16;
	// System.Boolean InstructionsManager::showFingerTips
	bool ___showFingerTips_17;
	// System.Boolean InstructionsManager::showFingerTipLabels
	bool ___showFingerTipLabels_18;
	// System.Boolean InstructionsManager::showPalmCenter
	bool ___showPalmCenter_19;
	// System.Boolean InstructionsManager::showHandLayer
	bool ___showHandLayer_20;
	// System.Boolean InstructionsManager::showBackgroundLayer
	bool ___showBackgroundLayer_21;

public:
	inline static int32_t get_offset_of_componentsToStart_5() { return static_cast<int32_t>(offsetof(InstructionsManager_t4057271102, ___componentsToStart_5)); }
	inline GameObjectU5BU5D_t3328599146* get_componentsToStart_5() const { return ___componentsToStart_5; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_componentsToStart_5() { return &___componentsToStart_5; }
	inline void set_componentsToStart_5(GameObjectU5BU5D_t3328599146* value)
	{
		___componentsToStart_5 = value;
		Il2CppCodeGenWriteBarrier((&___componentsToStart_5), value);
	}

	inline static int32_t get_offset_of_slides_6() { return static_cast<int32_t>(offsetof(InstructionsManager_t4057271102, ___slides_6)); }
	inline GameObjectU5BU5D_t3328599146* get_slides_6() const { return ___slides_6; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_slides_6() { return &___slides_6; }
	inline void set_slides_6(GameObjectU5BU5D_t3328599146* value)
	{
		___slides_6 = value;
		Il2CppCodeGenWriteBarrier((&___slides_6), value);
	}

	inline static int32_t get_offset_of_currentStateText_7() { return static_cast<int32_t>(offsetof(InstructionsManager_t4057271102, ___currentStateText_7)); }
	inline Text_t1901882714 * get_currentStateText_7() const { return ___currentStateText_7; }
	inline Text_t1901882714 ** get_address_of_currentStateText_7() { return &___currentStateText_7; }
	inline void set_currentStateText_7(Text_t1901882714 * value)
	{
		___currentStateText_7 = value;
		Il2CppCodeGenWriteBarrier((&___currentStateText_7), value);
	}

	inline static int32_t get_offset_of_startButton_8() { return static_cast<int32_t>(offsetof(InstructionsManager_t4057271102, ___startButton_8)); }
	inline GameObject_t1113636619 * get_startButton_8() const { return ___startButton_8; }
	inline GameObject_t1113636619 ** get_address_of_startButton_8() { return &___startButton_8; }
	inline void set_startButton_8(GameObject_t1113636619 * value)
	{
		___startButton_8 = value;
		Il2CppCodeGenWriteBarrier((&___startButton_8), value);
	}

	inline static int32_t get_offset_of_transparentWhite_9() { return static_cast<int32_t>(offsetof(InstructionsManager_t4057271102, ___transparentWhite_9)); }
	inline Color32_t2600501292  get_transparentWhite_9() const { return ___transparentWhite_9; }
	inline Color32_t2600501292 * get_address_of_transparentWhite_9() { return &___transparentWhite_9; }
	inline void set_transparentWhite_9(Color32_t2600501292  value)
	{
		___transparentWhite_9 = value;
	}

	inline static int32_t get_offset_of_circles_10() { return static_cast<int32_t>(offsetof(InstructionsManager_t4057271102, ___circles_10)); }
	inline ImageU5BU5D_t2439009922* get_circles_10() const { return ___circles_10; }
	inline ImageU5BU5D_t2439009922** get_address_of_circles_10() { return &___circles_10; }
	inline void set_circles_10(ImageU5BU5D_t2439009922* value)
	{
		___circles_10 = value;
		Il2CppCodeGenWriteBarrier((&___circles_10), value);
	}

	inline static int32_t get_offset_of_visualComponents_11() { return static_cast<int32_t>(offsetof(InstructionsManager_t4057271102, ___visualComponents_11)); }
	inline GameObjectU5BU5D_t3328599146* get_visualComponents_11() const { return ___visualComponents_11; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_visualComponents_11() { return &___visualComponents_11; }
	inline void set_visualComponents_11(GameObjectU5BU5D_t3328599146* value)
	{
		___visualComponents_11 = value;
		Il2CppCodeGenWriteBarrier((&___visualComponents_11), value);
	}

	inline static int32_t get_offset_of_currentInstractionState_12() { return static_cast<int32_t>(offsetof(InstructionsManager_t4057271102, ___currentInstractionState_12)); }
	inline int32_t get_currentInstractionState_12() const { return ___currentInstractionState_12; }
	inline int32_t* get_address_of_currentInstractionState_12() { return &___currentInstractionState_12; }
	inline void set_currentInstractionState_12(int32_t value)
	{
		___currentInstractionState_12 = value;
	}

	inline static int32_t get_offset_of_manoVisualization_13() { return static_cast<int32_t>(offsetof(InstructionsManager_t4057271102, ___manoVisualization_13)); }
	inline ManoVisualization_t1421820612 * get_manoVisualization_13() const { return ___manoVisualization_13; }
	inline ManoVisualization_t1421820612 ** get_address_of_manoVisualization_13() { return &___manoVisualization_13; }
	inline void set_manoVisualization_13(ManoVisualization_t1421820612 * value)
	{
		___manoVisualization_13 = value;
		Il2CppCodeGenWriteBarrier((&___manoVisualization_13), value);
	}

	inline static int32_t get_offset_of_showBoundingBox_14() { return static_cast<int32_t>(offsetof(InstructionsManager_t4057271102, ___showBoundingBox_14)); }
	inline bool get_showBoundingBox_14() const { return ___showBoundingBox_14; }
	inline bool* get_address_of_showBoundingBox_14() { return &___showBoundingBox_14; }
	inline void set_showBoundingBox_14(bool value)
	{
		___showBoundingBox_14 = value;
	}

	inline static int32_t get_offset_of_showContour_15() { return static_cast<int32_t>(offsetof(InstructionsManager_t4057271102, ___showContour_15)); }
	inline bool get_showContour_15() const { return ___showContour_15; }
	inline bool* get_address_of_showContour_15() { return &___showContour_15; }
	inline void set_showContour_15(bool value)
	{
		___showContour_15 = value;
	}

	inline static int32_t get_offset_of_showInner_16() { return static_cast<int32_t>(offsetof(InstructionsManager_t4057271102, ___showInner_16)); }
	inline bool get_showInner_16() const { return ___showInner_16; }
	inline bool* get_address_of_showInner_16() { return &___showInner_16; }
	inline void set_showInner_16(bool value)
	{
		___showInner_16 = value;
	}

	inline static int32_t get_offset_of_showFingerTips_17() { return static_cast<int32_t>(offsetof(InstructionsManager_t4057271102, ___showFingerTips_17)); }
	inline bool get_showFingerTips_17() const { return ___showFingerTips_17; }
	inline bool* get_address_of_showFingerTips_17() { return &___showFingerTips_17; }
	inline void set_showFingerTips_17(bool value)
	{
		___showFingerTips_17 = value;
	}

	inline static int32_t get_offset_of_showFingerTipLabels_18() { return static_cast<int32_t>(offsetof(InstructionsManager_t4057271102, ___showFingerTipLabels_18)); }
	inline bool get_showFingerTipLabels_18() const { return ___showFingerTipLabels_18; }
	inline bool* get_address_of_showFingerTipLabels_18() { return &___showFingerTipLabels_18; }
	inline void set_showFingerTipLabels_18(bool value)
	{
		___showFingerTipLabels_18 = value;
	}

	inline static int32_t get_offset_of_showPalmCenter_19() { return static_cast<int32_t>(offsetof(InstructionsManager_t4057271102, ___showPalmCenter_19)); }
	inline bool get_showPalmCenter_19() const { return ___showPalmCenter_19; }
	inline bool* get_address_of_showPalmCenter_19() { return &___showPalmCenter_19; }
	inline void set_showPalmCenter_19(bool value)
	{
		___showPalmCenter_19 = value;
	}

	inline static int32_t get_offset_of_showHandLayer_20() { return static_cast<int32_t>(offsetof(InstructionsManager_t4057271102, ___showHandLayer_20)); }
	inline bool get_showHandLayer_20() const { return ___showHandLayer_20; }
	inline bool* get_address_of_showHandLayer_20() { return &___showHandLayer_20; }
	inline void set_showHandLayer_20(bool value)
	{
		___showHandLayer_20 = value;
	}

	inline static int32_t get_offset_of_showBackgroundLayer_21() { return static_cast<int32_t>(offsetof(InstructionsManager_t4057271102, ___showBackgroundLayer_21)); }
	inline bool get_showBackgroundLayer_21() const { return ___showBackgroundLayer_21; }
	inline bool* get_address_of_showBackgroundLayer_21() { return &___showBackgroundLayer_21; }
	inline void set_showBackgroundLayer_21(bool value)
	{
		___showBackgroundLayer_21 = value;
	}
};

struct InstructionsManager_t4057271102_StaticFields
{
public:
	// InstructionsManager InstructionsManager::_instance
	InstructionsManager_t4057271102 * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(InstructionsManager_t4057271102_StaticFields, ____instance_4)); }
	inline InstructionsManager_t4057271102 * get__instance_4() const { return ____instance_4; }
	inline InstructionsManager_t4057271102 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(InstructionsManager_t4057271102 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((&____instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTRUCTIONSMANAGER_T4057271102_H
#ifndef INTERACTIONAREA_T1281659222_H
#define INTERACTIONAREA_T1281659222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InteractionArea
struct  InteractionArea_t1281659222  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Color InteractionArea::m_MouseOverColor
	Color_t2555686324  ___m_MouseOverColor_4;
	// UnityEngine.Color InteractionArea::m_OriginalColor
	Color_t2555686324  ___m_OriginalColor_5;
	// UnityEngine.UI.Image InteractionArea::interactionAreaImage
	Image_t2670269651 * ___interactionAreaImage_6;

public:
	inline static int32_t get_offset_of_m_MouseOverColor_4() { return static_cast<int32_t>(offsetof(InteractionArea_t1281659222, ___m_MouseOverColor_4)); }
	inline Color_t2555686324  get_m_MouseOverColor_4() const { return ___m_MouseOverColor_4; }
	inline Color_t2555686324 * get_address_of_m_MouseOverColor_4() { return &___m_MouseOverColor_4; }
	inline void set_m_MouseOverColor_4(Color_t2555686324  value)
	{
		___m_MouseOverColor_4 = value;
	}

	inline static int32_t get_offset_of_m_OriginalColor_5() { return static_cast<int32_t>(offsetof(InteractionArea_t1281659222, ___m_OriginalColor_5)); }
	inline Color_t2555686324  get_m_OriginalColor_5() const { return ___m_OriginalColor_5; }
	inline Color_t2555686324 * get_address_of_m_OriginalColor_5() { return &___m_OriginalColor_5; }
	inline void set_m_OriginalColor_5(Color_t2555686324  value)
	{
		___m_OriginalColor_5 = value;
	}

	inline static int32_t get_offset_of_interactionAreaImage_6() { return static_cast<int32_t>(offsetof(InteractionArea_t1281659222, ___interactionAreaImage_6)); }
	inline Image_t2670269651 * get_interactionAreaImage_6() const { return ___interactionAreaImage_6; }
	inline Image_t2670269651 ** get_address_of_interactionAreaImage_6() { return &___interactionAreaImage_6; }
	inline void set_interactionAreaImage_6(Image_t2670269651 * value)
	{
		___interactionAreaImage_6 = value;
		Il2CppCodeGenWriteBarrier((&___interactionAreaImage_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONAREA_T1281659222_H
#ifndef MANOCALIBRATION_T699436447_H
#define MANOCALIBRATION_T699436447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ManoCalibration
struct  ManoCalibration_t699436447  : public MonoBehaviour_t3962482529
{
public:
	// ManoCalibration/CalibrationTime ManoCalibration::calibration_time
	int32_t ___calibration_time_5;
	// ManoCalibration/CalibrationTrigger ManoCalibration::calibration_trigger
	int32_t ___calibration_trigger_6;
	// System.Single ManoCalibration::calibration_delay
	float ___calibration_delay_7;
	// System.Int32 ManoCalibration::needed_fingers
	int32_t ___needed_fingers_8;
	// System.Single ManoCalibration::time_touching
	float ___time_touching_9;
	// System.Boolean ManoCalibration::canCalibrate
	bool ___canCalibrate_11;
	// System.Boolean ManoCalibration::inReach
	bool ___inReach_12;
	// System.Boolean ManoCalibration::locker
	bool ___locker_13;

public:
	inline static int32_t get_offset_of_calibration_time_5() { return static_cast<int32_t>(offsetof(ManoCalibration_t699436447, ___calibration_time_5)); }
	inline int32_t get_calibration_time_5() const { return ___calibration_time_5; }
	inline int32_t* get_address_of_calibration_time_5() { return &___calibration_time_5; }
	inline void set_calibration_time_5(int32_t value)
	{
		___calibration_time_5 = value;
	}

	inline static int32_t get_offset_of_calibration_trigger_6() { return static_cast<int32_t>(offsetof(ManoCalibration_t699436447, ___calibration_trigger_6)); }
	inline int32_t get_calibration_trigger_6() const { return ___calibration_trigger_6; }
	inline int32_t* get_address_of_calibration_trigger_6() { return &___calibration_trigger_6; }
	inline void set_calibration_trigger_6(int32_t value)
	{
		___calibration_trigger_6 = value;
	}

	inline static int32_t get_offset_of_calibration_delay_7() { return static_cast<int32_t>(offsetof(ManoCalibration_t699436447, ___calibration_delay_7)); }
	inline float get_calibration_delay_7() const { return ___calibration_delay_7; }
	inline float* get_address_of_calibration_delay_7() { return &___calibration_delay_7; }
	inline void set_calibration_delay_7(float value)
	{
		___calibration_delay_7 = value;
	}

	inline static int32_t get_offset_of_needed_fingers_8() { return static_cast<int32_t>(offsetof(ManoCalibration_t699436447, ___needed_fingers_8)); }
	inline int32_t get_needed_fingers_8() const { return ___needed_fingers_8; }
	inline int32_t* get_address_of_needed_fingers_8() { return &___needed_fingers_8; }
	inline void set_needed_fingers_8(int32_t value)
	{
		___needed_fingers_8 = value;
	}

	inline static int32_t get_offset_of_time_touching_9() { return static_cast<int32_t>(offsetof(ManoCalibration_t699436447, ___time_touching_9)); }
	inline float get_time_touching_9() const { return ___time_touching_9; }
	inline float* get_address_of_time_touching_9() { return &___time_touching_9; }
	inline void set_time_touching_9(float value)
	{
		___time_touching_9 = value;
	}

	inline static int32_t get_offset_of_canCalibrate_11() { return static_cast<int32_t>(offsetof(ManoCalibration_t699436447, ___canCalibrate_11)); }
	inline bool get_canCalibrate_11() const { return ___canCalibrate_11; }
	inline bool* get_address_of_canCalibrate_11() { return &___canCalibrate_11; }
	inline void set_canCalibrate_11(bool value)
	{
		___canCalibrate_11 = value;
	}

	inline static int32_t get_offset_of_inReach_12() { return static_cast<int32_t>(offsetof(ManoCalibration_t699436447, ___inReach_12)); }
	inline bool get_inReach_12() const { return ___inReach_12; }
	inline bool* get_address_of_inReach_12() { return &___inReach_12; }
	inline void set_inReach_12(bool value)
	{
		___inReach_12 = value;
	}

	inline static int32_t get_offset_of_locker_13() { return static_cast<int32_t>(offsetof(ManoCalibration_t699436447, ___locker_13)); }
	inline bool get_locker_13() const { return ___locker_13; }
	inline bool* get_address_of_locker_13() { return &___locker_13; }
	inline void set_locker_13(bool value)
	{
		___locker_13 = value;
	}
};

struct ManoCalibration_t699436447_StaticFields
{
public:
	// ManoCalibration ManoCalibration::_instance
	ManoCalibration_t699436447 * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(ManoCalibration_t699436447_StaticFields, ____instance_4)); }
	inline ManoCalibration_t699436447 * get__instance_4() const { return ____instance_4; }
	inline ManoCalibration_t699436447 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(ManoCalibration_t699436447 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((&____instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANOCALIBRATION_T699436447_H
#ifndef MANOEVENTS_T757003538_H
#define MANOEVENTS_T757003538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ManoEvents
struct  ManoEvents_t757003538  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean ManoEvents::displayLogMessages
	bool ___displayLogMessages_7;
	// UnityEngine.Animator ManoEvents::debugLogAnimator
	Animator_t434523843 * ___debugLogAnimator_8;
	// System.String ManoEvents::debugMessage
	String_t* ___debugMessage_9;

public:
	inline static int32_t get_offset_of_displayLogMessages_7() { return static_cast<int32_t>(offsetof(ManoEvents_t757003538, ___displayLogMessages_7)); }
	inline bool get_displayLogMessages_7() const { return ___displayLogMessages_7; }
	inline bool* get_address_of_displayLogMessages_7() { return &___displayLogMessages_7; }
	inline void set_displayLogMessages_7(bool value)
	{
		___displayLogMessages_7 = value;
	}

	inline static int32_t get_offset_of_debugLogAnimator_8() { return static_cast<int32_t>(offsetof(ManoEvents_t757003538, ___debugLogAnimator_8)); }
	inline Animator_t434523843 * get_debugLogAnimator_8() const { return ___debugLogAnimator_8; }
	inline Animator_t434523843 ** get_address_of_debugLogAnimator_8() { return &___debugLogAnimator_8; }
	inline void set_debugLogAnimator_8(Animator_t434523843 * value)
	{
		___debugLogAnimator_8 = value;
		Il2CppCodeGenWriteBarrier((&___debugLogAnimator_8), value);
	}

	inline static int32_t get_offset_of_debugMessage_9() { return static_cast<int32_t>(offsetof(ManoEvents_t757003538, ___debugMessage_9)); }
	inline String_t* get_debugMessage_9() const { return ___debugMessage_9; }
	inline String_t** get_address_of_debugMessage_9() { return &___debugMessage_9; }
	inline void set_debugMessage_9(String_t* value)
	{
		___debugMessage_9 = value;
		Il2CppCodeGenWriteBarrier((&___debugMessage_9), value);
	}
};

struct ManoEvents_t757003538_StaticFields
{
public:
	// ManoEvents ManoEvents::_instance
	ManoEvents_t757003538 * ____instance_4;
	// ManoEvents/ManoEvent ManoEvents::OnCalibrationFailed
	ManoEvent_t2837598491 * ___OnCalibrationFailed_5;
	// ManoEvents/ManoEvent ManoEvents::OnCalibrationSuccess
	ManoEvent_t2837598491 * ___OnCalibrationSuccess_6;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(ManoEvents_t757003538_StaticFields, ____instance_4)); }
	inline ManoEvents_t757003538 * get__instance_4() const { return ____instance_4; }
	inline ManoEvents_t757003538 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(ManoEvents_t757003538 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((&____instance_4), value);
	}

	inline static int32_t get_offset_of_OnCalibrationFailed_5() { return static_cast<int32_t>(offsetof(ManoEvents_t757003538_StaticFields, ___OnCalibrationFailed_5)); }
	inline ManoEvent_t2837598491 * get_OnCalibrationFailed_5() const { return ___OnCalibrationFailed_5; }
	inline ManoEvent_t2837598491 ** get_address_of_OnCalibrationFailed_5() { return &___OnCalibrationFailed_5; }
	inline void set_OnCalibrationFailed_5(ManoEvent_t2837598491 * value)
	{
		___OnCalibrationFailed_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnCalibrationFailed_5), value);
	}

	inline static int32_t get_offset_of_OnCalibrationSuccess_6() { return static_cast<int32_t>(offsetof(ManoEvents_t757003538_StaticFields, ___OnCalibrationSuccess_6)); }
	inline ManoEvent_t2837598491 * get_OnCalibrationSuccess_6() const { return ___OnCalibrationSuccess_6; }
	inline ManoEvent_t2837598491 ** get_address_of_OnCalibrationSuccess_6() { return &___OnCalibrationSuccess_6; }
	inline void set_OnCalibrationSuccess_6(ManoEvent_t2837598491 * value)
	{
		___OnCalibrationSuccess_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnCalibrationSuccess_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANOEVENTS_T757003538_H
#ifndef MANOUTILS_T3463694697_H
#define MANOUTILS_T3463694697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ManoUtils
struct  ManoUtils_t3463694697  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 ManoUtils::correction_ratio
	Vector3_t3722313464  ___correction_ratio_5;
	// UnityEngine.Camera ManoUtils::cam
	Camera_t4157153871 * ___cam_6;

public:
	inline static int32_t get_offset_of_correction_ratio_5() { return static_cast<int32_t>(offsetof(ManoUtils_t3463694697, ___correction_ratio_5)); }
	inline Vector3_t3722313464  get_correction_ratio_5() const { return ___correction_ratio_5; }
	inline Vector3_t3722313464 * get_address_of_correction_ratio_5() { return &___correction_ratio_5; }
	inline void set_correction_ratio_5(Vector3_t3722313464  value)
	{
		___correction_ratio_5 = value;
	}

	inline static int32_t get_offset_of_cam_6() { return static_cast<int32_t>(offsetof(ManoUtils_t3463694697, ___cam_6)); }
	inline Camera_t4157153871 * get_cam_6() const { return ___cam_6; }
	inline Camera_t4157153871 ** get_address_of_cam_6() { return &___cam_6; }
	inline void set_cam_6(Camera_t4157153871 * value)
	{
		___cam_6 = value;
		Il2CppCodeGenWriteBarrier((&___cam_6), value);
	}
};

struct ManoUtils_t3463694697_StaticFields
{
public:
	// ManoUtils ManoUtils::instance
	ManoUtils_t3463694697 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(ManoUtils_t3463694697_StaticFields, ___instance_4)); }
	inline ManoUtils_t3463694697 * get_instance_4() const { return ___instance_4; }
	inline ManoUtils_t3463694697 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(ManoUtils_t3463694697 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANOUTILS_T3463694697_H
#ifndef MANOVISUALIZATION_T1421820612_H
#define MANOVISUALIZATION_T1421820612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ManoVisualization
struct  ManoVisualization_t1421820612  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Color ManoVisualization::_outlinePointsColor
	Color_t2555686324  ____outlinePointsColor_4;
	// UnityEngine.Color ManoVisualization::_innerPointsColor
	Color_t2555686324  ____innerPointsColor_5;
	// UnityEngine.Color ManoVisualization::_clickLineColor
	Color_t2555686324  ____clickLineColor_6;
	// UnityEngine.Color ManoVisualization::_tapLineColor
	Color_t2555686324  ____tapLineColor_7;
	// UnityEngine.Color ManoVisualization::_grabLineColor
	Color_t2555686324  ____grabLineColor_8;
	// UnityEngine.Color ManoVisualization::_releaseLineColor
	Color_t2555686324  ____releaseLineColor_9;
	// UnityEngine.Color ManoVisualization::_releasePinchLineColor
	Color_t2555686324  ____releasePinchLineColor_10;
	// UnityEngine.Color ManoVisualization::_grabPinchLineColor
	Color_t2555686324  ____grabPinchLineColor_11;
	// UnityEngine.Color ManoVisualization::_fingertipsLineColor
	Color_t2555686324  ____fingertipsLineColor_12;
	// UnityEngine.Color ManoVisualization::_holdColor
	Color_t2555686324  ____holdColor_13;
	// UnityEngine.Color ManoVisualization::_baseColor
	Color_t2555686324  ____baseColor_14;
	// UnityEngine.Color ManoVisualization::_pinchColor
	Color_t2555686324  ____pinchColor_15;
	// UnityEngine.Color ManoVisualization::_openHandColor
	Color_t2555686324  ____openHandColor_16;
	// UnityEngine.Color ManoVisualization::_closedHandColor
	Color_t2555686324  ____closedHandColor_17;
	// UnityEngine.Color ManoVisualization::_pushColor
	Color_t2555686324  ____pushColor_18;
	// UnityEngine.Color ManoVisualization::_pointerColor
	Color_t2555686324  ____pointerColor_19;
	// UnityEngine.Transform ManoVisualization::outer_dots_prefab
	Transform_t3600365921 * ___outer_dots_prefab_20;
	// UnityEngine.Transform ManoVisualization::inner_dots_prefab
	Transform_t3600365921 * ___inner_dots_prefab_21;
	// UnityEngine.Transform ManoVisualization::bounding_box_prefab
	Transform_t3600365921 * ___bounding_box_prefab_22;
	// System.Boolean ManoVisualization::_show_border_flags
	bool ____show_border_flags_23;
	// System.Boolean ManoVisualization::_show_bounding_box
	bool ____show_bounding_box_24;
	// System.Boolean ManoVisualization::_show_contour
	bool ____show_contour_25;
	// System.Boolean ManoVisualization::_show_inner
	bool ____show_inner_26;
	// System.Boolean ManoVisualization::_show_fingertips
	bool ____show_fingertips_27;
	// System.Boolean ManoVisualization::_show_fingertip_labels
	bool ____show_fingertip_labels_28;
	// System.Boolean ManoVisualization::_show_palm_center
	bool ____show_palm_center_29;
	// System.Boolean ManoVisualization::_show_hand_layer
	bool ____show_hand_layer_30;
	// System.Boolean ManoVisualization::_show_background_layer
	bool ____show_background_layer_31;
	// System.Boolean ManoVisualization::_show_joints
	bool ____show_joints_32;
	// UnityEngine.Camera ManoVisualization::cam
	Camera_t4157153871 * ___cam_33;
	// UnityEngine.GameObject ManoVisualization::manomotionGenericLayer
	GameObject_t1113636619 * ___manomotionGenericLayer_34;
	// UnityEngine.GameObject ManoVisualization::layering_sphere
	GameObject_t1113636619 * ___layering_sphere_35;
	// UnityEngine.Transform[] ManoVisualization::bounding_box
	TransformU5BU5D_t807237628* ___bounding_box_36;
	// UnityEngine.Transform[] ManoVisualization::palm
	TransformU5BU5D_t807237628* ___palm_37;
	// UnityEngine.Transform[][] ManoVisualization::contour_particles
	TransformU5BU5DU5BU5D_t2335906965* ___contour_particles_38;
	// UnityEngine.Transform[][] ManoVisualization::inner_particles
	TransformU5BU5DU5BU5D_t2335906965* ___inner_particles_39;
	// UnityEngine.LineRenderer[] ManoVisualization::contour_line_renderer
	LineRendererU5BU5D_t976293515* ___contour_line_renderer_40;
	// BoundingBoxUI[] ManoVisualization::bounding_box_ui
	BoundingBoxUIU5BU5D_t466324417* ___bounding_box_ui_41;
	// UnityEngine.Transform[][] ManoVisualization::fingertips_t
	TransformU5BU5DU5BU5D_t2335906965* ___fingertips_t_42;
	// UnityEngine.Transform[][] ManoVisualization::fingertip_labels
	TransformU5BU5DU5BU5D_t2335906965* ___fingertip_labels_43;
	// System.String[] ManoVisualization::finger_labels
	StringU5BU5D_t1281789340* ___finger_labels_44;
	// UnityEngine.GameObject ManoVisualization::contour_parent
	GameObject_t1113636619 * ___contour_parent_45;
	// UnityEngine.GameObject ManoVisualization::inner_parent
	GameObject_t1113636619 * ___inner_parent_46;
	// UnityEngine.GameObject ManoVisualization::fingertip_parent
	GameObject_t1113636619 * ___fingertip_parent_47;
	// UnityEngine.GameObject ManoVisualization::palmcenter_parent
	GameObject_t1113636619 * ___palmcenter_parent_48;
	// UnityEngine.GameObject ManoVisualization::fingertip_label_parent
	GameObject_t1113636619 * ___fingertip_label_parent_49;
	// UnityEngine.GameObject ManoVisualization::joints_parent
	GameObject_t1113636619 * ___joints_parent_50;
	// UnityEngine.GameObject ManoVisualization::bounding_box_parent
	GameObject_t1113636619 * ___bounding_box_parent_51;
	// ManoUtils ManoVisualization::mano_utils
	ManoUtils_t3463694697 * ___mano_utils_52;
	// UnityEngine.MeshRenderer[] ManoVisualization::_layer_hands
	MeshRendererU5BU5D_t2132764133* ____layer_hands_53;
	// UnityEngine.MeshRenderer ManoVisualization::_layer_background
	MeshRenderer_t587009260 * ____layer_background_54;
	// System.Int32 ManoVisualization::handsSupportedByLicence
	int32_t ___handsSupportedByLicence_55;
	// ManomotionUIManagment ManoVisualization::manomotionUI
	ManomotionUIManagment_t1133875195 * ___manomotionUI_56;

public:
	inline static int32_t get_offset_of__outlinePointsColor_4() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____outlinePointsColor_4)); }
	inline Color_t2555686324  get__outlinePointsColor_4() const { return ____outlinePointsColor_4; }
	inline Color_t2555686324 * get_address_of__outlinePointsColor_4() { return &____outlinePointsColor_4; }
	inline void set__outlinePointsColor_4(Color_t2555686324  value)
	{
		____outlinePointsColor_4 = value;
	}

	inline static int32_t get_offset_of__innerPointsColor_5() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____innerPointsColor_5)); }
	inline Color_t2555686324  get__innerPointsColor_5() const { return ____innerPointsColor_5; }
	inline Color_t2555686324 * get_address_of__innerPointsColor_5() { return &____innerPointsColor_5; }
	inline void set__innerPointsColor_5(Color_t2555686324  value)
	{
		____innerPointsColor_5 = value;
	}

	inline static int32_t get_offset_of__clickLineColor_6() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____clickLineColor_6)); }
	inline Color_t2555686324  get__clickLineColor_6() const { return ____clickLineColor_6; }
	inline Color_t2555686324 * get_address_of__clickLineColor_6() { return &____clickLineColor_6; }
	inline void set__clickLineColor_6(Color_t2555686324  value)
	{
		____clickLineColor_6 = value;
	}

	inline static int32_t get_offset_of__tapLineColor_7() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____tapLineColor_7)); }
	inline Color_t2555686324  get__tapLineColor_7() const { return ____tapLineColor_7; }
	inline Color_t2555686324 * get_address_of__tapLineColor_7() { return &____tapLineColor_7; }
	inline void set__tapLineColor_7(Color_t2555686324  value)
	{
		____tapLineColor_7 = value;
	}

	inline static int32_t get_offset_of__grabLineColor_8() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____grabLineColor_8)); }
	inline Color_t2555686324  get__grabLineColor_8() const { return ____grabLineColor_8; }
	inline Color_t2555686324 * get_address_of__grabLineColor_8() { return &____grabLineColor_8; }
	inline void set__grabLineColor_8(Color_t2555686324  value)
	{
		____grabLineColor_8 = value;
	}

	inline static int32_t get_offset_of__releaseLineColor_9() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____releaseLineColor_9)); }
	inline Color_t2555686324  get__releaseLineColor_9() const { return ____releaseLineColor_9; }
	inline Color_t2555686324 * get_address_of__releaseLineColor_9() { return &____releaseLineColor_9; }
	inline void set__releaseLineColor_9(Color_t2555686324  value)
	{
		____releaseLineColor_9 = value;
	}

	inline static int32_t get_offset_of__releasePinchLineColor_10() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____releasePinchLineColor_10)); }
	inline Color_t2555686324  get__releasePinchLineColor_10() const { return ____releasePinchLineColor_10; }
	inline Color_t2555686324 * get_address_of__releasePinchLineColor_10() { return &____releasePinchLineColor_10; }
	inline void set__releasePinchLineColor_10(Color_t2555686324  value)
	{
		____releasePinchLineColor_10 = value;
	}

	inline static int32_t get_offset_of__grabPinchLineColor_11() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____grabPinchLineColor_11)); }
	inline Color_t2555686324  get__grabPinchLineColor_11() const { return ____grabPinchLineColor_11; }
	inline Color_t2555686324 * get_address_of__grabPinchLineColor_11() { return &____grabPinchLineColor_11; }
	inline void set__grabPinchLineColor_11(Color_t2555686324  value)
	{
		____grabPinchLineColor_11 = value;
	}

	inline static int32_t get_offset_of__fingertipsLineColor_12() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____fingertipsLineColor_12)); }
	inline Color_t2555686324  get__fingertipsLineColor_12() const { return ____fingertipsLineColor_12; }
	inline Color_t2555686324 * get_address_of__fingertipsLineColor_12() { return &____fingertipsLineColor_12; }
	inline void set__fingertipsLineColor_12(Color_t2555686324  value)
	{
		____fingertipsLineColor_12 = value;
	}

	inline static int32_t get_offset_of__holdColor_13() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____holdColor_13)); }
	inline Color_t2555686324  get__holdColor_13() const { return ____holdColor_13; }
	inline Color_t2555686324 * get_address_of__holdColor_13() { return &____holdColor_13; }
	inline void set__holdColor_13(Color_t2555686324  value)
	{
		____holdColor_13 = value;
	}

	inline static int32_t get_offset_of__baseColor_14() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____baseColor_14)); }
	inline Color_t2555686324  get__baseColor_14() const { return ____baseColor_14; }
	inline Color_t2555686324 * get_address_of__baseColor_14() { return &____baseColor_14; }
	inline void set__baseColor_14(Color_t2555686324  value)
	{
		____baseColor_14 = value;
	}

	inline static int32_t get_offset_of__pinchColor_15() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____pinchColor_15)); }
	inline Color_t2555686324  get__pinchColor_15() const { return ____pinchColor_15; }
	inline Color_t2555686324 * get_address_of__pinchColor_15() { return &____pinchColor_15; }
	inline void set__pinchColor_15(Color_t2555686324  value)
	{
		____pinchColor_15 = value;
	}

	inline static int32_t get_offset_of__openHandColor_16() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____openHandColor_16)); }
	inline Color_t2555686324  get__openHandColor_16() const { return ____openHandColor_16; }
	inline Color_t2555686324 * get_address_of__openHandColor_16() { return &____openHandColor_16; }
	inline void set__openHandColor_16(Color_t2555686324  value)
	{
		____openHandColor_16 = value;
	}

	inline static int32_t get_offset_of__closedHandColor_17() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____closedHandColor_17)); }
	inline Color_t2555686324  get__closedHandColor_17() const { return ____closedHandColor_17; }
	inline Color_t2555686324 * get_address_of__closedHandColor_17() { return &____closedHandColor_17; }
	inline void set__closedHandColor_17(Color_t2555686324  value)
	{
		____closedHandColor_17 = value;
	}

	inline static int32_t get_offset_of__pushColor_18() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____pushColor_18)); }
	inline Color_t2555686324  get__pushColor_18() const { return ____pushColor_18; }
	inline Color_t2555686324 * get_address_of__pushColor_18() { return &____pushColor_18; }
	inline void set__pushColor_18(Color_t2555686324  value)
	{
		____pushColor_18 = value;
	}

	inline static int32_t get_offset_of__pointerColor_19() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____pointerColor_19)); }
	inline Color_t2555686324  get__pointerColor_19() const { return ____pointerColor_19; }
	inline Color_t2555686324 * get_address_of__pointerColor_19() { return &____pointerColor_19; }
	inline void set__pointerColor_19(Color_t2555686324  value)
	{
		____pointerColor_19 = value;
	}

	inline static int32_t get_offset_of_outer_dots_prefab_20() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___outer_dots_prefab_20)); }
	inline Transform_t3600365921 * get_outer_dots_prefab_20() const { return ___outer_dots_prefab_20; }
	inline Transform_t3600365921 ** get_address_of_outer_dots_prefab_20() { return &___outer_dots_prefab_20; }
	inline void set_outer_dots_prefab_20(Transform_t3600365921 * value)
	{
		___outer_dots_prefab_20 = value;
		Il2CppCodeGenWriteBarrier((&___outer_dots_prefab_20), value);
	}

	inline static int32_t get_offset_of_inner_dots_prefab_21() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___inner_dots_prefab_21)); }
	inline Transform_t3600365921 * get_inner_dots_prefab_21() const { return ___inner_dots_prefab_21; }
	inline Transform_t3600365921 ** get_address_of_inner_dots_prefab_21() { return &___inner_dots_prefab_21; }
	inline void set_inner_dots_prefab_21(Transform_t3600365921 * value)
	{
		___inner_dots_prefab_21 = value;
		Il2CppCodeGenWriteBarrier((&___inner_dots_prefab_21), value);
	}

	inline static int32_t get_offset_of_bounding_box_prefab_22() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___bounding_box_prefab_22)); }
	inline Transform_t3600365921 * get_bounding_box_prefab_22() const { return ___bounding_box_prefab_22; }
	inline Transform_t3600365921 ** get_address_of_bounding_box_prefab_22() { return &___bounding_box_prefab_22; }
	inline void set_bounding_box_prefab_22(Transform_t3600365921 * value)
	{
		___bounding_box_prefab_22 = value;
		Il2CppCodeGenWriteBarrier((&___bounding_box_prefab_22), value);
	}

	inline static int32_t get_offset_of__show_border_flags_23() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____show_border_flags_23)); }
	inline bool get__show_border_flags_23() const { return ____show_border_flags_23; }
	inline bool* get_address_of__show_border_flags_23() { return &____show_border_flags_23; }
	inline void set__show_border_flags_23(bool value)
	{
		____show_border_flags_23 = value;
	}

	inline static int32_t get_offset_of__show_bounding_box_24() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____show_bounding_box_24)); }
	inline bool get__show_bounding_box_24() const { return ____show_bounding_box_24; }
	inline bool* get_address_of__show_bounding_box_24() { return &____show_bounding_box_24; }
	inline void set__show_bounding_box_24(bool value)
	{
		____show_bounding_box_24 = value;
	}

	inline static int32_t get_offset_of__show_contour_25() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____show_contour_25)); }
	inline bool get__show_contour_25() const { return ____show_contour_25; }
	inline bool* get_address_of__show_contour_25() { return &____show_contour_25; }
	inline void set__show_contour_25(bool value)
	{
		____show_contour_25 = value;
	}

	inline static int32_t get_offset_of__show_inner_26() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____show_inner_26)); }
	inline bool get__show_inner_26() const { return ____show_inner_26; }
	inline bool* get_address_of__show_inner_26() { return &____show_inner_26; }
	inline void set__show_inner_26(bool value)
	{
		____show_inner_26 = value;
	}

	inline static int32_t get_offset_of__show_fingertips_27() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____show_fingertips_27)); }
	inline bool get__show_fingertips_27() const { return ____show_fingertips_27; }
	inline bool* get_address_of__show_fingertips_27() { return &____show_fingertips_27; }
	inline void set__show_fingertips_27(bool value)
	{
		____show_fingertips_27 = value;
	}

	inline static int32_t get_offset_of__show_fingertip_labels_28() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____show_fingertip_labels_28)); }
	inline bool get__show_fingertip_labels_28() const { return ____show_fingertip_labels_28; }
	inline bool* get_address_of__show_fingertip_labels_28() { return &____show_fingertip_labels_28; }
	inline void set__show_fingertip_labels_28(bool value)
	{
		____show_fingertip_labels_28 = value;
	}

	inline static int32_t get_offset_of__show_palm_center_29() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____show_palm_center_29)); }
	inline bool get__show_palm_center_29() const { return ____show_palm_center_29; }
	inline bool* get_address_of__show_palm_center_29() { return &____show_palm_center_29; }
	inline void set__show_palm_center_29(bool value)
	{
		____show_palm_center_29 = value;
	}

	inline static int32_t get_offset_of__show_hand_layer_30() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____show_hand_layer_30)); }
	inline bool get__show_hand_layer_30() const { return ____show_hand_layer_30; }
	inline bool* get_address_of__show_hand_layer_30() { return &____show_hand_layer_30; }
	inline void set__show_hand_layer_30(bool value)
	{
		____show_hand_layer_30 = value;
	}

	inline static int32_t get_offset_of__show_background_layer_31() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____show_background_layer_31)); }
	inline bool get__show_background_layer_31() const { return ____show_background_layer_31; }
	inline bool* get_address_of__show_background_layer_31() { return &____show_background_layer_31; }
	inline void set__show_background_layer_31(bool value)
	{
		____show_background_layer_31 = value;
	}

	inline static int32_t get_offset_of__show_joints_32() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____show_joints_32)); }
	inline bool get__show_joints_32() const { return ____show_joints_32; }
	inline bool* get_address_of__show_joints_32() { return &____show_joints_32; }
	inline void set__show_joints_32(bool value)
	{
		____show_joints_32 = value;
	}

	inline static int32_t get_offset_of_cam_33() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___cam_33)); }
	inline Camera_t4157153871 * get_cam_33() const { return ___cam_33; }
	inline Camera_t4157153871 ** get_address_of_cam_33() { return &___cam_33; }
	inline void set_cam_33(Camera_t4157153871 * value)
	{
		___cam_33 = value;
		Il2CppCodeGenWriteBarrier((&___cam_33), value);
	}

	inline static int32_t get_offset_of_manomotionGenericLayer_34() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___manomotionGenericLayer_34)); }
	inline GameObject_t1113636619 * get_manomotionGenericLayer_34() const { return ___manomotionGenericLayer_34; }
	inline GameObject_t1113636619 ** get_address_of_manomotionGenericLayer_34() { return &___manomotionGenericLayer_34; }
	inline void set_manomotionGenericLayer_34(GameObject_t1113636619 * value)
	{
		___manomotionGenericLayer_34 = value;
		Il2CppCodeGenWriteBarrier((&___manomotionGenericLayer_34), value);
	}

	inline static int32_t get_offset_of_layering_sphere_35() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___layering_sphere_35)); }
	inline GameObject_t1113636619 * get_layering_sphere_35() const { return ___layering_sphere_35; }
	inline GameObject_t1113636619 ** get_address_of_layering_sphere_35() { return &___layering_sphere_35; }
	inline void set_layering_sphere_35(GameObject_t1113636619 * value)
	{
		___layering_sphere_35 = value;
		Il2CppCodeGenWriteBarrier((&___layering_sphere_35), value);
	}

	inline static int32_t get_offset_of_bounding_box_36() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___bounding_box_36)); }
	inline TransformU5BU5D_t807237628* get_bounding_box_36() const { return ___bounding_box_36; }
	inline TransformU5BU5D_t807237628** get_address_of_bounding_box_36() { return &___bounding_box_36; }
	inline void set_bounding_box_36(TransformU5BU5D_t807237628* value)
	{
		___bounding_box_36 = value;
		Il2CppCodeGenWriteBarrier((&___bounding_box_36), value);
	}

	inline static int32_t get_offset_of_palm_37() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___palm_37)); }
	inline TransformU5BU5D_t807237628* get_palm_37() const { return ___palm_37; }
	inline TransformU5BU5D_t807237628** get_address_of_palm_37() { return &___palm_37; }
	inline void set_palm_37(TransformU5BU5D_t807237628* value)
	{
		___palm_37 = value;
		Il2CppCodeGenWriteBarrier((&___palm_37), value);
	}

	inline static int32_t get_offset_of_contour_particles_38() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___contour_particles_38)); }
	inline TransformU5BU5DU5BU5D_t2335906965* get_contour_particles_38() const { return ___contour_particles_38; }
	inline TransformU5BU5DU5BU5D_t2335906965** get_address_of_contour_particles_38() { return &___contour_particles_38; }
	inline void set_contour_particles_38(TransformU5BU5DU5BU5D_t2335906965* value)
	{
		___contour_particles_38 = value;
		Il2CppCodeGenWriteBarrier((&___contour_particles_38), value);
	}

	inline static int32_t get_offset_of_inner_particles_39() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___inner_particles_39)); }
	inline TransformU5BU5DU5BU5D_t2335906965* get_inner_particles_39() const { return ___inner_particles_39; }
	inline TransformU5BU5DU5BU5D_t2335906965** get_address_of_inner_particles_39() { return &___inner_particles_39; }
	inline void set_inner_particles_39(TransformU5BU5DU5BU5D_t2335906965* value)
	{
		___inner_particles_39 = value;
		Il2CppCodeGenWriteBarrier((&___inner_particles_39), value);
	}

	inline static int32_t get_offset_of_contour_line_renderer_40() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___contour_line_renderer_40)); }
	inline LineRendererU5BU5D_t976293515* get_contour_line_renderer_40() const { return ___contour_line_renderer_40; }
	inline LineRendererU5BU5D_t976293515** get_address_of_contour_line_renderer_40() { return &___contour_line_renderer_40; }
	inline void set_contour_line_renderer_40(LineRendererU5BU5D_t976293515* value)
	{
		___contour_line_renderer_40 = value;
		Il2CppCodeGenWriteBarrier((&___contour_line_renderer_40), value);
	}

	inline static int32_t get_offset_of_bounding_box_ui_41() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___bounding_box_ui_41)); }
	inline BoundingBoxUIU5BU5D_t466324417* get_bounding_box_ui_41() const { return ___bounding_box_ui_41; }
	inline BoundingBoxUIU5BU5D_t466324417** get_address_of_bounding_box_ui_41() { return &___bounding_box_ui_41; }
	inline void set_bounding_box_ui_41(BoundingBoxUIU5BU5D_t466324417* value)
	{
		___bounding_box_ui_41 = value;
		Il2CppCodeGenWriteBarrier((&___bounding_box_ui_41), value);
	}

	inline static int32_t get_offset_of_fingertips_t_42() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___fingertips_t_42)); }
	inline TransformU5BU5DU5BU5D_t2335906965* get_fingertips_t_42() const { return ___fingertips_t_42; }
	inline TransformU5BU5DU5BU5D_t2335906965** get_address_of_fingertips_t_42() { return &___fingertips_t_42; }
	inline void set_fingertips_t_42(TransformU5BU5DU5BU5D_t2335906965* value)
	{
		___fingertips_t_42 = value;
		Il2CppCodeGenWriteBarrier((&___fingertips_t_42), value);
	}

	inline static int32_t get_offset_of_fingertip_labels_43() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___fingertip_labels_43)); }
	inline TransformU5BU5DU5BU5D_t2335906965* get_fingertip_labels_43() const { return ___fingertip_labels_43; }
	inline TransformU5BU5DU5BU5D_t2335906965** get_address_of_fingertip_labels_43() { return &___fingertip_labels_43; }
	inline void set_fingertip_labels_43(TransformU5BU5DU5BU5D_t2335906965* value)
	{
		___fingertip_labels_43 = value;
		Il2CppCodeGenWriteBarrier((&___fingertip_labels_43), value);
	}

	inline static int32_t get_offset_of_finger_labels_44() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___finger_labels_44)); }
	inline StringU5BU5D_t1281789340* get_finger_labels_44() const { return ___finger_labels_44; }
	inline StringU5BU5D_t1281789340** get_address_of_finger_labels_44() { return &___finger_labels_44; }
	inline void set_finger_labels_44(StringU5BU5D_t1281789340* value)
	{
		___finger_labels_44 = value;
		Il2CppCodeGenWriteBarrier((&___finger_labels_44), value);
	}

	inline static int32_t get_offset_of_contour_parent_45() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___contour_parent_45)); }
	inline GameObject_t1113636619 * get_contour_parent_45() const { return ___contour_parent_45; }
	inline GameObject_t1113636619 ** get_address_of_contour_parent_45() { return &___contour_parent_45; }
	inline void set_contour_parent_45(GameObject_t1113636619 * value)
	{
		___contour_parent_45 = value;
		Il2CppCodeGenWriteBarrier((&___contour_parent_45), value);
	}

	inline static int32_t get_offset_of_inner_parent_46() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___inner_parent_46)); }
	inline GameObject_t1113636619 * get_inner_parent_46() const { return ___inner_parent_46; }
	inline GameObject_t1113636619 ** get_address_of_inner_parent_46() { return &___inner_parent_46; }
	inline void set_inner_parent_46(GameObject_t1113636619 * value)
	{
		___inner_parent_46 = value;
		Il2CppCodeGenWriteBarrier((&___inner_parent_46), value);
	}

	inline static int32_t get_offset_of_fingertip_parent_47() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___fingertip_parent_47)); }
	inline GameObject_t1113636619 * get_fingertip_parent_47() const { return ___fingertip_parent_47; }
	inline GameObject_t1113636619 ** get_address_of_fingertip_parent_47() { return &___fingertip_parent_47; }
	inline void set_fingertip_parent_47(GameObject_t1113636619 * value)
	{
		___fingertip_parent_47 = value;
		Il2CppCodeGenWriteBarrier((&___fingertip_parent_47), value);
	}

	inline static int32_t get_offset_of_palmcenter_parent_48() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___palmcenter_parent_48)); }
	inline GameObject_t1113636619 * get_palmcenter_parent_48() const { return ___palmcenter_parent_48; }
	inline GameObject_t1113636619 ** get_address_of_palmcenter_parent_48() { return &___palmcenter_parent_48; }
	inline void set_palmcenter_parent_48(GameObject_t1113636619 * value)
	{
		___palmcenter_parent_48 = value;
		Il2CppCodeGenWriteBarrier((&___palmcenter_parent_48), value);
	}

	inline static int32_t get_offset_of_fingertip_label_parent_49() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___fingertip_label_parent_49)); }
	inline GameObject_t1113636619 * get_fingertip_label_parent_49() const { return ___fingertip_label_parent_49; }
	inline GameObject_t1113636619 ** get_address_of_fingertip_label_parent_49() { return &___fingertip_label_parent_49; }
	inline void set_fingertip_label_parent_49(GameObject_t1113636619 * value)
	{
		___fingertip_label_parent_49 = value;
		Il2CppCodeGenWriteBarrier((&___fingertip_label_parent_49), value);
	}

	inline static int32_t get_offset_of_joints_parent_50() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___joints_parent_50)); }
	inline GameObject_t1113636619 * get_joints_parent_50() const { return ___joints_parent_50; }
	inline GameObject_t1113636619 ** get_address_of_joints_parent_50() { return &___joints_parent_50; }
	inline void set_joints_parent_50(GameObject_t1113636619 * value)
	{
		___joints_parent_50 = value;
		Il2CppCodeGenWriteBarrier((&___joints_parent_50), value);
	}

	inline static int32_t get_offset_of_bounding_box_parent_51() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___bounding_box_parent_51)); }
	inline GameObject_t1113636619 * get_bounding_box_parent_51() const { return ___bounding_box_parent_51; }
	inline GameObject_t1113636619 ** get_address_of_bounding_box_parent_51() { return &___bounding_box_parent_51; }
	inline void set_bounding_box_parent_51(GameObject_t1113636619 * value)
	{
		___bounding_box_parent_51 = value;
		Il2CppCodeGenWriteBarrier((&___bounding_box_parent_51), value);
	}

	inline static int32_t get_offset_of_mano_utils_52() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___mano_utils_52)); }
	inline ManoUtils_t3463694697 * get_mano_utils_52() const { return ___mano_utils_52; }
	inline ManoUtils_t3463694697 ** get_address_of_mano_utils_52() { return &___mano_utils_52; }
	inline void set_mano_utils_52(ManoUtils_t3463694697 * value)
	{
		___mano_utils_52 = value;
		Il2CppCodeGenWriteBarrier((&___mano_utils_52), value);
	}

	inline static int32_t get_offset_of__layer_hands_53() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____layer_hands_53)); }
	inline MeshRendererU5BU5D_t2132764133* get__layer_hands_53() const { return ____layer_hands_53; }
	inline MeshRendererU5BU5D_t2132764133** get_address_of__layer_hands_53() { return &____layer_hands_53; }
	inline void set__layer_hands_53(MeshRendererU5BU5D_t2132764133* value)
	{
		____layer_hands_53 = value;
		Il2CppCodeGenWriteBarrier((&____layer_hands_53), value);
	}

	inline static int32_t get_offset_of__layer_background_54() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ____layer_background_54)); }
	inline MeshRenderer_t587009260 * get__layer_background_54() const { return ____layer_background_54; }
	inline MeshRenderer_t587009260 ** get_address_of__layer_background_54() { return &____layer_background_54; }
	inline void set__layer_background_54(MeshRenderer_t587009260 * value)
	{
		____layer_background_54 = value;
		Il2CppCodeGenWriteBarrier((&____layer_background_54), value);
	}

	inline static int32_t get_offset_of_handsSupportedByLicence_55() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___handsSupportedByLicence_55)); }
	inline int32_t get_handsSupportedByLicence_55() const { return ___handsSupportedByLicence_55; }
	inline int32_t* get_address_of_handsSupportedByLicence_55() { return &___handsSupportedByLicence_55; }
	inline void set_handsSupportedByLicence_55(int32_t value)
	{
		___handsSupportedByLicence_55 = value;
	}

	inline static int32_t get_offset_of_manomotionUI_56() { return static_cast<int32_t>(offsetof(ManoVisualization_t1421820612, ___manomotionUI_56)); }
	inline ManomotionUIManagment_t1133875195 * get_manomotionUI_56() const { return ___manomotionUI_56; }
	inline ManomotionUIManagment_t1133875195 ** get_address_of_manomotionUI_56() { return &___manomotionUI_56; }
	inline void set_manomotionUI_56(ManomotionUIManagment_t1133875195 * value)
	{
		___manomotionUI_56 = value;
		Il2CppCodeGenWriteBarrier((&___manomotionUI_56), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANOVISUALIZATION_T1421820612_H
#ifndef MANOMOTIONMANAGER_T565502280_H
#define MANOMOTIONMANAGER_T565502280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ManomotionManager
struct  ManomotionManager_t565502280  : public MonoBehaviour_t3962482529
{
public:
	// HandInfoUnity[] ManomotionManager::hand_infos
	HandInfoUnityU5BU5D_t4085119228* ___hand_infos_9;
	// VisualizationInfo ManomotionManager::visualization_info
	VisualizationInfo_t4138410502  ___visualization_info_10;
	// Session ManomotionManager::manomotion_Session
	Session_t4211189121  ___manomotion_Session_11;
	// System.Int32 ManomotionManager::_frame_number
	int32_t ____frame_number_12;
	// System.Int32 ManomotionManager::_width
	int32_t ____width_13;
	// System.Int32 ManomotionManager::_height
	int32_t ____height_14;
	// System.Int32 ManomotionManager::_fps
	int32_t ____fps_15;
	// System.Int32 ManomotionManager::_processing_time
	int32_t ____processing_time_16;
	// System.Int32 ManomotionManager::_amount_of_contour_points
	int32_t ____amount_of_contour_points_17;
	// System.Int32 ManomotionManager::_amount_of_inner_points
	int32_t ____amount_of_inner_points_18;
	// System.Boolean ManomotionManager::_initialized
	bool ____initialized_19;
	// UnityEngine.WebCamTexture ManomotionManager::_mCamera
	WebCamTexture_t1514609158 * ____mCamera_20;
	// System.Single ManomotionManager::fpsCooldown
	float ___fpsCooldown_21;
	// System.Int32 ManomotionManager::frameCount
	int32_t ___frameCount_22;
	// System.Collections.Generic.List`1<System.Int32> ManomotionManager::processing_time_list
	List_1_t128053199 * ___processing_time_list_23;
	// UnityEngine.Color32[] ManomotionManager::_pixels
	Color32U5BU5D_t3850468773* ____pixels_24;
	// UnityEngine.Color32[] ManomotionManager::_MRPixels0
	Color32U5BU5D_t3850468773* ____MRPixels0_25;
	// UnityEngine.Color32[] ManomotionManager::_MRPixels1
	Color32U5BU5D_t3850468773* ____MRPixels1_26;
	// UnityEngine.Color32[] ManomotionManager::_binary_frame_320
	Color32U5BU5D_t3850468773* ____binary_frame_320_27;
	// System.String ManomotionManager::serial_key
	String_t* ___serial_key_28;
	// System.Boolean ManomotionManager::hasReceivedAFrame
	bool ___hasReceivedAFrame_30;

public:
	inline static int32_t get_offset_of_hand_infos_9() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ___hand_infos_9)); }
	inline HandInfoUnityU5BU5D_t4085119228* get_hand_infos_9() const { return ___hand_infos_9; }
	inline HandInfoUnityU5BU5D_t4085119228** get_address_of_hand_infos_9() { return &___hand_infos_9; }
	inline void set_hand_infos_9(HandInfoUnityU5BU5D_t4085119228* value)
	{
		___hand_infos_9 = value;
		Il2CppCodeGenWriteBarrier((&___hand_infos_9), value);
	}

	inline static int32_t get_offset_of_visualization_info_10() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ___visualization_info_10)); }
	inline VisualizationInfo_t4138410502  get_visualization_info_10() const { return ___visualization_info_10; }
	inline VisualizationInfo_t4138410502 * get_address_of_visualization_info_10() { return &___visualization_info_10; }
	inline void set_visualization_info_10(VisualizationInfo_t4138410502  value)
	{
		___visualization_info_10 = value;
	}

	inline static int32_t get_offset_of_manomotion_Session_11() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ___manomotion_Session_11)); }
	inline Session_t4211189121  get_manomotion_Session_11() const { return ___manomotion_Session_11; }
	inline Session_t4211189121 * get_address_of_manomotion_Session_11() { return &___manomotion_Session_11; }
	inline void set_manomotion_Session_11(Session_t4211189121  value)
	{
		___manomotion_Session_11 = value;
	}

	inline static int32_t get_offset_of__frame_number_12() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ____frame_number_12)); }
	inline int32_t get__frame_number_12() const { return ____frame_number_12; }
	inline int32_t* get_address_of__frame_number_12() { return &____frame_number_12; }
	inline void set__frame_number_12(int32_t value)
	{
		____frame_number_12 = value;
	}

	inline static int32_t get_offset_of__width_13() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ____width_13)); }
	inline int32_t get__width_13() const { return ____width_13; }
	inline int32_t* get_address_of__width_13() { return &____width_13; }
	inline void set__width_13(int32_t value)
	{
		____width_13 = value;
	}

	inline static int32_t get_offset_of__height_14() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ____height_14)); }
	inline int32_t get__height_14() const { return ____height_14; }
	inline int32_t* get_address_of__height_14() { return &____height_14; }
	inline void set__height_14(int32_t value)
	{
		____height_14 = value;
	}

	inline static int32_t get_offset_of__fps_15() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ____fps_15)); }
	inline int32_t get__fps_15() const { return ____fps_15; }
	inline int32_t* get_address_of__fps_15() { return &____fps_15; }
	inline void set__fps_15(int32_t value)
	{
		____fps_15 = value;
	}

	inline static int32_t get_offset_of__processing_time_16() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ____processing_time_16)); }
	inline int32_t get__processing_time_16() const { return ____processing_time_16; }
	inline int32_t* get_address_of__processing_time_16() { return &____processing_time_16; }
	inline void set__processing_time_16(int32_t value)
	{
		____processing_time_16 = value;
	}

	inline static int32_t get_offset_of__amount_of_contour_points_17() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ____amount_of_contour_points_17)); }
	inline int32_t get__amount_of_contour_points_17() const { return ____amount_of_contour_points_17; }
	inline int32_t* get_address_of__amount_of_contour_points_17() { return &____amount_of_contour_points_17; }
	inline void set__amount_of_contour_points_17(int32_t value)
	{
		____amount_of_contour_points_17 = value;
	}

	inline static int32_t get_offset_of__amount_of_inner_points_18() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ____amount_of_inner_points_18)); }
	inline int32_t get__amount_of_inner_points_18() const { return ____amount_of_inner_points_18; }
	inline int32_t* get_address_of__amount_of_inner_points_18() { return &____amount_of_inner_points_18; }
	inline void set__amount_of_inner_points_18(int32_t value)
	{
		____amount_of_inner_points_18 = value;
	}

	inline static int32_t get_offset_of__initialized_19() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ____initialized_19)); }
	inline bool get__initialized_19() const { return ____initialized_19; }
	inline bool* get_address_of__initialized_19() { return &____initialized_19; }
	inline void set__initialized_19(bool value)
	{
		____initialized_19 = value;
	}

	inline static int32_t get_offset_of__mCamera_20() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ____mCamera_20)); }
	inline WebCamTexture_t1514609158 * get__mCamera_20() const { return ____mCamera_20; }
	inline WebCamTexture_t1514609158 ** get_address_of__mCamera_20() { return &____mCamera_20; }
	inline void set__mCamera_20(WebCamTexture_t1514609158 * value)
	{
		____mCamera_20 = value;
		Il2CppCodeGenWriteBarrier((&____mCamera_20), value);
	}

	inline static int32_t get_offset_of_fpsCooldown_21() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ___fpsCooldown_21)); }
	inline float get_fpsCooldown_21() const { return ___fpsCooldown_21; }
	inline float* get_address_of_fpsCooldown_21() { return &___fpsCooldown_21; }
	inline void set_fpsCooldown_21(float value)
	{
		___fpsCooldown_21 = value;
	}

	inline static int32_t get_offset_of_frameCount_22() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ___frameCount_22)); }
	inline int32_t get_frameCount_22() const { return ___frameCount_22; }
	inline int32_t* get_address_of_frameCount_22() { return &___frameCount_22; }
	inline void set_frameCount_22(int32_t value)
	{
		___frameCount_22 = value;
	}

	inline static int32_t get_offset_of_processing_time_list_23() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ___processing_time_list_23)); }
	inline List_1_t128053199 * get_processing_time_list_23() const { return ___processing_time_list_23; }
	inline List_1_t128053199 ** get_address_of_processing_time_list_23() { return &___processing_time_list_23; }
	inline void set_processing_time_list_23(List_1_t128053199 * value)
	{
		___processing_time_list_23 = value;
		Il2CppCodeGenWriteBarrier((&___processing_time_list_23), value);
	}

	inline static int32_t get_offset_of__pixels_24() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ____pixels_24)); }
	inline Color32U5BU5D_t3850468773* get__pixels_24() const { return ____pixels_24; }
	inline Color32U5BU5D_t3850468773** get_address_of__pixels_24() { return &____pixels_24; }
	inline void set__pixels_24(Color32U5BU5D_t3850468773* value)
	{
		____pixels_24 = value;
		Il2CppCodeGenWriteBarrier((&____pixels_24), value);
	}

	inline static int32_t get_offset_of__MRPixels0_25() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ____MRPixels0_25)); }
	inline Color32U5BU5D_t3850468773* get__MRPixels0_25() const { return ____MRPixels0_25; }
	inline Color32U5BU5D_t3850468773** get_address_of__MRPixels0_25() { return &____MRPixels0_25; }
	inline void set__MRPixels0_25(Color32U5BU5D_t3850468773* value)
	{
		____MRPixels0_25 = value;
		Il2CppCodeGenWriteBarrier((&____MRPixels0_25), value);
	}

	inline static int32_t get_offset_of__MRPixels1_26() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ____MRPixels1_26)); }
	inline Color32U5BU5D_t3850468773* get__MRPixels1_26() const { return ____MRPixels1_26; }
	inline Color32U5BU5D_t3850468773** get_address_of__MRPixels1_26() { return &____MRPixels1_26; }
	inline void set__MRPixels1_26(Color32U5BU5D_t3850468773* value)
	{
		____MRPixels1_26 = value;
		Il2CppCodeGenWriteBarrier((&____MRPixels1_26), value);
	}

	inline static int32_t get_offset_of__binary_frame_320_27() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ____binary_frame_320_27)); }
	inline Color32U5BU5D_t3850468773* get__binary_frame_320_27() const { return ____binary_frame_320_27; }
	inline Color32U5BU5D_t3850468773** get_address_of__binary_frame_320_27() { return &____binary_frame_320_27; }
	inline void set__binary_frame_320_27(Color32U5BU5D_t3850468773* value)
	{
		____binary_frame_320_27 = value;
		Il2CppCodeGenWriteBarrier((&____binary_frame_320_27), value);
	}

	inline static int32_t get_offset_of_serial_key_28() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ___serial_key_28)); }
	inline String_t* get_serial_key_28() const { return ___serial_key_28; }
	inline String_t** get_address_of_serial_key_28() { return &___serial_key_28; }
	inline void set_serial_key_28(String_t* value)
	{
		___serial_key_28 = value;
		Il2CppCodeGenWriteBarrier((&___serial_key_28), value);
	}

	inline static int32_t get_offset_of_hasReceivedAFrame_30() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280, ___hasReceivedAFrame_30)); }
	inline bool get_hasReceivedAFrame_30() const { return ___hasReceivedAFrame_30; }
	inline bool* get_address_of_hasReceivedAFrame_30() { return &___hasReceivedAFrame_30; }
	inline void set_hasReceivedAFrame_30(bool value)
	{
		___hasReceivedAFrame_30 = value;
	}
};

struct ManomotionManager_t565502280_StaticFields
{
public:
	// ManomotionManager ManomotionManager::instance
	ManomotionManager_t565502280 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(ManomotionManager_t565502280_StaticFields, ___instance_4)); }
	inline ManomotionManager_t565502280 * get_instance_4() const { return ___instance_4; }
	inline ManomotionManager_t565502280 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(ManomotionManager_t565502280 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANOMOTIONMANAGER_T565502280_H
#ifndef MANOMOTIONUIMANAGMENT_T1133875195_H
#define MANOMOTIONUIMANAGMENT_T1133875195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ManomotionUIManagment
struct  ManomotionUIManagment_t1133875195  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject[] ManomotionUIManagment::handButtons
	GameObjectU5BU5D_t3328599146* ___handButtons_4;
	// UnityEngine.UI.Text ManomotionUIManagment::FPSValueText
	Text_t1901882714 * ___FPSValueText_5;
	// UnityEngine.UI.Text ManomotionUIManagment::processingTimeValueText
	Text_t1901882714 * ___processingTimeValueText_6;
	// UnityEngine.GameObject ManomotionUIManagment::availablebackgroundModes
	GameObject_t1113636619 * ___availablebackgroundModes_7;

public:
	inline static int32_t get_offset_of_handButtons_4() { return static_cast<int32_t>(offsetof(ManomotionUIManagment_t1133875195, ___handButtons_4)); }
	inline GameObjectU5BU5D_t3328599146* get_handButtons_4() const { return ___handButtons_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_handButtons_4() { return &___handButtons_4; }
	inline void set_handButtons_4(GameObjectU5BU5D_t3328599146* value)
	{
		___handButtons_4 = value;
		Il2CppCodeGenWriteBarrier((&___handButtons_4), value);
	}

	inline static int32_t get_offset_of_FPSValueText_5() { return static_cast<int32_t>(offsetof(ManomotionUIManagment_t1133875195, ___FPSValueText_5)); }
	inline Text_t1901882714 * get_FPSValueText_5() const { return ___FPSValueText_5; }
	inline Text_t1901882714 ** get_address_of_FPSValueText_5() { return &___FPSValueText_5; }
	inline void set_FPSValueText_5(Text_t1901882714 * value)
	{
		___FPSValueText_5 = value;
		Il2CppCodeGenWriteBarrier((&___FPSValueText_5), value);
	}

	inline static int32_t get_offset_of_processingTimeValueText_6() { return static_cast<int32_t>(offsetof(ManomotionUIManagment_t1133875195, ___processingTimeValueText_6)); }
	inline Text_t1901882714 * get_processingTimeValueText_6() const { return ___processingTimeValueText_6; }
	inline Text_t1901882714 ** get_address_of_processingTimeValueText_6() { return &___processingTimeValueText_6; }
	inline void set_processingTimeValueText_6(Text_t1901882714 * value)
	{
		___processingTimeValueText_6 = value;
		Il2CppCodeGenWriteBarrier((&___processingTimeValueText_6), value);
	}

	inline static int32_t get_offset_of_availablebackgroundModes_7() { return static_cast<int32_t>(offsetof(ManomotionUIManagment_t1133875195, ___availablebackgroundModes_7)); }
	inline GameObject_t1113636619 * get_availablebackgroundModes_7() const { return ___availablebackgroundModes_7; }
	inline GameObject_t1113636619 ** get_address_of_availablebackgroundModes_7() { return &___availablebackgroundModes_7; }
	inline void set_availablebackgroundModes_7(GameObject_t1113636619 * value)
	{
		___availablebackgroundModes_7 = value;
		Il2CppCodeGenWriteBarrier((&___availablebackgroundModes_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANOMOTIONUIMANAGMENT_T1133875195_H
#ifndef MENUMANAGER_T2761117704_H
#define MENUMANAGER_T2761117704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuManager
struct  MenuManager_t2761117704  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject MenuManager::iconsCanvas
	GameObject_t1113636619 * ___iconsCanvas_4;
	// UnityEngine.GameObject MenuManager::manomotionCanvas
	GameObject_t1113636619 * ___manomotionCanvas_5;
	// UnityEngine.Sprite MenuManager::menuOpenImage
	Sprite_t280657092 * ___menuOpenImage_6;
	// UnityEngine.Sprite MenuManager::menuClosedImage
	Sprite_t280657092 * ___menuClosedImage_7;
	// UnityEngine.UI.Image MenuManager::buttonImage
	Image_t2670269651 * ___buttonImage_8;
	// System.Boolean MenuManager::_menuIsOpen
	bool ____menuIsOpen_9;

public:
	inline static int32_t get_offset_of_iconsCanvas_4() { return static_cast<int32_t>(offsetof(MenuManager_t2761117704, ___iconsCanvas_4)); }
	inline GameObject_t1113636619 * get_iconsCanvas_4() const { return ___iconsCanvas_4; }
	inline GameObject_t1113636619 ** get_address_of_iconsCanvas_4() { return &___iconsCanvas_4; }
	inline void set_iconsCanvas_4(GameObject_t1113636619 * value)
	{
		___iconsCanvas_4 = value;
		Il2CppCodeGenWriteBarrier((&___iconsCanvas_4), value);
	}

	inline static int32_t get_offset_of_manomotionCanvas_5() { return static_cast<int32_t>(offsetof(MenuManager_t2761117704, ___manomotionCanvas_5)); }
	inline GameObject_t1113636619 * get_manomotionCanvas_5() const { return ___manomotionCanvas_5; }
	inline GameObject_t1113636619 ** get_address_of_manomotionCanvas_5() { return &___manomotionCanvas_5; }
	inline void set_manomotionCanvas_5(GameObject_t1113636619 * value)
	{
		___manomotionCanvas_5 = value;
		Il2CppCodeGenWriteBarrier((&___manomotionCanvas_5), value);
	}

	inline static int32_t get_offset_of_menuOpenImage_6() { return static_cast<int32_t>(offsetof(MenuManager_t2761117704, ___menuOpenImage_6)); }
	inline Sprite_t280657092 * get_menuOpenImage_6() const { return ___menuOpenImage_6; }
	inline Sprite_t280657092 ** get_address_of_menuOpenImage_6() { return &___menuOpenImage_6; }
	inline void set_menuOpenImage_6(Sprite_t280657092 * value)
	{
		___menuOpenImage_6 = value;
		Il2CppCodeGenWriteBarrier((&___menuOpenImage_6), value);
	}

	inline static int32_t get_offset_of_menuClosedImage_7() { return static_cast<int32_t>(offsetof(MenuManager_t2761117704, ___menuClosedImage_7)); }
	inline Sprite_t280657092 * get_menuClosedImage_7() const { return ___menuClosedImage_7; }
	inline Sprite_t280657092 ** get_address_of_menuClosedImage_7() { return &___menuClosedImage_7; }
	inline void set_menuClosedImage_7(Sprite_t280657092 * value)
	{
		___menuClosedImage_7 = value;
		Il2CppCodeGenWriteBarrier((&___menuClosedImage_7), value);
	}

	inline static int32_t get_offset_of_buttonImage_8() { return static_cast<int32_t>(offsetof(MenuManager_t2761117704, ___buttonImage_8)); }
	inline Image_t2670269651 * get_buttonImage_8() const { return ___buttonImage_8; }
	inline Image_t2670269651 ** get_address_of_buttonImage_8() { return &___buttonImage_8; }
	inline void set_buttonImage_8(Image_t2670269651 * value)
	{
		___buttonImage_8 = value;
		Il2CppCodeGenWriteBarrier((&___buttonImage_8), value);
	}

	inline static int32_t get_offset_of__menuIsOpen_9() { return static_cast<int32_t>(offsetof(MenuManager_t2761117704, ____menuIsOpen_9)); }
	inline bool get__menuIsOpen_9() const { return ____menuIsOpen_9; }
	inline bool* get_address_of__menuIsOpen_9() { return &____menuIsOpen_9; }
	inline void set__menuIsOpen_9(bool value)
	{
		____menuIsOpen_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUMANAGER_T2761117704_H
#ifndef MENUORIENTATION_T2641058044_H
#define MENUORIENTATION_T2641058044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuOrientation
struct  MenuOrientation_t2641058044  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.ScreenOrientation MenuOrientation::currentOrientation
	int32_t ___currentOrientation_5;

public:
	inline static int32_t get_offset_of_currentOrientation_5() { return static_cast<int32_t>(offsetof(MenuOrientation_t2641058044, ___currentOrientation_5)); }
	inline int32_t get_currentOrientation_5() const { return ___currentOrientation_5; }
	inline int32_t* get_address_of_currentOrientation_5() { return &___currentOrientation_5; }
	inline void set_currentOrientation_5(int32_t value)
	{
		___currentOrientation_5 = value;
	}
};

struct MenuOrientation_t2641058044_StaticFields
{
public:
	// MenuOrientation/OrientationChange MenuOrientation::OnOrientationChanged
	OrientationChange_t2630486480 * ___OnOrientationChanged_4;

public:
	inline static int32_t get_offset_of_OnOrientationChanged_4() { return static_cast<int32_t>(offsetof(MenuOrientation_t2641058044_StaticFields, ___OnOrientationChanged_4)); }
	inline OrientationChange_t2630486480 * get_OnOrientationChanged_4() const { return ___OnOrientationChanged_4; }
	inline OrientationChange_t2630486480 ** get_address_of_OnOrientationChanged_4() { return &___OnOrientationChanged_4; }
	inline void set_OnOrientationChanged_4(OrientationChange_t2630486480 * value)
	{
		___OnOrientationChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnOrientationChanged_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUORIENTATION_T2641058044_H
#ifndef SWIPEINPUT_T4249063973_H
#define SWIPEINPUT_T4249063973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SwipeInput
struct  SwipeInput_t4249063973  : public MonoBehaviour_t3962482529
{
public:
	// System.Single SwipeInput::minimulSwipeDistance
	float ___minimulSwipeDistance_4;
	// UnityEngine.Vector2 SwipeInput::touchPosition
	Vector2_t2156229523  ___touchPosition_5;

public:
	inline static int32_t get_offset_of_minimulSwipeDistance_4() { return static_cast<int32_t>(offsetof(SwipeInput_t4249063973, ___minimulSwipeDistance_4)); }
	inline float get_minimulSwipeDistance_4() const { return ___minimulSwipeDistance_4; }
	inline float* get_address_of_minimulSwipeDistance_4() { return &___minimulSwipeDistance_4; }
	inline void set_minimulSwipeDistance_4(float value)
	{
		___minimulSwipeDistance_4 = value;
	}

	inline static int32_t get_offset_of_touchPosition_5() { return static_cast<int32_t>(offsetof(SwipeInput_t4249063973, ___touchPosition_5)); }
	inline Vector2_t2156229523  get_touchPosition_5() const { return ___touchPosition_5; }
	inline Vector2_t2156229523 * get_address_of_touchPosition_5() { return &___touchPosition_5; }
	inline void set_touchPosition_5(Vector2_t2156229523  value)
	{
		___touchPosition_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWIPEINPUT_T4249063973_H
#ifndef TOGGLEGIZMOS_T1626358663_H
#define TOGGLEGIZMOS_T1626358663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ToggleGizmos
struct  ToggleGizmos_t1626358663  : public MonoBehaviour_t3962482529
{
public:
	// GizmoManager ToggleGizmos::_gizmoManager
	GizmoManager_t3350963123 * ____gizmoManager_4;

public:
	inline static int32_t get_offset_of__gizmoManager_4() { return static_cast<int32_t>(offsetof(ToggleGizmos_t1626358663, ____gizmoManager_4)); }
	inline GizmoManager_t3350963123 * get__gizmoManager_4() const { return ____gizmoManager_4; }
	inline GizmoManager_t3350963123 ** get_address_of__gizmoManager_4() { return &____gizmoManager_4; }
	inline void set__gizmoManager_4(GizmoManager_t3350963123 * value)
	{
		____gizmoManager_4 = value;
		Il2CppCodeGenWriteBarrier((&____gizmoManager_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLEGIZMOS_T1626358663_H
#ifndef TOGGLEUIROW_T356789805_H
#define TOGGLEUIROW_T356789805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ToggleUIRow
struct  ToggleUIRow_t356789805  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Button[] ToggleUIRow::backgroundModeIcons
	ButtonU5BU5D_t2297175928* ___backgroundModeIcons_5;
	// UnityEngine.UI.Button ToggleUIRow::backgroundSelectorIcon
	Button_t4055032469 * ___backgroundSelectorIcon_6;
	// System.Boolean ToggleUIRow::backgroundMenuIsOpen
	bool ___backgroundMenuIsOpen_7;

public:
	inline static int32_t get_offset_of_backgroundModeIcons_5() { return static_cast<int32_t>(offsetof(ToggleUIRow_t356789805, ___backgroundModeIcons_5)); }
	inline ButtonU5BU5D_t2297175928* get_backgroundModeIcons_5() const { return ___backgroundModeIcons_5; }
	inline ButtonU5BU5D_t2297175928** get_address_of_backgroundModeIcons_5() { return &___backgroundModeIcons_5; }
	inline void set_backgroundModeIcons_5(ButtonU5BU5D_t2297175928* value)
	{
		___backgroundModeIcons_5 = value;
		Il2CppCodeGenWriteBarrier((&___backgroundModeIcons_5), value);
	}

	inline static int32_t get_offset_of_backgroundSelectorIcon_6() { return static_cast<int32_t>(offsetof(ToggleUIRow_t356789805, ___backgroundSelectorIcon_6)); }
	inline Button_t4055032469 * get_backgroundSelectorIcon_6() const { return ___backgroundSelectorIcon_6; }
	inline Button_t4055032469 ** get_address_of_backgroundSelectorIcon_6() { return &___backgroundSelectorIcon_6; }
	inline void set_backgroundSelectorIcon_6(Button_t4055032469 * value)
	{
		___backgroundSelectorIcon_6 = value;
		Il2CppCodeGenWriteBarrier((&___backgroundSelectorIcon_6), value);
	}

	inline static int32_t get_offset_of_backgroundMenuIsOpen_7() { return static_cast<int32_t>(offsetof(ToggleUIRow_t356789805, ___backgroundMenuIsOpen_7)); }
	inline bool get_backgroundMenuIsOpen_7() const { return ___backgroundMenuIsOpen_7; }
	inline bool* get_address_of_backgroundMenuIsOpen_7() { return &___backgroundMenuIsOpen_7; }
	inline void set_backgroundMenuIsOpen_7(bool value)
	{
		___backgroundMenuIsOpen_7 = value;
	}
};

struct ToggleUIRow_t356789805_StaticFields
{
public:
	// ToggleUIRow ToggleUIRow::_instance
	ToggleUIRow_t356789805 * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(ToggleUIRow_t356789805_StaticFields, ____instance_4)); }
	inline ToggleUIRow_t356789805 * get__instance_4() const { return ____instance_4; }
	inline ToggleUIRow_t356789805 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(ToggleUIRow_t356789805 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((&____instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLEUIROW_T356789805_H
#ifndef TOGGLEVISUALIZATIONVALUES_T3491163021_H
#define TOGGLEVISUALIZATIONVALUES_T3491163021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ToggleVisualizationValues
struct  ToggleVisualizationValues_t3491163021  : public MonoBehaviour_t3962482529
{
public:
	// ManoVisualization ToggleVisualizationValues::_manoVisualization
	ManoVisualization_t1421820612 * ____manoVisualization_4;

public:
	inline static int32_t get_offset_of__manoVisualization_4() { return static_cast<int32_t>(offsetof(ToggleVisualizationValues_t3491163021, ____manoVisualization_4)); }
	inline ManoVisualization_t1421820612 * get__manoVisualization_4() const { return ____manoVisualization_4; }
	inline ManoVisualization_t1421820612 ** get_address_of__manoVisualization_4() { return &____manoVisualization_4; }
	inline void set__manoVisualization_4(ManoVisualization_t1421820612 * value)
	{
		____manoVisualization_4 = value;
		Il2CppCodeGenWriteBarrier((&____manoVisualization_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLEVISUALIZATIONVALUES_T3491163021_H
#ifndef TWOHANDSUPPORT_T1057924416_H
#define TWOHANDSUPPORT_T1057924416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwoHandSupport
struct  TwoHandSupport_t1057924416  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWOHANDSUPPORT_T1057924416_H
#ifndef UIICONBEHAVIOR_T2038039704_H
#define UIICONBEHAVIOR_T2038039704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIIconBehavior
struct  UIIconBehavior_t2038039704  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Sprite UIIconBehavior::activeFrame
	Sprite_t280657092 * ___activeFrame_4;
	// UnityEngine.Sprite UIIconBehavior::inactiveFrame
	Sprite_t280657092 * ___inactiveFrame_5;
	// System.Boolean UIIconBehavior::isActive
	bool ___isActive_6;
	// UnityEngine.UI.Button UIIconBehavior::thisButton
	Button_t4055032469 * ___thisButton_7;
	// UnityEngine.UI.Image UIIconBehavior::buttonFrame
	Image_t2670269651 * ___buttonFrame_8;
	// UnityEngine.UI.Image UIIconBehavior::buttonIcon
	Image_t2670269651 * ___buttonIcon_9;
	// UnityEngine.Color UIIconBehavior::activeColor
	Color_t2555686324  ___activeColor_10;

public:
	inline static int32_t get_offset_of_activeFrame_4() { return static_cast<int32_t>(offsetof(UIIconBehavior_t2038039704, ___activeFrame_4)); }
	inline Sprite_t280657092 * get_activeFrame_4() const { return ___activeFrame_4; }
	inline Sprite_t280657092 ** get_address_of_activeFrame_4() { return &___activeFrame_4; }
	inline void set_activeFrame_4(Sprite_t280657092 * value)
	{
		___activeFrame_4 = value;
		Il2CppCodeGenWriteBarrier((&___activeFrame_4), value);
	}

	inline static int32_t get_offset_of_inactiveFrame_5() { return static_cast<int32_t>(offsetof(UIIconBehavior_t2038039704, ___inactiveFrame_5)); }
	inline Sprite_t280657092 * get_inactiveFrame_5() const { return ___inactiveFrame_5; }
	inline Sprite_t280657092 ** get_address_of_inactiveFrame_5() { return &___inactiveFrame_5; }
	inline void set_inactiveFrame_5(Sprite_t280657092 * value)
	{
		___inactiveFrame_5 = value;
		Il2CppCodeGenWriteBarrier((&___inactiveFrame_5), value);
	}

	inline static int32_t get_offset_of_isActive_6() { return static_cast<int32_t>(offsetof(UIIconBehavior_t2038039704, ___isActive_6)); }
	inline bool get_isActive_6() const { return ___isActive_6; }
	inline bool* get_address_of_isActive_6() { return &___isActive_6; }
	inline void set_isActive_6(bool value)
	{
		___isActive_6 = value;
	}

	inline static int32_t get_offset_of_thisButton_7() { return static_cast<int32_t>(offsetof(UIIconBehavior_t2038039704, ___thisButton_7)); }
	inline Button_t4055032469 * get_thisButton_7() const { return ___thisButton_7; }
	inline Button_t4055032469 ** get_address_of_thisButton_7() { return &___thisButton_7; }
	inline void set_thisButton_7(Button_t4055032469 * value)
	{
		___thisButton_7 = value;
		Il2CppCodeGenWriteBarrier((&___thisButton_7), value);
	}

	inline static int32_t get_offset_of_buttonFrame_8() { return static_cast<int32_t>(offsetof(UIIconBehavior_t2038039704, ___buttonFrame_8)); }
	inline Image_t2670269651 * get_buttonFrame_8() const { return ___buttonFrame_8; }
	inline Image_t2670269651 ** get_address_of_buttonFrame_8() { return &___buttonFrame_8; }
	inline void set_buttonFrame_8(Image_t2670269651 * value)
	{
		___buttonFrame_8 = value;
		Il2CppCodeGenWriteBarrier((&___buttonFrame_8), value);
	}

	inline static int32_t get_offset_of_buttonIcon_9() { return static_cast<int32_t>(offsetof(UIIconBehavior_t2038039704, ___buttonIcon_9)); }
	inline Image_t2670269651 * get_buttonIcon_9() const { return ___buttonIcon_9; }
	inline Image_t2670269651 ** get_address_of_buttonIcon_9() { return &___buttonIcon_9; }
	inline void set_buttonIcon_9(Image_t2670269651 * value)
	{
		___buttonIcon_9 = value;
		Il2CppCodeGenWriteBarrier((&___buttonIcon_9), value);
	}

	inline static int32_t get_offset_of_activeColor_10() { return static_cast<int32_t>(offsetof(UIIconBehavior_t2038039704, ___activeColor_10)); }
	inline Color_t2555686324  get_activeColor_10() const { return ___activeColor_10; }
	inline Color_t2555686324 * get_address_of_activeColor_10() { return &___activeColor_10; }
	inline void set_activeColor_10(Color_t2555686324  value)
	{
		___activeColor_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIICONBEHAVIOR_T2038039704_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_6)); }
	inline Material_t340375123 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t340375123 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t340375123 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_7)); }
	inline Color_t2555686324  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t2555686324 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t2555686324  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_9)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_11)); }
	inline Canvas_t3310196443 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_t3310196443 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t340375123 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t340375123 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t3648964284 * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t3648964284 * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_5;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_6;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_7;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_8;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_9;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_10;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_11;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_12;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_13;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_16;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_17;

public:
	inline static int32_t get_offset_of_m_Navigation_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_5)); }
	inline Navigation_t3049316579  get_m_Navigation_5() const { return ___m_Navigation_5; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_5() { return &___m_Navigation_5; }
	inline void set_m_Navigation_5(Navigation_t3049316579  value)
	{
		___m_Navigation_5 = value;
	}

	inline static int32_t get_offset_of_m_Transition_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_6)); }
	inline int32_t get_m_Transition_6() const { return ___m_Transition_6; }
	inline int32_t* get_address_of_m_Transition_6() { return &___m_Transition_6; }
	inline void set_m_Transition_6(int32_t value)
	{
		___m_Transition_6 = value;
	}

	inline static int32_t get_offset_of_m_Colors_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_7)); }
	inline ColorBlock_t2139031574  get_m_Colors_7() const { return ___m_Colors_7; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_7() { return &___m_Colors_7; }
	inline void set_m_Colors_7(ColorBlock_t2139031574  value)
	{
		___m_Colors_7 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_8)); }
	inline SpriteState_t1362986479  get_m_SpriteState_8() const { return ___m_SpriteState_8; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_8() { return &___m_SpriteState_8; }
	inline void set_m_SpriteState_8(SpriteState_t1362986479  value)
	{
		___m_SpriteState_8 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_9)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_9() const { return ___m_AnimationTriggers_9; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_9() { return &___m_AnimationTriggers_9; }
	inline void set_m_AnimationTriggers_9(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_9), value);
	}

	inline static int32_t get_offset_of_m_Interactable_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_10)); }
	inline bool get_m_Interactable_10() const { return ___m_Interactable_10; }
	inline bool* get_address_of_m_Interactable_10() { return &___m_Interactable_10; }
	inline void set_m_Interactable_10(bool value)
	{
		___m_Interactable_10 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_11)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_11() const { return ___m_TargetGraphic_11; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_11() { return &___m_TargetGraphic_11; }
	inline void set_m_TargetGraphic_11(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_11), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_12)); }
	inline bool get_m_GroupsAllowInteraction_12() const { return ___m_GroupsAllowInteraction_12; }
	inline bool* get_address_of_m_GroupsAllowInteraction_12() { return &___m_GroupsAllowInteraction_12; }
	inline void set_m_GroupsAllowInteraction_12(bool value)
	{
		___m_GroupsAllowInteraction_12 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_13)); }
	inline int32_t get_m_CurrentSelectionState_13() const { return ___m_CurrentSelectionState_13; }
	inline int32_t* get_address_of_m_CurrentSelectionState_13() { return &___m_CurrentSelectionState_13; }
	inline void set_m_CurrentSelectionState_13(int32_t value)
	{
		___m_CurrentSelectionState_13 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_14)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_14() const { return ___U3CisPointerInsideU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_14() { return &___U3CisPointerInsideU3Ek__BackingField_14; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_14(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_15() const { return ___U3CisPointerDownU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_15() { return &___U3CisPointerDownU3Ek__BackingField_15; }
	inline void set_U3CisPointerDownU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_16)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_16() const { return ___U3ChasSelectionU3Ek__BackingField_16; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_16() { return &___U3ChasSelectionU3Ek__BackingField_16; }
	inline void set_U3ChasSelectionU3Ek__BackingField_16(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_17() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_17)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_17() const { return ___m_CanvasGroupCache_17; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_17() { return &___m_CanvasGroupCache_17; }
	inline void set_m_CanvasGroupCache_17(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_17), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_4;

public:
	inline static int32_t get_offset_of_s_List_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_4)); }
	inline List_1_t427135887 * get_s_List_4() const { return ___s_List_4; }
	inline List_1_t427135887 ** get_address_of_s_List_4() { return &___s_List_4; }
	inline void set_s_List_4(List_1_t427135887 * value)
	{
		___s_List_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef BUTTON_T4055032469_H
#define BUTTON_T4055032469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t4055032469  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t48803504 * ___m_OnClick_18;

public:
	inline static int32_t get_offset_of_m_OnClick_18() { return static_cast<int32_t>(offsetof(Button_t4055032469, ___m_OnClick_18)); }
	inline ButtonClickedEvent_t48803504 * get_m_OnClick_18() const { return ___m_OnClick_18; }
	inline ButtonClickedEvent_t48803504 ** get_address_of_m_OnClick_18() { return &___m_OnClick_18; }
	inline void set_m_OnClick_18(ButtonClickedEvent_t48803504 * value)
	{
		___m_OnClick_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnClick_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON_T4055032469_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_22)); }
	inline Material_t340375123 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_t340375123 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_23)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_29)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_31;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_32;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_33;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_34;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_35;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_36;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_37;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_38;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_39;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_40;

public:
	inline static int32_t get_offset_of_m_Sprite_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_31)); }
	inline Sprite_t280657092 * get_m_Sprite_31() const { return ___m_Sprite_31; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_31() { return &___m_Sprite_31; }
	inline void set_m_Sprite_31(Sprite_t280657092 * value)
	{
		___m_Sprite_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_31), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_32)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_32() const { return ___m_OverrideSprite_32; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_32() { return &___m_OverrideSprite_32; }
	inline void set_m_OverrideSprite_32(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_32), value);
	}

	inline static int32_t get_offset_of_m_Type_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_33)); }
	inline int32_t get_m_Type_33() const { return ___m_Type_33; }
	inline int32_t* get_address_of_m_Type_33() { return &___m_Type_33; }
	inline void set_m_Type_33(int32_t value)
	{
		___m_Type_33 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_34)); }
	inline bool get_m_PreserveAspect_34() const { return ___m_PreserveAspect_34; }
	inline bool* get_address_of_m_PreserveAspect_34() { return &___m_PreserveAspect_34; }
	inline void set_m_PreserveAspect_34(bool value)
	{
		___m_PreserveAspect_34 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_35)); }
	inline bool get_m_FillCenter_35() const { return ___m_FillCenter_35; }
	inline bool* get_address_of_m_FillCenter_35() { return &___m_FillCenter_35; }
	inline void set_m_FillCenter_35(bool value)
	{
		___m_FillCenter_35 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_36)); }
	inline int32_t get_m_FillMethod_36() const { return ___m_FillMethod_36; }
	inline int32_t* get_address_of_m_FillMethod_36() { return &___m_FillMethod_36; }
	inline void set_m_FillMethod_36(int32_t value)
	{
		___m_FillMethod_36 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_37)); }
	inline float get_m_FillAmount_37() const { return ___m_FillAmount_37; }
	inline float* get_address_of_m_FillAmount_37() { return &___m_FillAmount_37; }
	inline void set_m_FillAmount_37(float value)
	{
		___m_FillAmount_37 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_38)); }
	inline bool get_m_FillClockwise_38() const { return ___m_FillClockwise_38; }
	inline bool* get_address_of_m_FillClockwise_38() { return &___m_FillClockwise_38; }
	inline void set_m_FillClockwise_38(bool value)
	{
		___m_FillClockwise_38 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_39() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_39)); }
	inline int32_t get_m_FillOrigin_39() const { return ___m_FillOrigin_39; }
	inline int32_t* get_address_of_m_FillOrigin_39() { return &___m_FillOrigin_39; }
	inline void set_m_FillOrigin_39(int32_t value)
	{
		___m_FillOrigin_39 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_40() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_40)); }
	inline float get_m_AlphaHitTestMinimumThreshold_40() const { return ___m_AlphaHitTestMinimumThreshold_40; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_40() { return &___m_AlphaHitTestMinimumThreshold_40; }
	inline void set_m_AlphaHitTestMinimumThreshold_40(float value)
	{
		___m_AlphaHitTestMinimumThreshold_40 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_30;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_41;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_42;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_43;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_44;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_30() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_30)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_30() const { return ___s_ETC1DefaultUI_30; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_30() { return &___s_ETC1DefaultUI_30; }
	inline void set_s_ETC1DefaultUI_30(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_30 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_30), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_41() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_41)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_41() const { return ___s_VertScratch_41; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_41() { return &___s_VertScratch_41; }
	inline void set_s_VertScratch_41(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_41), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_42)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_42() const { return ___s_UVScratch_42; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_42() { return &___s_UVScratch_42; }
	inline void set_s_UVScratch_42(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_42), value);
	}

	inline static int32_t get_offset_of_s_Xy_43() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_43)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_43() const { return ___s_Xy_43; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_43() { return &___s_Xy_43; }
	inline void set_s_Xy_43(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_43 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_43), value);
	}

	inline static int32_t get_offset_of_s_Uv_44() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_44)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_44() const { return ___s_Uv_44; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_44() { return &___s_Uv_44; }
	inline void set_s_Uv_44(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_44 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_44), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_30)); }
	inline FontData_t746620069 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t746620069 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t746620069 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_32)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_34)); }
	inline Material_t340375123 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_t340375123 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// UnityEngine.GameObject[0...,0...]
struct GameObjectU5B0___U2C0___U5D_t3328599147  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_t1113636619 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_t1113636619 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// HandInfoUnity[]
struct HandInfoUnityU5BU5D_t4085119228  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HandInfoUnity_t1978403937  m_Items[1];

public:
	inline HandInfoUnity_t1978403937  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HandInfoUnity_t1978403937 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HandInfoUnity_t1978403937  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline HandInfoUnity_t1978403937  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HandInfoUnity_t1978403937 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HandInfoUnity_t1978403937  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t2439009922  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Image_t2670269651 * m_Items[1];

public:
	inline Image_t2670269651 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t2670269651 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t2670269651 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Image_t2670269651 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t2670269651 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t2670269651 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t1849554061  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_t1921856868  m_Items[1];

public:
	inline Touch_t1921856868  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t1921856868 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t1921856868  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t1921856868  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t1921856868 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t1921856868  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_t3600365921 * m_Items[1];

public:
	inline Transform_t3600365921 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_t3600365921 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_t3600365921 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Transform_t3600365921 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_t3600365921 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_t3600365921 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// BoundingBoxUI[]
struct BoundingBoxUIU5BU5D_t466324417  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BoundingBoxUI_t541593408 * m_Items[1];

public:
	inline BoundingBoxUI_t541593408 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoundingBoxUI_t541593408 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoundingBoxUI_t541593408 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline BoundingBoxUI_t541593408 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoundingBoxUI_t541593408 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoundingBoxUI_t541593408 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Transform[][]
struct TransformU5BU5DU5BU5D_t2335906965  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TransformU5BU5D_t807237628* m_Items[1];

public:
	inline TransformU5BU5D_t807237628* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TransformU5BU5D_t807237628** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TransformU5BU5D_t807237628* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline TransformU5BU5D_t807237628* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TransformU5BU5D_t807237628** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TransformU5BU5D_t807237628* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.LineRenderer[]
struct LineRendererU5BU5D_t976293515  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LineRenderer_t3154350270 * m_Items[1];

public:
	inline LineRenderer_t3154350270 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LineRenderer_t3154350270 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LineRenderer_t3154350270 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline LineRenderer_t3154350270 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LineRenderer_t3154350270 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LineRenderer_t3154350270 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_t2132764133  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshRenderer_t587009260 * m_Items[1];

public:
	inline MeshRenderer_t587009260 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshRenderer_t587009260 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshRenderer_t587009260 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MeshRenderer_t587009260 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshRenderer_t587009260 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshRenderer_t587009260 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t2600501292  m_Items[1];

public:
	inline Color32_t2600501292  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t2600501292  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t4294070825  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebCamDevice_t1322781432  m_Items[1];

public:
	inline WebCamDevice_t1322781432  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_t1322781432 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_t1322781432  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WebCamDevice_t1322781432  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_t1322781432 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_t1322781432  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2297175928  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Button_t4055032469 * m_Items[1];

public:
	inline Button_t4055032469 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Button_t4055032469 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Button_t4055032469 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Button_t4055032469 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Button_t4055032469 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Button_t4055032469 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C" void TrackingInfo_t3990182144_marshal_pinvoke(const TrackingInfo_t3990182144& unmarshaled, TrackingInfo_t3990182144_marshaled_pinvoke& marshaled);
extern "C" void TrackingInfo_t3990182144_marshal_pinvoke_back(const TrackingInfo_t3990182144_marshaled_pinvoke& marshaled, TrackingInfo_t3990182144& unmarshaled);
extern "C" void TrackingInfo_t3990182144_marshal_pinvoke_cleanup(TrackingInfo_t3990182144_marshaled_pinvoke& marshaled);
extern "C" void TrackingInfo_t3990182144_marshal_com(const TrackingInfo_t3990182144& unmarshaled, TrackingInfo_t3990182144_marshaled_com& marshaled);
extern "C" void TrackingInfo_t3990182144_marshal_com_back(const TrackingInfo_t3990182144_marshaled_com& marshaled, TrackingInfo_t3990182144& unmarshaled);
extern "C" void TrackingInfo_t3990182144_marshal_com_cleanup(TrackingInfo_t3990182144_marshaled_com& marshaled);
extern "C" void HandInfo_t3661823187_marshal_pinvoke(const HandInfo_t3661823187& unmarshaled, HandInfo_t3661823187_marshaled_pinvoke& marshaled);
extern "C" void HandInfo_t3661823187_marshal_pinvoke_back(const HandInfo_t3661823187_marshaled_pinvoke& marshaled, HandInfo_t3661823187& unmarshaled);
extern "C" void HandInfo_t3661823187_marshal_pinvoke_cleanup(HandInfo_t3661823187_marshaled_pinvoke& marshaled);
extern "C" void HandInfo_t3661823187_marshal_com(const HandInfo_t3661823187& unmarshaled, HandInfo_t3661823187_marshaled_com& marshaled);
extern "C" void HandInfo_t3661823187_marshal_com_back(const HandInfo_t3661823187_marshaled_com& marshaled, HandInfo_t3661823187& unmarshaled);
extern "C" void HandInfo_t3661823187_marshal_com_cleanup(HandInfo_t3661823187_marshaled_com& marshaled);

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m1628857705_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m697420525_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m361000296_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m888956288_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m2154023298_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// InstructionsManager InstructionsManager::get_Instance()
extern "C" IL2CPP_METHOD_ATTR InstructionsManager_t4057271102 * InstructionsManager_get_Instance_m729986502 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void InstructionsManager::StartInstructions()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_StartInstructions_m4068909607 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// System.Void InstructionsManager::ForceInstructions()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_ForceInstructions_m1967337545 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method);
// System.Void InstructionsManager::StopShowingInstructions()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_StopShowingInstructions_m2311691955 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Shader_t4151988712 * Shader_Find_m2092206247 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m1662457592 (Material_t340375123 * __this, Shader_t4151988712 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void Graphics_Blit_m1336850842 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * p0, RenderTexture_t2108887433 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Material_SetFloat_m3226510453 (Material_t340375123 * __this, String_t* p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Graphics_Blit_m890955694 (RuntimeObject * __this /* static, unused */, Texture_t3661962703 * p0, RenderTexture_t2108887433 * p1, Material_t340375123 * p2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t2670269651 * Component_GetComponent_TisImage_t2670269651_m980647750 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Image_t2670269651 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// ManomotionManager ManomotionManager::get_Instance()
extern "C" IL2CPP_METHOD_ATTR ManomotionManager_t565502280 * ManomotionManager_get_Instance_m1503785506 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void ManomotionManager::SetBackgroundMode(BackgroundMode)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetBackgroundMode_m4247516160 (ManomotionManager_t565502280 * __this, int32_t ___newMode0, const RuntimeMethod* method);
// ManoUtils ManoUtils::get_Instance()
extern "C" IL2CPP_METHOD_ATTR ManoUtils_t3463694697 * ManoUtils_get_Instance_m912192132 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2226639690 (LineRenderer_t3154350270 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 ManoUtils::CalculateNewPosition(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  ManoUtils_CalculateNewPosition_m854440501 (ManoUtils_t3463694697 * __this, Vector3_t3722313464  ___Point0, float ___depth1, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m2111131184 (LineRenderer_t3154350270 * __this, int32_t p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Single_ToString_m3489843083 (float* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void TextMesh_set_text_m446189179 (TextMesh_t1536577757 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.TextMesh>()
inline TextMesh_t1536577757 * Component_GetComponent_TisTextMesh_t1536577757_m1070281259 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t1536577757 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// ManoCalibration ManoCalibration::get_Instance()
extern "C" IL2CPP_METHOD_ATTR ManoCalibration_t699436447 * ManoCalibration_get_Instance_m3658540507 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Category::InitializeUIValues()
extern "C" IL2CPP_METHOD_ATTR void Category_InitializeUIValues_m2246248377 (Category_t1110218350 * __this, const RuntimeMethod* method);
// System.Void MenuOrientation/OrientationChange::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OrientationChange__ctor_m2413559254 (OrientationChange_t2630486480 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void MenuOrientation::add_OnOrientationChanged(MenuOrientation/OrientationChange)
extern "C" IL2CPP_METHOD_ATTR void MenuOrientation_add_OnOrientationChanged_m1240686245 (RuntimeObject * __this /* static, unused */, OrientationChange_t2630486480 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t3704657025 * Component_GetComponent_TisRectTransform_t3704657025_m3396022872 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t3704657025 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Collections.IEnumerator Category::Calculate()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Category_Calculate_m208315117 (Category_t1110218350 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Category/<Calculate>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCalculateU3Ec__Iterator0__ctor_m520369458 (U3CCalculateU3Ec__Iterator0_t1249670162 * __this, const RuntimeMethod* method);
// System.Void Category/<AlignIcons>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CAlignIconsU3Ec__Iterator1__ctor_m2378262173 (U3CAlignIconsU3Ec__Iterator1_t2874318377 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  RectTransform_get_rect_m574169965 (RectTransform_t3704657025 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m1874334613 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m432108984 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Max_m3673002171 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m3462269772 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  RectTransform_get_anchoredPosition_m1813443094 (RectTransform_t3704657025 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Category::AlignIcons()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Category_AlignIcons_m1574798448 (Category_t1110218350 * __this, const RuntimeMethod* method);
// System.Void CategoryManager::PositionCategories()
extern "C" IL2CPP_METHOD_ATTR void CategoryManager_PositionCategories_m4212116905 (CategoryManager_t1388308348 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator CategoryManager::PositionCategoriesAfter(System.Single)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* CategoryManager_PositionCategoriesAfter_m1864741891 (CategoryManager_t1388308348 * __this, float ___time0, const RuntimeMethod* method);
// System.Void CategoryManager/<PositionCategoriesAfter>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CPositionCategoriesAfterU3Ec__Iterator0__ctor_m3068500039 (U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Category>()
inline Category_t1110218350 * GameObject_GetComponent_TisCategory_t1110218350_m2330124262 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Category_t1110218350 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t3704657025 * GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t3704657025 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m4126691837 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void GizmoManager::SetGestureDescriptionParts()
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_SetGestureDescriptionParts_m1448043559 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method);
// System.Void GizmoManager::SetDepthGizmoParts()
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_SetDepthGizmoParts_m2950274697 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method);
// System.Void GizmoManager::SetRotationGizmoParts()
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_SetRotationGizmoParts_m3918050831 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method);
// System.Void GizmoManager::HighlightStatesToStateDetection(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_HighlightStatesToStateDetection_m4058239398 (GizmoManager_t3350963123 * __this, int32_t ___stateValue0, const RuntimeMethod* method);
// HandInfoUnity[] ManomotionManager::get_Hand_infos()
extern "C" IL2CPP_METHOD_ATTR HandInfoUnityU5BU5D_t4085119228* ManomotionManager_get_Hand_infos_m3072460227 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Void GizmoManager::DisplayRotationGizmo(TrackingInfo)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_DisplayRotationGizmo_m2044688722 (GizmoManager_t3350963123 * __this, TrackingInfo_t3990182144  ___tracking_info0, const RuntimeMethod* method);
// System.Void GizmoManager::DisplayManoclass(GestureInfo)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_DisplayManoclass_m1731841311 (GizmoManager_t3350963123 * __this, GestureInfo_t2431102658  ___gesture_info0, const RuntimeMethod* method);
// System.Void GizmoManager::DisplayTriggerGesture(GestureInfo)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_DisplayTriggerGesture_m1947760828 (GizmoManager_t3350963123 * __this, GestureInfo_t2431102658  ___gesture_info0, const RuntimeMethod* method);
// System.Void GizmoManager::DisplayContinuousGesture(GestureInfo)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_DisplayContinuousGesture_m3731156484 (GizmoManager_t3350963123 * __this, GestureInfo_t2431102658  ___gesture_info0, const RuntimeMethod* method);
// System.Void GizmoManager::DisplayHandState(GestureInfo)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_DisplayHandState_m3462735175 (GizmoManager_t3350963123 * __this, GestureInfo_t2431102658  ___gesture_info0, const RuntimeMethod* method);
// System.Void GizmoManager::DisplayDepth(TrackingInfo)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_DisplayDepth_m686403081 (GizmoManager_t3350963123 * __this, TrackingInfo_t3990182144  ___tracking_info0, const RuntimeMethod* method);
// System.Void GizmoManager::DisplayFlags(Warning)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_DisplayFlags_m3911338224 (GizmoManager_t3350963123 * __this, int32_t ___warningFlag0, const RuntimeMethod* method);
// System.Boolean GizmoManager::get_Show_flags()
extern "C" IL2CPP_METHOD_ATTR bool GizmoManager_get_Show_flags_m4007314770 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Boolean GizmoManager::get_Show_rotation()
extern "C" IL2CPP_METHOD_ATTR bool GizmoManager_get_Show_rotation_m4091965537 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::LerpAngle(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_LerpAngle_m295352085 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m135219616 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.String System.Single::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Single_ToString_m3947131094 (float* __this, const RuntimeMethod* method);
// System.Boolean GizmoManager::get_Show_mano_class()
extern "C" IL2CPP_METHOD_ATTR bool GizmoManager_get_Show_mano_class_m1694794017 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method);
// System.Boolean GizmoManager::get_Show_trigger_gesture()
extern "C" IL2CPP_METHOD_ATTR bool GizmoManager_get_Show_trigger_gesture_m1981626667 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method);
// System.Boolean GizmoManager::get_Show_continuous_gesture()
extern "C" IL2CPP_METHOD_ATTR bool GizmoManager_get_Show_continuous_gesture_m2573721889 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method);
// ToggleUIRow ToggleUIRow::get_Instance()
extern "C" IL2CPP_METHOD_ATTR ToggleUIRow_t356789805 * ToggleUIRow_get_Instance_m3991570607 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean GizmoManager::get_Show_hand_states()
extern "C" IL2CPP_METHOD_ATTR bool GizmoManager_get_Show_hand_states_m92485017 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method);
// System.Boolean GizmoManager::get_Show_depth()
extern "C" IL2CPP_METHOD_ATTR bool GizmoManager_get_Show_depth_m1953621816 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Image_set_fillAmount_m3737925590 (Image_t2670269651 * __this, float p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_Find_m1729760951 (Transform_t3600365921 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_t3600365921 * Component_GetComponent_TisTransform_t3600365921_m1200784320 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Transform_t3600365921 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t1901882714 * Component_GetComponent_TisText_t1901882714_m4196288697 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Material_SetColor_m2020215303 (Material_t340375123 * __this, String_t* p0, Color_t2555686324  p1, const RuntimeMethod* method);
// System.Void ManomotionManager::SetSelectedHand(SelectedHand)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetSelectedHand_m4148517899 (ManomotionManager_t565502280 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t2670269651 * GameObject_GetComponent_TisImage_t2670269651_m2486712510 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Image_t2670269651 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<HandDetectionModeButtonBehavior>()
inline HandDetectionModeButtonBehavior_t259638122 * GameObject_GetComponent_TisHandDetectionModeButtonBehavior_t259638122_m1201928477 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  HandDetectionModeButtonBehavior_t259638122 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void Color32__ctor_m4150508762 (Color32_t2600501292 * __this, uint8_t p0, uint8_t p1, uint8_t p2, uint8_t p3, const RuntimeMethod* method);
// System.Void InstructionsManager::ShowSlide(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_ShowSlide_m4226779309 (InstructionsManager_t4057271102 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void InstructionsManager::UpdateVisualComponents()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_UpdateVisualComponents_m4250240927 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method);
// System.Void InstructionsManager::GetPreviousManoVisualizationValues()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_GetPreviousManoVisualizationValues_m3050206586 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m3797620966 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void InstructionsManager::DisplayVisualComponents(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_DisplayVisualComponents_m420594408 (InstructionsManager_t4057271102 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void InstructionsManager::HideManomotionComponents()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_HideManomotionComponents_m2640463605 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m2842000469 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void InstructionsManager::TurnOffManovizualizationValues()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_TurnOffManovizualizationValues_m255224836 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method);
// System.Void InstructionsManager::ShowManomotionComponents()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_ShowManomotionComponents_m839662760 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method);
// System.Void InstructionsManager::SetCircleVisibility(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_SetCircleVisibility_m365500780 (InstructionsManager_t4057271102 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void InstructionsManager::HighlightCircles(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_HighlightCircles_m563790765 (InstructionsManager_t4057271102 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color32_op_Implicit_m213813866 (RuntimeObject * __this /* static, unused */, Color32_t2600501292  p0, const RuntimeMethod* method);
// System.Void InstructionsManager::ReInstateVizualizationValues()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_ReInstateVizualizationValues_m2688736671 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method);
// System.Boolean ManoVisualization::get_Show_bounding_box()
extern "C" IL2CPP_METHOD_ATTR bool ManoVisualization_get_Show_bounding_box_m2573940089 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method);
// System.Boolean ManoVisualization::get_Show_contour()
extern "C" IL2CPP_METHOD_ATTR bool ManoVisualization_get_Show_contour_m3318944812 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method);
// System.Boolean ManoVisualization::get_Show_inner()
extern "C" IL2CPP_METHOD_ATTR bool ManoVisualization_get_Show_inner_m260116457 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method);
// System.Boolean ManoVisualization::get_Show_fingertips()
extern "C" IL2CPP_METHOD_ATTR bool ManoVisualization_get_Show_fingertips_m3026400719 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method);
// System.Boolean ManoVisualization::get_Show_fingertip_labels()
extern "C" IL2CPP_METHOD_ATTR bool ManoVisualization_get_Show_fingertip_labels_m2652058975 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method);
// System.Boolean ManoVisualization::get_Show_palm_center()
extern "C" IL2CPP_METHOD_ATTR bool ManoVisualization_get_Show_palm_center_m94080673 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method);
// System.Boolean ManoVisualization::get_Show_hand_layer()
extern "C" IL2CPP_METHOD_ATTR bool ManoVisualization_get_Show_hand_layer_m2063885413 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method);
// System.Boolean ManoVisualization::get_Show_background_layer()
extern "C" IL2CPP_METHOD_ATTR bool ManoVisualization_get_Show_background_layer_m1244111248 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method);
// System.Void ManoVisualization::set_Show_bounding_box(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_set_Show_bounding_box_m168115305 (ManoVisualization_t1421820612 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ManoVisualization::set_Show_contour(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_set_Show_contour_m1529468790 (ManoVisualization_t1421820612 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ManoVisualization::set_Show_inner(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_set_Show_inner_m2901024986 (ManoVisualization_t1421820612 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ManoVisualization::set_Show_fingertips(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_set_Show_fingertips_m1674203565 (ManoVisualization_t1421820612 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ManoVisualization::set_Show_fingertip_labels(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_set_Show_fingertip_labels_m186525592 (ManoVisualization_t1421820612 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ManoVisualization::set_Show_palm_center(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_set_Show_palm_center_m1713916509 (ManoVisualization_t1421820612 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ManoVisualization::set_Show_hand_layer(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_set_Show_hand_layer_m2731680885 (ManoVisualization_t1421820612 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ManoVisualization::set_Show_background_layer(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_set_Show_background_layer_m3585397262 (ManoVisualization_t1421820612 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_red_m3227813939 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_green_m490390750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void ManoCalibration::LoadCalibration()
extern "C" IL2CPP_METHOD_ATTR void ManoCalibration_LoadCalibration_m3892309791 (ManoCalibration_t699436447 * __this, const RuntimeMethod* method);
// System.Void ManoCalibration::DetectCalibration()
extern "C" IL2CPP_METHOD_ATTR void ManoCalibration_DetectCalibration_m3995771785 (ManoCalibration_t699436447 * __this, const RuntimeMethod* method);
// System.Void ManoCalibration::SaveCalibration()
extern "C" IL2CPP_METHOD_ATTR void ManoCalibration_SaveCalibration_m2986985369 (ManoCalibration_t699436447 * __this, const RuntimeMethod* method);
// Session ManomotionManager::get_Manomotion_Session()
extern "C" IL2CPP_METHOD_ATTR Session_t4211189121  ManomotionManager_get_Manomotion_Session_m1809168976 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m1299643124 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void ManomotionManager::SetCalibration(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetCalibration_m846407318 (ManomotionManager_t565502280 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m3403849067 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
extern "C" IL2CPP_METHOD_ATTR TouchU5BU5D_t1849554061* Input_get_touches_m1702694043 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m214549210 (Touch_t1921856868 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator ManoCalibration::Calibrate(System.Single)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ManoCalibration_Calibrate_m3265996810 (ManoCalibration_t699436447 * __this, float ___delay0, const RuntimeMethod* method);
// System.Void ManoCalibration/<Calibrate>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCalibrateU3Ec__Iterator0__ctor_m2995248090 (U3CCalibrateU3Ec__Iterator0_t904254568 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Handheld::Vibrate()
extern "C" IL2CPP_METHOD_ATTR void Handheld_Vibrate_m3594839834 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void ManomotionManager::Calibrate()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_Calibrate_m923709651 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Void ManoEvents::HandleManomotionMessages()
extern "C" IL2CPP_METHOD_ATTR void ManoEvents_HandleManomotionMessages_m1985167583 (ManoEvents_t757003538 * __this, const RuntimeMethod* method);
// System.Void ManoEvents::DisplayLogMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void ManoEvents_DisplayLogMessage_m1291210979 (ManoEvents_t757003538 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m1697843332 (Animator_t434523843 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t1901882714 * Component_GetComponentInChildren_TisText_t1901882714_m396351542 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method);
}
// System.Void ManoEvents/ManoEvent::Invoke()
extern "C" IL2CPP_METHOD_ATTR void ManoEvent_Invoke_m1685151306 (ManoEvent_t2837598491 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Scale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Vector3_Scale_m3007431830 (Vector3_t3722313464 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp_m3350697880 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Camera_ViewportToWorldPoint_m4277738824 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Int32 ManomotionManager::get_Width()
extern "C" IL2CPP_METHOD_ATTR int32_t ManomotionManager_get_Width_m1623342980 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Int32 ManomotionManager::get_Height()
extern "C" IL2CPP_METHOD_ATTR int32_t ManomotionManager_get_Height_m1332900733 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
extern "C" IL2CPP_METHOD_ATTR Bounds_t2266837910  Renderer_get_bounds_m1803204000 (Renderer_t2627027031 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3_Set_m1737058353 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Bounds_get_max_m3756577669 (Bounds_t2266837910 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Bounds_get_min_m3755135869 (Bounds_t2266837910 * __this, const RuntimeMethod* method);
// System.Void ManoVisualization::SetHandsSupportedByLicence()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_SetHandsSupportedByLicence_m1517888031 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method);
// System.Void ManoVisualization::SetPointsBasedOnHandNumber()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_SetPointsBasedOnHandNumber_m3584150994 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method);
// System.Void ManoVisualization::CreatePalmCenterParticle()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_CreatePalmCenterParticle_m3112594675 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method);
// System.Void ManoVisualization::CreateFingerTipLabelParticles()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_CreateFingerTipLabelParticles_m2612068125 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method);
// System.Void ManoVisualization::CreateFingerTipParticles()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_CreateFingerTipParticles_m3661147252 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method);
// System.Void ManoVisualization::CreateContourParticles()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_CreateContourParticles_m3062722412 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method);
// System.Void ManoVisualization::CreateInnerParticles()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_CreateInnerParticles_m3288915901 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method);
// System.Void ManoVisualization::InstantiateManomotionMeshes()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_InstantiateManomotionMeshes_m3412892994 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method);
// System.Void ManoVisualization::CreateBoundingBoxes()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_CreateBoundingBoxes_m5014831 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m3707688467 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_SetParent_m381167889 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Transform>(!!0)
inline Transform_t3600365921 * Object_Instantiate_TisTransform_t3600365921_m3433092333 (RuntimeObject * __this /* static, unused */, Transform_t3600365921 * p0, const RuntimeMethod* method)
{
	return ((  Transform_t3600365921 * (*) (RuntimeObject * /* static, unused */, Transform_t3600365921 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<BoundingBoxUI>()
inline BoundingBoxUI_t541593408 * GameObject_GetComponent_TisBoundingBoxUI_t541593408_m956544729 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  BoundingBoxUI_t541593408 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_Euler_m3049309462 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// System.Void ManoUtils::AjustBorders(UnityEngine.MeshRenderer,UnityEngine.Camera,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManoUtils_AjustBorders_m2636642314 (ManoUtils_t3463694697 * __this, MeshRenderer_t587009260 * ___mesh_renderer0, Camera_t4157153871 * ___cam1, bool ___change_correction_ratio2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t587009260 * GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t587009260 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * Renderer_get_material_m4171603682 (Renderer_t2627027031 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Material_set_color_m1794818007 (Material_t340375123 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Random_Range_m2202990745 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.TextMesh>()
inline TextMesh_t1536577757 * Component_GetComponentInChildren_TisTextMesh_t1536577757_m1883617852 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t1536577757 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_t3154350270 * Component_GetComponent_TisLineRenderer_t3154350270_m1658315391 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_t3154350270 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.LineRenderer>()
inline LineRenderer_t3154350270 * GameObject_AddComponent_TisLineRenderer_t3154350270_m2920077551 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_t3154350270 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method);
}
// System.Single UnityEngine.LineRenderer::get_startWidth()
extern "C" IL2CPP_METHOD_ATTR float LineRenderer_get_startWidth_m397448491 (LineRenderer_t3154350270 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
extern "C" IL2CPP_METHOD_ATTR void LineRenderer_set_startWidth_m1093267133 (LineRenderer_t3154350270 * __this, float p0, const RuntimeMethod* method);
// System.Single UnityEngine.LineRenderer::get_endWidth()
extern "C" IL2CPP_METHOD_ATTR float LineRenderer_get_endWidth_m2950446017 (LineRenderer_t3154350270 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
extern "C" IL2CPP_METHOD_ATTR void LineRenderer_set_endWidth_m4252049505 (LineRenderer_t3154350270 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_material_m1157964140 (Renderer_t2627027031 * __this, Material_t340375123 * p0, const RuntimeMethod* method);
// System.Void ManoVisualization::ShowFingerTips(TrackingInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_ShowFingerTips_m2583851885 (ManoVisualization_t1421820612 * __this, TrackingInfo_t3990182144  ___tracking_info0, int32_t ___index1, const RuntimeMethod* method);
// System.Void ManoVisualization::ShowFingerTipLabels(TrackingInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_ShowFingerTipLabels_m4028085035 (ManoVisualization_t1421820612 * __this, TrackingInfo_t3990182144  ___tracking_info0, int32_t ___index1, const RuntimeMethod* method);
// System.Void ManoVisualization::ShowPalmCenter(TrackingInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_ShowPalmCenter_m3667673413 (ManoVisualization_t1421820612 * __this, TrackingInfo_t3990182144  ___tracking_info0, int32_t ___index1, const RuntimeMethod* method);
// System.Void ManoVisualization::ShowContour(TrackingInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_ShowContour_m3583311848 (ManoVisualization_t1421820612 * __this, TrackingInfo_t3990182144  ___tracking_info0, int32_t ___index1, const RuntimeMethod* method);
// System.Void ManoVisualization::ShowInnerPoints(TrackingInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_ShowInnerPoints_m1700325034 (ManoVisualization_t1421820612 * __this, TrackingInfo_t3990182144  ___tracking_info0, int32_t ___index1, const RuntimeMethod* method);
// System.Void ManoVisualization::UpdateLineColor(GestureInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_UpdateLineColor_m2910870940 (ManoVisualization_t1421820612 * __this, GestureInfo_t2431102658  ___gesture_info0, int32_t ___index1, const RuntimeMethod* method);
// System.Void ManoVisualization::UpdatePalmColor(GestureInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_UpdatePalmColor_m192033858 (ManoVisualization_t1421820612 * __this, GestureInfo_t2431102658  ___gesture_info0, int32_t ___index1, const RuntimeMethod* method);
// System.Void ManoVisualization::ShowLayering(HandInfoUnity,UnityEngine.MeshRenderer,ManomotionManager)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_ShowLayering_m1603922788 (ManoVisualization_t1421820612 * __this, HandInfoUnity_t1978403937  ___hand_info0, MeshRenderer_t587009260 * ___layer_hands1, ManomotionManager_t565502280 * ___mano_manager2, const RuntimeMethod* method);
// System.Void ManoVisualization::ShowBoundingBoxInfo(TrackingInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_ShowBoundingBoxInfo_m1558519441 (ManoVisualization_t1421820612 * __this, TrackingInfo_t3990182144  ___tracking_info0, int32_t ___index1, const RuntimeMethod* method);
// VisualizationInfo ManomotionManager::get_Visualization_info()
extern "C" IL2CPP_METHOD_ATTR VisualizationInfo_t4138410502  ManomotionManager_get_Visualization_info_m1973646593 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Void ManoVisualization::ShowBackground(UnityEngine.Texture2D,UnityEngine.MeshRenderer)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_ShowBackground_m178765366 (ManoVisualization_t1421820612 * __this, Texture2D_t3840446185 * ___backgroundTexture0, MeshRenderer_t587009260 * ___backgroundMeshRenderer1, const RuntimeMethod* method);
// System.Void ManoVisualization::HighLightWithColor(UnityEngine.Color,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_HighLightWithColor_m711876272 (ManoVisualization_t1421820612 * __this, Color_t2555686324  ___color0, int32_t ___index1, const RuntimeMethod* method);
// System.Void BoundingBoxUI::UpdateInfo(BoundingBox)
extern "C" IL2CPP_METHOD_ATTR void BoundingBoxUI_UpdateInfo_m812903281 (BoundingBoxUI_t541593408 * __this, BoundingBox_t2874819887  ___bounding_box0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_Lerp_m407887542 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_startColor(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void LineRenderer_set_startColor_m307692187 (LineRenderer_t3154350270 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_endColor(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void LineRenderer_set_endColor_m2330841811 (LineRenderer_t3154350270 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Collections.IEnumerator ManoVisualization::FadeColorAfterDelay(System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ManoVisualization_FadeColorAfterDelay_m910648034 (ManoVisualization_t1421820612 * __this, float ___delay0, int32_t ___index1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void Material_set_mainTexture_m544811714 (Material_t340375123 * __this, Texture_t3661962703 * p0, const RuntimeMethod* method);
// System.Void ManoVisualization/<FadeColorAfterDelay>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeColorAfterDelayU3Ec__Iterator0__ctor_m4046183837 (U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m2006396688 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m4070250708 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method);
}
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void ManomotionManager::Set2HandSupport(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_Set2HandSupport_m3625082079 (ManomotionManager_t565502280 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ManomotionUIManagment::ShowHandButtons()
extern "C" IL2CPP_METHOD_ATTR void ManomotionUIManagment_ShowHandButtons_m1167001449 (ManomotionUIManagment_t1133875195 * __this, const RuntimeMethod* method);
// System.Void ManomotionUIManagment::HideHandButtons()
extern "C" IL2CPP_METHOD_ATTR void ManomotionUIManagment_HideHandButtons_m3446296647 (ManomotionUIManagment_t1133875195 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.LineRenderer::get_startColor()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  LineRenderer_get_startColor_m3971265604 (LineRenderer_t3154350270 * __this, const RuntimeMethod* method);
// System.Single System.Math::Max(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Math_Max_m482125436 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m1628857705 (List_1_t128053199 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1__ctor_m1628857705_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void ManomotionManager::StartWebCamTexture()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_StartWebCamTexture_m758989726 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Void ManomotionManager::PickResolution(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_PickResolution_m1780225526 (ManomotionManager_t565502280 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void ManomotionManager::SetUnityConditions()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetUnityConditions_m2179074196 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
extern "C" IL2CPP_METHOD_ATTR WebCamDeviceU5BU5D_t4294070825* WebCamTexture_get_devices_m844246756 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String UnityEngine.WebCamDevice::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* WebCamDevice_get_name_m3782173082 (WebCamDevice_t1322781432 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::.ctor(System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture__ctor_m2270899567 (WebCamTexture_t1514609158 * __this, String_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::set_requestedFPS(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_set_requestedFPS_m1422816314 (WebCamTexture_t1514609158 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::Play()
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_Play_m3866603461 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method);
// System.Void ManomotionManager::InstantiateManagerInfo()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_InstantiateManagerInfo_m3467965827 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Void ManomotionManager::InstantiateHandInfos()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_InstantiateHandInfos_m1635090002 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Void ManomotionManager::InstantiateVisualisationInfo()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_InstantiateVisualisationInfo_m570477272 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Void ManomotionManager::InitiateTextures()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_InitiateTextures_m1798072223 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Void ManomotionManager::InitiateLibrary()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_InitiateLibrary_m1366715823 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m373113269 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// System.Void ManomotionManager::ForcePermissionRequest()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_ForcePermissionRequest_m26419763 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_identifier()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_identifier_m495053118 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void ManomotionManager::Init(System.String)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_Init_m3886999909 (ManomotionManager_t565502280 * __this, String_t* ___serial_key0, const RuntimeMethod* method);
// System.Void ManomotionManager::SetVariables()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetVariables_m298084323 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Void ManomotionManager::SetManoManagerVariables()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetManoManagerVariables_m667905901 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Void ManomotionManager::SetVisualizationInfo()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetVisualizationInfo_m3407118122 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Void ManomotionManager::SetHandInfo()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetHandInfo_m1989486101 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Void ManomotionManager::SetMRFrameArray()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetMRFrameArray_m1986822829 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Void ManomotionManager::SetImageBinaries()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetImageBinaries_m947268539 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Void ManomotionManager::SetFrameArray(UnityEngine.Color32[])
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetFrameArray_m3794714405 (ManomotionManager_t565502280 * __this, Color32U5BU5D_t3850468773* ___pixels0, const RuntimeMethod* method);
// System.Void ManomotionManager::SetResolution(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetResolution_m2078261478 (ManomotionManager_t565502280 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m3682352535 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_m2277210665 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void ManomotionManager::init(System.String)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_init_m9809242 (RuntimeObject * __this /* static, unused */, String_t* ___serial_key0, const RuntimeMethod* method);
// System.Void ManomotionManager::setImageBinary(UnityEngine.Color32[])
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_setImageBinary_m3813903237 (RuntimeObject * __this /* static, unused */, Color32U5BU5D_t3850468773* ___frame0, const RuntimeMethod* method);
// System.Void ManomotionManager::setResolution(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_setResolution_m4042487670 (RuntimeObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void ManomotionManager::setFrameArray(UnityEngine.Color32[])
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_setFrameArray_m3657584943 (RuntimeObject * __this /* static, unused */, Color32U5BU5D_t3850468773* ___frame0, const RuntimeMethod* method);
// System.Void ManomotionManager::setMRFrameArray(UnityEngine.Color32[],UnityEngine.Color32[])
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_setMRFrameArray_m4214107443 (RuntimeObject * __this /* static, unused */, Color32U5BU5D_t3850468773* ___frame00, Color32U5BU5D_t3850468773* ___frame11, const RuntimeMethod* method);
// System.Boolean UnityEngine.WebCamTexture::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool WebCamTexture_get_isPlaying_m3525118025 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method);
// System.Void ManomotionManager::UpdateOrientation()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_UpdateOrientation_m3935688125 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Void ManomotionManager::CalculateFPSAndProcessingTime()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_CalculateFPSAndProcessingTime_m1536902857 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Void ManomotionManager::ProcessManomotion()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_ProcessManomotion_m2809079058 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Void ManomotionManager::UpdateTexturesWithNewInfo()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_UpdateTexturesWithNewInfo_m3893848213 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// UnityEngine.DeviceOrientation UnityEngine.Input::get_deviceOrientation()
extern "C" IL2CPP_METHOD_ATTR int32_t Input_get_deviceOrientation_m1569488603 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[])
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixels32_m1141065075 (Texture2D_t3840446185 * __this, Color32U5BU5D_t3850468773* p0, const RuntimeMethod* method);
// UnityEngine.Color32[] UnityEngine.WebCamTexture::GetPixels32()
extern "C" IL2CPP_METHOD_ATTR Color32U5BU5D_t3850468773* WebCamTexture_GetPixels32_m3622054777 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method);
// System.Void System.Array::CopyTo(System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_CopyTo_m225704097 (RuntimeArray * __this, RuntimeArray * p0, int32_t p1, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_get_UtcNow_m1393945741 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Millisecond()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Millisecond_m671827344 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Second()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Second_m2686182256 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Minute()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Minute_m87527789 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Void ManomotionManager::ProcessFrame()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_ProcessFrame_m2242379321 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m697420525 (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Add_m697420525_gshared)(__this, p0, method);
}
// System.Void ManomotionManager::CalculateProcessingTime()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_CalculateProcessingTime_m262869436 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m361000296 (List_1_t128053199 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_get_Count_m361000296_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m888956288 (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_get_Item_m888956288_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_m2154023298 (List_1_t128053199 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_Clear_m2154023298_gshared)(__this, method);
}
// System.Void ManomotionManager::processFrame(HandInfo&,HandInfo&,Session&)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_processFrame_m46076805 (RuntimeObject * __this /* static, unused */, HandInfo_t3661823187 * ___hand_info00, HandInfo_t3661823187 * ___hand_info11, Session_t4211189121 * ___manager_info2, const RuntimeMethod* method);
// System.Void ManomotionManager::calibrate()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_calibrate_m554122296 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void ManomotionUIManagment::UpdateFPSText()
extern "C" IL2CPP_METHOD_ATTR void ManomotionUIManagment_UpdateFPSText_m1694195280 (ManomotionUIManagment_t1133875195 * __this, const RuntimeMethod* method);
// System.Void ManomotionUIManagment::UpdateProcessingTime()
extern "C" IL2CPP_METHOD_ATTR void ManomotionUIManagment_UpdateProcessingTime_m2069571183 (ManomotionUIManagment_t1133875195 * __this, const RuntimeMethod* method);
// System.Int32 ManomotionManager::get_Fps()
extern "C" IL2CPP_METHOD_ATTR int32_t ManomotionManager_get_Fps_m499303649 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 ManomotionManager::get_Processing_time()
extern "C" IL2CPP_METHOD_ATTR int32_t ManomotionManager_get_Processing_time_m755508692 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
extern "C" IL2CPP_METHOD_ATTR void Image_set_sprite_m2369174689 (Image_t2670269651 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method);
// System.Void MenuOrientation::CheckForScreenOrientationChange()
extern "C" IL2CPP_METHOD_ATTR void MenuOrientation_CheckForScreenOrientationChange_m1694487744 (MenuOrientation_t2641058044 * __this, const RuntimeMethod* method);
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_m3354122719 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void MenuOrientation/OrientationChange::Invoke()
extern "C" IL2CPP_METHOD_ATTR void OrientationChange_Invoke_m3966996779 (OrientationChange_t2630486480 * __this, const RuntimeMethod* method);
// System.Void SwipeInput::DetectSwipe()
extern "C" IL2CPP_METHOD_ATTR void SwipeInput_DetectSwipe_m2790431000 (SwipeInput_t4249063973 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Touch_get_position_m3109777936 (Touch_t1921856868 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR float Vector2_Distance_m3048868881 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Void SwipeInput::EvaluateTouch(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void SwipeInput_EvaluateTouch_m4092136656 (SwipeInput_t4249063973 * __this, Vector2_t2156229523  ___releasePosition0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
extern "C" IL2CPP_METHOD_ATTR float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void InstructionsManager::DecreaseSlide()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_DecreaseSlide_m522884142 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method);
// System.Void InstructionsManager::IncreaseSlide()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_IncreaseSlide_m382126618 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<GizmoManager>()
inline GizmoManager_t3350963123 * Component_GetComponent_TisGizmoManager_t3350963123_m91259053 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  GizmoManager_t3350963123 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void GizmoManager::set_Show_rotation(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_set_Show_rotation_m2451467461 (GizmoManager_t3350963123 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void GizmoManager::set_Show_depth(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_set_Show_depth_m1354116995 (GizmoManager_t3350963123 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void GizmoManager::set_Show_hand_states(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_set_Show_hand_states_m3260194944 (GizmoManager_t3350963123 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void GizmoManager::set_Show_mano_class(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_set_Show_mano_class_m2348218322 (GizmoManager_t3350963123 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void GizmoManager::set_Show_trigger_gesture(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_set_Show_trigger_gesture_m3462699790 (GizmoManager_t3350963123 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void GizmoManager::set_Show_continuous_gesture(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_set_Show_continuous_gesture_m3086081878 (GizmoManager_t3350963123 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean GizmoManager::get_Show_bounding_box()
extern "C" IL2CPP_METHOD_ATTR bool GizmoManager_get_Show_bounding_box_m1220638282 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method);
// System.Void GizmoManager::set_Show_bounding_box(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_set_Show_bounding_box_m615923224 (GizmoManager_t3350963123 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void GizmoManager::set_Show_flags(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_set_Show_flags_m2897812482 (GizmoManager_t3350963123 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" IL2CPP_METHOD_ATTR ButtonClickedEvent_t48803504 * Button_get_onClick_m2332132945 (Button_t4055032469 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction__ctor_m772160306 (UnityAction_t3245792599 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m2276267359 (UnityEvent_t2581268647 * __this, UnityAction_t3245792599 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<ManoVisualization>()
inline ManoVisualization_t1421820612 * Component_GetComponent_TisManoVisualization_t1421820612_m3996609868 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  ManoVisualization_t1421820612 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t4055032469 * Component_GetComponent_TisButton_t4055032469_m1381873113 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Button_t4055032469 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UIIconBehavior::UpdateIconAndFrame(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UIIconBehavior_UpdateIconAndFrame_m2547845981 (UIIconBehavior_t2038039704 * __this, bool ___state0, const RuntimeMethod* method);
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
// System.Void ApplicationManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ApplicationManager__ctor_m3866842737 (ApplicationManager_t3254129643 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// ApplicationManager ApplicationManager::get_Instance()
extern "C" IL2CPP_METHOD_ATTR ApplicationManager_t3254129643 * ApplicationManager_get_Instance_m1871727214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ApplicationManager_get_Instance_m1871727214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ApplicationManager_t3254129643 * L_0 = ((ApplicationManager_t3254129643_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationManager_t3254129643_il2cpp_TypeInfo_var))->get__instance_4();
		return L_0;
	}
}
// System.Void ApplicationManager::set_Instance(ApplicationManager)
extern "C" IL2CPP_METHOD_ATTR void ApplicationManager_set_Instance_m3627480815 (RuntimeObject * __this /* static, unused */, ApplicationManager_t3254129643 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ApplicationManager_set_Instance_m3627480815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ApplicationManager_t3254129643 * L_0 = ___value0;
		((ApplicationManager_t3254129643_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationManager_t3254129643_il2cpp_TypeInfo_var))->set__instance_4(L_0);
		return;
	}
}
// System.Void ApplicationManager::Awake()
extern "C" IL2CPP_METHOD_ATTR void ApplicationManager_Awake_m407904840 (ApplicationManager_t3254129643 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ApplicationManager_Awake_m407904840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ApplicationManager_t3254129643 * L_0 = ((ApplicationManager_t3254129643_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationManager_t3254129643_il2cpp_TypeInfo_var))->get__instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		((ApplicationManager_t3254129643_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationManager_t3254129643_il2cpp_TypeInfo_var))->set__instance_4(__this);
		goto IL_0026;
	}

IL_001b:
	{
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void ApplicationManager::Start()
extern "C" IL2CPP_METHOD_ATTR void ApplicationManager_Start_m1625431943 (ApplicationManager_t3254129643 * __this, const RuntimeMethod* method)
{
	{
		InstructionsManager_t4057271102 * L_0 = InstructionsManager_get_Instance_m729986502(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		InstructionsManager_StartInstructions_m4068909607(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ApplicationManager::DisplayInstructions()
extern "C" IL2CPP_METHOD_ATTR void ApplicationManager_DisplayInstructions_m3869162539 (ApplicationManager_t3254129643 * __this, const RuntimeMethod* method)
{
	{
		InstructionsManager_t4057271102 * L_0 = InstructionsManager_get_Instance_m729986502(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
		InstructionsManager_t4057271102 * L_2 = InstructionsManager_get_Instance_m729986502(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		InstructionsManager_ForceInstructions_m1967337545(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ApplicationManager::StartMainApplication()
extern "C" IL2CPP_METHOD_ATTR void ApplicationManager_StartMainApplication_m2054188756 (ApplicationManager_t3254129643 * __this, const RuntimeMethod* method)
{
	{
		InstructionsManager_t4057271102 * L_0 = InstructionsManager_get_Instance_m729986502(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		InstructionsManager_StopShowingInstructions_m2311691955(L_0, /*hidden argument*/NULL);
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
// System.Void BWEffect::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BWEffect__ctor_m2913729139 (BWEffect_t874564846 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BWEffect::Awake()
extern "C" IL2CPP_METHOD_ATTR void BWEffect_Awake_m1292441030 (BWEffect_t874564846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BWEffect_Awake_m1292441030_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Shader_t4151988712 * L_0 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral321369003, /*hidden argument*/NULL);
		Material_t340375123 * L_1 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m1662457592(L_1, L_0, /*hidden argument*/NULL);
		__this->set_material_5(L_1);
		return;
	}
}
// System.Void BWEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void BWEffect_OnRenderImage_m3966362791 (BWEffect_t874564846 * __this, RenderTexture_t2108887433 * ___source0, RenderTexture_t2108887433 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BWEffect_OnRenderImage_m3966362791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_intensity_4();
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		RenderTexture_t2108887433 * L_1 = ___source0;
		RenderTexture_t2108887433 * L_2 = ___destination1;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m1336850842(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0018:
	{
		Material_t340375123 * L_3 = __this->get_material_5();
		float L_4 = __this->get_intensity_4();
		NullCheck(L_3);
		Material_SetFloat_m3226510453(L_3, _stringLiteral410892746, L_4, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_5 = ___source0;
		RenderTexture_t2108887433 * L_6 = ___destination1;
		Material_t340375123 * L_7 = __this->get_material_5();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m890955694(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BackgroundModeButtonSelector::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BackgroundModeButtonSelector__ctor_m1315236492 (BackgroundModeButtonSelector_t3867668448 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BackgroundModeButtonSelector::Start()
extern "C" IL2CPP_METHOD_ATTR void BackgroundModeButtonSelector_Start_m2560814202 (BackgroundModeButtonSelector_t3867668448 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BackgroundModeButtonSelector_Start_m2560814202_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		NullCheck(L_0);
		Color_t2555686324  L_1 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		__this->set_thisModeColor_7(L_1);
		return;
	}
}
// System.Void BackgroundModeButtonSelector::SelectBackgroundMode()
extern "C" IL2CPP_METHOD_ATTR void BackgroundModeButtonSelector_SelectBackgroundMode_m3069277118 (BackgroundModeButtonSelector_t3867668448 * __this, const RuntimeMethod* method)
{
	{
		ManomotionManager_t565502280 * L_0 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_myBackgroundMode_6();
		NullCheck(L_0);
		ManomotionManager_SetBackgroundMode_m4247516160(L_0, L_1, /*hidden argument*/NULL);
		Image_t2670269651 * L_2 = __this->get_currentModeImage_5();
		Color_t2555686324  L_3 = __this->get_thisModeColor_7();
		NullCheck(L_2);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		GameObject_t1113636619 * L_4 = __this->get_availableModesMenu_4();
		NullCheck(L_4);
		GameObject_SetActive_m796801857(L_4, (bool)0, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BoundingBoxUI::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BoundingBoxUI__ctor_m790313258 (BoundingBoxUI_t541593408 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoundingBoxUI::Start()
extern "C" IL2CPP_METHOD_ATTR void BoundingBoxUI_Start_m2370778408 (BoundingBoxUI_t541593408 * __this, const RuntimeMethod* method)
{
	{
		ManoUtils_t3463694697 * L_0 = ManoUtils_get_Instance_m912192132(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_mano_utils_8(L_0);
		LineRenderer_t3154350270 * L_1 = __this->get_bound_line_renderer_7();
		NullCheck(L_1);
		LineRenderer_set_positionCount_m2226639690(L_1, 4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoundingBoxUI::UpdateInfo(BoundingBox)
extern "C" IL2CPP_METHOD_ATTR void BoundingBoxUI_UpdateInfo_m812903281 (BoundingBoxUI_t541593408 * __this, BoundingBox_t2874819887  ___bounding_box0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundingBoxUI_UpdateInfo_m812903281_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LineRenderer_t3154350270 * L_0 = __this->get_bound_line_renderer_7();
		ManoUtils_t3463694697 * L_1 = __this->get_mano_utils_8();
		Vector3_t3722313464 * L_2 = (&___bounding_box0)->get_address_of_top_left_0();
		float L_3 = L_2->get_x_2();
		Vector3_t3722313464 * L_4 = (&___bounding_box0)->get_address_of_top_left_0();
		float L_5 = L_4->get_y_3();
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), L_3, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_5)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_7 = ManoUtils_CalculateNewPosition_m854440501(L_1, L_6, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		LineRenderer_SetPosition_m2111131184(L_0, 0, L_7, /*hidden argument*/NULL);
		LineRenderer_t3154350270 * L_8 = __this->get_bound_line_renderer_7();
		ManoUtils_t3463694697 * L_9 = __this->get_mano_utils_8();
		Vector3_t3722313464 * L_10 = (&___bounding_box0)->get_address_of_top_left_0();
		float L_11 = L_10->get_x_2();
		float L_12 = (&___bounding_box0)->get_width_1();
		Vector3_t3722313464 * L_13 = (&___bounding_box0)->get_address_of_top_left_0();
		float L_14 = L_13->get_y_3();
		Vector3_t3722313464  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector3__ctor_m3353183577((&L_15), ((float)il2cpp_codegen_add((float)L_11, (float)L_12)), ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_14)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t3722313464  L_16 = ManoUtils_CalculateNewPosition_m854440501(L_9, L_15, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		LineRenderer_SetPosition_m2111131184(L_8, 1, L_16, /*hidden argument*/NULL);
		LineRenderer_t3154350270 * L_17 = __this->get_bound_line_renderer_7();
		ManoUtils_t3463694697 * L_18 = __this->get_mano_utils_8();
		Vector3_t3722313464 * L_19 = (&___bounding_box0)->get_address_of_top_left_0();
		float L_20 = L_19->get_x_2();
		float L_21 = (&___bounding_box0)->get_width_1();
		Vector3_t3722313464 * L_22 = (&___bounding_box0)->get_address_of_top_left_0();
		float L_23 = L_22->get_y_3();
		float L_24 = (&___bounding_box0)->get_height_2();
		Vector3_t3722313464  L_25;
		memset(&L_25, 0, sizeof(L_25));
		Vector3__ctor_m3353183577((&L_25), ((float)il2cpp_codegen_add((float)L_20, (float)L_21)), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_23)), (float)L_24)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t3722313464  L_26 = ManoUtils_CalculateNewPosition_m854440501(L_18, L_25, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		LineRenderer_SetPosition_m2111131184(L_17, 2, L_26, /*hidden argument*/NULL);
		LineRenderer_t3154350270 * L_27 = __this->get_bound_line_renderer_7();
		ManoUtils_t3463694697 * L_28 = __this->get_mano_utils_8();
		Vector3_t3722313464 * L_29 = (&___bounding_box0)->get_address_of_top_left_0();
		float L_30 = L_29->get_x_2();
		Vector3_t3722313464 * L_31 = (&___bounding_box0)->get_address_of_top_left_0();
		float L_32 = L_31->get_y_3();
		float L_33 = (&___bounding_box0)->get_height_2();
		Vector3_t3722313464  L_34;
		memset(&L_34, 0, sizeof(L_34));
		Vector3__ctor_m3353183577((&L_34), L_30, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_32)), (float)L_33)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t3722313464  L_35 = ManoUtils_CalculateNewPosition_m854440501(L_28, L_34, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		LineRenderer_SetPosition_m2111131184(L_27, 3, L_35, /*hidden argument*/NULL);
		TextMesh_t1536577757 * L_36 = __this->get_top_left_4();
		NullCheck(L_36);
		GameObject_t1113636619 * L_37 = Component_get_gameObject_m442555142(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_t3600365921 * L_38 = GameObject_get_transform_m1369836730(L_37, /*hidden argument*/NULL);
		ManoUtils_t3463694697 * L_39 = __this->get_mano_utils_8();
		Vector3_t3722313464 * L_40 = (&___bounding_box0)->get_address_of_top_left_0();
		float L_41 = L_40->get_x_2();
		Vector3_t3722313464 * L_42 = (&___bounding_box0)->get_address_of_top_left_0();
		float L_43 = L_42->get_y_3();
		Vector3_t3722313464  L_44;
		memset(&L_44, 0, sizeof(L_44));
		Vector3__ctor_m3353183577((&L_44), L_41, ((float)il2cpp_codegen_subtract((float)(1.05f), (float)L_43)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_t3722313464  L_45 = ManoUtils_CalculateNewPosition_m854440501(L_39, L_44, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_set_position_m3387557959(L_38, L_45, /*hidden argument*/NULL);
		TextMesh_t1536577757 * L_46 = __this->get_top_left_4();
		Vector3_t3722313464 * L_47 = (&___bounding_box0)->get_address_of_top_left_0();
		float* L_48 = L_47->get_address_of_x_2();
		String_t* L_49 = Single_ToString_m3489843083((float*)L_48, _stringLiteral3451434970, /*hidden argument*/NULL);
		Vector3_t3722313464 * L_50 = (&___bounding_box0)->get_address_of_top_left_0();
		float* L_51 = L_50->get_address_of_y_3();
		String_t* L_52 = Single_ToString_m3489843083((float*)L_51, _stringLiteral3451434970, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_53 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral4286212219, L_49, _stringLiteral2065537912, L_52, /*hidden argument*/NULL);
		NullCheck(L_46);
		TextMesh_set_text_m446189179(L_46, L_53, /*hidden argument*/NULL);
		TextMesh_t1536577757 * L_54 = __this->get_height_6();
		NullCheck(L_54);
		Transform_t3600365921 * L_55 = Component_get_transform_m3162698980(L_54, /*hidden argument*/NULL);
		ManoUtils_t3463694697 * L_56 = __this->get_mano_utils_8();
		Vector3_t3722313464 * L_57 = (&___bounding_box0)->get_address_of_top_left_0();
		float L_58 = L_57->get_x_2();
		float L_59 = (&___bounding_box0)->get_width_1();
		Vector3_t3722313464 * L_60 = (&___bounding_box0)->get_address_of_top_left_0();
		float L_61 = L_60->get_y_3();
		float L_62 = (&___bounding_box0)->get_height_2();
		Vector3_t3722313464  L_63;
		memset(&L_63, 0, sizeof(L_63));
		Vector3__ctor_m3353183577((&L_63), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_58, (float)L_59)), (float)(0.025f))), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_61)), (float)((float)((float)L_62/(float)(2.0f))))), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t3722313464  L_64 = ManoUtils_CalculateNewPosition_m854440501(L_56, L_63, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_55);
		Transform_set_position_m3387557959(L_55, L_64, /*hidden argument*/NULL);
		TextMesh_t1536577757 * L_65 = __this->get_height_6();
		NullCheck(L_65);
		TextMesh_t1536577757 * L_66 = Component_GetComponent_TisTextMesh_t1536577757_m1070281259(L_65, /*hidden argument*/Component_GetComponent_TisTextMesh_t1536577757_m1070281259_RuntimeMethod_var);
		float* L_67 = (&___bounding_box0)->get_address_of_height_2();
		String_t* L_68 = Single_ToString_m3489843083((float*)L_67, _stringLiteral3451434970, /*hidden argument*/NULL);
		String_t* L_69 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2584261539, L_68, /*hidden argument*/NULL);
		NullCheck(L_66);
		TextMesh_set_text_m446189179(L_66, L_69, /*hidden argument*/NULL);
		TextMesh_t1536577757 * L_70 = __this->get_width_5();
		NullCheck(L_70);
		Transform_t3600365921 * L_71 = Component_get_transform_m3162698980(L_70, /*hidden argument*/NULL);
		ManoUtils_t3463694697 * L_72 = __this->get_mano_utils_8();
		Vector3_t3722313464 * L_73 = (&___bounding_box0)->get_address_of_top_left_0();
		float L_74 = L_73->get_x_2();
		float L_75 = (&___bounding_box0)->get_width_1();
		Vector3_t3722313464 * L_76 = (&___bounding_box0)->get_address_of_top_left_0();
		float L_77 = L_76->get_y_3();
		float L_78 = (&___bounding_box0)->get_height_2();
		Vector3_t3722313464  L_79;
		memset(&L_79, 0, sizeof(L_79));
		Vector3__ctor_m3353183577((&L_79), ((float)il2cpp_codegen_add((float)L_74, (float)((float)((float)L_75/(float)(2.0f))))), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_77)), (float)L_78)), (float)(0.025f))), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_72);
		Vector3_t3722313464  L_80 = ManoUtils_CalculateNewPosition_m854440501(L_72, L_79, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_71);
		Transform_set_position_m3387557959(L_71, L_80, /*hidden argument*/NULL);
		TextMesh_t1536577757 * L_81 = __this->get_width_5();
		NullCheck(L_81);
		TextMesh_t1536577757 * L_82 = Component_GetComponent_TisTextMesh_t1536577757_m1070281259(L_81, /*hidden argument*/Component_GetComponent_TisTextMesh_t1536577757_m1070281259_RuntimeMethod_var);
		float* L_83 = (&___bounding_box0)->get_address_of_width_1();
		String_t* L_84 = Single_ToString_m3489843083((float*)L_83, _stringLiteral3451434970, /*hidden argument*/NULL);
		String_t* L_85 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3211649803, L_84, /*hidden argument*/NULL);
		NullCheck(L_82);
		TextMesh_set_text_m446189179(L_82, L_85, /*hidden argument*/NULL);
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
// System.Void CalibrationArea::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CalibrationArea__ctor_m3330388569 (CalibrationArea_t2245642022 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CalibrationArea::OnMouseOver()
extern "C" IL2CPP_METHOD_ATTR void CalibrationArea_OnMouseOver_m1862482367 (CalibrationArea_t2245642022 * __this, const RuntimeMethod* method)
{
	{
		ManoCalibration_t699436447 * L_0 = ManoCalibration_get_Instance_m3658540507(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_inReach_12((bool)1);
		return;
	}
}
// System.Void CalibrationArea::OnMouseExit()
extern "C" IL2CPP_METHOD_ATTR void CalibrationArea_OnMouseExit_m1026100069 (CalibrationArea_t2245642022 * __this, const RuntimeMethod* method)
{
	{
		ManoCalibration_t699436447 * L_0 = ManoCalibration_get_Instance_m3658540507(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_inReach_12((bool)0);
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
// System.Void Category::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Category__ctor_m1410214233 (Category_t1110218350 * __this, const RuntimeMethod* method)
{
	{
		__this->set_defaultHeight_7(((int32_t)160));
		__this->set_extraHeightForRow_8(((int32_t)100));
		__this->set_iconWidth_9(((int32_t)60));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Category::Start()
extern "C" IL2CPP_METHOD_ATTR void Category_Start_m4085259045 (Category_t1110218350 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Category_Start_m4085259045_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Category_InitializeUIValues_m2246248377(__this, /*hidden argument*/NULL);
		intptr_t L_0 = (intptr_t)Category_CalculateDimensions_m4154216520_RuntimeMethod_var;
		OrientationChange_t2630486480 * L_1 = (OrientationChange_t2630486480 *)il2cpp_codegen_object_new(OrientationChange_t2630486480_il2cpp_TypeInfo_var);
		OrientationChange__ctor_m2413559254(L_1, __this, L_0, /*hidden argument*/NULL);
		MenuOrientation_add_OnOrientationChanged_m1240686245(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Category::InitializeUIValues()
extern "C" IL2CPP_METHOD_ATTR void Category_InitializeUIValues_m2246248377 (Category_t1110218350 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Category_InitializeUIValues_m2246248377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_defaultHeight_7(((int32_t)160));
		__this->set_extraHeightForRow_8(((int32_t)100));
		__this->set_iconWidth_9(((int32_t)60));
		int32_t L_0 = __this->get_iconWidth_9();
		__this->set_iconLeftMargin_10(((int32_t)((int32_t)L_0/(int32_t)3)));
		int32_t L_1 = __this->get_iconWidth_9();
		__this->set_iconRightMargin_11(((int32_t)((int32_t)L_1/(int32_t)3)));
		int32_t L_2 = __this->get_iconWidth_9();
		int32_t L_3 = __this->get_iconLeftMargin_10();
		int32_t L_4 = __this->get_iconRightMargin_11();
		__this->set_iconSpaceTaken_12(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), (int32_t)L_4)));
		RectTransform_t3704657025 * L_5 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		__this->set_rt_18(L_5);
		return;
	}
}
// System.Void Category::CalculateDimensions()
extern "C" IL2CPP_METHOD_ATTR void Category_CalculateDimensions_m4154216520 (Category_t1110218350 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = Category_Calculate_m208315117(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Category::Calculate()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Category_Calculate_m208315117 (Category_t1110218350 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Category_Calculate_m208315117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CCalculateU3Ec__Iterator0_t1249670162 * V_0 = NULL;
	{
		U3CCalculateU3Ec__Iterator0_t1249670162 * L_0 = (U3CCalculateU3Ec__Iterator0_t1249670162 *)il2cpp_codegen_object_new(U3CCalculateU3Ec__Iterator0_t1249670162_il2cpp_TypeInfo_var);
		U3CCalculateU3Ec__Iterator0__ctor_m520369458(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCalculateU3Ec__Iterator0_t1249670162 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CCalculateU3Ec__Iterator0_t1249670162 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator Category::AlignIcons()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Category_AlignIcons_m1574798448 (Category_t1110218350 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Category_AlignIcons_m1574798448_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CAlignIconsU3Ec__Iterator1_t2874318377 * V_0 = NULL;
	{
		U3CAlignIconsU3Ec__Iterator1_t2874318377 * L_0 = (U3CAlignIconsU3Ec__Iterator1_t2874318377 *)il2cpp_codegen_object_new(U3CAlignIconsU3Ec__Iterator1_t2874318377_il2cpp_TypeInfo_var);
		U3CAlignIconsU3Ec__Iterator1__ctor_m2378262173(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAlignIconsU3Ec__Iterator1_t2874318377 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_1(__this);
		U3CAlignIconsU3Ec__Iterator1_t2874318377 * L_2 = V_0;
		return L_2;
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
// System.Void Category/<AlignIcons>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CAlignIconsU3Ec__Iterator1__ctor_m2378262173 (U3CAlignIconsU3Ec__Iterator1_t2874318377 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Category/<AlignIcons>c__Iterator1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CAlignIconsU3Ec__Iterator1_MoveNext_m3147411907 (U3CAlignIconsU3Ec__Iterator1_t2874318377 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAlignIconsU3Ec__Iterator1_MoveNext_m3147411907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0045;
			}
		}
	}
	{
		goto IL_0158;
	}

IL_0021:
	{
		WaitForSeconds_t1699091251 * L_2 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_2, (0.1f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_2);
		bool L_3 = __this->get_U24disposing_3();
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0040:
	{
		goto IL_015a;
	}

IL_0045:
	{
		Category_t1110218350 * L_4 = __this->get_U24this_1();
		Category_t1110218350 * L_5 = __this->get_U24this_1();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_numberOfRows_17();
		Category_t1110218350 * L_7 = __this->get_U24this_1();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_maxIconsForRow_13();
		il2cpp_array_size_t L_10[] = { (il2cpp_array_size_t)L_6, (il2cpp_array_size_t)L_8 };
		GameObjectU5B0___U2C0___U5D_t3328599147* L_9 = (GameObjectU5B0___U2C0___U5D_t3328599147*)GenArrayNew(GameObjectU5B0___U2C0___U5D_t3328599147_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_4);
		L_4->set_iconArray_19((GameObjectU5B0___U2C0___U5D_t3328599147*)L_9);
		Category_t1110218350 * L_11 = __this->get_U24this_1();
		NullCheck(L_11);
		int32_t L_12 = L_11->get_numberOfRows_17();
		Category_t1110218350 * L_13 = __this->get_U24this_1();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_maxIconsForRow_13();
		__this->set_U3CtotalNumberU3E__0_0(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)L_14)));
		V_1 = 0;
		goto IL_0145;
	}

IL_008f:
	{
		int32_t L_15 = V_1;
		Category_t1110218350 * L_16 = __this->get_U24this_1();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_maxIconsForRow_13();
		V_2 = ((int32_t)((int32_t)L_15%(int32_t)L_17));
		int32_t L_18 = V_1;
		Category_t1110218350 * L_19 = __this->get_U24this_1();
		NullCheck(L_19);
		int32_t L_20 = L_19->get_maxIconsForRow_13();
		V_3 = ((int32_t)((int32_t)L_18/(int32_t)L_20));
		int32_t L_21 = V_1;
		Category_t1110218350 * L_22 = __this->get_U24this_1();
		NullCheck(L_22);
		GameObjectU5BU5D_t3328599146* L_23 = L_22->get_icons_6();
		NullCheck(L_23);
		if ((((int32_t)L_21) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_00dd;
		}
	}
	{
		Category_t1110218350 * L_24 = __this->get_U24this_1();
		NullCheck(L_24);
		GameObjectU5B0___U2C0___U5D_t3328599147* L_25 = L_24->get_iconArray_19();
		int32_t L_26 = V_3;
		int32_t L_27 = V_2;
		Category_t1110218350 * L_28 = __this->get_U24this_1();
		NullCheck(L_28);
		GameObjectU5BU5D_t3328599146* L_29 = L_28->get_icons_6();
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		GameObject_t1113636619 * L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck((GameObjectU5B0___U2C0___U5D_t3328599147*)(GameObjectU5B0___U2C0___U5D_t3328599147*)L_25);
		((GameObjectU5B0___U2C0___U5D_t3328599147*)(GameObjectU5B0___U2C0___U5D_t3328599147*)L_25)->SetAt(L_26, L_27, L_32);
	}

IL_00dd:
	{
		Category_t1110218350 * L_33 = __this->get_U24this_1();
		NullCheck(L_33);
		GameObjectU5B0___U2C0___U5D_t3328599147* L_34 = L_33->get_iconArray_19();
		int32_t L_35 = V_3;
		int32_t L_36 = V_2;
		NullCheck((GameObjectU5B0___U2C0___U5D_t3328599147*)(GameObjectU5B0___U2C0___U5D_t3328599147*)L_34);
		GameObject_t1113636619 * L_37 = ((GameObjectU5B0___U2C0___U5D_t3328599147*)(GameObjectU5B0___U2C0___U5D_t3328599147*)L_34)->GetAt(L_35, L_36);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_38 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0141;
		}
	}
	{
		Category_t1110218350 * L_39 = __this->get_U24this_1();
		NullCheck(L_39);
		GameObjectU5B0___U2C0___U5D_t3328599147* L_40 = L_39->get_iconArray_19();
		int32_t L_41 = V_3;
		int32_t L_42 = V_2;
		NullCheck((GameObjectU5B0___U2C0___U5D_t3328599147*)(GameObjectU5B0___U2C0___U5D_t3328599147*)L_40);
		GameObject_t1113636619 * L_43 = ((GameObjectU5B0___U2C0___U5D_t3328599147*)(GameObjectU5B0___U2C0___U5D_t3328599147*)L_40)->GetAt(L_41, L_42);
		NullCheck(L_43);
		Transform_t3600365921 * L_44 = GameObject_get_transform_m1369836730(L_43, /*hidden argument*/NULL);
		Category_t1110218350 * L_45 = __this->get_U24this_1();
		NullCheck(L_45);
		int32_t L_46 = L_45->get_iconLeftMargin_10();
		int32_t L_47 = V_2;
		Category_t1110218350 * L_48 = __this->get_U24this_1();
		NullCheck(L_48);
		int32_t L_49 = L_48->get_iconSpaceTaken_12();
		int32_t L_50 = V_3;
		Vector2_t2156229523  L_51;
		memset(&L_51, 0, sizeof(L_51));
		Vector2__ctor_m3970636864((&L_51), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_47, (int32_t)L_49))))))), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)-55), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)-100), (int32_t)L_50))))))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_52 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_set_localPosition_m4128471975(L_44, L_52, /*hidden argument*/NULL);
	}

IL_0141:
	{
		int32_t L_53 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_0145:
	{
		int32_t L_54 = V_1;
		int32_t L_55 = __this->get_U3CtotalNumberU3E__0_0();
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_008f;
		}
	}
	{
		__this->set_U24PC_4((-1));
	}

IL_0158:
	{
		return (bool)0;
	}

IL_015a:
	{
		return (bool)1;
	}
}
// System.Object Category/<AlignIcons>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CAlignIconsU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m4171443221 (U3CAlignIconsU3Ec__Iterator1_t2874318377 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object Category/<AlignIcons>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CAlignIconsU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m1490640584 (U3CAlignIconsU3Ec__Iterator1_t2874318377 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void Category/<AlignIcons>c__Iterator1::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CAlignIconsU3Ec__Iterator1_Dispose_m2691867854 (U3CAlignIconsU3Ec__Iterator1_t2874318377 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void Category/<AlignIcons>c__Iterator1::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CAlignIconsU3Ec__Iterator1_Reset_m1097718101 (U3CAlignIconsU3Ec__Iterator1_t2874318377 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAlignIconsU3Ec__Iterator1_Reset_m1097718101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CAlignIconsU3Ec__Iterator1_Reset_m1097718101_RuntimeMethod_var);
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
// System.Void Category/<Calculate>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCalculateU3Ec__Iterator0__ctor_m520369458 (U3CCalculateU3Ec__Iterator0_t1249670162 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Category/<Calculate>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CCalculateU3Ec__Iterator0_MoveNext_m1408248546 (U3CCalculateU3Ec__Iterator0_t1249670162 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCalculateU3Ec__Iterator0_MoveNext_m1408248546_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0045;
			}
		}
	}
	{
		goto IL_0166;
	}

IL_0021:
	{
		WaitForSeconds_t1699091251 * L_2 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_2, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_2);
		bool L_3 = __this->get_U24disposing_2();
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0040:
	{
		goto IL_0168;
	}

IL_0045:
	{
		Category_t1110218350 * L_4 = __this->get_U24this_0();
		Category_t1110218350 * L_5 = __this->get_U24this_0();
		NullCheck(L_5);
		RectTransform_t3704657025 * L_6 = L_5->get_rt_18();
		NullCheck(L_6);
		Rect_t2360479859  L_7 = RectTransform_get_rect_m574169965(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_9 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_categoryWidth_15(L_9);
		Category_t1110218350 * L_10 = __this->get_U24this_0();
		Category_t1110218350 * L_11 = __this->get_U24this_0();
		NullCheck(L_11);
		int32_t L_12 = L_11->get_iconSpaceTaken_12();
		Category_t1110218350 * L_13 = __this->get_U24this_0();
		NullCheck(L_13);
		GameObjectU5BU5D_t3328599146* L_14 = L_13->get_icons_6();
		NullCheck(L_14);
		Category_t1110218350 * L_15 = __this->get_U24this_0();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_categoryWidth_15();
		int32_t L_17 = Mathf_CeilToInt_m432108984(NULL /*static, unused*/, ((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_12))), (float)(((float)((float)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))))/(float)(((float)((float)L_16))))), /*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_numberOfRows_17(L_17);
		Category_t1110218350 * L_18 = __this->get_U24this_0();
		Category_t1110218350 * L_19 = __this->get_U24this_0();
		NullCheck(L_19);
		int32_t L_20 = L_19->get_numberOfRows_17();
		int32_t L_21 = Mathf_Max_m3673002171(NULL /*static, unused*/, L_20, 1, /*hidden argument*/NULL);
		NullCheck(L_18);
		L_18->set_categoryHeight_16(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)((int32_t)100))), (int32_t)((int32_t)50))));
		Category_t1110218350 * L_22 = __this->get_U24this_0();
		NullCheck(L_22);
		RectTransform_t3704657025 * L_23 = L_22->get_rt_18();
		Category_t1110218350 * L_24 = __this->get_U24this_0();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_categoryHeight_16();
		Vector2_t2156229523  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Vector2__ctor_m3970636864((&L_26), (0.0f), (((float)((float)L_25))), /*hidden argument*/NULL);
		NullCheck(L_23);
		RectTransform_set_sizeDelta_m3462269772(L_23, L_26, /*hidden argument*/NULL);
		Category_t1110218350 * L_27 = __this->get_U24this_0();
		Category_t1110218350 * L_28 = __this->get_U24this_0();
		NullCheck(L_28);
		int32_t L_29 = L_28->get_categoryWidth_15();
		Category_t1110218350 * L_30 = __this->get_U24this_0();
		NullCheck(L_30);
		int32_t L_31 = L_30->get_iconSpaceTaken_12();
		NullCheck(L_27);
		L_27->set_maxIconsForRow_13(((int32_t)((int32_t)L_29/(int32_t)L_31)));
		Category_t1110218350 * L_32 = __this->get_U24this_0();
		Category_t1110218350 * L_33 = __this->get_U24this_0();
		NullCheck(L_33);
		RectTransform_t3704657025 * L_34 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_33, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		NullCheck(L_32);
		L_32->set_rt_18(L_34);
		Category_t1110218350 * L_35 = __this->get_U24this_0();
		Category_t1110218350 * L_36 = __this->get_U24this_0();
		NullCheck(L_36);
		RectTransform_t3704657025 * L_37 = L_36->get_rt_18();
		NullCheck(L_37);
		Vector2_t2156229523  L_38 = RectTransform_get_anchoredPosition_m1813443094(L_37, /*hidden argument*/NULL);
		V_2 = L_38;
		float L_39 = (&V_2)->get_y_1();
		NullCheck(L_35);
		L_35->set_categoryPositionY_14(L_39);
		Category_t1110218350 * L_40 = __this->get_U24this_0();
		Category_t1110218350 * L_41 = __this->get_U24this_0();
		NullCheck(L_41);
		RuntimeObject* L_42 = Category_AlignIcons_m1574798448(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		MonoBehaviour_StartCoroutine_m3411253000(L_40, L_42, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_0166:
	{
		return (bool)0;
	}

IL_0168:
	{
		return (bool)1;
	}
}
// System.Object Category/<Calculate>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCalculateU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1898608702 (U3CCalculateU3Ec__Iterator0_t1249670162 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object Category/<Calculate>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCalculateU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2910527863 (U3CCalculateU3Ec__Iterator0_t1249670162 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void Category/<Calculate>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CCalculateU3Ec__Iterator0_Dispose_m2830524344 (U3CCalculateU3Ec__Iterator0_t1249670162 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void Category/<Calculate>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CCalculateU3Ec__Iterator0_Reset_m4245667973 (U3CCalculateU3Ec__Iterator0_t1249670162 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCalculateU3Ec__Iterator0_Reset_m4245667973_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CCalculateU3Ec__Iterator0_Reset_m4245667973_RuntimeMethod_var);
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
// System.Void CategoryManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CategoryManager__ctor_m3386482496 (CategoryManager_t1388308348 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// CategoryManager CategoryManager::get_Instance()
extern "C" IL2CPP_METHOD_ATTR CategoryManager_t1388308348 * CategoryManager_get_Instance_m3818612611 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CategoryManager_get_Instance_m3818612611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CategoryManager_t1388308348 * L_0 = ((CategoryManager_t1388308348_StaticFields*)il2cpp_codegen_static_fields_for(CategoryManager_t1388308348_il2cpp_TypeInfo_var))->get_instance_4();
		return L_0;
	}
}
// System.Void CategoryManager::set_Instance(CategoryManager)
extern "C" IL2CPP_METHOD_ATTR void CategoryManager_set_Instance_m852071690 (RuntimeObject * __this /* static, unused */, CategoryManager_t1388308348 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CategoryManager_set_Instance_m852071690_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CategoryManager_t1388308348 * L_0 = ___value0;
		((CategoryManager_t1388308348_StaticFields*)il2cpp_codegen_static_fields_for(CategoryManager_t1388308348_il2cpp_TypeInfo_var))->set_instance_4(L_0);
		return;
	}
}
// System.Void CategoryManager::Awake()
extern "C" IL2CPP_METHOD_ATTR void CategoryManager_Awake_m2478157640 (CategoryManager_t1388308348 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CategoryManager_Awake_m2478157640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CategoryManager_t1388308348 * L_0 = ((CategoryManager_t1388308348_StaticFields*)il2cpp_codegen_static_fields_for(CategoryManager_t1388308348_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		((CategoryManager_t1388308348_StaticFields*)il2cpp_codegen_static_fields_for(CategoryManager_t1388308348_il2cpp_TypeInfo_var))->set_instance_4(__this);
	}

IL_0016:
	{
		return;
	}
}
// System.Void CategoryManager::Start()
extern "C" IL2CPP_METHOD_ATTR void CategoryManager_Start_m3470368898 (CategoryManager_t1388308348 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CategoryManager_Start_m3470368898_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CategoryManager_PositionCategories_m4212116905(__this, /*hidden argument*/NULL);
		intptr_t L_0 = (intptr_t)CategoryManager_PositionCategories_m4212116905_RuntimeMethod_var;
		OrientationChange_t2630486480 * L_1 = (OrientationChange_t2630486480 *)il2cpp_codegen_object_new(OrientationChange_t2630486480_il2cpp_TypeInfo_var);
		OrientationChange__ctor_m2413559254(L_1, __this, L_0, /*hidden argument*/NULL);
		MenuOrientation_add_OnOrientationChanged_m1240686245(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CategoryManager::PositionCategories()
extern "C" IL2CPP_METHOD_ATTR void CategoryManager_PositionCategories_m4212116905 (CategoryManager_t1388308348 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = CategoryManager_PositionCategoriesAfter_m1864741891(__this, (0.8f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator CategoryManager::PositionCategoriesAfter(System.Single)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* CategoryManager_PositionCategoriesAfter_m1864741891 (CategoryManager_t1388308348 * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CategoryManager_PositionCategoriesAfter_m1864741891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547 * V_0 = NULL;
	{
		U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547 * L_0 = (U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547 *)il2cpp_codegen_object_new(U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547_il2cpp_TypeInfo_var);
		U3CPositionCategoriesAfterU3Ec__Iterator0__ctor_m3068500039(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547 * L_1 = V_0;
		float L_2 = ___time0;
		NullCheck(L_1);
		L_1->set_time_0(L_2);
		U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547 * L_4 = V_0;
		return L_4;
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
// System.Void CategoryManager/<PositionCategoriesAfter>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CPositionCategoriesAfterU3Ec__Iterator0__ctor_m3068500039 (U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CategoryManager/<PositionCategoriesAfter>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CPositionCategoriesAfterU3Ec__Iterator0_MoveNext_m1585220542 (U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPositionCategoriesAfterU3Ec__Iterator0_MoveNext_m1585220542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_011f;
	}

IL_0021:
	{
		float L_2 = __this->get_time_0();
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, L_2, /*hidden argument*/NULL);
		__this->set_U24current_2(L_3);
		bool L_4 = __this->get_U24disposing_3();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0041:
	{
		goto IL_0121;
	}

IL_0046:
	{
		V_1 = 1;
		goto IL_0105;
	}

IL_004d:
	{
		CategoryManager_t1388308348 * L_5 = __this->get_U24this_1();
		NullCheck(L_5);
		GameObjectU5BU5D_t3328599146* L_6 = L_5->get_categories_5();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
		GameObject_t1113636619 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Category_t1110218350 * L_10 = GameObject_GetComponent_TisCategory_t1110218350_m2330124262(L_9, /*hidden argument*/GameObject_GetComponent_TisCategory_t1110218350_m2330124262_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0101;
		}
	}
	{
		CategoryManager_t1388308348 * L_12 = __this->get_U24this_1();
		CategoryManager_t1388308348 * L_13 = __this->get_U24this_1();
		NullCheck(L_13);
		GameObjectU5BU5D_t3328599146* L_14 = L_13->get_categories_5();
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
		GameObject_t1113636619 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Category_t1110218350 * L_18 = GameObject_GetComponent_TisCategory_t1110218350_m2330124262(L_17, /*hidden argument*/GameObject_GetComponent_TisCategory_t1110218350_m2330124262_RuntimeMethod_var);
		NullCheck(L_12);
		L_12->set_previousCategory_7(L_18);
		CategoryManager_t1388308348 * L_19 = __this->get_U24this_1();
		CategoryManager_t1388308348 * L_20 = __this->get_U24this_1();
		NullCheck(L_20);
		GameObjectU5BU5D_t3328599146* L_21 = L_20->get_categories_5();
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		GameObject_t1113636619 * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		RectTransform_t3704657025 * L_25 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_24, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		NullCheck(L_25);
		Vector2_t2156229523  L_26 = RectTransform_get_anchoredPosition_m1813443094(L_25, /*hidden argument*/NULL);
		NullCheck(L_19);
		L_19->set_categoryPosition_6(L_26);
		CategoryManager_t1388308348 * L_27 = __this->get_U24this_1();
		NullCheck(L_27);
		GameObjectU5BU5D_t3328599146* L_28 = L_27->get_categories_5();
		int32_t L_29 = V_1;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		GameObject_t1113636619 * L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_31);
		RectTransform_t3704657025 * L_32 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_31, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		CategoryManager_t1388308348 * L_33 = __this->get_U24this_1();
		NullCheck(L_33);
		Category_t1110218350 * L_34 = L_33->get_previousCategory_7();
		NullCheck(L_34);
		int32_t L_35 = L_34->get_categoryHeight_16();
		CategoryManager_t1388308348 * L_36 = __this->get_U24this_1();
		NullCheck(L_36);
		GameObjectU5BU5D_t3328599146* L_37 = L_36->get_categories_5();
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)1));
		GameObject_t1113636619 * L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		RectTransform_t3704657025 * L_41 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_40, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		NullCheck(L_41);
		Vector2_t2156229523  L_42 = RectTransform_get_anchoredPosition_m1813443094(L_41, /*hidden argument*/NULL);
		V_2 = L_42;
		float L_43 = (&V_2)->get_y_1();
		Vector2_t2156229523  L_44;
		memset(&L_44, 0, sizeof(L_44));
		Vector2__ctor_m3970636864((&L_44), (0.0f), ((float)il2cpp_codegen_add((float)(((float)((float)((-L_35))))), (float)L_43)), /*hidden argument*/NULL);
		NullCheck(L_32);
		RectTransform_set_anchoredPosition_m4126691837(L_32, L_44, /*hidden argument*/NULL);
	}

IL_0101:
	{
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_0105:
	{
		int32_t L_46 = V_1;
		CategoryManager_t1388308348 * L_47 = __this->get_U24this_1();
		NullCheck(L_47);
		GameObjectU5BU5D_t3328599146* L_48 = L_47->get_categories_5();
		NullCheck(L_48);
		if ((((int32_t)L_46) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_48)->max_length)))))))
		{
			goto IL_004d;
		}
	}
	{
		__this->set_U24PC_4((-1));
	}

IL_011f:
	{
		return (bool)0;
	}

IL_0121:
	{
		return (bool)1;
	}
}
// System.Object CategoryManager/<PositionCategoriesAfter>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CPositionCategoriesAfterU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2231375783 (U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object CategoryManager/<PositionCategoriesAfter>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CPositionCategoriesAfterU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3681933656 (U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void CategoryManager/<PositionCategoriesAfter>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CPositionCategoriesAfterU3Ec__Iterator0_Dispose_m2095995295 (U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void CategoryManager/<PositionCategoriesAfter>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CPositionCategoriesAfterU3Ec__Iterator0_Reset_m3637728035 (U3CPositionCategoriesAfterU3Ec__Iterator0_t4230049547 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPositionCategoriesAfterU3Ec__Iterator0_Reset_m3637728035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CPositionCategoriesAfterU3Ec__Iterator0_Reset_m3637728035_RuntimeMethod_var);
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
// System.Void GizmoManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GizmoManager__ctor_m3358903690 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// GizmoManager GizmoManager::get_Instance()
extern "C" IL2CPP_METHOD_ATTR GizmoManager_t3350963123 * GizmoManager_get_Instance_m3631841779 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GizmoManager_get_Instance_m3631841779_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GizmoManager_t3350963123 * L_0 = ((GizmoManager_t3350963123_StaticFields*)il2cpp_codegen_static_fields_for(GizmoManager_t3350963123_il2cpp_TypeInfo_var))->get__instance_4();
		return L_0;
	}
}
// System.Void GizmoManager::set_Instance(GizmoManager)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_set_Instance_m1806799066 (RuntimeObject * __this /* static, unused */, GizmoManager_t3350963123 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GizmoManager_set_Instance_m1806799066_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GizmoManager_t3350963123 * L_0 = ___value0;
		((GizmoManager_t3350963123_StaticFields*)il2cpp_codegen_static_fields_for(GizmoManager_t3350963123_il2cpp_TypeInfo_var))->set__instance_4(L_0);
		return;
	}
}
// System.Boolean GizmoManager::get_Show_flags()
extern "C" IL2CPP_METHOD_ATTR bool GizmoManager_get_Show_flags_m4007314770 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__show_flags_22();
		return L_0;
	}
}
// System.Void GizmoManager::set_Show_flags(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_set_Show_flags_m2897812482 (GizmoManager_t3350963123 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__show_flags_22(L_0);
		return;
	}
}
// System.Boolean GizmoManager::get_Show_hand_states()
extern "C" IL2CPP_METHOD_ATTR bool GizmoManager_get_Show_hand_states_m92485017 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__show_hand_states_15();
		return L_0;
	}
}
// System.Void GizmoManager::set_Show_hand_states(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_set_Show_hand_states_m3260194944 (GizmoManager_t3350963123 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__show_hand_states_15(L_0);
		return;
	}
}
// System.Boolean GizmoManager::get_Show_rotation()
extern "C" IL2CPP_METHOD_ATTR bool GizmoManager_get_Show_rotation_m4091965537 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__show_rotation_16();
		return L_0;
	}
}
// System.Void GizmoManager::set_Show_rotation(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_set_Show_rotation_m2451467461 (GizmoManager_t3350963123 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__show_rotation_16(L_0);
		return;
	}
}
// System.Boolean GizmoManager::get_Show_mano_class()
extern "C" IL2CPP_METHOD_ATTR bool GizmoManager_get_Show_mano_class_m1694794017 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__show_mano_class_17();
		return L_0;
	}
}
// System.Void GizmoManager::set_Show_mano_class(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_set_Show_mano_class_m2348218322 (GizmoManager_t3350963123 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__show_mano_class_17(L_0);
		return;
	}
}
// System.Boolean GizmoManager::get_Show_trigger_gesture()
extern "C" IL2CPP_METHOD_ATTR bool GizmoManager_get_Show_trigger_gesture_m1981626667 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__show_trigger_gesture_18();
		return L_0;
	}
}
// System.Void GizmoManager::set_Show_trigger_gesture(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_set_Show_trigger_gesture_m3462699790 (GizmoManager_t3350963123 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__show_trigger_gesture_18(L_0);
		return;
	}
}
// System.Boolean GizmoManager::get_Show_continuous_gesture()
extern "C" IL2CPP_METHOD_ATTR bool GizmoManager_get_Show_continuous_gesture_m2573721889 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__show_continuous_gesture_19();
		return L_0;
	}
}
// System.Void GizmoManager::set_Show_continuous_gesture(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_set_Show_continuous_gesture_m3086081878 (GizmoManager_t3350963123 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__show_continuous_gesture_19(L_0);
		return;
	}
}
// System.Boolean GizmoManager::get_Show_bounding_box()
extern "C" IL2CPP_METHOD_ATTR bool GizmoManager_get_Show_bounding_box_m1220638282 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__show_bounding_box_20();
		return L_0;
	}
}
// System.Void GizmoManager::set_Show_bounding_box(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_set_Show_bounding_box_m615923224 (GizmoManager_t3350963123 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__show_bounding_box_20(L_0);
		return;
	}
}
// System.Boolean GizmoManager::get_Show_depth()
extern "C" IL2CPP_METHOD_ATTR bool GizmoManager_get_Show_depth_m1953621816 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__show_depth_21();
		return L_0;
	}
}
// System.Void GizmoManager::set_Show_depth(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_set_Show_depth_m1354116995 (GizmoManager_t3350963123 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__show_depth_21(L_0);
		return;
	}
}
// System.Void GizmoManager::Start()
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_Start_m1732806194 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GizmoManager_Start_m1732806194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GizmoManager_t3350963123 * L_0 = ((GizmoManager_t3350963123_StaticFields*)il2cpp_codegen_static_fields_for(GizmoManager_t3350963123_il2cpp_TypeInfo_var))->get__instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		((GizmoManager_t3350963123_StaticFields*)il2cpp_codegen_static_fields_for(GizmoManager_t3350963123_il2cpp_TypeInfo_var))->set__instance_4(__this);
	}

IL_0016:
	{
		GizmoManager_SetGestureDescriptionParts_m1448043559(__this, /*hidden argument*/NULL);
		GizmoManager_SetDepthGizmoParts_m2950274697(__this, /*hidden argument*/NULL);
		GizmoManager_SetRotationGizmoParts_m3918050831(__this, /*hidden argument*/NULL);
		GizmoManager_HighlightStatesToStateDetection_m4058239398(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GizmoManager::Update()
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_Update_m3929683908 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method)
{
	{
		ManomotionManager_t565502280 * L_0 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		HandInfoUnityU5BU5D_t4085119228* L_1 = ManomotionManager_get_Hand_infos_m3072460227(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		HandInfo_t3661823187 * L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_address_of_hand_info_0();
		TrackingInfo_t3990182144  L_3 = L_2->get_tracking_info_0();
		GizmoManager_DisplayRotationGizmo_m2044688722(__this, L_3, /*hidden argument*/NULL);
		ManomotionManager_t565502280 * L_4 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		HandInfoUnityU5BU5D_t4085119228* L_5 = ManomotionManager_get_Hand_infos_m3072460227(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		HandInfo_t3661823187 * L_6 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_address_of_hand_info_0();
		GestureInfo_t2431102658  L_7 = L_6->get_gesture_info_1();
		GizmoManager_DisplayManoclass_m1731841311(__this, L_7, /*hidden argument*/NULL);
		ManomotionManager_t565502280 * L_8 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		HandInfoUnityU5BU5D_t4085119228* L_9 = ManomotionManager_get_Hand_infos_m3072460227(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		HandInfo_t3661823187 * L_10 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_address_of_hand_info_0();
		GestureInfo_t2431102658  L_11 = L_10->get_gesture_info_1();
		GizmoManager_DisplayTriggerGesture_m1947760828(__this, L_11, /*hidden argument*/NULL);
		ManomotionManager_t565502280 * L_12 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		HandInfoUnityU5BU5D_t4085119228* L_13 = ManomotionManager_get_Hand_infos_m3072460227(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		HandInfo_t3661823187 * L_14 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_address_of_hand_info_0();
		GestureInfo_t2431102658  L_15 = L_14->get_gesture_info_1();
		GizmoManager_DisplayContinuousGesture_m3731156484(__this, L_15, /*hidden argument*/NULL);
		ManomotionManager_t565502280 * L_16 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_16);
		HandInfoUnityU5BU5D_t4085119228* L_17 = ManomotionManager_get_Hand_infos_m3072460227(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		HandInfo_t3661823187 * L_18 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_address_of_hand_info_0();
		GestureInfo_t2431102658  L_19 = L_18->get_gesture_info_1();
		GizmoManager_DisplayHandState_m3462735175(__this, L_19, /*hidden argument*/NULL);
		ManomotionManager_t565502280 * L_20 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_20);
		HandInfoUnityU5BU5D_t4085119228* L_21 = ManomotionManager_get_Hand_infos_m3072460227(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		HandInfo_t3661823187 * L_22 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_address_of_hand_info_0();
		TrackingInfo_t3990182144  L_23 = L_22->get_tracking_info_0();
		GizmoManager_DisplayDepth_m686403081(__this, L_23, /*hidden argument*/NULL);
		ManomotionManager_t565502280 * L_24 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_24);
		HandInfoUnityU5BU5D_t4085119228* L_25 = ManomotionManager_get_Hand_infos_m3072460227(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		HandInfo_t3661823187 * L_26 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_address_of_hand_info_0();
		int32_t L_27 = L_26->get_warning_2();
		GizmoManager_DisplayFlags_m3911338224(__this, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GizmoManager::DisplayFlags(Warning)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_DisplayFlags_m3911338224 (GizmoManager_t3350963123 * __this, int32_t ___warningFlag0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Color_t2555686324  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameObject_t1113636619 * L_0 = __this->get_flagGizmo_13();
		bool L_1 = GizmoManager_get_Show_flags_m4007314770(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = GizmoManager_get_Show_flags_m4007314770(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_3 = ___warningFlag0;
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0044;
		}
	}
	{
		ImageU5BU5D_t2439009922* L_4 = __this->get_flagImages_5();
		NullCheck(L_4);
		int32_t L_5 = 0;
		Image_t2670269651 * L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Color_t2555686324  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Color__ctor_m286683560((&L_7), (0.333333343f), (0.101960786f), (0.545098066f), /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
	}

IL_0044:
	{
		int32_t L_8 = ___warningFlag0;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_006c;
		}
	}
	{
		ImageU5BU5D_t2439009922* L_9 = __this->get_flagImages_5();
		NullCheck(L_9);
		int32_t L_10 = 1;
		Image_t2670269651 * L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Color_t2555686324  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Color__ctor_m286683560((&L_12), (0.333333343f), (0.101960786f), (0.545098066f), /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
	}

IL_006c:
	{
		int32_t L_13 = ___warningFlag0;
		if ((!(((uint32_t)L_13) == ((uint32_t)3))))
		{
			goto IL_0094;
		}
	}
	{
		ImageU5BU5D_t2439009922* L_14 = __this->get_flagImages_5();
		NullCheck(L_14);
		int32_t L_15 = 2;
		Image_t2670269651 * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Color_t2555686324  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Color__ctor_m286683560((&L_17), (0.333333343f), (0.101960786f), (0.545098066f), /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_17);
	}

IL_0094:
	{
		int32_t L_18 = ___warningFlag0;
		if ((!(((uint32_t)L_18) == ((uint32_t)5))))
		{
			goto IL_00bc;
		}
	}
	{
		ImageU5BU5D_t2439009922* L_19 = __this->get_flagImages_5();
		NullCheck(L_19);
		int32_t L_20 = 3;
		Image_t2670269651 * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		Color_t2555686324  L_22;
		memset(&L_22, 0, sizeof(L_22));
		Color__ctor_m286683560((&L_22), (0.333333343f), (0.101960786f), (0.545098066f), /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_22);
	}

IL_00bc:
	{
		V_0 = 0;
		goto IL_0103;
	}

IL_00c3:
	{
		ImageU5BU5D_t2439009922* L_23 = __this->get_flagImages_5();
		int32_t L_24 = V_0;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Image_t2670269651 * L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		ImageU5BU5D_t2439009922* L_27 = __this->get_flagImages_5();
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Image_t2670269651 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		Color_t2555686324  L_31 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_30);
		V_1 = L_31;
		float L_32 = (&V_1)->get_a_3();
		float L_33 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t2555686324  L_34;
		memset(&L_34, 0, sizeof(L_34));
		Color__ctor_m2943235014((&L_34), (0.333333343f), (0.101960786f), (0.545098066f), ((float)il2cpp_codegen_subtract((float)L_32, (float)L_33)), /*hidden argument*/NULL);
		NullCheck(L_26);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_26, L_34);
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_0103:
	{
		int32_t L_36 = V_0;
		ImageU5BU5D_t2439009922* L_37 = __this->get_flagImages_5();
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_37)->max_length)))))))
		{
			goto IL_00c3;
		}
	}
	{
		return;
	}
}
// System.Void GizmoManager::DisplayRotationGizmo(TrackingInfo)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_DisplayRotationGizmo_m2044688722 (GizmoManager_t3350963123 * __this, TrackingInfo_t3990182144  ___tracking_info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GizmoManager_DisplayRotationGizmo_m2044688722_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Quaternion_t2301928331  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		GameObject_t1113636619 * L_0 = __this->get_rotationGizmo_7();
		bool L_1 = GizmoManager_get_Show_rotation_m4091965537(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = GizmoManager_get_Show_rotation_m4091965537(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_009b;
		}
	}
	{
		Transform_t3600365921 * L_3 = __this->get_rotationIconTransform_23();
		NullCheck(L_3);
		Quaternion_t2301928331  L_4 = Transform_get_rotation_m3502953881(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_z_2();
		float L_6 = (&___tracking_info0)->get_rotation_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_7 = Mathf_LerpAngle_m295352085(NULL /*static, unused*/, L_5, L_6, (0.8f), /*hidden argument*/NULL);
		V_0 = L_7;
		Transform_t3600365921 * L_8 = __this->get_rotationIconTransform_23();
		float L_9 = V_0;
		Vector3_t3722313464  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector3__ctor_m3353183577((&L_10), (0.0f), (0.0f), ((-L_9)), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_eulerAngles_m135219616(L_8, L_10, /*hidden argument*/NULL);
		Transform_t3600365921 * L_11 = __this->get_rotationTriangleTransform_24();
		float L_12 = V_0;
		Vector3_t3722313464  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m3353183577((&L_13), (0.0f), (0.0f), ((-L_12)), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_eulerAngles_m135219616(L_11, L_13, /*hidden argument*/NULL);
		Text_t1901882714 * L_14 = __this->get_rotationValueText_25();
		float* L_15 = (&___tracking_info0)->get_address_of_rotation_2();
		String_t* L_16 = Single_ToString_m3947131094((float*)L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_16);
		goto IL_0104;
	}

IL_009b:
	{
		Transform_t3600365921 * L_17 = __this->get_rotationIconTransform_23();
		NullCheck(L_17);
		Quaternion_t2301928331  L_18 = Transform_get_rotation_m3502953881(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		float L_19 = (&V_3)->get_z_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_20 = Mathf_LerpAngle_m295352085(NULL /*static, unused*/, L_19, (0.0f), (0.8f), /*hidden argument*/NULL);
		V_2 = L_20;
		Transform_t3600365921 * L_21 = __this->get_rotationIconTransform_23();
		float L_22 = V_2;
		Vector3_t3722313464  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector3__ctor_m3353183577((&L_23), (0.0f), (0.0f), L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_eulerAngles_m135219616(L_21, L_23, /*hidden argument*/NULL);
		Transform_t3600365921 * L_24 = __this->get_rotationTriangleTransform_24();
		float L_25 = V_2;
		Vector3_t3722313464  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Vector3__ctor_m3353183577((&L_26), (0.0f), (0.0f), L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_eulerAngles_m135219616(L_24, L_26, /*hidden argument*/NULL);
		Text_t1901882714 * L_27 = __this->get_rotationValueText_25();
		NullCheck(L_27);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, _stringLiteral3452614544);
	}

IL_0104:
	{
		return;
	}
}
// System.Void GizmoManager::DisplayManoclass(GestureInfo)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_DisplayManoclass_m1731841311 (GizmoManager_t3350963123 * __this, GestureInfo_t2431102658  ___gesture_info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GizmoManager_DisplayManoclass_m1731841311_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		GameObject_t1113636619 * L_0 = __this->get_manoClassGizmo_9();
		bool L_1 = GizmoManager_get_Show_mano_class_m1694794017(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = GizmoManager_get_Show_mano_class_m1694794017(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_3 = (&___gesture_info0)->get_mano_class_0();
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_006b;
			}
			case 3:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0095;
	}

IL_0041:
	{
		Text_t1901882714 * L_5 = __this->get_manoClassText_27();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral2097867494);
		goto IL_00aa;
	}

IL_0056:
	{
		Text_t1901882714 * L_6 = __this->get_manoClassText_27();
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteral1615928643);
		goto IL_00aa;
	}

IL_006b:
	{
		Text_t1901882714 * L_7 = __this->get_manoClassText_27();
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral3856614199);
		goto IL_00aa;
	}

IL_0080:
	{
		Text_t1901882714 * L_8 = __this->get_manoClassText_27();
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, _stringLiteral2091876680);
		goto IL_00aa;
	}

IL_0095:
	{
		Text_t1901882714 * L_9 = __this->get_manoClassText_27();
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteral2053565589);
		goto IL_00aa;
	}

IL_00aa:
	{
		return;
	}
}
// System.Void GizmoManager::DisplayTriggerGesture(GestureInfo)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_DisplayTriggerGesture_m1947760828 (GizmoManager_t3350963123 * __this, GestureInfo_t2431102658  ___gesture_info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GizmoManager_DisplayTriggerGesture_m1947760828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		GameObject_t1113636619 * L_0 = __this->get_triggerGestureGizmo_10();
		bool L_1 = GizmoManager_get_Show_trigger_gesture_m1981626667(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = GizmoManager_get_Show_trigger_gesture_m1981626667(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_012b;
		}
	}
	{
		int32_t L_3 = (&___gesture_info0)->get_mano_gesture_trigger_2();
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0101;
			}
			case 1:
			{
				goto IL_0116;
			}
			case 2:
			{
				goto IL_0059;
			}
			case 3:
			{
				goto IL_00ad;
			}
			case 4:
			{
				goto IL_00ec;
			}
			case 5:
			{
				goto IL_0098;
			}
			case 6:
			{
				goto IL_006e;
			}
			case 7:
			{
				goto IL_0083;
			}
			case 8:
			{
				goto IL_00d7;
			}
			case 9:
			{
				goto IL_00c2;
			}
		}
	}
	{
		goto IL_0116;
	}

IL_0059:
	{
		Text_t1901882714 * L_5 = __this->get_triggerGestureText_29();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral4035306809);
		goto IL_012b;
	}

IL_006e:
	{
		Text_t1901882714 * L_6 = __this->get_triggerGestureText_29();
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteral2207933956);
		goto IL_012b;
	}

IL_0083:
	{
		Text_t1901882714 * L_7 = __this->get_triggerGestureText_29();
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral326140460);
		goto IL_012b;
	}

IL_0098:
	{
		Text_t1901882714 * L_8 = __this->get_triggerGestureText_29();
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, _stringLiteral103808004);
		goto IL_012b;
	}

IL_00ad:
	{
		Text_t1901882714 * L_9 = __this->get_triggerGestureText_29();
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteral2565379526);
		goto IL_012b;
	}

IL_00c2:
	{
		Text_t1901882714 * L_10 = __this->get_triggerGestureText_29();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteral2067140013);
		goto IL_012b;
	}

IL_00d7:
	{
		Text_t1901882714 * L_11 = __this->get_triggerGestureText_29();
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteral4239595059);
		goto IL_012b;
	}

IL_00ec:
	{
		Text_t1901882714 * L_12 = __this->get_triggerGestureText_29();
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, _stringLiteral145536416);
		goto IL_012b;
	}

IL_0101:
	{
		Text_t1901882714 * L_13 = __this->get_triggerGestureText_29();
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteral3005200362);
		goto IL_012b;
	}

IL_0116:
	{
		Text_t1901882714 * L_14 = __this->get_triggerGestureText_29();
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, _stringLiteral3005200362);
		goto IL_012b;
	}

IL_012b:
	{
		return;
	}
}
// System.Void GizmoManager::DisplayContinuousGesture(GestureInfo)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_DisplayContinuousGesture_m3731156484 (GizmoManager_t3350963123 * __this, GestureInfo_t2431102658  ___gesture_info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GizmoManager_DisplayContinuousGesture_m3731156484_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		GameObject_t1113636619 * L_0 = __this->get_continuousGestureGizmo_11();
		bool L_1 = GizmoManager_get_Show_continuous_gesture_m2573721889(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = GizmoManager_get_Show_continuous_gesture_m2573721889(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00f9;
		}
	}
	{
		int32_t L_3 = (&___gesture_info0)->get_mano_gesture_continuous_1();
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0051;
			}
			case 1:
			{
				goto IL_00e4;
			}
			case 2:
			{
				goto IL_0066;
			}
			case 3:
			{
				goto IL_007b;
			}
			case 4:
			{
				goto IL_0090;
			}
			case 5:
			{
				goto IL_00a5;
			}
			case 6:
			{
				goto IL_00ba;
			}
			case 7:
			{
				goto IL_00cf;
			}
		}
	}
	{
		goto IL_00e4;
	}

IL_0051:
	{
		Text_t1901882714 * L_5 = __this->get_continuousGestureText_28();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral1126222431);
		goto IL_00f9;
	}

IL_0066:
	{
		Text_t1901882714 * L_6 = __this->get_continuousGestureText_28();
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteral1411260438);
		goto IL_00f9;
	}

IL_007b:
	{
		Text_t1901882714 * L_7 = __this->get_continuousGestureText_28();
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral1191393827);
		goto IL_00f9;
	}

IL_0090:
	{
		Text_t1901882714 * L_8 = __this->get_continuousGestureText_28();
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, _stringLiteral885495112);
		goto IL_00f9;
	}

IL_00a5:
	{
		Text_t1901882714 * L_9 = __this->get_continuousGestureText_28();
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteral3347781157);
		goto IL_00f9;
	}

IL_00ba:
	{
		Text_t1901882714 * L_10 = __this->get_continuousGestureText_28();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteral1202992997);
		goto IL_00f9;
	}

IL_00cf:
	{
		Text_t1901882714 * L_11 = __this->get_continuousGestureText_28();
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteral1374822268);
		goto IL_00f9;
	}

IL_00e4:
	{
		Text_t1901882714 * L_12 = __this->get_continuousGestureText_28();
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, _stringLiteral1126222431);
		goto IL_00f9;
	}

IL_00f9:
	{
		return;
	}
}
// System.Void GizmoManager::DisplayHandState(GestureInfo)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_DisplayHandState_m3462735175 (GizmoManager_t3350963123 * __this, GestureInfo_t2431102658  ___gesture_info0, const RuntimeMethod* method)
{
	{
		ToggleUIRow_t356789805 * L_0 = ToggleUIRow_get_Instance_m3991570607(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = L_0->get_backgroundMenuIsOpen_7();
		if (L_1)
		{
			goto IL_003d;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_handStatesGizmo_8();
		bool L_3 = GizmoManager_get_Show_hand_states_m92485017(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, L_3, /*hidden argument*/NULL);
		bool L_4 = GizmoManager_get_Show_hand_states_m92485017(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_5 = (&___gesture_info0)->get_state_3();
		GizmoManager_HighlightStatesToStateDetection_m4058239398(__this, L_5, /*hidden argument*/NULL);
	}

IL_0038:
	{
		goto IL_0049;
	}

IL_003d:
	{
		GameObject_t1113636619 * L_6 = __this->get_handStatesGizmo_8();
		NullCheck(L_6);
		GameObject_SetActive_m796801857(L_6, (bool)0, /*hidden argument*/NULL);
	}

IL_0049:
	{
		return;
	}
}
// System.Void GizmoManager::DisplayDepth(TrackingInfo)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_DisplayDepth_m686403081 (GizmoManager_t3350963123 * __this, TrackingInfo_t3990182144  ___tracking_info0, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_depthGizmo_12();
		bool L_1 = GizmoManager_get_Show_depth_m1953621816(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = GizmoManager_get_Show_depth_m1953621816(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		Text_t1901882714 * L_3 = __this->get_depthValueText_26();
		float* L_4 = (&___tracking_info0)->get_address_of_relative_depth_3();
		String_t* L_5 = Single_ToString_m3947131094((float*)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		Image_t2670269651 * L_6 = __this->get_depthValueImage_30();
		float L_7 = (&___tracking_info0)->get_relative_depth_3();
		NullCheck(L_6);
		Image_set_fillAmount_m3737925590(L_6, L_7, /*hidden argument*/NULL);
	}

IL_004b:
	{
		return;
	}
}
// System.Void GizmoManager::HighlightStatesToStateDetection(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_HighlightStatesToStateDetection_m4058239398 (GizmoManager_t3350963123 * __this, int32_t ___stateValue0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_003c;
	}

IL_0007:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = ___stateValue0;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0026;
		}
	}
	{
		ImageU5BU5D_t2439009922* L_2 = __this->get_stateImages_6();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Image_t2670269651 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Color_t2555686324  L_6 = __this->get_disabledStateColor_14();
		NullCheck(L_5);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		goto IL_0038;
	}

IL_0026:
	{
		ImageU5BU5D_t2439009922* L_7 = __this->get_stateImages_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Image_t2670269651 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Color_t2555686324  L_11 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
	}

IL_0038:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003c:
	{
		int32_t L_13 = V_0;
		ImageU5BU5D_t2439009922* L_14 = __this->get_stateImages_6();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GizmoManager::SetRotationGizmoParts()
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_SetRotationGizmoParts_m3918050831 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GizmoManager_SetRotationGizmoParts_m3918050831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_rotationGizmo_7();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = Transform_Find_m1729760951(L_1, _stringLiteral3801568913, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Component_GetComponent_TisTransform_t3600365921_m1200784320(L_2, /*hidden argument*/Component_GetComponent_TisTransform_t3600365921_m1200784320_RuntimeMethod_var);
		__this->set_rotationIconTransform_23(L_3);
		Transform_t3600365921 * L_4 = __this->get_rotationIconTransform_23();
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = Transform_Find_m1729760951(L_4, _stringLiteral3715273391, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = Component_GetComponent_TisTransform_t3600365921_m1200784320(L_5, /*hidden argument*/Component_GetComponent_TisTransform_t3600365921_m1200784320_RuntimeMethod_var);
		__this->set_rotationTriangleTransform_24(L_6);
		GameObject_t1113636619 * L_7 = __this->get_rotationGizmo_7();
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = Transform_Find_m1729760951(L_8, _stringLiteral3493619321, /*hidden argument*/NULL);
		NullCheck(L_9);
		Text_t1901882714 * L_10 = Component_GetComponent_TisText_t1901882714_m4196288697(L_9, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		__this->set_rotationValueText_25(L_10);
		return;
	}
}
// System.Void GizmoManager::SetDepthGizmoParts()
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_SetDepthGizmoParts_m2950274697 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GizmoManager_SetDepthGizmoParts_m2950274697_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_depthGizmo_12();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = Transform_Find_m1729760951(L_1, _stringLiteral3208958723, /*hidden argument*/NULL);
		NullCheck(L_2);
		Image_t2670269651 * L_3 = Component_GetComponent_TisImage_t2670269651_m980647750(L_2, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		__this->set_depthValueImage_30(L_3);
		GameObject_t1113636619 * L_4 = __this->get_depthGizmo_12();
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = Transform_Find_m1729760951(L_5, _stringLiteral3493619321, /*hidden argument*/NULL);
		NullCheck(L_6);
		Text_t1901882714 * L_7 = Component_GetComponent_TisText_t1901882714_m4196288697(L_6, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		__this->set_depthValueText_26(L_7);
		return;
	}
}
// System.Void GizmoManager::SetGestureDescriptionParts()
extern "C" IL2CPP_METHOD_ATTR void GizmoManager_SetGestureDescriptionParts_m1448043559 (GizmoManager_t3350963123 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GizmoManager_SetGestureDescriptionParts_m1448043559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_manoClassGizmo_9();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = Transform_Find_m1729760951(L_1, _stringLiteral2833616318, /*hidden argument*/NULL);
		NullCheck(L_2);
		Text_t1901882714 * L_3 = Component_GetComponent_TisText_t1901882714_m4196288697(L_2, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		__this->set_manoClassText_27(L_3);
		GameObject_t1113636619 * L_4 = __this->get_continuousGestureGizmo_11();
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = Transform_Find_m1729760951(L_5, _stringLiteral2833616318, /*hidden argument*/NULL);
		NullCheck(L_6);
		Text_t1901882714 * L_7 = Component_GetComponent_TisText_t1901882714_m4196288697(L_6, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		__this->set_continuousGestureText_28(L_7);
		GameObject_t1113636619 * L_8 = __this->get_triggerGestureGizmo_10();
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = Transform_Find_m1729760951(L_9, _stringLiteral2833616318, /*hidden argument*/NULL);
		NullCheck(L_10);
		Text_t1901882714 * L_11 = Component_GetComponent_TisText_t1901882714_m4196288697(L_10, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		__this->set_triggerGestureText_29(L_11);
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
// System.Void GrabPass::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GrabPass__ctor_m1888761985 (GrabPass_t3251792315 * __this, const RuntimeMethod* method)
{
	{
		__this->set_Distortion_4((1.25f));
		Color_t2555686324  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Color__ctor_m2943235014((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_color_5(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GrabPass::Awake()
extern "C" IL2CPP_METHOD_ATTR void GrabPass_Awake_m1270351104 (GrabPass_t3251792315 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GrabPass_Awake_m1270351104_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		NullCheck(L_0);
		Material_t340375123 * L_1 = VirtFuncInvoker0< Material_t340375123 * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		Image_t2670269651 * L_3 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		Shader_t4151988712 * L_4 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral3406298716, /*hidden argument*/NULL);
		Material_t340375123 * L_5 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m1662457592(L_5, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< Material_t340375123 * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_3, L_5);
	}

IL_0030:
	{
		return;
	}
}
// System.Void GrabPass::Update()
extern "C" IL2CPP_METHOD_ATTR void GrabPass_Update_m3930286213 (GrabPass_t3251792315 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GrabPass_Update_m3930286213_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		NullCheck(L_0);
		Material_t340375123 * L_1 = VirtFuncInvoker0< Material_t340375123 * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_0);
		float L_2 = __this->get_Distortion_4();
		NullCheck(L_1);
		Material_SetFloat_m3226510453(L_1, _stringLiteral2573074067, L_2, /*hidden argument*/NULL);
		Image_t2670269651 * L_3 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		NullCheck(L_3);
		Material_t340375123 * L_4 = VirtFuncInvoker0< Material_t340375123 * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_3);
		Color_t2555686324  L_5 = __this->get_color_5();
		NullCheck(L_4);
		Material_SetColor_m2020215303(L_4, _stringLiteral3957048425, L_5, /*hidden argument*/NULL);
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
// System.Void Grayscale::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Grayscale__ctor_m2014753106 (Grayscale_t659308017 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Grayscale::Awake()
extern "C" IL2CPP_METHOD_ATTR void Grayscale_Awake_m464093682 (Grayscale_t659308017 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grayscale_Awake_m464093682_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Shader_t4151988712 * L_0 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral1505233648, /*hidden argument*/NULL);
		Material_t340375123 * L_1 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m1662457592(L_1, L_0, /*hidden argument*/NULL);
		__this->set_material_4(L_1);
		return;
	}
}
// System.Void Grayscale::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void Grayscale_OnRenderImage_m3063846902 (Grayscale_t659308017 * __this, RenderTexture_t2108887433 * ___source0, RenderTexture_t2108887433 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grayscale_OnRenderImage_m3063846902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RenderTexture_t2108887433 * L_0 = ___source0;
		RenderTexture_t2108887433 * L_1 = ___destination1;
		Material_t340375123 * L_2 = __this->get_material_4();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_Blit_m890955694(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HandDetectionModeButtonBehavior::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HandDetectionModeButtonBehavior__ctor_m2865846287 (HandDetectionModeButtonBehavior_t259638122 * __this, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_transparentWhite_4(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HandDetectionModeButtonBehavior::Start()
extern "C" IL2CPP_METHOD_ATTR void HandDetectionModeButtonBehavior_Start_m895650069 (HandDetectionModeButtonBehavior_t259638122 * __this, const RuntimeMethod* method)
{
	{
		Color_t2555686324 * L_0 = __this->get_address_of_transparentWhite_4();
		L_0->set_a_3((0.2f));
		return;
	}
}
// System.Void HandDetectionModeButtonBehavior::SelectHandDetectionMode()
extern "C" IL2CPP_METHOD_ATTR void HandDetectionModeButtonBehavior_SelectHandDetectionMode_m2274407642 (HandDetectionModeButtonBehavior_t259638122 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandDetectionModeButtonBehavior_SelectHandDetectionMode_m2274407642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ManomotionManager_t565502280 * L_0 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = __this->get__handModeID_6();
		NullCheck(L_0);
		ManomotionManager_SetSelectedHand_m4148517899(L_0, L_1, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0046;
	}

IL_0017:
	{
		GameObjectU5BU5D_t3328599146* L_2 = __this->get_handButtons_5();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t1113636619 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Image_t2670269651 * L_6 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_5, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Color_t2555686324  L_7 = __this->get_transparentWhite_4();
		NullCheck(L_6);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		GameObjectU5BU5D_t3328599146* L_8 = __this->get_handButtons_5();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_t1113636619 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		HandDetectionModeButtonBehavior_t259638122 * L_12 = GameObject_GetComponent_TisHandDetectionModeButtonBehavior_t259638122_m1201928477(L_11, /*hidden argument*/GameObject_GetComponent_TisHandDetectionModeButtonBehavior_t259638122_m1201928477_RuntimeMethod_var);
		NullCheck(L_12);
		L_12->set_isSelected_7((bool)0);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0046:
	{
		int32_t L_14 = V_0;
		GameObjectU5BU5D_t3328599146* L_15 = __this->get_handButtons_5();
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		Image_t2670269651 * L_16 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		Color_t2555686324  L_17 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_17);
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


// Conversion methods for marshalling of: HandInfo
extern "C" void HandInfo_t3661823187_marshal_pinvoke(const HandInfo_t3661823187& unmarshaled, HandInfo_t3661823187_marshaled_pinvoke& marshaled)
{
	TrackingInfo_t3990182144_marshal_pinvoke(unmarshaled.get_tracking_info_0(), marshaled.___tracking_info_0);
	marshaled.___gesture_info_1 = unmarshaled.get_gesture_info_1();
	marshaled.___warning_2 = unmarshaled.get_warning_2();
	marshaled.___hand_3 = unmarshaled.get_hand_3();
}
extern "C" void HandInfo_t3661823187_marshal_pinvoke_back(const HandInfo_t3661823187_marshaled_pinvoke& marshaled, HandInfo_t3661823187& unmarshaled)
{
	TrackingInfo_t3990182144  unmarshaled_tracking_info_temp_0;
	memset(&unmarshaled_tracking_info_temp_0, 0, sizeof(unmarshaled_tracking_info_temp_0));
	TrackingInfo_t3990182144_marshal_pinvoke_back(marshaled.___tracking_info_0, unmarshaled_tracking_info_temp_0);
	unmarshaled.set_tracking_info_0(unmarshaled_tracking_info_temp_0);
	GestureInfo_t2431102658  unmarshaled_gesture_info_temp_1;
	memset(&unmarshaled_gesture_info_temp_1, 0, sizeof(unmarshaled_gesture_info_temp_1));
	unmarshaled_gesture_info_temp_1 = marshaled.___gesture_info_1;
	unmarshaled.set_gesture_info_1(unmarshaled_gesture_info_temp_1);
	int32_t unmarshaled_warning_temp_2 = 0;
	unmarshaled_warning_temp_2 = marshaled.___warning_2;
	unmarshaled.set_warning_2(unmarshaled_warning_temp_2);
	int32_t unmarshaled_hand_temp_3 = 0;
	unmarshaled_hand_temp_3 = marshaled.___hand_3;
	unmarshaled.set_hand_3(unmarshaled_hand_temp_3);
}
// Conversion method for clean up from marshalling of: HandInfo
extern "C" void HandInfo_t3661823187_marshal_pinvoke_cleanup(HandInfo_t3661823187_marshaled_pinvoke& marshaled)
{
	TrackingInfo_t3990182144_marshal_pinvoke_cleanup(marshaled.___tracking_info_0);
}


// Conversion methods for marshalling of: HandInfo
extern "C" void HandInfo_t3661823187_marshal_com(const HandInfo_t3661823187& unmarshaled, HandInfo_t3661823187_marshaled_com& marshaled)
{
	TrackingInfo_t3990182144_marshal_com(unmarshaled.get_tracking_info_0(), marshaled.___tracking_info_0);
	marshaled.___gesture_info_1 = unmarshaled.get_gesture_info_1();
	marshaled.___warning_2 = unmarshaled.get_warning_2();
	marshaled.___hand_3 = unmarshaled.get_hand_3();
}
extern "C" void HandInfo_t3661823187_marshal_com_back(const HandInfo_t3661823187_marshaled_com& marshaled, HandInfo_t3661823187& unmarshaled)
{
	TrackingInfo_t3990182144  unmarshaled_tracking_info_temp_0;
	memset(&unmarshaled_tracking_info_temp_0, 0, sizeof(unmarshaled_tracking_info_temp_0));
	TrackingInfo_t3990182144_marshal_com_back(marshaled.___tracking_info_0, unmarshaled_tracking_info_temp_0);
	unmarshaled.set_tracking_info_0(unmarshaled_tracking_info_temp_0);
	GestureInfo_t2431102658  unmarshaled_gesture_info_temp_1;
	memset(&unmarshaled_gesture_info_temp_1, 0, sizeof(unmarshaled_gesture_info_temp_1));
	unmarshaled_gesture_info_temp_1 = marshaled.___gesture_info_1;
	unmarshaled.set_gesture_info_1(unmarshaled_gesture_info_temp_1);
	int32_t unmarshaled_warning_temp_2 = 0;
	unmarshaled_warning_temp_2 = marshaled.___warning_2;
	unmarshaled.set_warning_2(unmarshaled_warning_temp_2);
	int32_t unmarshaled_hand_temp_3 = 0;
	unmarshaled_hand_temp_3 = marshaled.___hand_3;
	unmarshaled.set_hand_3(unmarshaled_hand_temp_3);
}
// Conversion method for clean up from marshalling of: HandInfo
extern "C" void HandInfo_t3661823187_marshal_com_cleanup(HandInfo_t3661823187_marshaled_com& marshaled)
{
	TrackingInfo_t3990182144_marshal_com_cleanup(marshaled.___tracking_info_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: HandInfoUnity
extern "C" void HandInfoUnity_t1978403937_marshal_pinvoke(const HandInfoUnity_t1978403937& unmarshaled, HandInfoUnity_t1978403937_marshaled_pinvoke& marshaled)
{
	Exception_t* ___cut_rgb_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'cut_rgb' of type 'HandInfoUnity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___cut_rgb_1Exception, NULL, NULL);
}
extern "C" void HandInfoUnity_t1978403937_marshal_pinvoke_back(const HandInfoUnity_t1978403937_marshaled_pinvoke& marshaled, HandInfoUnity_t1978403937& unmarshaled)
{
	Exception_t* ___cut_rgb_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'cut_rgb' of type 'HandInfoUnity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___cut_rgb_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: HandInfoUnity
extern "C" void HandInfoUnity_t1978403937_marshal_pinvoke_cleanup(HandInfoUnity_t1978403937_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: HandInfoUnity
extern "C" void HandInfoUnity_t1978403937_marshal_com(const HandInfoUnity_t1978403937& unmarshaled, HandInfoUnity_t1978403937_marshaled_com& marshaled)
{
	Exception_t* ___cut_rgb_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'cut_rgb' of type 'HandInfoUnity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___cut_rgb_1Exception, NULL, NULL);
}
extern "C" void HandInfoUnity_t1978403937_marshal_com_back(const HandInfoUnity_t1978403937_marshaled_com& marshaled, HandInfoUnity_t1978403937& unmarshaled)
{
	Exception_t* ___cut_rgb_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'cut_rgb' of type 'HandInfoUnity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___cut_rgb_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: HandInfoUnity
extern "C" void HandInfoUnity_t1978403937_marshal_com_cleanup(HandInfoUnity_t1978403937_marshaled_com& marshaled)
{
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InstructionsManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager__ctor_m3269189218 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method)
{
	{
		Color32_t2600501292  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Color32__ctor_m4150508762((&L_0), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)50), /*hidden argument*/NULL);
		__this->set_transparentWhite_9(L_0);
		__this->set_showBackgroundLayer_21((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// InstructionsManager InstructionsManager::get_Instance()
extern "C" IL2CPP_METHOD_ATTR InstructionsManager_t4057271102 * InstructionsManager_get_Instance_m729986502 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstructionsManager_get_Instance_m729986502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InstructionsManager_t4057271102 * L_0 = ((InstructionsManager_t4057271102_StaticFields*)il2cpp_codegen_static_fields_for(InstructionsManager_t4057271102_il2cpp_TypeInfo_var))->get__instance_4();
		return L_0;
	}
}
// System.Void InstructionsManager::set_Instance(InstructionsManager)
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_set_Instance_m1537497967 (RuntimeObject * __this /* static, unused */, InstructionsManager_t4057271102 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstructionsManager_set_Instance_m1537497967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InstructionsManager_t4057271102 * L_0 = ___value0;
		((InstructionsManager_t4057271102_StaticFields*)il2cpp_codegen_static_fields_for(InstructionsManager_t4057271102_il2cpp_TypeInfo_var))->set__instance_4(L_0);
		return;
	}
}
// System.Void InstructionsManager::Awake()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_Awake_m3648086290 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstructionsManager_Awake_m3648086290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InstructionsManager_t4057271102 * L_0 = ((InstructionsManager_t4057271102_StaticFields*)il2cpp_codegen_static_fields_for(InstructionsManager_t4057271102_il2cpp_TypeInfo_var))->get__instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		((InstructionsManager_t4057271102_StaticFields*)il2cpp_codegen_static_fields_for(InstructionsManager_t4057271102_il2cpp_TypeInfo_var))->set__instance_4(__this);
		goto IL_0026;
	}

IL_001b:
	{
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void InstructionsManager::IncreaseSlide()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_IncreaseSlide_m382126618 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_currentInstractionState_12();
		GameObjectU5BU5D_t3328599146* L_1 = __this->get_slides_6();
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), (int32_t)1)))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_2 = __this->get_currentInstractionState_12();
		__this->set_currentInstractionState_12(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = __this->get_currentInstractionState_12();
		InstructionsManager_ShowSlide_m4226779309(__this, L_3, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void InstructionsManager::DecreaseSlide()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_DecreaseSlide_m522884142 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_currentInstractionState_12();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_1 = __this->get_currentInstractionState_12();
		__this->set_currentInstractionState_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		int32_t L_2 = __this->get_currentInstractionState_12();
		InstructionsManager_ShowSlide_m4226779309(__this, L_2, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void InstructionsManager::ShowSlide(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_ShowSlide_m4226779309 (InstructionsManager_t4057271102 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0007:
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_slides_6();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t1113636619 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)0, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0019:
	{
		int32_t L_5 = V_0;
		GameObjectU5BU5D_t3328599146* L_6 = __this->get_slides_6();
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		GameObjectU5BU5D_t3328599146* L_7 = __this->get_slides_6();
		int32_t L_8 = ___value0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_t1113636619 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		GameObject_SetActive_m796801857(L_10, (bool)1, /*hidden argument*/NULL);
		InstructionsManager_UpdateVisualComponents_m4250240927(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InstructionsManager::StartInstructions()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_StartInstructions_m4068909607 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstructionsManager_StartInstructions_m4068909607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InstructionsManager_GetPreviousManoVisualizationValues_m3050206586(__this, /*hidden argument*/NULL);
		int32_t L_0 = PlayerPrefs_GetInt_m3797620966(NULL /*static, unused*/, _stringLiteral2305519984, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1661725156, /*hidden argument*/NULL);
		InstructionsManager_DisplayVisualComponents_m420594408(__this, (bool)1, /*hidden argument*/NULL);
		InstructionsManager_HideManomotionComponents_m2640463605(__this, /*hidden argument*/NULL);
		__this->set_currentInstractionState_12(0);
		int32_t L_1 = __this->get_currentInstractionState_12();
		InstructionsManager_ShowSlide_m4226779309(__this, L_1, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m2842000469(NULL /*static, unused*/, _stringLiteral2305519984, 1, /*hidden argument*/NULL);
		InstructionsManager_GetPreviousManoVisualizationValues_m3050206586(__this, /*hidden argument*/NULL);
		InstructionsManager_TurnOffManovizualizationValues_m255224836(__this, /*hidden argument*/NULL);
		goto IL_0071;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1661725157, /*hidden argument*/NULL);
		InstructionsManager_StopShowingInstructions_m2311691955(__this, /*hidden argument*/NULL);
		InstructionsManager_ShowManomotionComponents_m839662760(__this, /*hidden argument*/NULL);
	}

IL_0071:
	{
		return;
	}
}
// System.Void InstructionsManager::ForceInstructions()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_ForceInstructions_m1967337545 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstructionsManager_ForceInstructions_m1967337545_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InstructionsManager_DisplayVisualComponents_m420594408(__this, (bool)1, /*hidden argument*/NULL);
		InstructionsManager_HideManomotionComponents_m2640463605(__this, /*hidden argument*/NULL);
		__this->set_currentInstractionState_12(0);
		int32_t L_0 = __this->get_currentInstractionState_12();
		InstructionsManager_ShowSlide_m4226779309(__this, L_0, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m2842000469(NULL /*static, unused*/, _stringLiteral2305519984, 1, /*hidden argument*/NULL);
		InstructionsManager_GetPreviousManoVisualizationValues_m3050206586(__this, /*hidden argument*/NULL);
		InstructionsManager_TurnOffManovizualizationValues_m255224836(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InstructionsManager::UpdateVisualComponents()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_UpdateVisualComponents_m4250240927 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstructionsManager_UpdateVisualComponents_m4250240927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_currentInstractionState_12();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_006e;
			}
		}
	}
	{
		goto IL_0096;
	}

IL_001e:
	{
		Text_t1901882714 * L_2 = __this->get_currentStateText_7();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral4079432750);
		GameObject_t1113636619 * L_3 = __this->get_startButton_8();
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)0, /*hidden argument*/NULL);
		InstructionsManager_SetCircleVisibility_m365500780(__this, (bool)1, /*hidden argument*/NULL);
		goto IL_009b;
	}

IL_0046:
	{
		Text_t1901882714 * L_4 = __this->get_currentStateText_7();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral2290260569);
		GameObject_t1113636619 * L_5 = __this->get_startButton_8();
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)0, /*hidden argument*/NULL);
		InstructionsManager_SetCircleVisibility_m365500780(__this, (bool)1, /*hidden argument*/NULL);
		goto IL_009b;
	}

IL_006e:
	{
		Text_t1901882714 * L_6 = __this->get_currentStateText_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		GameObject_t1113636619 * L_8 = __this->get_startButton_8();
		NullCheck(L_8);
		GameObject_SetActive_m796801857(L_8, (bool)1, /*hidden argument*/NULL);
		InstructionsManager_SetCircleVisibility_m365500780(__this, (bool)0, /*hidden argument*/NULL);
		goto IL_009b;
	}

IL_0096:
	{
		goto IL_009b;
	}

IL_009b:
	{
		int32_t L_9 = __this->get_currentInstractionState_12();
		InstructionsManager_HighlightCircles_m563790765(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InstructionsManager::HighlightCircles(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_HighlightCircles_m563790765 (InstructionsManager_t4057271102 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		goto IL_0041;
	}

IL_0007:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0025;
		}
	}
	{
		ImageU5BU5D_t2439009922* L_2 = __this->get_circles_10();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Image_t2670269651 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Color_t2555686324  L_6 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		goto IL_003d;
	}

IL_0025:
	{
		ImageU5BU5D_t2439009922* L_7 = __this->get_circles_10();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Image_t2670269651 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Color32_t2600501292  L_11 = __this->get_transparentWhite_9();
		Color_t2555686324  L_12 = Color32_op_Implicit_m213813866(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_12);
	}

IL_003d:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_14 = V_0;
		ImageU5BU5D_t2439009922* L_15 = __this->get_circles_10();
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InstructionsManager::SetCircleVisibility(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_SetCircleVisibility_m365500780 (InstructionsManager_t4057271102 * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0007:
	{
		ImageU5BU5D_t2439009922* L_0 = __this->get_circles_10();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Image_t2670269651 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		bool L_5 = ___value0;
		NullCheck(L_4);
		GameObject_SetActive_m796801857(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_7 = V_0;
		ImageU5BU5D_t2439009922* L_8 = __this->get_circles_10();
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InstructionsManager::ShowManomotionComponents()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_ShowManomotionComponents_m839662760 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0007:
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_componentsToStart_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t1113636619 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)1, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0019:
	{
		int32_t L_5 = V_0;
		GameObjectU5BU5D_t3328599146* L_6 = __this->get_componentsToStart_5();
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InstructionsManager::HideManomotionComponents()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_HideManomotionComponents_m2640463605 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0007:
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_componentsToStart_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t1113636619 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)0, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0019:
	{
		int32_t L_5 = V_0;
		GameObjectU5BU5D_t3328599146* L_6 = __this->get_componentsToStart_5();
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InstructionsManager::StopShowingInstructions()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_StopShowingInstructions_m2311691955 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		InstructionsManager_ShowManomotionComponents_m839662760(__this, /*hidden argument*/NULL);
		InstructionsManager_DisplayVisualComponents_m420594408(__this, (bool)0, /*hidden argument*/NULL);
		InstructionsManager_ReInstateVizualizationValues_m2688736671(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InstructionsManager::DisplayVisualComponents(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_DisplayVisualComponents_m420594408 (InstructionsManager_t4057271102 * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0007:
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_visualComponents_11();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t1113636619 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4 = ___value0;
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0019:
	{
		int32_t L_6 = V_0;
		GameObjectU5BU5D_t3328599146* L_7 = __this->get_visualComponents_11();
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InstructionsManager::GetPreviousManoVisualizationValues()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_GetPreviousManoVisualizationValues_m3050206586 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method)
{
	{
		ManoVisualization_t1421820612 * L_0 = __this->get_manoVisualization_13();
		NullCheck(L_0);
		bool L_1 = ManoVisualization_get_Show_bounding_box_m2573940089(L_0, /*hidden argument*/NULL);
		__this->set_showBoundingBox_14(L_1);
		ManoVisualization_t1421820612 * L_2 = __this->get_manoVisualization_13();
		NullCheck(L_2);
		bool L_3 = ManoVisualization_get_Show_contour_m3318944812(L_2, /*hidden argument*/NULL);
		__this->set_showContour_15(L_3);
		ManoVisualization_t1421820612 * L_4 = __this->get_manoVisualization_13();
		NullCheck(L_4);
		bool L_5 = ManoVisualization_get_Show_inner_m260116457(L_4, /*hidden argument*/NULL);
		__this->set_showInner_16(L_5);
		ManoVisualization_t1421820612 * L_6 = __this->get_manoVisualization_13();
		NullCheck(L_6);
		bool L_7 = ManoVisualization_get_Show_fingertips_m3026400719(L_6, /*hidden argument*/NULL);
		__this->set_showFingerTips_17(L_7);
		ManoVisualization_t1421820612 * L_8 = __this->get_manoVisualization_13();
		NullCheck(L_8);
		bool L_9 = ManoVisualization_get_Show_fingertip_labels_m2652058975(L_8, /*hidden argument*/NULL);
		__this->set_showFingerTipLabels_18(L_9);
		ManoVisualization_t1421820612 * L_10 = __this->get_manoVisualization_13();
		NullCheck(L_10);
		bool L_11 = ManoVisualization_get_Show_palm_center_m94080673(L_10, /*hidden argument*/NULL);
		__this->set_showPalmCenter_19(L_11);
		ManoVisualization_t1421820612 * L_12 = __this->get_manoVisualization_13();
		NullCheck(L_12);
		bool L_13 = ManoVisualization_get_Show_hand_layer_m2063885413(L_12, /*hidden argument*/NULL);
		__this->set_showHandLayer_20(L_13);
		ManoVisualization_t1421820612 * L_14 = __this->get_manoVisualization_13();
		NullCheck(L_14);
		bool L_15 = ManoVisualization_get_Show_background_layer_m1244111248(L_14, /*hidden argument*/NULL);
		__this->set_showBackgroundLayer_21(L_15);
		return;
	}
}
// System.Void InstructionsManager::TurnOffManovizualizationValues()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_TurnOffManovizualizationValues_m255224836 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method)
{
	{
		ManoVisualization_t1421820612 * L_0 = __this->get_manoVisualization_13();
		NullCheck(L_0);
		ManoVisualization_set_Show_bounding_box_m168115305(L_0, (bool)0, /*hidden argument*/NULL);
		ManoVisualization_t1421820612 * L_1 = __this->get_manoVisualization_13();
		NullCheck(L_1);
		ManoVisualization_set_Show_contour_m1529468790(L_1, (bool)0, /*hidden argument*/NULL);
		ManoVisualization_t1421820612 * L_2 = __this->get_manoVisualization_13();
		NullCheck(L_2);
		ManoVisualization_set_Show_inner_m2901024986(L_2, (bool)0, /*hidden argument*/NULL);
		ManoVisualization_t1421820612 * L_3 = __this->get_manoVisualization_13();
		NullCheck(L_3);
		ManoVisualization_set_Show_fingertips_m1674203565(L_3, (bool)0, /*hidden argument*/NULL);
		ManoVisualization_t1421820612 * L_4 = __this->get_manoVisualization_13();
		NullCheck(L_4);
		ManoVisualization_set_Show_fingertip_labels_m186525592(L_4, (bool)0, /*hidden argument*/NULL);
		ManoVisualization_t1421820612 * L_5 = __this->get_manoVisualization_13();
		NullCheck(L_5);
		ManoVisualization_set_Show_palm_center_m1713916509(L_5, (bool)0, /*hidden argument*/NULL);
		ManoVisualization_t1421820612 * L_6 = __this->get_manoVisualization_13();
		NullCheck(L_6);
		ManoVisualization_set_Show_hand_layer_m2731680885(L_6, (bool)0, /*hidden argument*/NULL);
		ManoVisualization_t1421820612 * L_7 = __this->get_manoVisualization_13();
		NullCheck(L_7);
		ManoVisualization_set_Show_bounding_box_m168115305(L_7, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InstructionsManager::ReInstateVizualizationValues()
extern "C" IL2CPP_METHOD_ATTR void InstructionsManager_ReInstateVizualizationValues_m2688736671 (InstructionsManager_t4057271102 * __this, const RuntimeMethod* method)
{
	{
		ManoVisualization_t1421820612 * L_0 = __this->get_manoVisualization_13();
		bool L_1 = __this->get_showBoundingBox_14();
		NullCheck(L_0);
		ManoVisualization_set_Show_bounding_box_m168115305(L_0, L_1, /*hidden argument*/NULL);
		ManoVisualization_t1421820612 * L_2 = __this->get_manoVisualization_13();
		bool L_3 = __this->get_showContour_15();
		NullCheck(L_2);
		ManoVisualization_set_Show_contour_m1529468790(L_2, L_3, /*hidden argument*/NULL);
		ManoVisualization_t1421820612 * L_4 = __this->get_manoVisualization_13();
		bool L_5 = __this->get_showInner_16();
		NullCheck(L_4);
		ManoVisualization_set_Show_inner_m2901024986(L_4, L_5, /*hidden argument*/NULL);
		ManoVisualization_t1421820612 * L_6 = __this->get_manoVisualization_13();
		bool L_7 = __this->get_showInner_16();
		NullCheck(L_6);
		ManoVisualization_set_Show_fingertips_m1674203565(L_6, L_7, /*hidden argument*/NULL);
		ManoVisualization_t1421820612 * L_8 = __this->get_manoVisualization_13();
		bool L_9 = __this->get_showFingerTipLabels_18();
		NullCheck(L_8);
		ManoVisualization_set_Show_fingertip_labels_m186525592(L_8, L_9, /*hidden argument*/NULL);
		ManoVisualization_t1421820612 * L_10 = __this->get_manoVisualization_13();
		bool L_11 = __this->get_showPalmCenter_19();
		NullCheck(L_10);
		ManoVisualization_set_Show_palm_center_m1713916509(L_10, L_11, /*hidden argument*/NULL);
		ManoVisualization_t1421820612 * L_12 = __this->get_manoVisualization_13();
		bool L_13 = __this->get_showHandLayer_20();
		NullCheck(L_12);
		ManoVisualization_set_Show_hand_layer_m2731680885(L_12, L_13, /*hidden argument*/NULL);
		ManoVisualization_t1421820612 * L_14 = __this->get_manoVisualization_13();
		bool L_15 = __this->get_showBackgroundLayer_21();
		NullCheck(L_14);
		ManoVisualization_set_Show_background_layer_m3585397262(L_14, L_15, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InteractionArea::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InteractionArea__ctor_m4103578079 (InteractionArea_t1281659222 * __this, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_MouseOverColor_4(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InteractionArea::Start()
extern "C" IL2CPP_METHOD_ATTR void InteractionArea_Start_m1456313097 (InteractionArea_t1281659222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionArea_Start_m1456313097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		__this->set_interactionAreaImage_6(L_0);
		Image_t2670269651 * L_1 = __this->get_interactionAreaImage_6();
		Color_t2555686324  L_2 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		return;
	}
}
// System.Void InteractionArea::EnterMouse()
extern "C" IL2CPP_METHOD_ATTR void InteractionArea_EnterMouse_m4106290350 (InteractionArea_t1281659222 * __this, const RuntimeMethod* method)
{
	{
		Image_t2670269651 * L_0 = __this->get_interactionAreaImage_6();
		Color_t2555686324  L_1 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		return;
	}
}
// System.Void InteractionArea::ExitMouse()
extern "C" IL2CPP_METHOD_ATTR void InteractionArea_ExitMouse_m2604376700 (InteractionArea_t1281659222 * __this, const RuntimeMethod* method)
{
	{
		Image_t2670269651 * L_0 = __this->get_interactionAreaImage_6();
		Color_t2555686324  L_1 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
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
// System.Void ManoCalibration::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ManoCalibration__ctor_m3977936251 (ManoCalibration_t699436447 * __this, const RuntimeMethod* method)
{
	{
		__this->set_calibration_delay_7((0.2f));
		__this->set_needed_fingers_8(((int32_t)1000));
		__this->set_canCalibrate_11((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// ManoCalibration ManoCalibration::get_Instance()
extern "C" IL2CPP_METHOD_ATTR ManoCalibration_t699436447 * ManoCalibration_get_Instance_m3658540507 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoCalibration_get_Instance_m3658540507_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ManoCalibration_t699436447 * L_0 = ((ManoCalibration_t699436447_StaticFields*)il2cpp_codegen_static_fields_for(ManoCalibration_t699436447_il2cpp_TypeInfo_var))->get__instance_4();
		return L_0;
	}
}
// System.Void ManoCalibration::set_Instance(ManoCalibration)
extern "C" IL2CPP_METHOD_ATTR void ManoCalibration_set_Instance_m2832289072 (RuntimeObject * __this /* static, unused */, ManoCalibration_t699436447 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoCalibration_set_Instance_m2832289072_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ManoCalibration_t699436447 * L_0 = ___value0;
		((ManoCalibration_t699436447_StaticFields*)il2cpp_codegen_static_fields_for(ManoCalibration_t699436447_il2cpp_TypeInfo_var))->set__instance_4(L_0);
		return;
	}
}
// System.Void ManoCalibration::Start()
extern "C" IL2CPP_METHOD_ATTR void ManoCalibration_Start_m2200442273 (ManoCalibration_t699436447 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoCalibration_Start_m2200442273_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ManoCalibration_t699436447 * L_0 = ((ManoCalibration_t699436447_StaticFields*)il2cpp_codegen_static_fields_for(ManoCalibration_t699436447_il2cpp_TypeInfo_var))->get__instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		((ManoCalibration_t699436447_StaticFields*)il2cpp_codegen_static_fields_for(ManoCalibration_t699436447_il2cpp_TypeInfo_var))->set__instance_4(__this);
		goto IL_0030;
	}

IL_001b:
	{
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3605615956, /*hidden argument*/NULL);
	}

IL_0030:
	{
		int32_t L_3 = __this->get_calibration_trigger_6();
		__this->set_needed_fingers_8(L_3);
		ManoCalibration_LoadCalibration_m3892309791(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManoCalibration::Update()
extern "C" IL2CPP_METHOD_ATTR void ManoCalibration_Update_m1597191058 (ManoCalibration_t699436447 * __this, const RuntimeMethod* method)
{
	{
		ManoCalibration_DetectCalibration_m3995771785(__this, /*hidden argument*/NULL);
		ManoCalibration_SaveCalibration_m2986985369(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManoCalibration::SaveCalibration()
extern "C" IL2CPP_METHOD_ATTR void ManoCalibration_SaveCalibration_m2986985369 (ManoCalibration_t699436447 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoCalibration_SaveCalibration_m2986985369_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Session_t4211189121  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Session_t4211189121  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		ManomotionManager_t565502280 * L_0 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Session_t4211189121  L_1 = ManomotionManager_get_Manomotion_Session_m1809168976(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (&V_0)->get_flag_0();
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)21)))))
		{
			goto IL_0035;
		}
	}
	{
		ManomotionManager_t565502280 * L_3 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Session_t4211189121  L_4 = ManomotionManager_get_Manomotion_Session_m1809168976(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = (&V_1)->get_calibration_value_5();
		PlayerPrefs_SetInt_m2842000469(NULL /*static, unused*/, _stringLiteral1401107910, L_5, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void ManoCalibration::LoadCalibration()
extern "C" IL2CPP_METHOD_ATTR void ManoCalibration_LoadCalibration_m3892309791 (ManoCalibration_t699436447 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoCalibration_LoadCalibration_m3892309791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManomotionManager_t565502280 * V_0 = NULL;
	{
		ManomotionManager_t565502280 * L_0 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		ManomotionManager_t565502280 * L_1 = V_0;
		int32_t L_2 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, _stringLiteral1401107910, ((int32_t)15), /*hidden argument*/NULL);
		NullCheck(L_1);
		ManomotionManager_SetCalibration_m846407318(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManoCalibration::DetectCalibration()
extern "C" IL2CPP_METHOD_ATTR void ManoCalibration_DetectCalibration_m3995771785 (ManoCalibration_t699436447 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoCalibration_DetectCalibration_m3995771785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TouchU5BU5D_t1849554061* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_needed_fingers_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_00a6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		TouchU5BU5D_t1849554061* L_2 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		TouchU5BU5D_t1849554061* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = Touch_get_phase_m214549210((Touch_t1921856868 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0059;
			}
			case 2:
			{
				goto IL_0070;
			}
			case 3:
			{
				goto IL_0087;
			}
			case 4:
			{
				goto IL_0097;
			}
		}
	}
	{
		goto IL_009c;
	}

IL_0042:
	{
		float L_6 = __this->get_time_touching_9();
		float L_7 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_time_touching_9(((float)il2cpp_codegen_add((float)L_6, (float)L_7)));
		goto IL_00a1;
	}

IL_0059:
	{
		float L_8 = __this->get_time_touching_9();
		float L_9 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_time_touching_9(((float)il2cpp_codegen_add((float)L_8, (float)L_9)));
		goto IL_00a1;
	}

IL_0070:
	{
		float L_10 = __this->get_time_touching_9();
		float L_11 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_time_touching_9(((float)il2cpp_codegen_add((float)L_10, (float)L_11)));
		goto IL_00a1;
	}

IL_0087:
	{
		__this->set_time_touching_9((-1.0f));
		goto IL_00a1;
	}

IL_0097:
	{
		goto IL_00a1;
	}

IL_009c:
	{
		goto IL_00a1;
	}

IL_00a1:
	{
		goto IL_00b8;
	}

IL_00a6:
	{
		__this->set_canCalibrate_11((bool)1);
		__this->set_time_touching_9((0.0f));
	}

IL_00b8:
	{
		int32_t L_12 = __this->get_calibration_time_5();
		V_2 = L_12;
		int32_t L_13 = V_2;
		switch (L_13)
		{
			case 0:
			{
				goto IL_00d6;
			}
			case 1:
			{
				goto IL_00fe;
			}
			case 2:
			{
				goto IL_0126;
			}
		}
	}
	{
		goto IL_014e;
	}

IL_00d6:
	{
		float L_14 = __this->get_time_touching_9();
		if ((!(((float)L_14) > ((float)(0.0f)))))
		{
			goto IL_00f9;
		}
	}
	{
		float L_15 = __this->get_calibration_delay_7();
		RuntimeObject* L_16 = ManoCalibration_Calibrate_m3265996810(__this, L_15, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_16, /*hidden argument*/NULL);
	}

IL_00f9:
	{
		goto IL_0153;
	}

IL_00fe:
	{
		float L_17 = __this->get_time_touching_9();
		if ((!(((float)L_17) < ((float)(0.0f)))))
		{
			goto IL_0121;
		}
	}
	{
		float L_18 = __this->get_calibration_delay_7();
		RuntimeObject* L_19 = ManoCalibration_Calibrate_m3265996810(__this, L_18, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_19, /*hidden argument*/NULL);
	}

IL_0121:
	{
		goto IL_0153;
	}

IL_0126:
	{
		float L_20 = __this->get_time_touching_9();
		if ((!(((float)L_20) > ((float)(0.5f)))))
		{
			goto IL_0149;
		}
	}
	{
		float L_21 = __this->get_calibration_delay_7();
		RuntimeObject* L_22 = ManoCalibration_Calibrate_m3265996810(__this, L_21, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_22, /*hidden argument*/NULL);
	}

IL_0149:
	{
		goto IL_0153;
	}

IL_014e:
	{
		goto IL_0153;
	}

IL_0153:
	{
		return;
	}
}
// System.Collections.IEnumerator ManoCalibration::Calibrate(System.Single)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ManoCalibration_Calibrate_m3265996810 (ManoCalibration_t699436447 * __this, float ___delay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoCalibration_Calibrate_m3265996810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CCalibrateU3Ec__Iterator0_t904254568 * V_0 = NULL;
	{
		U3CCalibrateU3Ec__Iterator0_t904254568 * L_0 = (U3CCalibrateU3Ec__Iterator0_t904254568 *)il2cpp_codegen_object_new(U3CCalibrateU3Ec__Iterator0_t904254568_il2cpp_TypeInfo_var);
		U3CCalibrateU3Ec__Iterator0__ctor_m2995248090(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCalibrateU3Ec__Iterator0_t904254568 * L_1 = V_0;
		float L_2 = ___delay0;
		NullCheck(L_1);
		L_1->set_delay_0(L_2);
		U3CCalibrateU3Ec__Iterator0_t904254568 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		U3CCalibrateU3Ec__Iterator0_t904254568 * L_4 = V_0;
		return L_4;
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
// System.Void ManoCalibration/<Calibrate>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCalibrateU3Ec__Iterator0__ctor_m2995248090 (U3CCalibrateU3Ec__Iterator0_t904254568 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ManoCalibration/<Calibrate>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CCalibrateU3Ec__Iterator0_MoveNext_m2043742850 (U3CCalibrateU3Ec__Iterator0_t904254568 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCalibrateU3Ec__Iterator0_MoveNext_m2043742850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_008b;
			}
			case 2:
			{
				goto IL_00db;
			}
		}
	}
	{
		goto IL_00e2;
	}

IL_0025:
	{
		ManoCalibration_t699436447 * L_2 = __this->get_U24this_1();
		NullCheck(L_2);
		bool L_3 = L_2->get_locker_13();
		if (L_3)
		{
			goto IL_00b7;
		}
	}
	{
		ManoCalibration_t699436447 * L_4 = __this->get_U24this_1();
		NullCheck(L_4);
		bool L_5 = L_4->get_canCalibrate_11();
		if (!L_5)
		{
			goto IL_00b7;
		}
	}
	{
		ManoCalibration_t699436447 * L_6 = __this->get_U24this_1();
		NullCheck(L_6);
		bool L_7 = L_6->get_inReach_12();
		if (!L_7)
		{
			goto IL_00b7;
		}
	}
	{
		ManoCalibration_t699436447 * L_8 = __this->get_U24this_1();
		NullCheck(L_8);
		L_8->set_locker_13((bool)1);
		Handheld_Vibrate_m3594839834(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = __this->get_delay_0();
		WaitForSeconds_t1699091251 * L_10 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_10, L_9, /*hidden argument*/NULL);
		__this->set_U24current_2(L_10);
		bool L_11 = __this->get_U24disposing_3();
		if (L_11)
		{
			goto IL_0086;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0086:
	{
		goto IL_00e4;
	}

IL_008b:
	{
		ManomotionManager_t565502280 * L_12 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		ManomotionManager_Calibrate_m923709651(L_12, /*hidden argument*/NULL);
		ManoCalibration_t699436447 * L_13 = __this->get_U24this_1();
		NullCheck(L_13);
		L_13->set_locker_13((bool)0);
		ManoCalibration_t699436447 * L_14 = __this->get_U24this_1();
		NullCheck(L_14);
		L_14->set_canCalibrate_11((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1335211471, /*hidden argument*/NULL);
	}

IL_00b7:
	{
		WaitForSeconds_t1699091251 * L_15 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_15, (0.0f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_15);
		bool L_16 = __this->get_U24disposing_3();
		if (L_16)
		{
			goto IL_00d6;
		}
	}
	{
		__this->set_U24PC_4(2);
	}

IL_00d6:
	{
		goto IL_00e4;
	}

IL_00db:
	{
		__this->set_U24PC_4((-1));
	}

IL_00e2:
	{
		return (bool)0;
	}

IL_00e4:
	{
		return (bool)1;
	}
}
// System.Object ManoCalibration/<Calibrate>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCalibrateU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1065483908 (U3CCalibrateU3Ec__Iterator0_t904254568 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object ManoCalibration/<Calibrate>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCalibrateU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3957171910 (U3CCalibrateU3Ec__Iterator0_t904254568 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void ManoCalibration/<Calibrate>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CCalibrateU3Ec__Iterator0_Dispose_m3258579249 (U3CCalibrateU3Ec__Iterator0_t904254568 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void ManoCalibration/<Calibrate>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CCalibrateU3Ec__Iterator0_Reset_m196198914 (U3CCalibrateU3Ec__Iterator0_t904254568 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCalibrateU3Ec__Iterator0_Reset_m196198914_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CCalibrateU3Ec__Iterator0_Reset_m196198914_RuntimeMethod_var);
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
// System.Void ManoEvents::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ManoEvents__ctor_m2529373155 (ManoEvents_t757003538 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoEvents__ctor_m2529373155_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_debugMessage_9(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// ManoEvents ManoEvents::get_Instance()
extern "C" IL2CPP_METHOD_ATTR ManoEvents_t757003538 * ManoEvents_get_Instance_m3054493996 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoEvents_get_Instance_m3054493996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ManoEvents_t757003538 * L_0 = ((ManoEvents_t757003538_StaticFields*)il2cpp_codegen_static_fields_for(ManoEvents_t757003538_il2cpp_TypeInfo_var))->get__instance_4();
		return L_0;
	}
}
// System.Void ManoEvents::set_Instance(ManoEvents)
extern "C" IL2CPP_METHOD_ATTR void ManoEvents_set_Instance_m295419745 (RuntimeObject * __this /* static, unused */, ManoEvents_t757003538 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoEvents_set_Instance_m295419745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ManoEvents_t757003538 * L_0 = ___value0;
		((ManoEvents_t757003538_StaticFields*)il2cpp_codegen_static_fields_for(ManoEvents_t757003538_il2cpp_TypeInfo_var))->set__instance_4(L_0);
		return;
	}
}
// System.Void ManoEvents::add_OnCalibrationSuccess(ManoEvents/ManoEvent)
extern "C" IL2CPP_METHOD_ATTR void ManoEvents_add_OnCalibrationSuccess_m1488224112 (RuntimeObject * __this /* static, unused */, ManoEvent_t2837598491 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoEvents_add_OnCalibrationSuccess_m1488224112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManoEvent_t2837598491 * V_0 = NULL;
	ManoEvent_t2837598491 * V_1 = NULL;
	{
		ManoEvent_t2837598491 * L_0 = ((ManoEvents_t757003538_StaticFields*)il2cpp_codegen_static_fields_for(ManoEvents_t757003538_il2cpp_TypeInfo_var))->get_OnCalibrationSuccess_6();
		V_0 = L_0;
	}

IL_0006:
	{
		ManoEvent_t2837598491 * L_1 = V_0;
		V_1 = L_1;
		ManoEvent_t2837598491 * L_2 = V_1;
		ManoEvent_t2837598491 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ManoEvent_t2837598491 * L_5 = V_0;
		ManoEvent_t2837598491 * L_6 = InterlockedCompareExchangeImpl<ManoEvent_t2837598491 *>((ManoEvent_t2837598491 **)(((ManoEvents_t757003538_StaticFields*)il2cpp_codegen_static_fields_for(ManoEvents_t757003538_il2cpp_TypeInfo_var))->get_address_of_OnCalibrationSuccess_6()), ((ManoEvent_t2837598491 *)CastclassSealed((RuntimeObject*)L_4, ManoEvent_t2837598491_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ManoEvent_t2837598491 * L_7 = V_0;
		ManoEvent_t2837598491 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ManoEvent_t2837598491 *)L_7) == ((RuntimeObject*)(ManoEvent_t2837598491 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ManoEvents::remove_OnCalibrationSuccess(ManoEvents/ManoEvent)
extern "C" IL2CPP_METHOD_ATTR void ManoEvents_remove_OnCalibrationSuccess_m129815440 (RuntimeObject * __this /* static, unused */, ManoEvent_t2837598491 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoEvents_remove_OnCalibrationSuccess_m129815440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManoEvent_t2837598491 * V_0 = NULL;
	ManoEvent_t2837598491 * V_1 = NULL;
	{
		ManoEvent_t2837598491 * L_0 = ((ManoEvents_t757003538_StaticFields*)il2cpp_codegen_static_fields_for(ManoEvents_t757003538_il2cpp_TypeInfo_var))->get_OnCalibrationSuccess_6();
		V_0 = L_0;
	}

IL_0006:
	{
		ManoEvent_t2837598491 * L_1 = V_0;
		V_1 = L_1;
		ManoEvent_t2837598491 * L_2 = V_1;
		ManoEvent_t2837598491 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ManoEvent_t2837598491 * L_5 = V_0;
		ManoEvent_t2837598491 * L_6 = InterlockedCompareExchangeImpl<ManoEvent_t2837598491 *>((ManoEvent_t2837598491 **)(((ManoEvents_t757003538_StaticFields*)il2cpp_codegen_static_fields_for(ManoEvents_t757003538_il2cpp_TypeInfo_var))->get_address_of_OnCalibrationSuccess_6()), ((ManoEvent_t2837598491 *)CastclassSealed((RuntimeObject*)L_4, ManoEvent_t2837598491_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ManoEvent_t2837598491 * L_7 = V_0;
		ManoEvent_t2837598491 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ManoEvent_t2837598491 *)L_7) == ((RuntimeObject*)(ManoEvent_t2837598491 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ManoEvents::Awake()
extern "C" IL2CPP_METHOD_ATTR void ManoEvents_Awake_m1811135084 (ManoEvents_t757003538 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoEvents_Awake_m1811135084_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ManoEvents_t757003538 * L_0 = ((ManoEvents_t757003538_StaticFields*)il2cpp_codegen_static_fields_for(ManoEvents_t757003538_il2cpp_TypeInfo_var))->get__instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		((ManoEvents_t757003538_StaticFields*)il2cpp_codegen_static_fields_for(ManoEvents_t757003538_il2cpp_TypeInfo_var))->set__instance_4(__this);
		goto IL_002f;
	}

IL_001a:
	{
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1280553607, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void ManoEvents::Update()
extern "C" IL2CPP_METHOD_ATTR void ManoEvents_Update_m3134327149 (ManoEvents_t757003538 * __this, const RuntimeMethod* method)
{
	{
		ManoEvents_HandleManomotionMessages_m1985167583(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManoEvents::HandleManomotionMessages()
extern "C" IL2CPP_METHOD_ATTR void ManoEvents_HandleManomotionMessages_m1985167583 (ManoEvents_t757003538 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoEvents_HandleManomotionMessages_m1985167583_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Session_t4211189121  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		ManomotionManager_t565502280 * L_0 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Session_t4211189121  L_1 = ManomotionManager_get_Manomotion_Session_m1809168976(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (&V_0)->get_flag_0();
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)30))))
		{
			case 0:
			{
				goto IL_00af;
			}
			case 1:
			{
				goto IL_00b4;
			}
			case 2:
			{
				goto IL_00c4;
			}
			case 3:
			{
				goto IL_00d4;
			}
			case 4:
			{
				goto IL_00e4;
			}
			case 5:
			{
				goto IL_00f4;
			}
			case 6:
			{
				goto IL_0104;
			}
			case 7:
			{
				goto IL_0114;
			}
			case 8:
			{
				goto IL_0124;
			}
			case 9:
			{
				goto IL_0134;
			}
			case 10:
			{
				goto IL_0144;
			}
			case 11:
			{
				goto IL_0154;
			}
			case 12:
			{
				goto IL_0164;
			}
			case 13:
			{
				goto IL_0070;
			}
			case 14:
			{
				goto IL_0070;
			}
			case 15:
			{
				goto IL_0070;
			}
			case 16:
			{
				goto IL_0070;
			}
			case 17:
			{
				goto IL_0070;
			}
			case 18:
			{
				goto IL_0070;
			}
			case 19:
			{
				goto IL_0070;
			}
			case 20:
			{
				goto IL_0174;
			}
		}
	}

IL_0070:
	{
		int32_t L_4 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)20))))
		{
			case 0:
			{
				goto IL_008a;
			}
			case 1:
			{
				goto IL_008f;
			}
			case 2:
			{
				goto IL_009f;
			}
		}
	}
	{
		goto IL_0184;
	}

IL_008a:
	{
		goto IL_0189;
	}

IL_008f:
	{
		ManoEvents_DisplayLogMessage_m1291210979(__this, _stringLiteral1136159307, /*hidden argument*/NULL);
		goto IL_0189;
	}

IL_009f:
	{
		ManoEvents_DisplayLogMessage_m1291210979(__this, _stringLiteral3850736999, /*hidden argument*/NULL);
		goto IL_0189;
	}

IL_00af:
	{
		goto IL_0189;
	}

IL_00b4:
	{
		ManoEvents_DisplayLogMessage_m1291210979(__this, _stringLiteral3669834792, /*hidden argument*/NULL);
		goto IL_0189;
	}

IL_00c4:
	{
		ManoEvents_DisplayLogMessage_m1291210979(__this, _stringLiteral362697042, /*hidden argument*/NULL);
		goto IL_0189;
	}

IL_00d4:
	{
		ManoEvents_DisplayLogMessage_m1291210979(__this, _stringLiteral1859541978, /*hidden argument*/NULL);
		goto IL_0189;
	}

IL_00e4:
	{
		ManoEvents_DisplayLogMessage_m1291210979(__this, _stringLiteral2818667124, /*hidden argument*/NULL);
		goto IL_0189;
	}

IL_00f4:
	{
		ManoEvents_DisplayLogMessage_m1291210979(__this, _stringLiteral1332919482, /*hidden argument*/NULL);
		goto IL_0189;
	}

IL_0104:
	{
		ManoEvents_DisplayLogMessage_m1291210979(__this, _stringLiteral2832136060, /*hidden argument*/NULL);
		goto IL_0189;
	}

IL_0114:
	{
		ManoEvents_DisplayLogMessage_m1291210979(__this, _stringLiteral2818667124, /*hidden argument*/NULL);
		goto IL_0189;
	}

IL_0124:
	{
		ManoEvents_DisplayLogMessage_m1291210979(__this, _stringLiteral3519606079, /*hidden argument*/NULL);
		goto IL_0189;
	}

IL_0134:
	{
		ManoEvents_DisplayLogMessage_m1291210979(__this, _stringLiteral462454621, /*hidden argument*/NULL);
		goto IL_0189;
	}

IL_0144:
	{
		ManoEvents_DisplayLogMessage_m1291210979(__this, _stringLiteral1056289935, /*hidden argument*/NULL);
		goto IL_0189;
	}

IL_0154:
	{
		ManoEvents_DisplayLogMessage_m1291210979(__this, _stringLiteral2650608877, /*hidden argument*/NULL);
		goto IL_0189;
	}

IL_0164:
	{
		ManoEvents_DisplayLogMessage_m1291210979(__this, _stringLiteral3456122812, /*hidden argument*/NULL);
		goto IL_0189;
	}

IL_0174:
	{
		ManoEvents_DisplayLogMessage_m1291210979(__this, _stringLiteral2813438880, /*hidden argument*/NULL);
		goto IL_0189;
	}

IL_0184:
	{
		goto IL_0189;
	}

IL_0189:
	{
		return;
	}
}
// System.Void ManoEvents::DisplayLogMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void ManoEvents_DisplayLogMessage_m1291210979 (ManoEvents_t757003538 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoEvents_DisplayLogMessage_m1291210979_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = __this->get_debugLogAnimator_8();
		NullCheck(L_0);
		Animator_Play_m1697843332(L_0, _stringLiteral558737761, /*hidden argument*/NULL);
		Animator_t434523843 * L_1 = __this->get_debugLogAnimator_8();
		NullCheck(L_1);
		Text_t1901882714 * L_2 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_1, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		return;
	}
}
// System.Void ManoEvents::add_OnCalibrationFailed(ManoEvents/ManoEvent)
extern "C" IL2CPP_METHOD_ATTR void ManoEvents_add_OnCalibrationFailed_m1497540964 (RuntimeObject * __this /* static, unused */, ManoEvent_t2837598491 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoEvents_add_OnCalibrationFailed_m1497540964_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManoEvent_t2837598491 * V_0 = NULL;
	ManoEvent_t2837598491 * V_1 = NULL;
	{
		ManoEvent_t2837598491 * L_0 = ((ManoEvents_t757003538_StaticFields*)il2cpp_codegen_static_fields_for(ManoEvents_t757003538_il2cpp_TypeInfo_var))->get_OnCalibrationFailed_5();
		V_0 = L_0;
	}

IL_0006:
	{
		ManoEvent_t2837598491 * L_1 = V_0;
		V_1 = L_1;
		ManoEvent_t2837598491 * L_2 = V_1;
		ManoEvent_t2837598491 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ManoEvent_t2837598491 * L_5 = V_0;
		ManoEvent_t2837598491 * L_6 = InterlockedCompareExchangeImpl<ManoEvent_t2837598491 *>((ManoEvent_t2837598491 **)(((ManoEvents_t757003538_StaticFields*)il2cpp_codegen_static_fields_for(ManoEvents_t757003538_il2cpp_TypeInfo_var))->get_address_of_OnCalibrationFailed_5()), ((ManoEvent_t2837598491 *)CastclassSealed((RuntimeObject*)L_4, ManoEvent_t2837598491_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ManoEvent_t2837598491 * L_7 = V_0;
		ManoEvent_t2837598491 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ManoEvent_t2837598491 *)L_7) == ((RuntimeObject*)(ManoEvent_t2837598491 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ManoEvents::remove_OnCalibrationFailed(ManoEvents/ManoEvent)
extern "C" IL2CPP_METHOD_ATTR void ManoEvents_remove_OnCalibrationFailed_m3291517799 (RuntimeObject * __this /* static, unused */, ManoEvent_t2837598491 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoEvents_remove_OnCalibrationFailed_m3291517799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManoEvent_t2837598491 * V_0 = NULL;
	ManoEvent_t2837598491 * V_1 = NULL;
	{
		ManoEvent_t2837598491 * L_0 = ((ManoEvents_t757003538_StaticFields*)il2cpp_codegen_static_fields_for(ManoEvents_t757003538_il2cpp_TypeInfo_var))->get_OnCalibrationFailed_5();
		V_0 = L_0;
	}

IL_0006:
	{
		ManoEvent_t2837598491 * L_1 = V_0;
		V_1 = L_1;
		ManoEvent_t2837598491 * L_2 = V_1;
		ManoEvent_t2837598491 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		ManoEvent_t2837598491 * L_5 = V_0;
		ManoEvent_t2837598491 * L_6 = InterlockedCompareExchangeImpl<ManoEvent_t2837598491 *>((ManoEvent_t2837598491 **)(((ManoEvents_t757003538_StaticFields*)il2cpp_codegen_static_fields_for(ManoEvents_t757003538_il2cpp_TypeInfo_var))->get_address_of_OnCalibrationFailed_5()), ((ManoEvent_t2837598491 *)CastclassSealed((RuntimeObject*)L_4, ManoEvent_t2837598491_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		ManoEvent_t2837598491 * L_7 = V_0;
		ManoEvent_t2837598491 * L_8 = V_1;
		if ((!(((RuntimeObject*)(ManoEvent_t2837598491 *)L_7) == ((RuntimeObject*)(ManoEvent_t2837598491 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
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
extern "C"  void DelegatePInvokeWrapper_ManoEvent_t2837598491 (ManoEvent_t2837598491 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void ManoEvents/ManoEvent::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ManoEvent__ctor_m888565431 (ManoEvent_t2837598491 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ManoEvents/ManoEvent::Invoke()
extern "C" IL2CPP_METHOD_ATTR void ManoEvent_Invoke_m1685151306 (ManoEvent_t2837598491 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ManoEvent_Invoke_m1685151306((ManoEvent_t2837598491 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ManoEvents/ManoEvent::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ManoEvent_BeginInvoke_m1842847740 (ManoEvent_t2837598491 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void ManoEvents/ManoEvent::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ManoEvent_EndInvoke_m1948319031 (ManoEvent_t2837598491 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ManoUtils::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ManoUtils__ctor_m569204907 (ManoUtils_t3463694697 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoUtils__ctor_m569204907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_correction_ratio_5(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// ManoUtils ManoUtils::get_Instance()
extern "C" IL2CPP_METHOD_ATTR ManoUtils_t3463694697 * ManoUtils_get_Instance_m912192132 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoUtils_get_Instance_m912192132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ManoUtils_t3463694697 * L_0 = ((ManoUtils_t3463694697_StaticFields*)il2cpp_codegen_static_fields_for(ManoUtils_t3463694697_il2cpp_TypeInfo_var))->get_instance_4();
		return L_0;
	}
}
// System.Void ManoUtils::Awake()
extern "C" IL2CPP_METHOD_ATTR void ManoUtils_Awake_m2644807939 (ManoUtils_t3463694697 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoUtils_Awake_m2644807939_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ManoUtils_t3463694697 * L_0 = ((ManoUtils_t3463694697_StaticFields*)il2cpp_codegen_static_fields_for(ManoUtils_t3463694697_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		((ManoUtils_t3463694697_StaticFields*)il2cpp_codegen_static_fields_for(ManoUtils_t3463694697_il2cpp_TypeInfo_var))->set_instance_4(__this);
	}

IL_0016:
	{
		Camera_t4157153871 * L_2 = __this->get_cam_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		Camera_t4157153871 * L_4 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_cam_6(L_4);
	}

IL_0031:
	{
		return;
	}
}
// UnityEngine.Vector3 ManoUtils::CalculateNewPosition(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  ManoUtils_CalculateNewPosition_m854440501 (ManoUtils_t3463694697 * __this, Vector3_t3722313464  ___Point0, float ___depth1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoUtils_CalculateNewPosition_m854440501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = ___Point0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_1, (0.5f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_t3722313464  L_4 = __this->get_correction_ratio_5();
		Vector3_Scale_m3007431830((Vector3_t3722313464 *)(&V_0), L_4, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = V_0;
		Vector3_t3722313464  L_6 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_6, (0.5f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9 = (&V_0)->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_10 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_9, (0.0f), (1.0f), /*hidden argument*/NULL);
		float L_11 = (&V_0)->get_y_3();
		float L_12 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_11, (0.0f), (1.0f), /*hidden argument*/NULL);
		float L_13 = (&V_0)->get_z_4();
		float L_14 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_13, (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_0), L_10, L_12, L_14, /*hidden argument*/NULL);
		Camera_t4157153871 * L_15 = __this->get_cam_6();
		Vector3_t3722313464  L_16 = V_0;
		Vector3_t3722313464  L_17 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_18 = ___depth1;
		Vector3_t3722313464  L_19 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		Vector3_t3722313464  L_20 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_16, L_19, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t3722313464  L_21 = Camera_ViewportToWorldPoint_m4277738824(L_15, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void ManoUtils::AjustBorders(UnityEngine.MeshRenderer,UnityEngine.Camera,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManoUtils_AjustBorders_m2636642314 (ManoUtils_t3463694697 * __this, MeshRenderer_t587009260 * ___mesh_renderer0, Camera_t4157153871 * ___cam1, bool ___change_correction_ratio2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoUtils_AjustBorders_m2636642314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Bounds_t2266837910  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	float V_9 = 0.0f;
	Session_t4211189121  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Session_t4211189121  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Session_t4211189121  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Session_t4211189121  V_13;
	memset(&V_13, 0, sizeof(V_13));
	float V_14 = 0.0f;
	Bounds_t2266837910  V_15;
	memset(&V_15, 0, sizeof(V_15));
	Bounds_t2266837910  V_16;
	memset(&V_16, 0, sizeof(V_16));
	Vector3_t3722313464  V_17;
	memset(&V_17, 0, sizeof(V_17));
	float V_18 = 0.0f;
	Bounds_t2266837910  V_19;
	memset(&V_19, 0, sizeof(V_19));
	Bounds_t2266837910  V_20;
	memset(&V_20, 0, sizeof(V_20));
	Vector3_t3722313464  V_21;
	memset(&V_21, 0, sizeof(V_21));
	{
		ManomotionManager_t565502280 * L_0 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = ManomotionManager_get_Width_m1623342980(L_0, /*hidden argument*/NULL);
		ManomotionManager_t565502280 * L_2 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = ManomotionManager_get_Height_m1332900733(L_2, /*hidden argument*/NULL);
		V_0 = ((float)((float)(((float)((float)L_1)))/(float)(((float)((float)L_3)))));
		MeshRenderer_t587009260 * L_4 = ___mesh_renderer0;
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(L_4, /*hidden argument*/NULL);
		float L_6 = V_0;
		Vector3_t3722313464  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m3353183577((&L_7), L_6, (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_m3053443106(L_5, L_7, /*hidden argument*/NULL);
		MeshRenderer_t587009260 * L_8 = ___mesh_renderer0;
		NullCheck(L_8);
		Bounds_t2266837910  L_9 = Renderer_get_bounds_m1803204000(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		MeshRenderer_t587009260 * L_10 = ___mesh_renderer0;
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = Transform_get_localPosition_m4234289348(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		float L_13 = (&V_3)->get_z_4();
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_2), (0.0f), (0.0f), L_13, /*hidden argument*/NULL);
		Camera_t4157153871 * L_14 = ___cam1;
		Vector3_t3722313464  L_15 = V_2;
		NullCheck(L_14);
		Vector3_t3722313464  L_16 = Camera_ViewportToWorldPoint_m4277738824(L_14, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		MeshRenderer_t587009260 * L_17 = ___mesh_renderer0;
		NullCheck(L_17);
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = Transform_get_localPosition_m4234289348(L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		float L_20 = (&V_5)->get_z_4();
		Vector3_Set_m1737058353((Vector3_t3722313464 *)(&V_2), (1.0f), (1.0f), L_20, /*hidden argument*/NULL);
		Camera_t4157153871 * L_21 = ___cam1;
		Vector3_t3722313464  L_22 = V_2;
		NullCheck(L_21);
		Vector3_t3722313464  L_23 = Camera_ViewportToWorldPoint_m4277738824(L_21, L_22, /*hidden argument*/NULL);
		V_6 = L_23;
		Vector3_t3722313464  L_24 = V_6;
		Vector3_t3722313464  L_25 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_26 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		V_7 = L_26;
		Vector3_t3722313464  L_27 = Bounds_get_max_m3756577669((Bounds_t2266837910 *)(&V_1), /*hidden argument*/NULL);
		Vector3_t3722313464  L_28 = Bounds_get_min_m3755135869((Bounds_t2266837910 *)(&V_1), /*hidden argument*/NULL);
		Vector3_t3722313464  L_29 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		V_8 = L_29;
		ManomotionManager_t565502280 * L_30 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_30);
		Session_t4211189121  L_31 = ManomotionManager_get_Manomotion_Session_m1809168976(L_30, /*hidden argument*/NULL);
		V_10 = L_31;
		int32_t L_32 = (&V_10)->get_orientation_4();
		if ((((int32_t)L_32) == ((int32_t)1)))
		{
			goto IL_00e7;
		}
	}
	{
		ManomotionManager_t565502280 * L_33 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_33);
		Session_t4211189121  L_34 = ManomotionManager_get_Manomotion_Session_m1809168976(L_33, /*hidden argument*/NULL);
		V_11 = L_34;
		int32_t L_35 = (&V_11)->get_orientation_4();
		if ((!(((uint32_t)L_35) == ((uint32_t)2))))
		{
			goto IL_00fd;
		}
	}

IL_00e7:
	{
		float L_36 = (&V_7)->get_y_3();
		float L_37 = (&V_8)->get_y_3();
		V_9 = ((float)((float)L_36/(float)L_37));
		goto IL_010e;
	}

IL_00fd:
	{
		float L_38 = (&V_7)->get_x_2();
		float L_39 = (&V_8)->get_x_2();
		V_9 = ((float)((float)L_38/(float)L_39));
	}

IL_010e:
	{
		MeshRenderer_t587009260 * L_40 = ___mesh_renderer0;
		NullCheck(L_40);
		Transform_t3600365921 * L_41 = Component_get_transform_m3162698980(L_40, /*hidden argument*/NULL);
		float L_42 = V_9;
		float L_43 = V_0;
		float L_44 = V_9;
		Vector3_t3722313464  L_45;
		memset(&L_45, 0, sizeof(L_45));
		Vector3__ctor_m3353183577((&L_45), ((float)il2cpp_codegen_multiply((float)L_42, (float)L_43)), L_44, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_41);
		Transform_set_localScale_m3053443106(L_41, L_45, /*hidden argument*/NULL);
		bool L_46 = ___change_correction_ratio2;
		if (!L_46)
		{
			goto IL_023e;
		}
	}
	{
		ManomotionManager_t565502280 * L_47 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_47);
		Session_t4211189121  L_48 = ManomotionManager_get_Manomotion_Session_m1809168976(L_47, /*hidden argument*/NULL);
		V_12 = L_48;
		int32_t L_49 = (&V_12)->get_orientation_4();
		if ((((int32_t)L_49) == ((int32_t)1)))
		{
			goto IL_0161;
		}
	}
	{
		ManomotionManager_t565502280 * L_50 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_50);
		Session_t4211189121  L_51 = ManomotionManager_get_Manomotion_Session_m1809168976(L_50, /*hidden argument*/NULL);
		V_13 = L_51;
		int32_t L_52 = (&V_13)->get_orientation_4();
		if ((!(((uint32_t)L_52) == ((uint32_t)2))))
		{
			goto IL_01d2;
		}
	}

IL_0161:
	{
		MeshRenderer_t587009260 * L_53 = ___mesh_renderer0;
		NullCheck(L_53);
		Bounds_t2266837910  L_54 = Renderer_get_bounds_m1803204000(L_53, /*hidden argument*/NULL);
		V_15 = L_54;
		Vector3_t3722313464  L_55 = Bounds_get_max_m3756577669((Bounds_t2266837910 *)(&V_15), /*hidden argument*/NULL);
		MeshRenderer_t587009260 * L_56 = ___mesh_renderer0;
		NullCheck(L_56);
		Bounds_t2266837910  L_57 = Renderer_get_bounds_m1803204000(L_56, /*hidden argument*/NULL);
		V_16 = L_57;
		Vector3_t3722313464  L_58 = Bounds_get_min_m3755135869((Bounds_t2266837910 *)(&V_16), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_59 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_55, L_58, /*hidden argument*/NULL);
		V_17 = L_59;
		float L_60 = (&V_17)->get_x_2();
		float L_61 = (&V_7)->get_x_2();
		V_14 = ((float)((float)L_60/(float)L_61));
		float L_62 = V_14;
		if ((((float)L_62) == ((float)(0.0f))))
		{
			goto IL_01af;
		}
	}
	{
		float L_63 = V_14;
		if ((!(((float)L_63) == ((float)(std::numeric_limits<float>::quiet_NaN())))))
		{
			goto IL_01b6;
		}
	}

IL_01af:
	{
		V_14 = (0.1f);
	}

IL_01b6:
	{
		float L_64 = V_14;
		Vector3_t3722313464  L_65;
		memset(&L_65, 0, sizeof(L_65));
		Vector3__ctor_m3353183577((&L_65), L_64, (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_correction_ratio_5(L_65);
		goto IL_023e;
	}

IL_01d2:
	{
		MeshRenderer_t587009260 * L_66 = ___mesh_renderer0;
		NullCheck(L_66);
		Bounds_t2266837910  L_67 = Renderer_get_bounds_m1803204000(L_66, /*hidden argument*/NULL);
		V_19 = L_67;
		Vector3_t3722313464  L_68 = Bounds_get_max_m3756577669((Bounds_t2266837910 *)(&V_19), /*hidden argument*/NULL);
		MeshRenderer_t587009260 * L_69 = ___mesh_renderer0;
		NullCheck(L_69);
		Bounds_t2266837910  L_70 = Renderer_get_bounds_m1803204000(L_69, /*hidden argument*/NULL);
		V_20 = L_70;
		Vector3_t3722313464  L_71 = Bounds_get_min_m3755135869((Bounds_t2266837910 *)(&V_20), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_72 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_68, L_71, /*hidden argument*/NULL);
		V_21 = L_72;
		float L_73 = (&V_21)->get_y_3();
		float L_74 = (&V_7)->get_y_3();
		V_18 = ((float)((float)L_73/(float)L_74));
		float L_75 = V_18;
		if ((((float)L_75) == ((float)(0.0f))))
		{
			goto IL_0220;
		}
	}
	{
		float L_76 = V_18;
		if ((!(((float)L_76) == ((float)(std::numeric_limits<float>::quiet_NaN())))))
		{
			goto IL_0227;
		}
	}

IL_0220:
	{
		V_18 = (0.1f);
	}

IL_0227:
	{
		float L_77 = V_18;
		Vector3_t3722313464  L_78;
		memset(&L_78, 0, sizeof(L_78));
		Vector3__ctor_m3353183577((&L_78), (1.0f), L_77, (0.0f), /*hidden argument*/NULL);
		__this->set_correction_ratio_5(L_78);
	}

IL_023e:
	{
		return;
	}
}
// UnityEngine.Vector3 ManoUtils::VectorAbs(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  ManoUtils_VectorAbs_m1236136217 (ManoUtils_t3463694697 * __this, Vector3_t3722313464  ___vector0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoUtils_VectorAbs_m1236136217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = (&___vector0)->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = fabsf(L_0);
		float L_2 = (&___vector0)->get_y_3();
		float L_3 = fabsf(L_2);
		float L_4 = (&___vector0)->get_z_4();
		float L_5 = fabsf(L_4);
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
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
// System.Void ManoVisualization::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization__ctor_m3299232695 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoVisualization__ctor_m3299232695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t1281789340* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3526709249);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3526709249);
		StringU5BU5D_t1281789340* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral2409795906);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2409795906);
		StringU5BU5D_t1281789340* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3266464985);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3266464985);
		StringU5BU5D_t1281789340* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral797641419);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral797641419);
		StringU5BU5D_t1281789340* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral61421061);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral61421061);
		__this->set_finger_labels_44(L_5);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ManoVisualization::get_Show_inner()
extern "C" IL2CPP_METHOD_ATTR bool ManoVisualization_get_Show_inner_m260116457 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__show_inner_26();
		return L_0;
	}
}
// System.Void ManoVisualization::set_Show_inner(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_set_Show_inner_m2901024986 (ManoVisualization_t1421820612 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__show_inner_26(L_0);
		return;
	}
}
// System.Boolean ManoVisualization::get_Show_fingertips()
extern "C" IL2CPP_METHOD_ATTR bool ManoVisualization_get_Show_fingertips_m3026400719 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__show_fingertips_27();
		return L_0;
	}
}
// System.Void ManoVisualization::set_Show_fingertips(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_set_Show_fingertips_m1674203565 (ManoVisualization_t1421820612 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__show_fingertips_27(L_0);
		return;
	}
}
// System.Boolean ManoVisualization::get_Show_fingertip_labels()
extern "C" IL2CPP_METHOD_ATTR bool ManoVisualization_get_Show_fingertip_labels_m2652058975 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__show_fingertip_labels_28();
		return L_0;
	}
}
// System.Void ManoVisualization::set_Show_fingertip_labels(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_set_Show_fingertip_labels_m186525592 (ManoVisualization_t1421820612 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__show_fingertip_labels_28(L_0);
		return;
	}
}
// System.Boolean ManoVisualization::get_Show_palm_center()
extern "C" IL2CPP_METHOD_ATTR bool ManoVisualization_get_Show_palm_center_m94080673 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__show_palm_center_29();
		return L_0;
	}
}
// System.Void ManoVisualization::set_Show_palm_center(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_set_Show_palm_center_m1713916509 (ManoVisualization_t1421820612 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__show_palm_center_29(L_0);
		return;
	}
}
// System.Boolean ManoVisualization::get_Show_contour()
extern "C" IL2CPP_METHOD_ATTR bool ManoVisualization_get_Show_contour_m3318944812 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__show_contour_25();
		return L_0;
	}
}
// System.Void ManoVisualization::set_Show_contour(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_set_Show_contour_m1529468790 (ManoVisualization_t1421820612 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__show_contour_25(L_0);
		return;
	}
}
// System.Boolean ManoVisualization::get_Show_hand_layer()
extern "C" IL2CPP_METHOD_ATTR bool ManoVisualization_get_Show_hand_layer_m2063885413 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__show_hand_layer_30();
		return L_0;
	}
}
// System.Void ManoVisualization::set_Show_hand_layer(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_set_Show_hand_layer_m2731680885 (ManoVisualization_t1421820612 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__show_hand_layer_30(L_0);
		return;
	}
}
// System.Boolean ManoVisualization::get_Show_background_layer()
extern "C" IL2CPP_METHOD_ATTR bool ManoVisualization_get_Show_background_layer_m1244111248 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__show_background_layer_31();
		return L_0;
	}
}
// System.Void ManoVisualization::set_Show_background_layer(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_set_Show_background_layer_m3585397262 (ManoVisualization_t1421820612 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__show_background_layer_31(L_0);
		return;
	}
}
// System.Boolean ManoVisualization::get_Show_bounding_box()
extern "C" IL2CPP_METHOD_ATTR bool ManoVisualization_get_Show_bounding_box_m2573940089 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__show_bounding_box_24();
		return L_0;
	}
}
// System.Void ManoVisualization::set_Show_bounding_box(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_set_Show_bounding_box_m168115305 (ManoVisualization_t1421820612 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__show_bounding_box_24(L_0);
		return;
	}
}
// System.Boolean ManoVisualization::get_Show_joints()
extern "C" IL2CPP_METHOD_ATTR bool ManoVisualization_get_Show_joints_m2113788207 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__show_joints_32();
		return L_0;
	}
}
// System.Void ManoVisualization::set_Show_joints(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_set_Show_joints_m27387564 (ManoVisualization_t1421820612 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__show_joints_32(L_0);
		return;
	}
}
// System.Void ManoVisualization::Start()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_Start_m3586912147 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoVisualization_Start_m3586912147_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = __this->get_cam_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		Camera_t4157153871 * L_2 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_cam_33(L_2);
	}

IL_001b:
	{
		ManoUtils_t3463694697 * L_3 = ManoUtils_get_Instance_m912192132(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_mano_utils_52(L_3);
		ManoVisualization_SetHandsSupportedByLicence_m1517888031(__this, /*hidden argument*/NULL);
		ManoVisualization_SetPointsBasedOnHandNumber_m3584150994(__this, /*hidden argument*/NULL);
		ManoVisualization_CreatePalmCenterParticle_m3112594675(__this, /*hidden argument*/NULL);
		ManoVisualization_CreateFingerTipLabelParticles_m2612068125(__this, /*hidden argument*/NULL);
		ManoVisualization_CreateFingerTipParticles_m3661147252(__this, /*hidden argument*/NULL);
		ManoVisualization_CreateContourParticles_m3062722412(__this, /*hidden argument*/NULL);
		ManoVisualization_CreateInnerParticles_m3288915901(__this, /*hidden argument*/NULL);
		ManoVisualization_InstantiateManomotionMeshes_m3412892994(__this, /*hidden argument*/NULL);
		ManoVisualization_CreateBoundingBoxes_m5014831(__this, /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)ManoVisualization_AdjustcorrectionRatio_m611340864_RuntimeMethod_var;
		OrientationChange_t2630486480 * L_5 = (OrientationChange_t2630486480 *)il2cpp_codegen_object_new(OrientationChange_t2630486480_il2cpp_TypeInfo_var);
		OrientationChange__ctor_m2413559254(L_5, __this, L_4, /*hidden argument*/NULL);
		MenuOrientation_add_OnOrientationChanged_m1240686245(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManoVisualization::CreateBoundingBoxes()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_CreateBoundingBoxes_m5014831 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoVisualization_CreateBoundingBoxes_m5014831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m3707688467(L_0, /*hidden argument*/NULL);
		__this->set_bounding_box_parent_51(L_0);
		GameObject_t1113636619 * L_1 = __this->get_bounding_box_parent_51();
		NullCheck(L_1);
		Object_set_name_m291480324(L_1, _stringLiteral1865470623, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_bounding_box_parent_51();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		Camera_t4157153871 * L_4 = __this->get_cam_33();
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_SetParent_m381167889(L_3, L_5, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_handsSupportedByLicence_55();
		TransformU5BU5D_t807237628* L_7 = (TransformU5BU5D_t807237628*)SZArrayNew(TransformU5BU5D_t807237628_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->set_bounding_box_36(L_7);
		TransformU5BU5D_t807237628* L_8 = __this->get_bounding_box_36();
		NullCheck(L_8);
		BoundingBoxUIU5BU5D_t466324417* L_9 = (BoundingBoxUIU5BU5D_t466324417*)SZArrayNew(BoundingBoxUIU5BU5D_t466324417_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))));
		__this->set_bounding_box_ui_41(L_9);
		V_0 = 0;
		goto IL_00c1;
	}

IL_0061:
	{
		TransformU5BU5D_t807237628* L_10 = __this->get_bounding_box_36();
		int32_t L_11 = V_0;
		Transform_t3600365921 * L_12 = __this->get_bounding_box_prefab_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Transform_t3600365921 * L_13 = Object_Instantiate_TisTransform_t3600365921_m3433092333(NULL /*static, unused*/, L_12, /*hidden argument*/Object_Instantiate_TisTransform_t3600365921_m3433092333_RuntimeMethod_var);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Transform_t3600365921 *)L_13);
		TransformU5BU5D_t807237628* L_14 = __this->get_bounding_box_36();
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Transform_t3600365921 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		GameObject_t1113636619 * L_18 = __this->get_bounding_box_parent_51();
		NullCheck(L_18);
		Transform_t3600365921 * L_19 = GameObject_get_transform_m1369836730(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_SetParent_m381167889(L_17, L_19, /*hidden argument*/NULL);
		TransformU5BU5D_t807237628* L_20 = __this->get_bounding_box_36();
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Transform_t3600365921 * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		GameObject_t1113636619 * L_24 = Component_get_gameObject_m442555142(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Object_set_name_m291480324(L_24, _stringLiteral1136951736, /*hidden argument*/NULL);
		BoundingBoxUIU5BU5D_t466324417* L_25 = __this->get_bounding_box_ui_41();
		int32_t L_26 = V_0;
		TransformU5BU5D_t807237628* L_27 = __this->get_bounding_box_36();
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Transform_t3600365921 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		GameObject_t1113636619 * L_31 = Component_get_gameObject_m442555142(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		BoundingBoxUI_t541593408 * L_32 = GameObject_GetComponent_TisBoundingBoxUI_t541593408_m956544729(L_31, /*hidden argument*/GameObject_GetComponent_TisBoundingBoxUI_t541593408_m956544729_RuntimeMethod_var);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_32);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (BoundingBoxUI_t541593408 *)L_32);
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00c1:
	{
		int32_t L_34 = V_0;
		TransformU5BU5D_t807237628* L_35 = __this->get_bounding_box_36();
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_35)->max_length)))))))
		{
			goto IL_0061;
		}
	}
	{
		return;
	}
}
// System.Void ManoVisualization::AdjustcorrectionRatio()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_AdjustcorrectionRatio_m611340864 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoVisualization_AdjustcorrectionRatio_m611340864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Session_t4211189121  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		bool L_0 = ManoVisualization_get_Show_background_layer_m1244111248(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00fc;
		}
	}
	{
		ManomotionManager_t565502280 * L_1 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		Session_t4211189121  L_2 = ManomotionManager_get_Manomotion_Session_m1809168976(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = (&V_0)->get_orientation_4();
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))
		{
			case 0:
			{
				goto IL_003b;
			}
			case 1:
			{
				goto IL_0064;
			}
			case 2:
			{
				goto IL_008d;
			}
			case 3:
			{
				goto IL_00b6;
			}
		}
	}
	{
		goto IL_00df;
	}

IL_003b:
	{
		MeshRenderer_t587009260 * L_5 = __this->get__layer_background_54();
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_7 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), (-90.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_rotation_m3524318132(L_6, L_7, /*hidden argument*/NULL);
		goto IL_00e4;
	}

IL_0064:
	{
		MeshRenderer_t587009260 * L_8 = __this->get__layer_background_54();
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_10 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_rotation_m3524318132(L_9, L_10, /*hidden argument*/NULL);
		goto IL_00e4;
	}

IL_008d:
	{
		MeshRenderer_t587009260 * L_11 = __this->get__layer_background_54();
		NullCheck(L_11);
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_13 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_rotation_m3524318132(L_12, L_13, /*hidden argument*/NULL);
		goto IL_00e4;
	}

IL_00b6:
	{
		MeshRenderer_t587009260 * L_14 = __this->get__layer_background_54();
		NullCheck(L_14);
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_16 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (180.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_rotation_m3524318132(L_15, L_16, /*hidden argument*/NULL);
		goto IL_00e4;
	}

IL_00df:
	{
		goto IL_00e4;
	}

IL_00e4:
	{
		ManoUtils_t3463694697 * L_17 = __this->get_mano_utils_52();
		MeshRenderer_t587009260 * L_18 = __this->get__layer_background_54();
		Camera_t4157153871 * L_19 = __this->get_cam_33();
		NullCheck(L_17);
		ManoUtils_AjustBorders_m2636642314(L_17, L_18, L_19, (bool)1, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		return;
	}
}
// System.Void ManoVisualization::SetHandsSupportedByLicence()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_SetHandsSupportedByLicence_m1517888031 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	{
		__this->set_handsSupportedByLicence_55(2);
		return;
	}
}
// System.Void ManoVisualization::SetPointsBasedOnHandNumber()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_SetPointsBasedOnHandNumber_m3584150994 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoVisualization_SetPointsBasedOnHandNumber_m3584150994_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_handsSupportedByLicence_55();
		TransformU5BU5DU5BU5D_t2335906965* L_1 = (TransformU5BU5DU5BU5D_t2335906965*)SZArrayNew(TransformU5BU5DU5BU5D_t2335906965_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_contour_particles_38(L_1);
		int32_t L_2 = __this->get_handsSupportedByLicence_55();
		TransformU5BU5DU5BU5D_t2335906965* L_3 = (TransformU5BU5DU5BU5D_t2335906965*)SZArrayNew(TransformU5BU5DU5BU5D_t2335906965_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set_inner_particles_39(L_3);
		int32_t L_4 = __this->get_handsSupportedByLicence_55();
		LineRendererU5BU5D_t976293515* L_5 = (LineRendererU5BU5D_t976293515*)SZArrayNew(LineRendererU5BU5D_t976293515_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->set_contour_line_renderer_40(L_5);
		int32_t L_6 = __this->get_handsSupportedByLicence_55();
		TransformU5BU5DU5BU5D_t2335906965* L_7 = (TransformU5BU5DU5BU5D_t2335906965*)SZArrayNew(TransformU5BU5DU5BU5D_t2335906965_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->set_fingertips_t_42(L_7);
		int32_t L_8 = __this->get_handsSupportedByLicence_55();
		TransformU5BU5DU5BU5D_t2335906965* L_9 = (TransformU5BU5DU5BU5D_t2335906965*)SZArrayNew(TransformU5BU5DU5BU5D_t2335906965_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->set_fingertip_labels_43(L_9);
		return;
	}
}
// System.Void ManoVisualization::CreatePalmCenterParticle()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_CreatePalmCenterParticle_m3112594675 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoVisualization_CreatePalmCenterParticle_m3112594675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m3707688467(L_0, /*hidden argument*/NULL);
		__this->set_palmcenter_parent_48(L_0);
		GameObject_t1113636619 * L_1 = __this->get_palmcenter_parent_48();
		NullCheck(L_1);
		Object_set_name_m291480324(L_1, _stringLiteral2323893671, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_palmcenter_parent_48();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_SetParent_m381167889(L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_handsSupportedByLicence_55();
		TransformU5BU5D_t807237628* L_6 = (TransformU5BU5D_t807237628*)SZArrayNew(TransformU5BU5D_t807237628_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->set_palm_37(L_6);
		V_0 = 0;
		goto IL_0099;
	}

IL_0049:
	{
		TransformU5BU5D_t807237628* L_7 = __this->get_palm_37();
		int32_t L_8 = V_0;
		Transform_t3600365921 * L_9 = __this->get_inner_dots_prefab_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Transform_t3600365921 * L_10 = Object_Instantiate_TisTransform_t3600365921_m3433092333(NULL /*static, unused*/, L_9, /*hidden argument*/Object_Instantiate_TisTransform_t3600365921_m3433092333_RuntimeMethod_var);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Transform_t3600365921 *)L_10);
		TransformU5BU5D_t807237628* L_11 = __this->get_palm_37();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Transform_t3600365921 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		GameObject_t1113636619 * L_15 = __this->get_palmcenter_parent_48();
		NullCheck(L_15);
		Transform_t3600365921 * L_16 = GameObject_get_transform_m1369836730(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_SetParent_m381167889(L_14, L_16, /*hidden argument*/NULL);
		TransformU5BU5D_t807237628* L_17 = __this->get_palm_37();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Transform_t3600365921 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		GameObject_t1113636619 * L_21 = Component_get_gameObject_m442555142(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		MeshRenderer_t587009260 * L_22 = GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(L_21, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var);
		NullCheck(L_22);
		Material_t340375123 * L_23 = Renderer_get_material_m4171603682(L_22, /*hidden argument*/NULL);
		Color_t2555686324  L_24 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_23);
		Material_set_color_m1794818007(L_23, L_24, /*hidden argument*/NULL);
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0099:
	{
		int32_t L_26 = V_0;
		TransformU5BU5D_t807237628* L_27 = __this->get_palm_37();
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_27)->max_length)))))))
		{
			goto IL_0049;
		}
	}
	{
		return;
	}
}
// System.Void ManoVisualization::CreateFingerTipParticles()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_CreateFingerTipParticles_m3661147252 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoVisualization_CreateFingerTipParticles_m3661147252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Transform_t3600365921 * V_2 = NULL;
	{
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m3707688467(L_0, /*hidden argument*/NULL);
		__this->set_fingertip_parent_47(L_0);
		GameObject_t1113636619 * L_1 = __this->get_fingertip_parent_47();
		NullCheck(L_1);
		Object_set_name_m291480324(L_1, _stringLiteral3744473304, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_fingertip_parent_47();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_SetParent_m381167889(L_3, L_4, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_00c7;
	}

IL_0038:
	{
		TransformU5BU5DU5BU5D_t2335906965* L_5 = __this->get_fingertips_t_42();
		int32_t L_6 = V_0;
		TransformU5BU5D_t807237628* L_7 = (TransformU5BU5D_t807237628*)SZArrayNew(TransformU5BU5D_t807237628_il2cpp_TypeInfo_var, (uint32_t)5);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (TransformU5BU5D_t807237628*)L_7);
		V_1 = 0;
		goto IL_00b3;
	}

IL_004d:
	{
		Transform_t3600365921 * L_8 = __this->get_inner_dots_prefab_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Transform_t3600365921 * L_9 = Object_Instantiate_TisTransform_t3600365921_m3433092333(NULL /*static, unused*/, L_8, /*hidden argument*/Object_Instantiate_TisTransform_t3600365921_m3433092333_RuntimeMethod_var);
		V_2 = L_9;
		Transform_t3600365921 * L_10 = V_2;
		Transform_t3600365921 * L_11 = V_2;
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = Transform_get_localScale_m129152068(L_11, /*hidden argument*/NULL);
		float L_13 = Random_Range_m2202990745(NULL /*static, unused*/, (3.0f), (4.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_14 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_m3053443106(L_10, L_14, /*hidden argument*/NULL);
		Transform_t3600365921 * L_15 = V_2;
		NullCheck(L_15);
		GameObject_t1113636619 * L_16 = Component_get_gameObject_m442555142(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		MeshRenderer_t587009260 * L_17 = GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(L_16, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var);
		NullCheck(L_17);
		Material_t340375123 * L_18 = Renderer_get_material_m4171603682(L_17, /*hidden argument*/NULL);
		Color_t2555686324  L_19 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		Material_set_color_m1794818007(L_18, L_19, /*hidden argument*/NULL);
		Transform_t3600365921 * L_20 = V_2;
		GameObject_t1113636619 * L_21 = __this->get_fingertip_parent_47();
		NullCheck(L_21);
		Transform_t3600365921 * L_22 = GameObject_get_transform_m1369836730(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_SetParent_m381167889(L_20, L_22, /*hidden argument*/NULL);
		TransformU5BU5DU5BU5D_t2335906965* L_23 = __this->get_fingertips_t_42();
		int32_t L_24 = V_0;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		TransformU5BU5D_t807237628* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = V_1;
		Transform_t3600365921 * L_28 = V_2;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (Transform_t3600365921 *)L_28);
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00b3:
	{
		int32_t L_30 = V_1;
		TransformU5BU5DU5BU5D_t2335906965* L_31 = __this->get_fingertips_t_42();
		int32_t L_32 = V_0;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		TransformU5BU5D_t807237628* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length)))))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00c7:
	{
		int32_t L_36 = V_0;
		TransformU5BU5DU5BU5D_t2335906965* L_37 = __this->get_fingertips_t_42();
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_37)->max_length)))))))
		{
			goto IL_0038;
		}
	}
	{
		return;
	}
}
// System.Void ManoVisualization::CreateFingerTipLabelParticles()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_CreateFingerTipLabelParticles_m2612068125 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoVisualization_CreateFingerTipLabelParticles_m2612068125_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Transform_t3600365921 * V_2 = NULL;
	TextMesh_t1536577757 * V_3 = NULL;
	{
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m3707688467(L_0, /*hidden argument*/NULL);
		__this->set_fingertip_label_parent_49(L_0);
		GameObject_t1113636619 * L_1 = __this->get_fingertip_label_parent_49();
		NullCheck(L_1);
		Object_set_name_m291480324(L_1, _stringLiteral3789898458, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_fingertip_label_parent_49();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_SetParent_m381167889(L_3, L_4, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_00d3;
	}

IL_0038:
	{
		TransformU5BU5DU5BU5D_t2335906965* L_5 = __this->get_fingertip_labels_43();
		int32_t L_6 = V_0;
		TransformU5BU5D_t807237628* L_7 = (TransformU5BU5D_t807237628*)SZArrayNew(TransformU5BU5D_t807237628_il2cpp_TypeInfo_var, (uint32_t)5);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (TransformU5BU5D_t807237628*)L_7);
		V_1 = 0;
		goto IL_00bf;
	}

IL_004d:
	{
		Transform_t3600365921 * L_8 = __this->get_inner_dots_prefab_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Transform_t3600365921 * L_9 = Object_Instantiate_TisTransform_t3600365921_m3433092333(NULL /*static, unused*/, L_8, /*hidden argument*/Object_Instantiate_TisTransform_t3600365921_m3433092333_RuntimeMethod_var);
		V_2 = L_9;
		Transform_t3600365921 * L_10 = V_2;
		Transform_t3600365921 * L_11 = V_2;
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = Transform_get_localScale_m129152068(L_11, /*hidden argument*/NULL);
		float L_13 = Random_Range_m2202990745(NULL /*static, unused*/, (4.0f), (4.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_14 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_m3053443106(L_10, L_14, /*hidden argument*/NULL);
		Transform_t3600365921 * L_15 = V_2;
		NullCheck(L_15);
		GameObject_t1113636619 * L_16 = Component_get_gameObject_m442555142(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		MeshRenderer_t587009260 * L_17 = GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(L_16, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var);
		NullCheck(L_17);
		Renderer_set_enabled_m1727253150(L_17, (bool)0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_18 = V_2;
		GameObject_t1113636619 * L_19 = __this->get_fingertip_label_parent_49();
		NullCheck(L_19);
		Transform_t3600365921 * L_20 = GameObject_get_transform_m1369836730(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_SetParent_m381167889(L_18, L_20, /*hidden argument*/NULL);
		Transform_t3600365921 * L_21 = V_2;
		NullCheck(L_21);
		TextMesh_t1536577757 * L_22 = Component_GetComponentInChildren_TisTextMesh_t1536577757_m1883617852(L_21, /*hidden argument*/Component_GetComponentInChildren_TisTextMesh_t1536577757_m1883617852_RuntimeMethod_var);
		V_3 = L_22;
		TextMesh_t1536577757 * L_23 = V_3;
		StringU5BU5D_t1281789340* L_24 = __this->get_finger_labels_44();
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		String_t* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_23);
		TextMesh_set_text_m446189179(L_23, L_27, /*hidden argument*/NULL);
		TransformU5BU5DU5BU5D_t2335906965* L_28 = __this->get_fingertip_labels_43();
		int32_t L_29 = V_0;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		TransformU5BU5D_t807237628* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		int32_t L_32 = V_1;
		Transform_t3600365921 * L_33 = V_2;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (Transform_t3600365921 *)L_33);
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00bf:
	{
		int32_t L_35 = V_1;
		TransformU5BU5DU5BU5D_t2335906965* L_36 = __this->get_fingertip_labels_43();
		int32_t L_37 = V_0;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		TransformU5BU5D_t807237628* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		if ((((int32_t)L_35) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_39)->max_length)))))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00d3:
	{
		int32_t L_41 = V_0;
		TransformU5BU5DU5BU5D_t2335906965* L_42 = __this->get_fingertip_labels_43();
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_42)->max_length)))))))
		{
			goto IL_0038;
		}
	}
	{
		return;
	}
}
// System.Void ManoVisualization::CreateContourParticles()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_CreateContourParticles_m3062722412 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoVisualization_CreateContourParticles_m3062722412_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LineRenderer_t3154350270 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m3707688467(L_0, /*hidden argument*/NULL);
		__this->set_contour_parent_45(L_0);
		GameObject_t1113636619 * L_1 = __this->get_contour_parent_45();
		NullCheck(L_1);
		Object_set_name_m291480324(L_1, _stringLiteral3592064769, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_contour_parent_45();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_SetParent_m381167889(L_3, L_4, /*hidden argument*/NULL);
		LineRenderer_t3154350270 * L_5 = Component_GetComponent_TisLineRenderer_t3154350270_m1658315391(__this, /*hidden argument*/Component_GetComponent_TisLineRenderer_t3154350270_m1658315391_RuntimeMethod_var);
		V_0 = L_5;
		V_1 = 0;
		goto IL_008e;
	}

IL_003f:
	{
		LineRendererU5BU5D_t976293515* L_6 = __this->get_contour_line_renderer_40();
		int32_t L_7 = V_1;
		GameObject_t1113636619 * L_8 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m3707688467(L_8, /*hidden argument*/NULL);
		NullCheck(L_8);
		LineRenderer_t3154350270 * L_9 = GameObject_AddComponent_TisLineRenderer_t3154350270_m2920077551(L_8, /*hidden argument*/GameObject_AddComponent_TisLineRenderer_t3154350270_m2920077551_RuntimeMethod_var);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (LineRenderer_t3154350270 *)L_9);
		LineRendererU5BU5D_t976293515* L_10 = __this->get_contour_line_renderer_40();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		LineRenderer_t3154350270 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		LineRenderer_t3154350270 * L_14 = V_0;
		NullCheck(L_14);
		float L_15 = LineRenderer_get_startWidth_m397448491(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		LineRenderer_set_startWidth_m1093267133(L_13, L_15, /*hidden argument*/NULL);
		LineRendererU5BU5D_t976293515* L_16 = __this->get_contour_line_renderer_40();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		LineRenderer_t3154350270 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		LineRenderer_t3154350270 * L_20 = V_0;
		NullCheck(L_20);
		float L_21 = LineRenderer_get_endWidth_m2950446017(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		LineRenderer_set_endWidth_m4252049505(L_19, L_21, /*hidden argument*/NULL);
		LineRendererU5BU5D_t976293515* L_22 = __this->get_contour_line_renderer_40();
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		LineRenderer_t3154350270 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		LineRenderer_t3154350270 * L_26 = V_0;
		NullCheck(L_26);
		Material_t340375123 * L_27 = Renderer_get_material_m4171603682(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Renderer_set_material_m1157964140(L_25, L_27, /*hidden argument*/NULL);
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_008e:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->get_handsSupportedByLicence_55();
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_003f;
		}
	}
	{
		V_2 = 0;
		goto IL_0157;
	}

IL_00a1:
	{
		TransformU5BU5DU5BU5D_t2335906965* L_31 = __this->get_contour_particles_38();
		int32_t L_32 = V_2;
		TransformU5BU5D_t807237628* L_33 = (TransformU5BU5D_t807237628*)SZArrayNew(TransformU5BU5D_t807237628_il2cpp_TypeInfo_var, (uint32_t)((int32_t)200));
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (TransformU5BU5D_t807237628*)L_33);
		V_3 = 0;
		goto IL_0143;
	}

IL_00ba:
	{
		TransformU5BU5DU5BU5D_t2335906965* L_34 = __this->get_contour_particles_38();
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		TransformU5BU5D_t807237628* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		int32_t L_38 = V_3;
		Transform_t3600365921 * L_39 = __this->get_outer_dots_prefab_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Transform_t3600365921 * L_40 = Object_Instantiate_TisTransform_t3600365921_m3433092333(NULL /*static, unused*/, L_39, /*hidden argument*/Object_Instantiate_TisTransform_t3600365921_m3433092333_RuntimeMethod_var);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (Transform_t3600365921 *)L_40);
		TransformU5BU5DU5BU5D_t2335906965* L_41 = __this->get_contour_particles_38();
		int32_t L_42 = V_2;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		TransformU5BU5D_t807237628* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		int32_t L_45 = V_3;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Transform_t3600365921 * L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		TransformU5BU5DU5BU5D_t2335906965* L_48 = __this->get_contour_particles_38();
		int32_t L_49 = V_2;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		TransformU5BU5D_t807237628* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		int32_t L_52 = V_3;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		Transform_t3600365921 * L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		Vector3_t3722313464  L_55 = Transform_get_localScale_m129152068(L_54, /*hidden argument*/NULL);
		float L_56 = Random_Range_m2202990745(NULL /*static, unused*/, (0.5f), (1.5f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_57 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_55, L_56, /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_set_localScale_m3053443106(L_47, L_57, /*hidden argument*/NULL);
		TransformU5BU5DU5BU5D_t2335906965* L_58 = __this->get_contour_particles_38();
		int32_t L_59 = V_2;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		TransformU5BU5D_t807237628* L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		int32_t L_62 = V_3;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		Transform_t3600365921 * L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_64);
		GameObject_t1113636619 * L_65 = Component_get_gameObject_m442555142(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		MeshRenderer_t587009260 * L_66 = GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(L_65, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var);
		NullCheck(L_66);
		Material_t340375123 * L_67 = Renderer_get_material_m4171603682(L_66, /*hidden argument*/NULL);
		Color_t2555686324  L_68 = __this->get__outlinePointsColor_4();
		NullCheck(L_67);
		Material_set_color_m1794818007(L_67, L_68, /*hidden argument*/NULL);
		TransformU5BU5DU5BU5D_t2335906965* L_69 = __this->get_contour_particles_38();
		int32_t L_70 = V_2;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		TransformU5BU5D_t807237628* L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		int32_t L_73 = V_3;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		Transform_t3600365921 * L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		GameObject_t1113636619 * L_76 = __this->get_contour_parent_45();
		NullCheck(L_76);
		Transform_t3600365921 * L_77 = GameObject_get_transform_m1369836730(L_76, /*hidden argument*/NULL);
		NullCheck(L_75);
		Transform_SetParent_m381167889(L_75, L_77, /*hidden argument*/NULL);
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
	}

IL_0143:
	{
		int32_t L_79 = V_3;
		TransformU5BU5DU5BU5D_t2335906965* L_80 = __this->get_contour_particles_38();
		int32_t L_81 = V_2;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		TransformU5BU5D_t807237628* L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_83);
		if ((((int32_t)L_79) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_83)->max_length)))))))
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_84 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
	}

IL_0157:
	{
		int32_t L_85 = V_2;
		TransformU5BU5DU5BU5D_t2335906965* L_86 = __this->get_contour_particles_38();
		NullCheck(L_86);
		if ((((int32_t)L_85) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_86)->max_length)))))))
		{
			goto IL_00a1;
		}
	}
	{
		return;
	}
}
// System.Void ManoVisualization::CreateInnerParticles()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_CreateInnerParticles_m3288915901 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoVisualization_CreateInnerParticles_m3288915901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m3707688467(L_0, /*hidden argument*/NULL);
		__this->set_inner_parent_46(L_0);
		GameObject_t1113636619 * L_1 = __this->get_inner_parent_46();
		NullCheck(L_1);
		Object_set_name_m291480324(L_1, _stringLiteral3967813675, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_inner_parent_46();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_SetParent_m381167889(L_3, L_4, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_00ee;
	}

IL_0038:
	{
		TransformU5BU5DU5BU5D_t2335906965* L_5 = __this->get_inner_particles_39();
		int32_t L_6 = V_0;
		TransformU5BU5D_t807237628* L_7 = (TransformU5BU5D_t807237628*)SZArrayNew(TransformU5BU5D_t807237628_il2cpp_TypeInfo_var, (uint32_t)((int32_t)200));
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (TransformU5BU5D_t807237628*)L_7);
		V_1 = 0;
		goto IL_00da;
	}

IL_0051:
	{
		TransformU5BU5DU5BU5D_t2335906965* L_8 = __this->get_inner_particles_39();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		TransformU5BU5D_t807237628* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_1;
		Transform_t3600365921 * L_13 = __this->get_inner_dots_prefab_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Transform_t3600365921 * L_14 = Object_Instantiate_TisTransform_t3600365921_m3433092333(NULL /*static, unused*/, L_13, /*hidden argument*/Object_Instantiate_TisTransform_t3600365921_m3433092333_RuntimeMethod_var);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Transform_t3600365921 *)L_14);
		TransformU5BU5DU5BU5D_t2335906965* L_15 = __this->get_inner_particles_39();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		TransformU5BU5D_t807237628* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Transform_t3600365921 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		GameObject_t1113636619 * L_22 = Component_get_gameObject_m442555142(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		MeshRenderer_t587009260 * L_23 = GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(L_22, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var);
		NullCheck(L_23);
		Material_t340375123 * L_24 = Renderer_get_material_m4171603682(L_23, /*hidden argument*/NULL);
		Color_t2555686324  L_25 = __this->get__innerPointsColor_5();
		NullCheck(L_24);
		Material_set_color_m1794818007(L_24, L_25, /*hidden argument*/NULL);
		TransformU5BU5DU5BU5D_t2335906965* L_26 = __this->get_inner_particles_39();
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		TransformU5BU5D_t807237628* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Transform_t3600365921 * L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		TransformU5BU5DU5BU5D_t2335906965* L_33 = __this->get_inner_particles_39();
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		TransformU5BU5D_t807237628* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		int32_t L_37 = V_1;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Transform_t3600365921 * L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		Vector3_t3722313464  L_40 = Transform_get_localScale_m129152068(L_39, /*hidden argument*/NULL);
		float L_41 = Random_Range_m2202990745(NULL /*static, unused*/, (0.5f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_42 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_localScale_m3053443106(L_32, L_42, /*hidden argument*/NULL);
		TransformU5BU5DU5BU5D_t2335906965* L_43 = __this->get_inner_particles_39();
		int32_t L_44 = V_0;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		TransformU5BU5D_t807237628* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = V_1;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		Transform_t3600365921 * L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		GameObject_t1113636619 * L_50 = __this->get_inner_parent_46();
		NullCheck(L_50);
		Transform_t3600365921 * L_51 = GameObject_get_transform_m1369836730(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_SetParent_m381167889(L_49, L_51, /*hidden argument*/NULL);
		int32_t L_52 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_00da:
	{
		int32_t L_53 = V_1;
		TransformU5BU5DU5BU5D_t2335906965* L_54 = __this->get_inner_particles_39();
		int32_t L_55 = V_0;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		TransformU5BU5D_t807237628* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		if ((((int32_t)L_53) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_57)->max_length)))))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_58 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
	}

IL_00ee:
	{
		int32_t L_59 = V_0;
		TransformU5BU5DU5BU5D_t2335906965* L_60 = __this->get_inner_particles_39();
		NullCheck(L_60);
		if ((((int32_t)L_59) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_60)->max_length)))))))
		{
			goto IL_0038;
		}
	}
	{
		return;
	}
}
// System.Void ManoVisualization::Update()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_Update_m607741188 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoVisualization_Update_m607741188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VisualizationInfo_t4138410502  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		V_0 = 0;
		goto IL_013b;
	}

IL_0007:
	{
		ManomotionManager_t565502280 * L_0 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		HandInfoUnityU5BU5D_t4085119228* L_1 = ManomotionManager_get_Hand_infos_m3072460227(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		HandInfo_t3661823187 * L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_address_of_hand_info_0();
		TrackingInfo_t3990182144  L_4 = L_3->get_tracking_info_0();
		int32_t L_5 = V_0;
		ManoVisualization_ShowFingerTips_m2583851885(__this, L_4, L_5, /*hidden argument*/NULL);
		ManomotionManager_t565502280 * L_6 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		HandInfoUnityU5BU5D_t4085119228* L_7 = ManomotionManager_get_Hand_infos_m3072460227(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		HandInfo_t3661823187 * L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_address_of_hand_info_0();
		TrackingInfo_t3990182144  L_10 = L_9->get_tracking_info_0();
		int32_t L_11 = V_0;
		ManoVisualization_ShowFingerTipLabels_m4028085035(__this, L_10, L_11, /*hidden argument*/NULL);
		ManomotionManager_t565502280 * L_12 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		HandInfoUnityU5BU5D_t4085119228* L_13 = ManomotionManager_get_Hand_infos_m3072460227(L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		HandInfo_t3661823187 * L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->get_address_of_hand_info_0();
		TrackingInfo_t3990182144  L_16 = L_15->get_tracking_info_0();
		int32_t L_17 = V_0;
		ManoVisualization_ShowPalmCenter_m3667673413(__this, L_16, L_17, /*hidden argument*/NULL);
		ManomotionManager_t565502280 * L_18 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		HandInfoUnityU5BU5D_t4085119228* L_19 = ManomotionManager_get_Hand_infos_m3072460227(L_18, /*hidden argument*/NULL);
		int32_t L_20 = V_0;
		NullCheck(L_19);
		HandInfo_t3661823187 * L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->get_address_of_hand_info_0();
		TrackingInfo_t3990182144  L_22 = L_21->get_tracking_info_0();
		int32_t L_23 = V_0;
		ManoVisualization_ShowContour_m3583311848(__this, L_22, L_23, /*hidden argument*/NULL);
		ManomotionManager_t565502280 * L_24 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_24);
		HandInfoUnityU5BU5D_t4085119228* L_25 = ManomotionManager_get_Hand_infos_m3072460227(L_24, /*hidden argument*/NULL);
		int32_t L_26 = V_0;
		NullCheck(L_25);
		HandInfo_t3661823187 * L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->get_address_of_hand_info_0();
		TrackingInfo_t3990182144  L_28 = L_27->get_tracking_info_0();
		int32_t L_29 = V_0;
		ManoVisualization_ShowInnerPoints_m1700325034(__this, L_28, L_29, /*hidden argument*/NULL);
		ManomotionManager_t565502280 * L_30 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_30);
		HandInfoUnityU5BU5D_t4085119228* L_31 = ManomotionManager_get_Hand_infos_m3072460227(L_30, /*hidden argument*/NULL);
		int32_t L_32 = V_0;
		NullCheck(L_31);
		HandInfo_t3661823187 * L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->get_address_of_hand_info_0();
		GestureInfo_t2431102658  L_34 = L_33->get_gesture_info_1();
		int32_t L_35 = V_0;
		ManoVisualization_UpdateLineColor_m2910870940(__this, L_34, L_35, /*hidden argument*/NULL);
		ManomotionManager_t565502280 * L_36 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_36);
		HandInfoUnityU5BU5D_t4085119228* L_37 = ManomotionManager_get_Hand_infos_m3072460227(L_36, /*hidden argument*/NULL);
		int32_t L_38 = V_0;
		NullCheck(L_37);
		HandInfo_t3661823187 * L_39 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->get_address_of_hand_info_0();
		GestureInfo_t2431102658  L_40 = L_39->get_gesture_info_1();
		int32_t L_41 = V_0;
		ManoVisualization_UpdatePalmColor_m192033858(__this, L_40, L_41, /*hidden argument*/NULL);
		ManomotionManager_t565502280 * L_42 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_42);
		HandInfoUnityU5BU5D_t4085119228* L_43 = ManomotionManager_get_Hand_infos_m3072460227(L_42, /*hidden argument*/NULL);
		int32_t L_44 = V_0;
		NullCheck(L_43);
		MeshRendererU5BU5D_t2132764133* L_45 = __this->get__layer_hands_53();
		int32_t L_46 = V_0;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		MeshRenderer_t587009260 * L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		ManomotionManager_t565502280 * L_49 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		ManoVisualization_ShowLayering_m1603922788(__this, (*(HandInfoUnity_t1978403937 *)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))), L_48, L_49, /*hidden argument*/NULL);
		ManomotionManager_t565502280 * L_50 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_50);
		HandInfoUnityU5BU5D_t4085119228* L_51 = ManomotionManager_get_Hand_infos_m3072460227(L_50, /*hidden argument*/NULL);
		int32_t L_52 = V_0;
		NullCheck(L_51);
		HandInfo_t3661823187 * L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->get_address_of_hand_info_0();
		TrackingInfo_t3990182144  L_54 = L_53->get_tracking_info_0();
		int32_t L_55 = V_0;
		ManoVisualization_ShowBoundingBoxInfo_m1558519441(__this, L_54, L_55, /*hidden argument*/NULL);
		int32_t L_56 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_013b:
	{
		int32_t L_57 = V_0;
		int32_t L_58 = __this->get_handsSupportedByLicence_55();
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_0007;
		}
	}
	{
		MeshRenderer_t587009260 * L_59 = __this->get__layer_background_54();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_60 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0175;
		}
	}
	{
		ManomotionManager_t565502280 * L_61 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_61);
		VisualizationInfo_t4138410502  L_62 = ManomotionManager_get_Visualization_info_m1973646593(L_61, /*hidden argument*/NULL);
		V_1 = L_62;
		Texture2D_t3840446185 * L_63 = (&V_1)->get_rgb_image_1();
		MeshRenderer_t587009260 * L_64 = __this->get__layer_background_54();
		ManoVisualization_ShowBackground_m178765366(__this, L_63, L_64, /*hidden argument*/NULL);
	}

IL_0175:
	{
		return;
	}
}
// System.Void ManoVisualization::UpdateLineColor(GestureInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_UpdateLineColor_m2910870940 (ManoVisualization_t1421820612 * __this, GestureInfo_t2431102658  ___gesture_info0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (&___gesture_info0)->get_mano_gesture_trigger_2();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_003d;
			}
			case 1:
			{
				goto IL_00b8;
			}
			case 2:
			{
				goto IL_0042;
			}
			case 3:
			{
				goto IL_0070;
			}
			case 4:
			{
				goto IL_00a6;
			}
			case 5:
			{
				goto IL_005e;
			}
			case 6:
			{
				goto IL_0054;
			}
			case 7:
			{
				goto IL_0059;
			}
			case 8:
			{
				goto IL_0094;
			}
			case 9:
			{
				goto IL_0082;
			}
		}
	}
	{
		goto IL_00b8;
	}

IL_003d:
	{
		goto IL_00bd;
	}

IL_0042:
	{
		Color_t2555686324  L_2 = __this->get__clickLineColor_6();
		int32_t L_3 = ___index1;
		ManoVisualization_HighLightWithColor_m711876272(__this, L_2, L_3, /*hidden argument*/NULL);
		goto IL_00bd;
	}

IL_0054:
	{
		goto IL_00bd;
	}

IL_0059:
	{
		goto IL_00bd;
	}

IL_005e:
	{
		Color_t2555686324  L_4 = __this->get__grabLineColor_8();
		int32_t L_5 = ___index1;
		ManoVisualization_HighLightWithColor_m711876272(__this, L_4, L_5, /*hidden argument*/NULL);
		goto IL_00bd;
	}

IL_0070:
	{
		Color_t2555686324  L_6 = __this->get__tapLineColor_7();
		int32_t L_7 = ___index1;
		ManoVisualization_HighLightWithColor_m711876272(__this, L_6, L_7, /*hidden argument*/NULL);
		goto IL_00bd;
	}

IL_0082:
	{
		Color_t2555686324  L_8 = __this->get__releasePinchLineColor_10();
		int32_t L_9 = ___index1;
		ManoVisualization_HighLightWithColor_m711876272(__this, L_8, L_9, /*hidden argument*/NULL);
		goto IL_00bd;
	}

IL_0094:
	{
		Color_t2555686324  L_10 = __this->get__grabPinchLineColor_11();
		int32_t L_11 = ___index1;
		ManoVisualization_HighLightWithColor_m711876272(__this, L_10, L_11, /*hidden argument*/NULL);
		goto IL_00bd;
	}

IL_00a6:
	{
		Color_t2555686324  L_12 = __this->get__releaseLineColor_9();
		int32_t L_13 = ___index1;
		ManoVisualization_HighLightWithColor_m711876272(__this, L_12, L_13, /*hidden argument*/NULL);
		goto IL_00bd;
	}

IL_00b8:
	{
		goto IL_00bd;
	}

IL_00bd:
	{
		return;
	}
}
// System.Void ManoVisualization::UpdatePalmColor(GestureInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_UpdatePalmColor_m192033858 (ManoVisualization_t1421820612 * __this, GestureInfo_t2431102658  ___gesture_info0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoVisualization_UpdatePalmColor_m192033858_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (&___gesture_info0)->get_mano_gesture_continuous_1();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_0146;
			}
			case 2:
			{
				goto IL_005c;
			}
			case 3:
			{
				goto IL_0083;
			}
			case 4:
			{
				goto IL_00aa;
			}
			case 5:
			{
				goto IL_00d1;
			}
			case 6:
			{
				goto IL_00f8;
			}
			case 7:
			{
				goto IL_011f;
			}
		}
	}
	{
		goto IL_0146;
	}

IL_0035:
	{
		TransformU5BU5D_t807237628* L_2 = __this->get_palm_37();
		int32_t L_3 = ___index1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_t3600365921 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		MeshRenderer_t587009260 * L_7 = GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(L_6, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var);
		NullCheck(L_7);
		Material_t340375123 * L_8 = Renderer_get_material_m4171603682(L_7, /*hidden argument*/NULL);
		Color_t2555686324  L_9 = __this->get__baseColor_14();
		NullCheck(L_8);
		Material_set_color_m1794818007(L_8, L_9, /*hidden argument*/NULL);
		goto IL_016d;
	}

IL_005c:
	{
		TransformU5BU5D_t807237628* L_10 = __this->get_palm_37();
		int32_t L_11 = ___index1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Transform_t3600365921 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		GameObject_t1113636619 * L_14 = Component_get_gameObject_m442555142(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		MeshRenderer_t587009260 * L_15 = GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(L_14, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var);
		NullCheck(L_15);
		Material_t340375123 * L_16 = Renderer_get_material_m4171603682(L_15, /*hidden argument*/NULL);
		Color_t2555686324  L_17 = __this->get__holdColor_13();
		NullCheck(L_16);
		Material_set_color_m1794818007(L_16, L_17, /*hidden argument*/NULL);
		goto IL_016d;
	}

IL_0083:
	{
		TransformU5BU5D_t807237628* L_18 = __this->get_palm_37();
		int32_t L_19 = ___index1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Transform_t3600365921 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		GameObject_t1113636619 * L_22 = Component_get_gameObject_m442555142(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		MeshRenderer_t587009260 * L_23 = GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(L_22, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var);
		NullCheck(L_23);
		Material_t340375123 * L_24 = Renderer_get_material_m4171603682(L_23, /*hidden argument*/NULL);
		Color_t2555686324  L_25 = __this->get__openHandColor_16();
		NullCheck(L_24);
		Material_set_color_m1794818007(L_24, L_25, /*hidden argument*/NULL);
		goto IL_016d;
	}

IL_00aa:
	{
		TransformU5BU5D_t807237628* L_26 = __this->get_palm_37();
		int32_t L_27 = ___index1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		Transform_t3600365921 * L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		GameObject_t1113636619 * L_30 = Component_get_gameObject_m442555142(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		MeshRenderer_t587009260 * L_31 = GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(L_30, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var);
		NullCheck(L_31);
		Material_t340375123 * L_32 = Renderer_get_material_m4171603682(L_31, /*hidden argument*/NULL);
		Color_t2555686324  L_33 = __this->get__pinchColor_15();
		NullCheck(L_32);
		Material_set_color_m1794818007(L_32, L_33, /*hidden argument*/NULL);
		goto IL_016d;
	}

IL_00d1:
	{
		TransformU5BU5D_t807237628* L_34 = __this->get_palm_37();
		int32_t L_35 = ___index1;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		Transform_t3600365921 * L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		GameObject_t1113636619 * L_38 = Component_get_gameObject_m442555142(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		MeshRenderer_t587009260 * L_39 = GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(L_38, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var);
		NullCheck(L_39);
		Material_t340375123 * L_40 = Renderer_get_material_m4171603682(L_39, /*hidden argument*/NULL);
		Color_t2555686324  L_41 = __this->get__closedHandColor_17();
		NullCheck(L_40);
		Material_set_color_m1794818007(L_40, L_41, /*hidden argument*/NULL);
		goto IL_016d;
	}

IL_00f8:
	{
		TransformU5BU5D_t807237628* L_42 = __this->get_palm_37();
		int32_t L_43 = ___index1;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Transform_t3600365921 * L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		GameObject_t1113636619 * L_46 = Component_get_gameObject_m442555142(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		MeshRenderer_t587009260 * L_47 = GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(L_46, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var);
		NullCheck(L_47);
		Material_t340375123 * L_48 = Renderer_get_material_m4171603682(L_47, /*hidden argument*/NULL);
		Color_t2555686324  L_49 = __this->get__pointerColor_19();
		NullCheck(L_48);
		Material_set_color_m1794818007(L_48, L_49, /*hidden argument*/NULL);
		goto IL_016d;
	}

IL_011f:
	{
		TransformU5BU5D_t807237628* L_50 = __this->get_palm_37();
		int32_t L_51 = ___index1;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		Transform_t3600365921 * L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		GameObject_t1113636619 * L_54 = Component_get_gameObject_m442555142(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		MeshRenderer_t587009260 * L_55 = GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(L_54, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var);
		NullCheck(L_55);
		Material_t340375123 * L_56 = Renderer_get_material_m4171603682(L_55, /*hidden argument*/NULL);
		Color_t2555686324  L_57 = __this->get__pushColor_18();
		NullCheck(L_56);
		Material_set_color_m1794818007(L_56, L_57, /*hidden argument*/NULL);
		goto IL_016d;
	}

IL_0146:
	{
		TransformU5BU5D_t807237628* L_58 = __this->get_palm_37();
		int32_t L_59 = ___index1;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		Transform_t3600365921 * L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_61);
		GameObject_t1113636619 * L_62 = Component_get_gameObject_m442555142(L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		MeshRenderer_t587009260 * L_63 = GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(L_62, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var);
		NullCheck(L_63);
		Material_t340375123 * L_64 = Renderer_get_material_m4171603682(L_63, /*hidden argument*/NULL);
		Color_t2555686324  L_65 = __this->get__baseColor_14();
		NullCheck(L_64);
		Material_set_color_m1794818007(L_64, L_65, /*hidden argument*/NULL);
		goto IL_016d;
	}

IL_016d:
	{
		return;
	}
}
// System.Void ManoVisualization::ShowPalmCenter(TrackingInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_ShowPalmCenter_m3667673413 (ManoVisualization_t1421820612 * __this, TrackingInfo_t3990182144  ___tracking_info0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoVisualization_ShowPalmCenter_m3667673413_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		GameObject_t1113636619 * L_0 = __this->get_palmcenter_parent_48();
		bool L_1 = __this->get__show_palm_center_29();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = __this->get__show_palm_center_29();
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		TransformU5BU5D_t807237628* L_3 = __this->get_palm_37();
		int32_t L_4 = ___index1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_t3600365921 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_m3387557959(L_6, L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = (&___tracking_info0)->get_palm_center_1();
		V_0 = L_8;
		float L_9 = (&___tracking_info0)->get_relative_depth_3();
		V_1 = L_9;
		ManoUtils_t3463694697 * L_10 = ManoUtils_get_Instance_m912192132(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = V_0;
		float L_12 = V_1;
		NullCheck(L_10);
		ManoUtils_CalculateNewPosition_m854440501(L_10, L_11, L_12, /*hidden argument*/NULL);
	}

IL_004b:
	{
		return;
	}
}
// System.Void ManoVisualization::ShowBoundingBoxInfo(TrackingInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_ShowBoundingBoxInfo_m1558519441 (ManoVisualization_t1421820612 * __this, TrackingInfo_t3990182144  ___tracking_info0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		BoundingBoxUIU5BU5D_t466324417* L_0 = __this->get_bounding_box_ui_41();
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		BoundingBoxUI_t541593408 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		bool L_5 = ManoVisualization_get_Show_bounding_box_m2573940089(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m796801857(L_4, L_5, /*hidden argument*/NULL);
		bool L_6 = ManoVisualization_get_Show_bounding_box_m2573940089(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		BoundingBoxUIU5BU5D_t466324417* L_7 = __this->get_bounding_box_ui_41();
		int32_t L_8 = ___index1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		BoundingBoxUI_t541593408 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		BoundingBox_t2874819887  L_11 = (&___tracking_info0)->get_bounding_box_0();
		NullCheck(L_10);
		BoundingBoxUI_UpdateInfo_m812903281(L_10, L_11, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void ManoVisualization::ShowFingerTips(TrackingInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_ShowFingerTips_m2583851885 (ManoVisualization_t1421820612 * __this, TrackingInfo_t3990182144  ___tracking_info0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoVisualization_ShowFingerTips_m2583851885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameObject_t1113636619 * L_0 = __this->get_fingertip_parent_47();
		bool L_1 = __this->get__show_fingertips_27();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = __this->get__show_fingertips_27();
		if (!L_2)
		{
			goto IL_00d6;
		}
	}
	{
		V_0 = 0;
		goto IL_00cf;
	}

IL_0023:
	{
		Vector3U5BU5D_t1718750761* L_3 = (&___tracking_info0)->get_finger_tips_6();
		NullCheck(L_3);
		int32_t L_4 = V_0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))) <= ((int32_t)L_4)))
		{
			goto IL_00b6;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_5 = (&___tracking_info0)->get_finger_tips_6();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		float L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_x_2();
		if ((!(((float)L_7) >= ((float)(0.0f)))))
		{
			goto IL_00b6;
		}
	}
	{
		TransformU5BU5DU5BU5D_t2335906965* L_8 = __this->get_fingertips_t_42();
		int32_t L_9 = ___index1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		TransformU5BU5D_t807237628* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Transform_t3600365921 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		GameObject_t1113636619 * L_15 = Component_get_gameObject_m442555142(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_SetActive_m796801857(L_15, (bool)1, /*hidden argument*/NULL);
		ManoUtils_t3463694697 * L_16 = __this->get_mano_utils_52();
		Vector3U5BU5D_t1718750761* L_17 = (&___tracking_info0)->get_finger_tips_6();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		float L_19 = (&___tracking_info0)->get_relative_depth_3();
		NullCheck(L_16);
		Vector3_t3722313464  L_20 = ManoUtils_CalculateNewPosition_m854440501(L_16, (*(Vector3_t3722313464 *)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))), L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		TransformU5BU5DU5BU5D_t2335906965* L_21 = __this->get_fingertips_t_42();
		int32_t L_22 = ___index1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		TransformU5BU5D_t807237628* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Transform_t3600365921 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		TransformU5BU5DU5BU5D_t2335906965* L_28 = __this->get_fingertips_t_42();
		int32_t L_29 = ___index1;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		TransformU5BU5D_t807237628* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		int32_t L_32 = V_0;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		Transform_t3600365921 * L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		Vector3_t3722313464  L_35 = Transform_get_position_m36019626(L_34, /*hidden argument*/NULL);
		Vector3_t3722313464  L_36 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_37 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_35, L_36, (0.8f), /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_position_m3387557959(L_27, L_37, /*hidden argument*/NULL);
		goto IL_00cb;
	}

IL_00b6:
	{
		TransformU5BU5DU5BU5D_t2335906965* L_38 = __this->get_fingertips_t_42();
		int32_t L_39 = ___index1;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		TransformU5BU5D_t807237628* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		Transform_t3600365921 * L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		GameObject_t1113636619 * L_45 = Component_get_gameObject_m442555142(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		GameObject_SetActive_m796801857(L_45, (bool)0, /*hidden argument*/NULL);
	}

IL_00cb:
	{
		int32_t L_46 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00cf:
	{
		int32_t L_47 = V_0;
		if ((((int32_t)L_47) < ((int32_t)5)))
		{
			goto IL_0023;
		}
	}

IL_00d6:
	{
		return;
	}
}
// System.Void ManoVisualization::ShowFingerTipLabels(TrackingInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_ShowFingerTipLabels_m4028085035 (ManoVisualization_t1421820612 * __this, TrackingInfo_t3990182144  ___tracking_info0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameObject_t1113636619 * L_0 = __this->get_fingertip_label_parent_49();
		bool L_1 = __this->get__show_fingertip_labels_28();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = __this->get__show_fingertip_labels_28();
		if (!L_2)
		{
			goto IL_00ae;
		}
	}
	{
		V_0 = 0;
		goto IL_00a7;
	}

IL_0023:
	{
		Vector3U5BU5D_t1718750761* L_3 = (&___tracking_info0)->get_finger_tips_6();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		float L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->get_x_2();
		if ((!(((float)L_5) >= ((float)(0.0f)))))
		{
			goto IL_008e;
		}
	}
	{
		TransformU5BU5DU5BU5D_t2335906965* L_6 = __this->get_fingertip_labels_43();
		int32_t L_7 = ___index1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		TransformU5BU5D_t807237628* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Transform_t3600365921 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		GameObject_t1113636619 * L_13 = Component_get_gameObject_m442555142(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_SetActive_m796801857(L_13, (bool)1, /*hidden argument*/NULL);
		ManoUtils_t3463694697 * L_14 = __this->get_mano_utils_52();
		Vector3U5BU5D_t1718750761* L_15 = (&___tracking_info0)->get_finger_tips_6();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		float L_17 = (&___tracking_info0)->get_relative_depth_3();
		NullCheck(L_14);
		Vector3_t3722313464  L_18 = ManoUtils_CalculateNewPosition_m854440501(L_14, (*(Vector3_t3722313464 *)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))), L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		TransformU5BU5DU5BU5D_t2335906965* L_19 = __this->get_fingertip_labels_43();
		int32_t L_20 = ___index1;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		TransformU5BU5D_t807237628* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = V_0;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Transform_t3600365921 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		Vector3_t3722313464  L_26 = V_1;
		NullCheck(L_25);
		Transform_set_position_m3387557959(L_25, L_26, /*hidden argument*/NULL);
		goto IL_00a3;
	}

IL_008e:
	{
		TransformU5BU5DU5BU5D_t2335906965* L_27 = __this->get_fingertip_labels_43();
		int32_t L_28 = ___index1;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		TransformU5BU5D_t807237628* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = V_0;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		Transform_t3600365921 * L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		GameObject_t1113636619 * L_34 = Component_get_gameObject_m442555142(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		GameObject_SetActive_m796801857(L_34, (bool)0, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00a7:
	{
		int32_t L_36 = V_0;
		if ((((int32_t)L_36) < ((int32_t)5)))
		{
			goto IL_0023;
		}
	}

IL_00ae:
	{
		return;
	}
}
// System.Void ManoVisualization::ShowContour(TrackingInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_ShowContour_m3583311848 (ManoVisualization_t1421820612 * __this, TrackingInfo_t3990182144  ___tracking_info0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameObject_t1113636619 * L_0 = __this->get_contour_parent_45();
		bool L_1 = ManoVisualization_get_Show_contour_m3318944812(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, L_1, /*hidden argument*/NULL);
		LineRendererU5BU5D_t976293515* L_2 = __this->get_contour_line_renderer_40();
		int32_t L_3 = ___index1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		LineRenderer_t3154350270 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6 = ManoVisualization_get_Show_contour_m3318944812(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Renderer_set_enabled_m1727253150(L_5, L_6, /*hidden argument*/NULL);
		bool L_7 = ManoVisualization_get_Show_contour_m3318944812(__this, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_011d;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_8 = (&___tracking_info0)->get_contour_points_7();
		if (!L_8)
		{
			goto IL_011d;
		}
	}
	{
		LineRendererU5BU5D_t976293515* L_9 = __this->get_contour_line_renderer_40();
		int32_t L_10 = ___index1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		LineRenderer_t3154350270 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = (&___tracking_info0)->get_amount_of_contour_points_4();
		NullCheck(L_12);
		LineRenderer_set_positionCount_m2226639690(L_12, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_00ea;
	}

IL_0058:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = (&___tracking_info0)->get_amount_of_contour_points_4();
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_00d1;
		}
	}
	{
		TransformU5BU5DU5BU5D_t2335906965* L_16 = __this->get_contour_particles_38();
		int32_t L_17 = ___index1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		TransformU5BU5D_t807237628* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Transform_t3600365921 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		GameObject_t1113636619 * L_23 = Component_get_gameObject_m442555142(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		GameObject_SetActive_m796801857(L_23, (bool)1, /*hidden argument*/NULL);
		ManoUtils_t3463694697 * L_24 = __this->get_mano_utils_52();
		Vector3U5BU5D_t1718750761* L_25 = (&___tracking_info0)->get_contour_points_7();
		int32_t L_26 = V_0;
		NullCheck(L_25);
		float L_27 = (&___tracking_info0)->get_relative_depth_3();
		NullCheck(L_24);
		Vector3_t3722313464  L_28 = ManoUtils_CalculateNewPosition_m854440501(L_24, (*(Vector3_t3722313464 *)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))), L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		TransformU5BU5DU5BU5D_t2335906965* L_29 = __this->get_contour_particles_38();
		int32_t L_30 = ___index1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		TransformU5BU5D_t807237628* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		int32_t L_33 = V_0;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Transform_t3600365921 * L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		Vector3_t3722313464  L_36 = V_1;
		NullCheck(L_35);
		Transform_set_position_m3387557959(L_35, L_36, /*hidden argument*/NULL);
		LineRendererU5BU5D_t976293515* L_37 = __this->get_contour_line_renderer_40();
		int32_t L_38 = ___index1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		LineRenderer_t3154350270 * L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		int32_t L_41 = V_0;
		TransformU5BU5DU5BU5D_t2335906965* L_42 = __this->get_contour_particles_38();
		int32_t L_43 = ___index1;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		TransformU5BU5D_t807237628* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		int32_t L_46 = V_0;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		Transform_t3600365921 * L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_48);
		Vector3_t3722313464  L_49 = Transform_get_position_m36019626(L_48, /*hidden argument*/NULL);
		NullCheck(L_40);
		LineRenderer_SetPosition_m2111131184(L_40, L_41, L_49, /*hidden argument*/NULL);
		goto IL_00e6;
	}

IL_00d1:
	{
		TransformU5BU5DU5BU5D_t2335906965* L_50 = __this->get_contour_particles_38();
		int32_t L_51 = ___index1;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		TransformU5BU5D_t807237628* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		int32_t L_54 = V_0;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		Transform_t3600365921 * L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_56);
		GameObject_t1113636619 * L_57 = Component_get_gameObject_m442555142(L_56, /*hidden argument*/NULL);
		NullCheck(L_57);
		GameObject_SetActive_m796801857(L_57, (bool)0, /*hidden argument*/NULL);
	}

IL_00e6:
	{
		int32_t L_58 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
	}

IL_00ea:
	{
		int32_t L_59 = V_0;
		TransformU5BU5DU5BU5D_t2335906965* L_60 = __this->get_contour_particles_38();
		int32_t L_61 = ___index1;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		TransformU5BU5D_t807237628* L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		if ((((int32_t)L_59) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_63)->max_length)))))))
		{
			goto IL_0058;
		}
	}
	{
		LineRendererU5BU5D_t976293515* L_64 = __this->get_contour_line_renderer_40();
		int32_t L_65 = ___index1;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		LineRenderer_t3154350270 * L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		int32_t L_68 = (&___tracking_info0)->get_amount_of_contour_points_4();
		TransformU5BU5DU5BU5D_t2335906965* L_69 = __this->get_contour_particles_38();
		int32_t L_70 = ___index1;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		TransformU5BU5D_t807237628* L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_72);
		int32_t L_73 = 0;
		Transform_t3600365921 * L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_74);
		Vector3_t3722313464  L_75 = Transform_get_position_m36019626(L_74, /*hidden argument*/NULL);
		NullCheck(L_67);
		LineRenderer_SetPosition_m2111131184(L_67, L_68, L_75, /*hidden argument*/NULL);
	}

IL_011d:
	{
		return;
	}
}
// System.Void ManoVisualization::ShowInnerPoints(TrackingInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_ShowInnerPoints_m1700325034 (ManoVisualization_t1421820612 * __this, TrackingInfo_t3990182144  ___tracking_info0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoVisualization_ShowInnerPoints_m1700325034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		GameObject_t1113636619 * L_0 = __this->get_inner_parent_46();
		bool L_1 = __this->get__show_inner_26();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = __this->get__show_inner_26();
		if (!L_2)
		{
			goto IL_00c1;
		}
	}
	{
		V_0 = 0;
		goto IL_00b1;
	}

IL_0023:
	{
		Vector3U5BU5D_t1718750761* L_3 = (&___tracking_info0)->get_inner_points_8();
		if (!L_3)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (&___tracking_info0)->get_amount_of_inner_points_5();
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0089;
		}
	}
	{
		TransformU5BU5DU5BU5D_t2335906965* L_6 = __this->get_inner_particles_39();
		int32_t L_7 = ___index1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		TransformU5BU5D_t807237628* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Transform_t3600365921 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		GameObject_t1113636619 * L_13 = Component_get_gameObject_m442555142(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_SetActive_m796801857(L_13, (bool)1, /*hidden argument*/NULL);
		TransformU5BU5DU5BU5D_t2335906965* L_14 = __this->get_inner_particles_39();
		int32_t L_15 = ___index1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		TransformU5BU5D_t807237628* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Transform_t3600365921 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ManoUtils_t3463694697 * L_21 = __this->get_mano_utils_52();
		Vector3U5BU5D_t1718750761* L_22 = (&___tracking_info0)->get_inner_points_8();
		int32_t L_23 = V_0;
		NullCheck(L_22);
		float L_24 = (&___tracking_info0)->get_relative_depth_3();
		NullCheck(L_21);
		Vector3_t3722313464  L_25 = ManoUtils_CalculateNewPosition_m854440501(L_21, (*(Vector3_t3722313464 *)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))), L_24, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_m3387557959(L_20, L_25, /*hidden argument*/NULL);
		goto IL_009e;
	}

IL_0089:
	{
		TransformU5BU5DU5BU5D_t2335906965* L_26 = __this->get_inner_particles_39();
		int32_t L_27 = ___index1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		TransformU5BU5D_t807237628* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = V_0;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Transform_t3600365921 * L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		GameObject_t1113636619 * L_33 = Component_get_gameObject_m442555142(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		GameObject_SetActive_m796801857(L_33, (bool)0, /*hidden argument*/NULL);
	}

IL_009e:
	{
		goto IL_00ad;
	}

IL_00a3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1053060875, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00b1:
	{
		int32_t L_35 = V_0;
		TransformU5BU5DU5BU5D_t2335906965* L_36 = __this->get_inner_particles_39();
		int32_t L_37 = ___index1;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		TransformU5BU5D_t807237628* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		if ((((int32_t)L_35) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_39)->max_length)))))))
		{
			goto IL_0023;
		}
	}

IL_00c1:
	{
		return;
	}
}
// System.Void ManoVisualization::HighLightWithColor(UnityEngine.Color,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_HighLightWithColor_m711876272 (ManoVisualization_t1421820612 * __this, Color_t2555686324  ___color0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		LineRendererU5BU5D_t976293515* L_0 = __this->get_contour_line_renderer_40();
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		LineRenderer_t3154350270 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Color_t2555686324  L_4 = ___color0;
		NullCheck(L_3);
		LineRenderer_set_startColor_m307692187(L_3, L_4, /*hidden argument*/NULL);
		LineRendererU5BU5D_t976293515* L_5 = __this->get_contour_line_renderer_40();
		int32_t L_6 = ___index1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		LineRenderer_t3154350270 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Color_t2555686324  L_9 = ___color0;
		NullCheck(L_8);
		LineRenderer_set_endColor_m2330841811(L_8, L_9, /*hidden argument*/NULL);
		int32_t L_10 = ___index1;
		RuntimeObject* L_11 = ManoVisualization_FadeColorAfterDelay_m910648034(__this, (0.01f), L_10, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManoVisualization::ShowLayering(HandInfoUnity,UnityEngine.MeshRenderer,ManomotionManager)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_ShowLayering_m1603922788 (ManoVisualization_t1421820612 * __this, HandInfoUnity_t1978403937  ___hand_info0, MeshRenderer_t587009260 * ___layer_hands1, ManomotionManager_t565502280 * ___mano_manager2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoVisualization_ShowLayering_m1603922788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Session_t4211189121  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		MeshRenderer_t587009260 * L_0 = ___layer_hands1;
		bool L_1 = __this->get__show_hand_layer_30();
		NullCheck(L_0);
		Renderer_set_enabled_m1727253150(L_0, L_1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_layering_sphere_35();
		bool L_3 = __this->get__show_hand_layer_30();
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, L_3, /*hidden argument*/NULL);
		bool L_4 = __this->get__show_hand_layer_30();
		if (!L_4)
		{
			goto IL_0138;
		}
	}
	{
		ManomotionManager_t565502280 * L_5 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		Session_t4211189121  L_6 = ManomotionManager_get_Manomotion_Session_m1809168976(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = (&V_0)->get_orientation_4();
		V_1 = L_7;
		int32_t L_8 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_007c;
			}
			case 2:
			{
				goto IL_00a0;
			}
			case 3:
			{
				goto IL_00c4;
			}
		}
	}
	{
		goto IL_00e8;
	}

IL_0058:
	{
		MeshRenderer_t587009260 * L_9 = ___layer_hands1;
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), (-90.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_rotation_m3524318132(L_10, L_11, /*hidden argument*/NULL);
		goto IL_00ed;
	}

IL_007c:
	{
		MeshRenderer_t587009260 * L_12 = ___layer_hands1;
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_14 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_rotation_m3524318132(L_13, L_14, /*hidden argument*/NULL);
		goto IL_00ed;
	}

IL_00a0:
	{
		MeshRenderer_t587009260 * L_15 = ___layer_hands1;
		NullCheck(L_15);
		Transform_t3600365921 * L_16 = Component_get_transform_m3162698980(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_17 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_rotation_m3524318132(L_16, L_17, /*hidden argument*/NULL);
		goto IL_00ed;
	}

IL_00c4:
	{
		MeshRenderer_t587009260 * L_18 = ___layer_hands1;
		NullCheck(L_18);
		Transform_t3600365921 * L_19 = Component_get_transform_m3162698980(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_20 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), (180.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_rotation_m3524318132(L_19, L_20, /*hidden argument*/NULL);
		goto IL_00ed;
	}

IL_00e8:
	{
		goto IL_00ed;
	}

IL_00ed:
	{
		MeshRenderer_t587009260 * L_21 = ___layer_hands1;
		NullCheck(L_21);
		Material_t340375123 * L_22 = Renderer_get_material_m4171603682(L_21, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_23 = (&___hand_info0)->get_cut_rgb_1();
		NullCheck(L_22);
		Material_set_mainTexture_m544811714(L_22, L_23, /*hidden argument*/NULL);
		MeshRenderer_t587009260 * L_24 = ___layer_hands1;
		NullCheck(L_24);
		Transform_t3600365921 * L_25 = Component_get_transform_m3162698980(L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_26 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		HandInfo_t3661823187 * L_27 = (&___hand_info0)->get_address_of_hand_info_0();
		TrackingInfo_t3990182144 * L_28 = L_27->get_address_of_tracking_info_0();
		float L_29 = L_28->get_relative_depth_3();
		Vector3_t3722313464  L_30 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_26, L_29, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_localPosition_m4128471975(L_25, L_30, /*hidden argument*/NULL);
		ManoUtils_t3463694697 * L_31 = __this->get_mano_utils_52();
		MeshRenderer_t587009260 * L_32 = ___layer_hands1;
		Camera_t4157153871 * L_33 = __this->get_cam_33();
		NullCheck(L_31);
		ManoUtils_AjustBorders_m2636642314(L_31, L_32, L_33, (bool)0, /*hidden argument*/NULL);
	}

IL_0138:
	{
		return;
	}
}
// System.Void ManoVisualization::ShowBackground(UnityEngine.Texture2D,UnityEngine.MeshRenderer)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_ShowBackground_m178765366 (ManoVisualization_t1421820612 * __this, Texture2D_t3840446185 * ___backgroundTexture0, MeshRenderer_t587009260 * ___backgroundMeshRenderer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoVisualization_ShowBackground_m178765366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Session_t4211189121  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		MeshRenderer_t587009260 * L_0 = ___backgroundMeshRenderer1;
		bool L_1 = ManoVisualization_get_Show_background_layer_m1244111248(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Renderer_set_enabled_m1727253150(L_0, L_1, /*hidden argument*/NULL);
		ManomotionManager_t565502280 * L_2 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Session_t4211189121  L_3 = ManomotionManager_get_Manomotion_Session_m1809168976(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = (&V_0)->get_orientation_4();
		V_1 = L_4;
		int32_t L_5 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_0060;
			}
			case 2:
			{
				goto IL_0084;
			}
			case 3:
			{
				goto IL_00a8;
			}
		}
	}
	{
		goto IL_00cc;
	}

IL_003c:
	{
		MeshRenderer_t587009260 * L_6 = ___backgroundMeshRenderer1;
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_8 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), (-90.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_rotation_m3524318132(L_7, L_8, /*hidden argument*/NULL);
		goto IL_00d1;
	}

IL_0060:
	{
		MeshRenderer_t587009260 * L_9 = ___backgroundMeshRenderer1;
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_rotation_m3524318132(L_10, L_11, /*hidden argument*/NULL);
		goto IL_00d1;
	}

IL_0084:
	{
		MeshRenderer_t587009260 * L_12 = ___backgroundMeshRenderer1;
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_14 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_rotation_m3524318132(L_13, L_14, /*hidden argument*/NULL);
		goto IL_00d1;
	}

IL_00a8:
	{
		MeshRenderer_t587009260 * L_15 = ___backgroundMeshRenderer1;
		NullCheck(L_15);
		Transform_t3600365921 * L_16 = Component_get_transform_m3162698980(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_17 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), (180.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_rotation_m3524318132(L_16, L_17, /*hidden argument*/NULL);
		goto IL_00d1;
	}

IL_00cc:
	{
		goto IL_00d1;
	}

IL_00d1:
	{
		bool L_18 = ManoVisualization_get_Show_background_layer_m1244111248(__this, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00e8;
		}
	}
	{
		MeshRenderer_t587009260 * L_19 = ___backgroundMeshRenderer1;
		NullCheck(L_19);
		Material_t340375123 * L_20 = Renderer_get_material_m4171603682(L_19, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_21 = ___backgroundTexture0;
		NullCheck(L_20);
		Material_set_mainTexture_m544811714(L_20, L_21, /*hidden argument*/NULL);
	}

IL_00e8:
	{
		ManoUtils_t3463694697 * L_22 = __this->get_mano_utils_52();
		MeshRenderer_t587009260 * L_23 = ___backgroundMeshRenderer1;
		Camera_t4157153871 * L_24 = __this->get_cam_33();
		NullCheck(L_22);
		ManoUtils_AjustBorders_m2636642314(L_22, L_23, L_24, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator ManoVisualization::FadeColorAfterDelay(System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ManoVisualization_FadeColorAfterDelay_m910648034 (ManoVisualization_t1421820612 * __this, float ___delay0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoVisualization_FadeColorAfterDelay_m910648034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384 * V_0 = NULL;
	{
		U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384 * L_0 = (U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384 *)il2cpp_codegen_object_new(U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384_il2cpp_TypeInfo_var);
		U3CFadeColorAfterDelayU3Ec__Iterator0__ctor_m4046183837(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384 * L_1 = V_0;
		float L_2 = ___delay0;
		NullCheck(L_1);
		L_1->set_delay_1(L_2);
		U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384 * L_3 = V_0;
		int32_t L_4 = ___index1;
		NullCheck(L_3);
		L_3->set_index_2(L_4);
		U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_U24this_8(__this);
		U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384 * L_6 = V_0;
		return L_6;
	}
}
// System.Void ManoVisualization::ToggleObjectVisibility(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_ToggleObjectVisibility_m762185801 (ManoVisualization_t1421820612 * __this, GameObject_t1113636619 * ___givenObject0, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = ___givenObject0;
		GameObject_t1113636619 * L_1 = ___givenObject0;
		NullCheck(L_1);
		bool L_2 = GameObject_get_activeInHierarchy_m2006396688(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManoVisualization::InstantiateManomotionMeshes()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_InstantiateManomotionMeshes_m3412892994 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManoVisualization_InstantiateManomotionMeshes_m3412892994_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t1113636619 * V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_handsSupportedByLicence_55();
		MeshRendererU5BU5D_t2132764133* L_1 = (MeshRendererU5BU5D_t2132764133*)SZArrayNew(MeshRendererU5BU5D_t2132764133_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set__layer_hands_53(L_1);
		V_0 = 0;
		goto IL_0086;
	}

IL_0018:
	{
		GameObject_t1113636619 * L_2 = __this->get_manomotionGenericLayer_34();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_3 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_1 = L_3;
		GameObject_t1113636619 * L_4 = V_1;
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral835293500, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		Object_set_name_m291480324(L_5, L_9, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = V_1;
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		Camera_t4157153871 * L_12 = __this->get_cam_33();
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_SetParent_m381167889(L_11, L_13, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = V_1;
		NullCheck(L_14);
		Transform_t3600365921 * L_15 = GameObject_get_transform_m1369836730(L_14, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector3__ctor_m3353183577((&L_16), (0.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localPosition_m4128471975(L_15, L_16, /*hidden argument*/NULL);
		MeshRendererU5BU5D_t2132764133* L_17 = __this->get__layer_hands_53();
		int32_t L_18 = V_0;
		GameObject_t1113636619 * L_19 = V_1;
		NullCheck(L_19);
		MeshRenderer_t587009260 * L_20 = GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(L_19, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (MeshRenderer_t587009260 *)L_20);
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0086:
	{
		int32_t L_22 = V_0;
		int32_t L_23 = __this->get_handsSupportedByLicence_55();
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0018;
		}
	}
	{
		GameObject_t1113636619 * L_24 = __this->get_manomotionGenericLayer_34();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_25 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_24, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_2 = L_25;
		GameObject_t1113636619 * L_26 = V_2;
		NullCheck(L_26);
		Transform_t3600365921 * L_27 = GameObject_get_transform_m1369836730(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Object_set_name_m291480324(L_27, _stringLiteral481518672, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_28 = V_2;
		NullCheck(L_28);
		Transform_t3600365921 * L_29 = GameObject_get_transform_m1369836730(L_28, /*hidden argument*/NULL);
		Camera_t4157153871 * L_30 = __this->get_cam_33();
		NullCheck(L_30);
		Transform_t3600365921 * L_31 = Component_get_transform_m3162698980(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_SetParent_m381167889(L_29, L_31, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_32 = V_2;
		NullCheck(L_32);
		MeshRenderer_t587009260 * L_33 = GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439(L_32, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m3753719439_RuntimeMethod_var);
		__this->set__layer_background_54(L_33);
		MeshRenderer_t587009260 * L_34 = __this->get__layer_background_54();
		NullCheck(L_34);
		Transform_t3600365921 * L_35 = Component_get_transform_m3162698980(L_34, /*hidden argument*/NULL);
		Vector3_t3722313464  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Vector3__ctor_m3353183577((&L_36), (0.0f), (0.0f), (5.0f), /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_localPosition_m4128471975(L_35, L_36, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManoVisualization::ToggleTwoHandSupport()
extern "C" IL2CPP_METHOD_ATTR void ManoVisualization_ToggleTwoHandSupport_m3789986528 (ManoVisualization_t1421820612 * __this, const RuntimeMethod* method)
{
	Session_t4211189121  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Session_t4211189121  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		ManomotionManager_t565502280 * L_0 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Session_t4211189121  L_1 = ManomotionManager_get_Manomotion_Session_m1809168976(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (&V_0)->get_is_two_hands_enabled_by_developer_8();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0033;
		}
	}
	{
		ManomotionManager_t565502280 * L_3 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		ManomotionManager_Set2HandSupport_m3625082079(L_3, 0, /*hidden argument*/NULL);
		ManomotionUIManagment_t1133875195 * L_4 = __this->get_manomotionUI_56();
		NullCheck(L_4);
		ManomotionUIManagment_ShowHandButtons_m1167001449(L_4, /*hidden argument*/NULL);
		goto IL_0060;
	}

IL_0033:
	{
		ManomotionManager_t565502280 * L_5 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		Session_t4211189121  L_6 = ManomotionManager_get_Manomotion_Session_m1809168976(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = (&V_1)->get_is_two_hands_enabled_by_developer_8();
		if (L_7)
		{
			goto IL_0060;
		}
	}
	{
		ManomotionManager_t565502280 * L_8 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		ManomotionManager_Set2HandSupport_m3625082079(L_8, 1, /*hidden argument*/NULL);
		ManomotionUIManagment_t1133875195 * L_9 = __this->get_manomotionUI_56();
		NullCheck(L_9);
		ManomotionUIManagment_HideHandButtons_m3446296647(L_9, /*hidden argument*/NULL);
	}

IL_0060:
	{
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
// System.Void ManoVisualization/<FadeColorAfterDelay>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeColorAfterDelayU3Ec__Iterator0__ctor_m4046183837 (U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ManoVisualization/<FadeColorAfterDelay>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CFadeColorAfterDelayU3Ec__Iterator0_MoveNext_m3483890930 (U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeColorAfterDelayU3Ec__Iterator0_MoveNext_m3483890930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Color_t2555686324  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Color_t2555686324  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Color_t2555686324  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Color_t2555686324  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		int32_t L_0 = __this->get_U24PC_11();
		V_0 = L_0;
		__this->set_U24PC_11((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0052;
			}
		}
	}
	{
		goto IL_01cd;
	}

IL_0021:
	{
		__this->set_U3CiU3E__1_0(0);
		goto IL_01b9;
	}

IL_002d:
	{
		float L_2 = __this->get_delay_1();
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, L_2, /*hidden argument*/NULL);
		__this->set_U24current_9(L_3);
		bool L_4 = __this->get_U24disposing_10();
		if (L_4)
		{
			goto IL_004d;
		}
	}
	{
		__this->set_U24PC_11(1);
	}

IL_004d:
	{
		goto IL_01cf;
	}

IL_0052:
	{
		ManoVisualization_t1421820612 * L_5 = __this->get_U24this_8();
		NullCheck(L_5);
		LineRendererU5BU5D_t976293515* L_6 = L_5->get_contour_line_renderer_40();
		int32_t L_7 = __this->get_index_2();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		LineRenderer_t3154350270 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Color_t2555686324  L_10 = LineRenderer_get_startColor_m3971265604(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = (&V_1)->get_r_0();
		__this->set_U3CrU3E__2_3(((float)il2cpp_codegen_add((float)L_11, (float)(0.02f))));
		ManoVisualization_t1421820612 * L_12 = __this->get_U24this_8();
		NullCheck(L_12);
		LineRendererU5BU5D_t976293515* L_13 = L_12->get_contour_line_renderer_40();
		int32_t L_14 = __this->get_index_2();
		NullCheck(L_13);
		int32_t L_15 = L_14;
		LineRenderer_t3154350270 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		Color_t2555686324  L_17 = LineRenderer_get_startColor_m3971265604(L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		float L_18 = (&V_2)->get_g_1();
		__this->set_U3CgU3E__2_4(((float)il2cpp_codegen_add((float)L_18, (float)(0.02f))));
		ManoVisualization_t1421820612 * L_19 = __this->get_U24this_8();
		NullCheck(L_19);
		LineRendererU5BU5D_t976293515* L_20 = L_19->get_contour_line_renderer_40();
		int32_t L_21 = __this->get_index_2();
		NullCheck(L_20);
		int32_t L_22 = L_21;
		LineRenderer_t3154350270 * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		Color_t2555686324  L_24 = LineRenderer_get_startColor_m3971265604(L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		float L_25 = (&V_3)->get_b_2();
		__this->set_U3CbU3E__2_5(((float)il2cpp_codegen_add((float)L_25, (float)(0.02f))));
		ManoVisualization_t1421820612 * L_26 = __this->get_U24this_8();
		NullCheck(L_26);
		LineRendererU5BU5D_t976293515* L_27 = L_26->get_contour_line_renderer_40();
		int32_t L_28 = __this->get_index_2();
		NullCheck(L_27);
		int32_t L_29 = L_28;
		LineRenderer_t3154350270 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		Color_t2555686324  L_31 = LineRenderer_get_startColor_m3971265604(L_30, /*hidden argument*/NULL);
		V_4 = L_31;
		float L_32 = (&V_4)->get_a_3();
		float L_33 = Math_Max_m482125436(NULL /*static, unused*/, (1.0f), ((float)il2cpp_codegen_subtract((float)L_32, (float)(0.02f))), /*hidden argument*/NULL);
		__this->set_U3CaU3E__2_6(L_33);
		float L_34 = __this->get_U3CrU3E__2_3();
		float L_35 = __this->get_U3CgU3E__2_4();
		float L_36 = __this->get_U3CbU3E__2_5();
		float L_37 = __this->get_U3CaU3E__2_6();
		Color_t2555686324  L_38;
		memset(&L_38, 0, sizeof(L_38));
		Color__ctor_m2943235014((&L_38), L_34, L_35, L_36, L_37, /*hidden argument*/NULL);
		__this->set_U3CnewColorU3E__2_7(L_38);
		ManoVisualization_t1421820612 * L_39 = __this->get_U24this_8();
		NullCheck(L_39);
		LineRendererU5BU5D_t976293515* L_40 = L_39->get_contour_line_renderer_40();
		int32_t L_41 = __this->get_index_2();
		NullCheck(L_40);
		int32_t L_42 = L_41;
		LineRenderer_t3154350270 * L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		Color_t2555686324  L_44 = __this->get_U3CnewColorU3E__2_7();
		NullCheck(L_43);
		LineRenderer_set_startColor_m307692187(L_43, L_44, /*hidden argument*/NULL);
		ManoVisualization_t1421820612 * L_45 = __this->get_U24this_8();
		NullCheck(L_45);
		LineRendererU5BU5D_t976293515* L_46 = L_45->get_contour_line_renderer_40();
		int32_t L_47 = __this->get_index_2();
		NullCheck(L_46);
		int32_t L_48 = L_47;
		LineRenderer_t3154350270 * L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		Color_t2555686324  L_50 = __this->get_U3CnewColorU3E__2_7();
		NullCheck(L_49);
		LineRenderer_set_endColor_m2330841811(L_49, L_50, /*hidden argument*/NULL);
		float L_51 = __this->get_U3CrU3E__2_3();
		if ((!(((float)L_51) >= ((float)(1.0f)))))
		{
			goto IL_01ab;
		}
	}
	{
		float L_52 = __this->get_U3CgU3E__2_4();
		if ((!(((float)L_52) >= ((float)(1.0f)))))
		{
			goto IL_01ab;
		}
	}
	{
		float L_53 = __this->get_U3CbU3E__2_5();
		if ((!(((float)L_53) >= ((float)(1.0f)))))
		{
			goto IL_01ab;
		}
	}
	{
		float L_54 = __this->get_U3CaU3E__2_6();
		if ((!(((float)L_54) <= ((float)(0.1f)))))
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01c6;
	}

IL_01ab:
	{
		int32_t L_55 = __this->get_U3CiU3E__1_0();
		__this->set_U3CiU3E__1_0(((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1)));
	}

IL_01b9:
	{
		int32_t L_56 = __this->get_U3CiU3E__1_0();
		if ((((int32_t)L_56) < ((int32_t)((int32_t)100))))
		{
			goto IL_002d;
		}
	}

IL_01c6:
	{
		__this->set_U24PC_11((-1));
	}

IL_01cd:
	{
		return (bool)0;
	}

IL_01cf:
	{
		return (bool)1;
	}
}
// System.Object ManoVisualization/<FadeColorAfterDelay>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeColorAfterDelayU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m910779708 (U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_9();
		return L_0;
	}
}
// System.Object ManoVisualization/<FadeColorAfterDelay>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeColorAfterDelayU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3104111132 (U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_9();
		return L_0;
	}
}
// System.Void ManoVisualization/<FadeColorAfterDelay>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeColorAfterDelayU3Ec__Iterator0_Dispose_m1571051693 (U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_10((bool)1);
		__this->set_U24PC_11((-1));
		return;
	}
}
// System.Void ManoVisualization/<FadeColorAfterDelay>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeColorAfterDelayU3Ec__Iterator0_Reset_m2425417101 (U3CFadeColorAfterDelayU3Ec__Iterator0_t1138696384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeColorAfterDelayU3Ec__Iterator0_Reset_m2425417101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CFadeColorAfterDelayU3Ec__Iterator0_Reset_m2425417101_RuntimeMethod_var);
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
// System.Void ManomotionManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager__ctor_m1117834695 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManomotionManager__ctor_m1117834695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__width_13(((int32_t)320));
		__this->set__height_14(((int32_t)240));
		List_1_t128053199 * L_0 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1628857705(L_0, /*hidden argument*/List_1__ctor_m1628857705_RuntimeMethod_var);
		__this->set_processing_time_list_23(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String ManomotionManager::get_Serial_key()
extern "C" IL2CPP_METHOD_ATTR String_t* ManomotionManager_get_Serial_key_m1275877877 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_serial_key_28();
		return L_0;
	}
}
// System.Void ManomotionManager::set_Serial_key(System.String)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_set_Serial_key_m3899111490 (ManomotionManager_t565502280 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_serial_key_28(L_0);
		return;
	}
}
extern "C" void DEFAULT_CALL init(char*);
// System.Void ManomotionManager::init(System.String)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_init_m9809242 (RuntimeObject * __this /* static, unused */, String_t* ___serial_key0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___serial_key0' to native representation
	char* ____serial_key0_marshaled = NULL;
	____serial_key0_marshaled = il2cpp_codegen_marshal_string(___serial_key0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(init)(____serial_key0_marshaled);

	// Marshaling cleanup of parameter '___serial_key0' native representation
	il2cpp_codegen_marshal_free(____serial_key0_marshaled);
	____serial_key0_marshaled = NULL;

}
extern "C" void DEFAULT_CALL processFrame(HandInfo_t3661823187_marshaled_pinvoke*, HandInfo_t3661823187_marshaled_pinvoke*, Session_t4211189121 *);
// System.Void ManomotionManager::processFrame(HandInfo&,HandInfo&,Session&)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_processFrame_m46076805 (RuntimeObject * __this /* static, unused */, HandInfo_t3661823187 * ___hand_info00, HandInfo_t3661823187 * ___hand_info11, Session_t4211189121 * ___manager_info2, const RuntimeMethod* method)
{




	typedef void (DEFAULT_CALL *PInvokeFunc) (HandInfo_t3661823187_marshaled_pinvoke*, HandInfo_t3661823187_marshaled_pinvoke*, Session_t4211189121 *);

	// Marshaling of parameter '___hand_info00' to native representation
	HandInfo_t3661823187_marshaled_pinvoke* ____hand_info00_marshaled = NULL;
	HandInfo_t3661823187_marshaled_pinvoke ____hand_info00_marshaled_dereferenced = {};
	HandInfo_t3661823187_marshal_pinvoke(*___hand_info00, ____hand_info00_marshaled_dereferenced);
	____hand_info00_marshaled = &____hand_info00_marshaled_dereferenced;

	// Marshaling of parameter '___hand_info11' to native representation
	HandInfo_t3661823187_marshaled_pinvoke* ____hand_info11_marshaled = NULL;
	HandInfo_t3661823187_marshaled_pinvoke ____hand_info11_marshaled_dereferenced = {};
	HandInfo_t3661823187_marshal_pinvoke(*___hand_info11, ____hand_info11_marshaled_dereferenced);
	____hand_info11_marshaled = &____hand_info11_marshaled_dereferenced;

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(processFrame)(____hand_info00_marshaled, ____hand_info11_marshaled, ___manager_info2);

	// Marshaling of parameter '___hand_info00' back from native representation
	HandInfo_t3661823187  _____hand_info00_marshaled_unmarshaled_dereferenced;
	memset(&_____hand_info00_marshaled_unmarshaled_dereferenced, 0, sizeof(_____hand_info00_marshaled_unmarshaled_dereferenced));
	HandInfo_t3661823187_marshal_pinvoke_back(*____hand_info00_marshaled, _____hand_info00_marshaled_unmarshaled_dereferenced);
	*___hand_info00 = _____hand_info00_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___hand_info00' native representation
	HandInfo_t3661823187_marshal_pinvoke_cleanup(*____hand_info00_marshaled);

	// Marshaling of parameter '___hand_info11' back from native representation
	HandInfo_t3661823187  _____hand_info11_marshaled_unmarshaled_dereferenced;
	memset(&_____hand_info11_marshaled_unmarshaled_dereferenced, 0, sizeof(_____hand_info11_marshaled_unmarshaled_dereferenced));
	HandInfo_t3661823187_marshal_pinvoke_back(*____hand_info11_marshaled, _____hand_info11_marshaled_unmarshaled_dereferenced);
	*___hand_info11 = _____hand_info11_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___hand_info11' native representation
	HandInfo_t3661823187_marshal_pinvoke_cleanup(*____hand_info11_marshaled);

}
extern "C" void DEFAULT_CALL calibrate();
// System.Void ManomotionManager::calibrate()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_calibrate_m554122296 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(calibrate)();

}
extern "C" void DEFAULT_CALL setFrameArray(Color32_t2600501292 *);
// System.Void ManomotionManager::setFrameArray(UnityEngine.Color32[])
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_setFrameArray_m3657584943 (RuntimeObject * __this /* static, unused */, Color32U5BU5D_t3850468773* ___frame0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Color32_t2600501292 *);

	// Marshaling of parameter '___frame0' to native representation
	Color32_t2600501292 * ____frame0_marshaled = NULL;
	if (___frame0 != NULL)
	{
		____frame0_marshaled = reinterpret_cast<Color32_t2600501292 *>((___frame0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(setFrameArray)(____frame0_marshaled);

}
extern "C" void DEFAULT_CALL setMRFrameArray(Color32_t2600501292 *, Color32_t2600501292 *);
// System.Void ManomotionManager::setMRFrameArray(UnityEngine.Color32[],UnityEngine.Color32[])
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_setMRFrameArray_m4214107443 (RuntimeObject * __this /* static, unused */, Color32U5BU5D_t3850468773* ___frame00, Color32U5BU5D_t3850468773* ___frame11, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Color32_t2600501292 *, Color32_t2600501292 *);

	// Marshaling of parameter '___frame00' to native representation
	Color32_t2600501292 * ____frame00_marshaled = NULL;
	if (___frame00 != NULL)
	{
		____frame00_marshaled = reinterpret_cast<Color32_t2600501292 *>((___frame00)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___frame11' to native representation
	Color32_t2600501292 * ____frame11_marshaled = NULL;
	if (___frame11 != NULL)
	{
		____frame11_marshaled = reinterpret_cast<Color32_t2600501292 *>((___frame11)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(setMRFrameArray)(____frame00_marshaled, ____frame11_marshaled);

}
extern "C" void DEFAULT_CALL setResolution(int32_t, int32_t);
// System.Void ManomotionManager::setResolution(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_setResolution_m4042487670 (RuntimeObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(setResolution)(___width0, ___height1);

}
extern "C" void DEFAULT_CALL setImageBinary(Color32_t2600501292 *);
// System.Void ManomotionManager::setImageBinary(UnityEngine.Color32[])
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_setImageBinary_m3813903237 (RuntimeObject * __this /* static, unused */, Color32U5BU5D_t3850468773* ___frame0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Color32_t2600501292 *);

	// Marshaling of parameter '___frame0' to native representation
	Color32_t2600501292 * ____frame0_marshaled = NULL;
	if (___frame0 != NULL)
	{
		____frame0_marshaled = reinterpret_cast<Color32_t2600501292 *>((___frame0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(setImageBinary)(____frame0_marshaled);

}
// System.Int32 ManomotionManager::get_Processing_time()
extern "C" IL2CPP_METHOD_ATTR int32_t ManomotionManager_get_Processing_time_m755508692 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__processing_time_16();
		return L_0;
	}
}
// System.Int32 ManomotionManager::get_Fps()
extern "C" IL2CPP_METHOD_ATTR int32_t ManomotionManager_get_Fps_m499303649 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__fps_15();
		return L_0;
	}
}
// System.Int32 ManomotionManager::get_Height()
extern "C" IL2CPP_METHOD_ATTR int32_t ManomotionManager_get_Height_m1332900733 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__height_14();
		return L_0;
	}
}
// System.Int32 ManomotionManager::get_Width()
extern "C" IL2CPP_METHOD_ATTR int32_t ManomotionManager_get_Width_m1623342980 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__width_13();
		return L_0;
	}
}
// System.Int32 ManomotionManager::get_Frame_number()
extern "C" IL2CPP_METHOD_ATTR int32_t ManomotionManager_get_Frame_number_m1877816147 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__frame_number_12();
		return L_0;
	}
}
// VisualizationInfo ManomotionManager::get_Visualization_info()
extern "C" IL2CPP_METHOD_ATTR VisualizationInfo_t4138410502  ManomotionManager_get_Visualization_info_m1973646593 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	{
		VisualizationInfo_t4138410502  L_0 = __this->get_visualization_info_10();
		return L_0;
	}
}
// HandInfoUnity[] ManomotionManager::get_Hand_infos()
extern "C" IL2CPP_METHOD_ATTR HandInfoUnityU5BU5D_t4085119228* ManomotionManager_get_Hand_infos_m3072460227 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	{
		HandInfoUnityU5BU5D_t4085119228* L_0 = __this->get_hand_infos_9();
		return L_0;
	}
}
// Session ManomotionManager::get_Manomotion_Session()
extern "C" IL2CPP_METHOD_ATTR Session_t4211189121  ManomotionManager_get_Manomotion_Session_m1809168976 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	{
		Session_t4211189121  L_0 = __this->get_manomotion_Session_11();
		return L_0;
	}
}
// System.Void ManomotionManager::set_Manomotion_Session(Session)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_set_Manomotion_Session_m1350783776 (ManomotionManager_t565502280 * __this, Session_t4211189121  ___value0, const RuntimeMethod* method)
{
	{
		Session_t4211189121  L_0 = ___value0;
		__this->set_manomotion_Session_11(L_0);
		return;
	}
}
// ManomotionManager ManomotionManager::get_Instance()
extern "C" IL2CPP_METHOD_ATTR ManomotionManager_t565502280 * ManomotionManager_get_Instance_m1503785506 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManomotionManager_get_Instance_m1503785506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ManomotionManager_t565502280 * L_0 = ((ManomotionManager_t565502280_StaticFields*)il2cpp_codegen_static_fields_for(ManomotionManager_t565502280_il2cpp_TypeInfo_var))->get_instance_4();
		return L_0;
	}
}
// System.Boolean ManomotionManager::get_HasReceivedAFrame()
extern "C" IL2CPP_METHOD_ATTR bool ManomotionManager_get_HasReceivedAFrame_m2315111154 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_hasReceivedAFrame_30();
		return L_0;
	}
}
// System.Void ManomotionManager::set_HasReceivedAFrame(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_set_HasReceivedAFrame_m1821749278 (ManomotionManager_t565502280 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_hasReceivedAFrame_30(L_0);
		return;
	}
}
// System.Void ManomotionManager::SetSelectedHand(SelectedHand)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetSelectedHand_m4148517899 (ManomotionManager_t565502280 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		Session_t4211189121 * L_0 = __this->get_address_of_manomotion_Session_11();
		int32_t L_1 = ___value0;
		L_0->set_hand_selection_6(L_1);
		return;
	}
}
// System.Void ManomotionManager::Awake()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_Awake_m3342334431 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManomotionManager_Awake_m3342334431_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ManomotionManager_t565502280 * L_0 = ((ManomotionManager_t565502280_StaticFields*)il2cpp_codegen_static_fields_for(ManomotionManager_t565502280_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		((ManomotionManager_t565502280_StaticFields*)il2cpp_codegen_static_fields_for(ManomotionManager_t565502280_il2cpp_TypeInfo_var))->set_instance_4(__this);
		goto IL_0030;
	}

IL_001b:
	{
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral3242180649, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void ManomotionManager::Start()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_Start_m3764941935 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	{
		ManomotionManager_StartWebCamTexture_m758989726(__this, /*hidden argument*/NULL);
		ManomotionManager_PickResolution_m1780225526(__this, ((int32_t)320), ((int32_t)240), /*hidden argument*/NULL);
		ManomotionManager_SetUnityConditions_m2179074196(__this, /*hidden argument*/NULL);
		__this->set__initialized_19((bool)1);
		return;
	}
}
// System.Void ManomotionManager::SetCalibration(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetCalibration_m846407318 (ManomotionManager_t565502280 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		Session_t4211189121 * L_0 = __this->get_address_of_manomotion_Session_11();
		int32_t L_1 = ___value0;
		L_0->set_calibration_value_5(L_1);
		return;
	}
}
// System.Void ManomotionManager::StartWebCamTexture()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_StartWebCamTexture_m758989726 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManomotionManager_StartWebCamTexture_m758989726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebCamDeviceU5BU5D_t4294070825* L_0 = WebCamTexture_get_devices_m844246756(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = WebCamDevice_get_name_m3782173082((WebCamDevice_t1322781432 *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		int32_t L_2 = __this->get__width_13();
		int32_t L_3 = __this->get__height_14();
		WebCamTexture_t1514609158 * L_4 = (WebCamTexture_t1514609158 *)il2cpp_codegen_object_new(WebCamTexture_t1514609158_il2cpp_TypeInfo_var);
		WebCamTexture__ctor_m2270899567(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set__mCamera_20(L_4);
		WebCamTexture_t1514609158 * L_5 = __this->get__mCamera_20();
		NullCheck(L_5);
		WebCamTexture_set_requestedFPS_m1422816314(L_5, (120.0f), /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_6 = __this->get__mCamera_20();
		NullCheck(L_6);
		WebCamTexture_Play_m3866603461(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionManager::PickResolution(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_PickResolution_m1780225526 (ManomotionManager_t565502280 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width0;
		__this->set__width_13(L_0);
		int32_t L_1 = ___height1;
		__this->set__height_14(L_1);
		ManomotionManager_InstantiateManagerInfo_m3467965827(__this, /*hidden argument*/NULL);
		ManomotionManager_InstantiateHandInfos_m1635090002(__this, /*hidden argument*/NULL);
		ManomotionManager_InstantiateVisualisationInfo_m570477272(__this, /*hidden argument*/NULL);
		ManomotionManager_InitiateTextures_m1798072223(__this, /*hidden argument*/NULL);
		ManomotionManager_InitiateLibrary_m1366715823(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionManager::InstantiateManagerInfo()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_InstantiateManagerInfo_m3467965827 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	Session_t4211189121  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Session_t4211189121 ));
		Session_t4211189121  L_0 = V_0;
		__this->set_manomotion_Session_11(L_0);
		Session_t4211189121 * L_1 = __this->get_address_of_manomotion_Session_11();
		L_1->set_background_mode_2(0);
		Session_t4211189121 * L_2 = __this->get_address_of_manomotion_Session_11();
		L_2->set_current_plataform_1(1);
		Session_t4211189121 * L_3 = __this->get_address_of_manomotion_Session_11();
		L_3->set_flag_0(0);
		Session_t4211189121 * L_4 = __this->get_address_of_manomotion_Session_11();
		L_4->set_image_format_3(0);
		Session_t4211189121 * L_5 = __this->get_address_of_manomotion_Session_11();
		L_5->set_orientation_4(3);
		Session_t4211189121 * L_6 = __this->get_address_of_manomotion_Session_11();
		L_6->set_is_two_hands_enabled_by_developer_8(0);
		return;
	}
}
// System.Void ManomotionManager::InstantiateHandInfos()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_InstantiateHandInfos_m1635090002 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManomotionManager_InstantiateHandInfos_m1635090002_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HandInfo_t3661823187  V_1;
	memset(&V_1, 0, sizeof(V_1));
	GestureInfo_t2431102658  V_2;
	memset(&V_2, 0, sizeof(V_2));
	TrackingInfo_t3990182144  V_3;
	memset(&V_3, 0, sizeof(V_3));
	BoundingBox_t2874819887  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		HandInfoUnityU5BU5D_t4085119228* L_0 = (HandInfoUnityU5BU5D_t4085119228*)SZArrayNew(HandInfoUnityU5BU5D_t4085119228_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_hand_infos_9(L_0);
		V_0 = 0;
		goto IL_024a;
	}

IL_0013:
	{
		HandInfoUnityU5BU5D_t4085119228* L_1 = __this->get_hand_infos_9();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		il2cpp_codegen_initobj((&V_1), sizeof(HandInfo_t3661823187 ));
		HandInfo_t3661823187  L_3 = V_1;
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->set_hand_info_0(L_3);
		HandInfoUnityU5BU5D_t4085119228* L_4 = __this->get_hand_infos_9();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		HandInfo_t3661823187 * L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_address_of_hand_info_0();
		L_6->set_hand_3(0);
		HandInfoUnityU5BU5D_t4085119228* L_7 = __this->get_hand_infos_9();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		HandInfo_t3661823187 * L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_address_of_hand_info_0();
		L_9->set_warning_2(0);
		HandInfoUnityU5BU5D_t4085119228* L_10 = __this->get_hand_infos_9();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		HandInfo_t3661823187 * L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_address_of_hand_info_0();
		il2cpp_codegen_initobj((&V_2), sizeof(GestureInfo_t2431102658 ));
		GestureInfo_t2431102658  L_13 = V_2;
		L_12->set_gesture_info_1(L_13);
		HandInfoUnityU5BU5D_t4085119228* L_14 = __this->get_hand_infos_9();
		int32_t L_15 = V_0;
		NullCheck(L_14);
		HandInfo_t3661823187 * L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->get_address_of_hand_info_0();
		GestureInfo_t2431102658 * L_17 = L_16->get_address_of_gesture_info_1();
		L_17->set_hand_side_4(0);
		HandInfoUnityU5BU5D_t4085119228* L_18 = __this->get_hand_infos_9();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		HandInfo_t3661823187 * L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_address_of_hand_info_0();
		GestureInfo_t2431102658 * L_21 = L_20->get_address_of_gesture_info_1();
		L_21->set_mano_class_0((-1));
		HandInfoUnityU5BU5D_t4085119228* L_22 = __this->get_hand_infos_9();
		int32_t L_23 = V_0;
		NullCheck(L_22);
		HandInfo_t3661823187 * L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->get_address_of_hand_info_0();
		GestureInfo_t2431102658 * L_25 = L_24->get_address_of_gesture_info_1();
		L_25->set_mano_gesture_continuous_1((-1));
		HandInfoUnityU5BU5D_t4085119228* L_26 = __this->get_hand_infos_9();
		int32_t L_27 = V_0;
		NullCheck(L_26);
		HandInfo_t3661823187 * L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->get_address_of_hand_info_0();
		GestureInfo_t2431102658 * L_29 = L_28->get_address_of_gesture_info_1();
		L_29->set_mano_gesture_trigger_2((-1));
		HandInfoUnityU5BU5D_t4085119228* L_30 = __this->get_hand_infos_9();
		int32_t L_31 = V_0;
		NullCheck(L_30);
		HandInfo_t3661823187 * L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->get_address_of_hand_info_0();
		GestureInfo_t2431102658 * L_33 = L_32->get_address_of_gesture_info_1();
		L_33->set_state_3(0);
		HandInfoUnityU5BU5D_t4085119228* L_34 = __this->get_hand_infos_9();
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = __this->get__width_13();
		int32_t L_37 = __this->get__height_14();
		Texture2D_t3840446185 * L_38 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_38, L_36, L_37, /*hidden argument*/NULL);
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->set_cut_rgb_1(L_38);
		HandInfoUnityU5BU5D_t4085119228* L_39 = __this->get_hand_infos_9();
		int32_t L_40 = V_0;
		NullCheck(L_39);
		HandInfo_t3661823187 * L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_address_of_hand_info_0();
		il2cpp_codegen_initobj((&V_3), sizeof(TrackingInfo_t3990182144 ));
		TrackingInfo_t3990182144  L_42 = V_3;
		L_41->set_tracking_info_0(L_42);
		HandInfoUnityU5BU5D_t4085119228* L_43 = __this->get_hand_infos_9();
		int32_t L_44 = V_0;
		NullCheck(L_43);
		HandInfo_t3661823187 * L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->get_address_of_hand_info_0();
		TrackingInfo_t3990182144 * L_46 = L_45->get_address_of_tracking_info_0();
		il2cpp_codegen_initobj((&V_4), sizeof(BoundingBox_t2874819887 ));
		BoundingBox_t2874819887  L_47 = V_4;
		L_46->set_bounding_box_0(L_47);
		HandInfoUnityU5BU5D_t4085119228* L_48 = __this->get_hand_infos_9();
		int32_t L_49 = V_0;
		NullCheck(L_48);
		HandInfo_t3661823187 * L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->get_address_of_hand_info_0();
		TrackingInfo_t3990182144 * L_51 = L_50->get_address_of_tracking_info_0();
		BoundingBox_t2874819887 * L_52 = L_51->get_address_of_bounding_box_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_53 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_52->set_top_left_0(L_53);
		HandInfoUnityU5BU5D_t4085119228* L_54 = __this->get_hand_infos_9();
		int32_t L_55 = V_0;
		NullCheck(L_54);
		HandInfo_t3661823187 * L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->get_address_of_hand_info_0();
		TrackingInfo_t3990182144 * L_57 = L_56->get_address_of_tracking_info_0();
		BoundingBox_t2874819887 * L_58 = L_57->get_address_of_bounding_box_0();
		L_58->set_height_2((0.0f));
		HandInfoUnityU5BU5D_t4085119228* L_59 = __this->get_hand_infos_9();
		int32_t L_60 = V_0;
		NullCheck(L_59);
		HandInfo_t3661823187 * L_61 = ((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60)))->get_address_of_hand_info_0();
		TrackingInfo_t3990182144 * L_62 = L_61->get_address_of_tracking_info_0();
		BoundingBox_t2874819887 * L_63 = L_62->get_address_of_bounding_box_0();
		L_63->set_width_1((0.0f));
		HandInfoUnityU5BU5D_t4085119228* L_64 = __this->get_hand_infos_9();
		int32_t L_65 = V_0;
		NullCheck(L_64);
		HandInfo_t3661823187 * L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->get_address_of_hand_info_0();
		TrackingInfo_t3990182144 * L_67 = L_66->get_address_of_tracking_info_0();
		Vector3U5BU5D_t1718750761* L_68 = (Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)5);
		L_67->set_finger_tips_6(L_68);
		HandInfoUnityU5BU5D_t4085119228* L_69 = __this->get_hand_infos_9();
		int32_t L_70 = V_0;
		NullCheck(L_69);
		HandInfo_t3661823187 * L_71 = ((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->get_address_of_hand_info_0();
		TrackingInfo_t3990182144 * L_72 = L_71->get_address_of_tracking_info_0();
		Vector3U5BU5D_t1718750761* L_73 = (Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)((int32_t)200));
		L_72->set_inner_points_8(L_73);
		HandInfoUnityU5BU5D_t4085119228* L_74 = __this->get_hand_infos_9();
		int32_t L_75 = V_0;
		NullCheck(L_74);
		HandInfo_t3661823187 * L_76 = ((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->get_address_of_hand_info_0();
		TrackingInfo_t3990182144 * L_77 = L_76->get_address_of_tracking_info_0();
		Vector3U5BU5D_t1718750761* L_78 = (Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)((int32_t)200));
		L_77->set_contour_points_7(L_78);
		int32_t L_79 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
	}

IL_024a:
	{
		int32_t L_80 = V_0;
		HandInfoUnityU5BU5D_t4085119228* L_81 = __this->get_hand_infos_9();
		NullCheck(L_81);
		if ((((int32_t)L_80) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_81)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Void ManomotionManager::InstantiateVisualisationInfo()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_InstantiateVisualisationInfo_m570477272 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManomotionManager_InstantiateVisualisationInfo_m570477272_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VisualizationInfo_t4138410502  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VisualizationInfo_t4138410502 ));
		VisualizationInfo_t4138410502  L_0 = V_0;
		__this->set_visualization_info_10(L_0);
		VisualizationInfo_t4138410502 * L_1 = __this->get_address_of_visualization_info_10();
		int32_t L_2 = __this->get__width_13();
		int32_t L_3 = __this->get__height_14();
		Texture2D_t3840446185 * L_4 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_4, L_2, L_3, /*hidden argument*/NULL);
		L_1->set_binary_image_0(L_4);
		VisualizationInfo_t4138410502 * L_5 = __this->get_address_of_visualization_info_10();
		int32_t L_6 = __this->get__width_13();
		int32_t L_7 = __this->get__height_14();
		Texture2D_t3840446185 * L_8 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_8, L_6, L_7, /*hidden argument*/NULL);
		L_5->set_rgb_image_1(L_8);
		return;
	}
}
// System.Void ManomotionManager::InitiateTextures()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_InitiateTextures_m1798072223 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManomotionManager_InitiateTextures_m1798072223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		VisualizationInfo_t4138410502 * L_0 = __this->get_address_of_visualization_info_10();
		int32_t L_1 = __this->get__width_13();
		int32_t L_2 = __this->get__height_14();
		Texture2D_t3840446185 * L_3 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_3, L_1, L_2, /*hidden argument*/NULL);
		L_0->set_binary_image_0(L_3);
		V_0 = 0;
		goto IL_0049;
	}

IL_0023:
	{
		HandInfoUnityU5BU5D_t4085119228* L_4 = __this->get_hand_infos_9();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = __this->get__width_13();
		int32_t L_7 = __this->get__height_14();
		Texture2D_t3840446185 * L_8 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_8, L_6, L_7, /*hidden argument*/NULL);
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->set_cut_rgb_1(L_8);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0049:
	{
		int32_t L_10 = V_0;
		HandInfoUnityU5BU5D_t4085119228* L_11 = __this->get_hand_infos_9();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		VisualizationInfo_t4138410502 * L_12 = __this->get_address_of_visualization_info_10();
		int32_t L_13 = __this->get__width_13();
		int32_t L_14 = __this->get__height_14();
		Texture2D_t3840446185 * L_15 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_15, L_13, L_14, /*hidden argument*/NULL);
		L_12->set_rgb_image_1(L_15);
		VisualizationInfo_t4138410502 * L_16 = __this->get_address_of_visualization_info_10();
		Texture2D_t3840446185 * L_17 = L_16->get_rgb_image_1();
		NullCheck(L_17);
		Texture2D_Apply_m2271746283(L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionManager::InitiateLibrary()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_InitiateLibrary_m1366715823 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManomotionManager_InitiateLibrary_m1366715823_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ManomotionManager_ForcePermissionRequest_m26419763(__this, /*hidden argument*/NULL);
		String_t* L_0 = __this->get_serial_key_28();
		String_t* L_1 = Application_get_identifier_m495053118(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral3891636781, L_0, _stringLiteral2382919665, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		String_t* L_3 = __this->get_serial_key_28();
		ManomotionManager_Init_m3886999909(__this, L_3, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral640906131, /*hidden argument*/NULL);
		ManomotionManager_SetVariables_m298084323(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionManager::SetVariables()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetVariables_m298084323 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	{
		ManomotionManager_SetManoManagerVariables_m667905901(__this, /*hidden argument*/NULL);
		ManomotionManager_SetVisualizationInfo_m3407118122(__this, /*hidden argument*/NULL);
		ManomotionManager_SetHandInfo_m1989486101(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionManager::SetHandInfo()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetHandInfo_m1989486101 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManomotionManager_SetHandInfo_m1989486101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__width_13();
		int32_t L_1 = __this->get__height_14();
		Color32U5BU5D_t3850468773* L_2 = (Color32U5BU5D_t3850468773*)SZArrayNew(Color32U5BU5D_t3850468773_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)));
		__this->set__MRPixels0_25(L_2);
		int32_t L_3 = __this->get__width_13();
		int32_t L_4 = __this->get__height_14();
		Color32U5BU5D_t3850468773* L_5 = (Color32U5BU5D_t3850468773*)SZArrayNew(Color32U5BU5D_t3850468773_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_4)));
		__this->set__MRPixels1_26(L_5);
		ManomotionManager_SetMRFrameArray_m1986822829(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionManager::SetVisualizationInfo()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetVisualizationInfo_m3407118122 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManomotionManager_SetVisualizationInfo_m3407118122_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__width_13();
		int32_t L_1 = __this->get__height_14();
		Color32U5BU5D_t3850468773* L_2 = (Color32U5BU5D_t3850468773*)SZArrayNew(Color32U5BU5D_t3850468773_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)));
		__this->set__pixels_24(L_2);
		int32_t L_3 = __this->get__width_13();
		int32_t L_4 = __this->get__height_14();
		Color32U5BU5D_t3850468773* L_5 = (Color32U5BU5D_t3850468773*)SZArrayNew(Color32U5BU5D_t3850468773_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_4)));
		__this->set__binary_frame_320_27(L_5);
		ManomotionManager_SetImageBinaries_m947268539(__this, /*hidden argument*/NULL);
		Color32U5BU5D_t3850468773* L_6 = __this->get__pixels_24();
		ManomotionManager_SetFrameArray_m3794714405(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionManager::SetManoManagerVariables()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetManoManagerVariables_m667905901 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManomotionManager_SetManoManagerVariables_m667905901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Session_t4211189121 * L_0 = __this->get_address_of_manomotion_Session_11();
		L_0->set_hand_selection_6(1);
		int32_t L_1 = __this->get__width_13();
		int32_t L_2 = __this->get__height_14();
		ManomotionManager_SetResolution_m2078261478(__this, L_1, L_2, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_3 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral228252146);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral228252146);
		ObjectU5BU5D_t2843939325* L_5 = L_4;
		int32_t L_6 = __this->get__width_13();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_5;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral3793920202);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3793920202);
		ObjectU5BU5D_t2843939325* L_10 = L_9;
		int32_t L_11 = __this->get__height_14();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m2971454694(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionManager::SetUnityConditions()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetUnityConditions_m2179074196 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	{
		Application_set_targetFrameRate_m3682352535(NULL /*static, unused*/, ((int32_t)300), /*hidden argument*/NULL);
		Screen_set_sleepTimeout_m2277210665(NULL /*static, unused*/, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionManager::ForcePermissionRequest()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_ForcePermissionRequest_m26419763 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ManomotionManager::Init(System.String)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_Init_m3886999909 (ManomotionManager_t565502280 * __this, String_t* ___serial_key0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___serial_key0;
		ManomotionManager_init_m9809242(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionManager::SetImageBinaries()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetImageBinaries_m947268539 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	{
		Color32U5BU5D_t3850468773* L_0 = __this->get__binary_frame_320_27();
		ManomotionManager_setImageBinary_m3813903237(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionManager::SetResolution(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetResolution_m2078261478 (ManomotionManager_t565502280 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		ManomotionManager_setResolution_m4042487670(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionManager::SetFrameArray(UnityEngine.Color32[])
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetFrameArray_m3794714405 (ManomotionManager_t565502280 * __this, Color32U5BU5D_t3850468773* ___pixels0, const RuntimeMethod* method)
{
	{
		Color32U5BU5D_t3850468773* L_0 = ___pixels0;
		ManomotionManager_setFrameArray_m3657584943(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionManager::SetMRFrameArray()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetMRFrameArray_m1986822829 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	{
		Color32U5BU5D_t3850468773* L_0 = __this->get__MRPixels0_25();
		Color32U5BU5D_t3850468773* L_1 = __this->get__MRPixels1_26();
		ManomotionManager_setMRFrameArray_m4214107443(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionManager::Update()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_Update_m408114061 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManomotionManager_Update_m408114061_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__initialized_19();
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		WebCamTexture_t1514609158 * L_1 = __this->get__mCamera_20();
		NullCheck(L_1);
		bool L_2 = WebCamTexture_get_isPlaying_m3525118025(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		WebCamTexture_t1514609158 * L_3 = __this->get__mCamera_20();
		NullCheck(L_3);
		WebCamTexture_Play_m3866603461(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral604406464, /*hidden argument*/NULL);
		goto IL_0053;
	}

IL_0035:
	{
		ManomotionManager_UpdateOrientation_m3935688125(__this, /*hidden argument*/NULL);
		ManomotionManager_CalculateFPSAndProcessingTime_m1536902857(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(4 /* System.Void ManomotionManager::UpdatePixelValues() */, __this);
		ManomotionManager_ProcessManomotion_m2809079058(__this, /*hidden argument*/NULL);
		ManomotionManager_UpdateTexturesWithNewInfo_m3893848213(__this, /*hidden argument*/NULL);
	}

IL_0053:
	{
		goto IL_0062;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral2553712224, /*hidden argument*/NULL);
	}

IL_0062:
	{
		return;
	}
}
// System.Void ManomotionManager::UpdateOrientation()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_UpdateOrientation_m3935688125 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManomotionManager_UpdateOrientation_m3935688125_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_deviceOrientation_m1569488603(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_0047;
			}
			case 3:
			{
				goto IL_005c;
			}
			case 4:
			{
				goto IL_0071;
			}
			case 5:
			{
				goto IL_0086;
			}
			case 6:
			{
				goto IL_008b;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_002d:
	{
		goto IL_0095;
	}

IL_0032:
	{
		Session_t4211189121 * L_2 = __this->get_address_of_manomotion_Session_11();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_3 = Input_get_deviceOrientation_m1569488603(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_2->set_orientation_4(L_3);
		goto IL_0095;
	}

IL_0047:
	{
		Session_t4211189121 * L_4 = __this->get_address_of_manomotion_Session_11();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_5 = Input_get_deviceOrientation_m1569488603(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_4->set_orientation_4(L_5);
		goto IL_0095;
	}

IL_005c:
	{
		Session_t4211189121 * L_6 = __this->get_address_of_manomotion_Session_11();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_7 = Input_get_deviceOrientation_m1569488603(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_6->set_orientation_4(L_7);
		goto IL_0095;
	}

IL_0071:
	{
		Session_t4211189121 * L_8 = __this->get_address_of_manomotion_Session_11();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_9 = Input_get_deviceOrientation_m1569488603(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_8->set_orientation_4(L_9);
		goto IL_0095;
	}

IL_0086:
	{
		goto IL_0095;
	}

IL_008b:
	{
		goto IL_0095;
	}

IL_0090:
	{
		goto IL_0095;
	}

IL_0095:
	{
		return;
	}
}
// System.Void ManomotionManager::UpdateTexturesWithNewInfo()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_UpdateTexturesWithNewInfo_m3893848213 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	Color32U5BU5D_t3850468773* V_0 = NULL;
	Color32U5BU5D_t3850468773* V_1 = NULL;
	{
		Color32U5BU5D_t3850468773* L_0 = __this->get__pixels_24();
		V_0 = L_0;
		VisualizationInfo_t4138410502 * L_1 = __this->get_address_of_visualization_info_10();
		Texture2D_t3840446185 * L_2 = L_1->get_rgb_image_1();
		Color32U5BU5D_t3850468773* L_3 = V_0;
		NullCheck(L_2);
		Texture2D_SetPixels32_m1141065075(L_2, L_3, /*hidden argument*/NULL);
		VisualizationInfo_t4138410502 * L_4 = __this->get_address_of_visualization_info_10();
		Texture2D_t3840446185 * L_5 = L_4->get_rgb_image_1();
		NullCheck(L_5);
		Texture2D_Apply_m2271746283(L_5, /*hidden argument*/NULL);
		Color32U5BU5D_t3850468773* L_6 = __this->get__binary_frame_320_27();
		V_1 = L_6;
		VisualizationInfo_t4138410502 * L_7 = __this->get_address_of_visualization_info_10();
		Texture2D_t3840446185 * L_8 = L_7->get_binary_image_0();
		Color32U5BU5D_t3850468773* L_9 = V_1;
		NullCheck(L_8);
		Texture2D_SetPixels32_m1141065075(L_8, L_9, /*hidden argument*/NULL);
		VisualizationInfo_t4138410502 * L_10 = __this->get_address_of_visualization_info_10();
		Texture2D_t3840446185 * L_11 = L_10->get_binary_image_0();
		NullCheck(L_11);
		Texture2D_Apply_m2271746283(L_11, /*hidden argument*/NULL);
		HandInfoUnityU5BU5D_t4085119228* L_12 = __this->get_hand_infos_9();
		NullCheck(L_12);
		Texture2D_t3840446185 * L_13 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_cut_rgb_1();
		Color32U5BU5D_t3850468773* L_14 = __this->get__MRPixels0_25();
		NullCheck(L_13);
		Texture2D_SetPixels32_m1141065075(L_13, L_14, /*hidden argument*/NULL);
		HandInfoUnityU5BU5D_t4085119228* L_15 = __this->get_hand_infos_9();
		NullCheck(L_15);
		Texture2D_t3840446185 * L_16 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_cut_rgb_1();
		NullCheck(L_16);
		Texture2D_Apply_m2271746283(L_16, /*hidden argument*/NULL);
		HandInfoUnityU5BU5D_t4085119228* L_17 = __this->get_hand_infos_9();
		NullCheck(L_17);
		Texture2D_t3840446185 * L_18 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->get_cut_rgb_1();
		Color32U5BU5D_t3850468773* L_19 = __this->get__MRPixels1_26();
		NullCheck(L_18);
		Texture2D_SetPixels32_m1141065075(L_18, L_19, /*hidden argument*/NULL);
		HandInfoUnityU5BU5D_t4085119228* L_20 = __this->get_hand_infos_9();
		NullCheck(L_20);
		Texture2D_t3840446185 * L_21 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->get_cut_rgb_1();
		NullCheck(L_21);
		Texture2D_Apply_m2271746283(L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionManager::SetBackgroundMode(BackgroundMode)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_SetBackgroundMode_m4247516160 (ManomotionManager_t565502280 * __this, int32_t ___newMode0, const RuntimeMethod* method)
{
	{
		Session_t4211189121 * L_0 = __this->get_address_of_manomotion_Session_11();
		int32_t L_1 = ___newMode0;
		L_0->set_background_mode_2(L_1);
		return;
	}
}
// System.Void ManomotionManager::UpdatePixelValues()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_UpdatePixelValues_m4029838647 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	Color32U5BU5D_t3850468773* V_0 = NULL;
	{
		WebCamTexture_t1514609158 * L_0 = __this->get__mCamera_20();
		NullCheck(L_0);
		Color32U5BU5D_t3850468773* L_1 = WebCamTexture_GetPixels32_m3622054777(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Color32U5BU5D_t3850468773* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = ManomotionManager_get_Width_m1623342980(__this, /*hidden argument*/NULL);
		int32_t L_4 = ManomotionManager_get_Height_m1332900733(__this, /*hidden argument*/NULL);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))) == ((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_4)))))
		{
			goto IL_003d;
		}
	}
	{
		WebCamTexture_t1514609158 * L_5 = __this->get__mCamera_20();
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		WebCamTexture_t1514609158 * L_7 = __this->get__mCamera_20();
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		ManomotionManager_PickResolution_m1780225526(__this, L_6, L_8, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Color32U5BU5D_t3850468773* L_9 = V_0;
		Color32U5BU5D_t3850468773* L_10 = __this->get__pixels_24();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_9);
		Array_CopyTo_m225704097((RuntimeArray *)(RuntimeArray *)L_9, (RuntimeArray *)(RuntimeArray *)L_10, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionManager::ProcessManomotion()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_ProcessManomotion_m2809079058 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManomotionManager_ProcessManomotion_m2809079058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	DateTime_t3738529785  V_2;
	memset(&V_2, 0, sizeof(V_2));
	DateTime_t3738529785  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int64_t V_4 = 0;
	DateTime_t3738529785  V_5;
	memset(&V_5, 0, sizeof(V_5));
	DateTime_t3738529785  V_6;
	memset(&V_6, 0, sizeof(V_6));
	DateTime_t3738529785  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		int32_t L_0 = ManomotionManager_get_Width_m1623342980(__this, /*hidden argument*/NULL);
		int32_t L_1 = ManomotionManager_get_Height_m1332900733(__this, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1))) <= ((int32_t)0)))
		{
			goto IL_0107;
		}
	}
	{
		Color32U5BU5D_t3850468773* L_2 = __this->get__pixels_24();
		NullCheck(L_2);
		int32_t L_3 = ManomotionManager_get_Width_m1623342980(__this, /*hidden argument*/NULL);
		int32_t L_4 = ManomotionManager_get_Height_m1332900733(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))) == ((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_4))))))
		{
			goto IL_00c2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_5 = DateTime_get_UtcNow_m1393945741(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = DateTime_get_Millisecond_m671827344((DateTime_t3738529785 *)(&V_1), /*hidden argument*/NULL);
		DateTime_t3738529785  L_7 = DateTime_get_UtcNow_m1393945741(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = DateTime_get_Second_m2686182256((DateTime_t3738529785 *)(&V_2), /*hidden argument*/NULL);
		DateTime_t3738529785  L_9 = DateTime_get_UtcNow_m1393945741(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_9;
		int32_t L_10 = DateTime_get_Minute_m87527789((DateTime_t3738529785 *)(&V_3), /*hidden argument*/NULL);
		V_0 = (((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)1000))))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)((int32_t)60000))))))));
		ManomotionManager_ProcessFrame_m2242379321(__this, /*hidden argument*/NULL);
		DateTime_t3738529785  L_11 = DateTime_get_UtcNow_m1393945741(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = L_11;
		int32_t L_12 = DateTime_get_Millisecond_m671827344((DateTime_t3738529785 *)(&V_5), /*hidden argument*/NULL);
		DateTime_t3738529785  L_13 = DateTime_get_UtcNow_m1393945741(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_6 = L_13;
		int32_t L_14 = DateTime_get_Second_m2686182256((DateTime_t3738529785 *)(&V_6), /*hidden argument*/NULL);
		DateTime_t3738529785  L_15 = DateTime_get_UtcNow_m1393945741(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_7 = L_15;
		int32_t L_16 = DateTime_get_Minute_m87527789((DateTime_t3738529785 *)(&V_7), /*hidden argument*/NULL);
		V_4 = (((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)((int32_t)1000))))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)((int32_t)60000))))))));
		int64_t L_17 = V_0;
		int64_t L_18 = V_4;
		if ((((int64_t)L_17) >= ((int64_t)L_18)))
		{
			goto IL_00bd;
		}
	}
	{
		List_1_t128053199 * L_19 = __this->get_processing_time_list_23();
		int64_t L_20 = V_4;
		int64_t L_21 = V_0;
		NullCheck(L_19);
		List_1_Add_m697420525(L_19, (((int32_t)((int32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_20, (int64_t)L_21))))), /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
	}

IL_00bd:
	{
		goto IL_0107;
	}

IL_00c2:
	{
		ObjectU5BU5D_t2843939325* L_22 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral1048603959);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1048603959);
		ObjectU5BU5D_t2843939325* L_24 = L_23;
		Color32U5BU5D_t3850468773* L_25 = __this->get__pixels_24();
		NullCheck(L_25);
		int32_t L_26 = (((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length))));
		RuntimeObject * L_27 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_27);
		ObjectU5BU5D_t2843939325* L_28 = L_24;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral1654389065);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1654389065);
		ObjectU5BU5D_t2843939325* L_29 = L_28;
		int32_t L_30 = ManomotionManager_get_Width_m1623342980(__this, /*hidden argument*/NULL);
		int32_t L_31 = ManomotionManager_get_Height_m1332900733(__this, /*hidden argument*/NULL);
		int32_t L_32 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_30, (int32_t)L_31));
		RuntimeObject * L_33 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_33);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_33);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m2971454694(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
	}

IL_0107:
	{
		return;
	}
}
// System.Void ManomotionManager::CalculateFPSAndProcessingTime()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_CalculateFPSAndProcessingTime_m1536902857 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_fpsCooldown_21();
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_fpsCooldown_21(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		int32_t L_2 = __this->get_frameCount_22();
		__this->set_frameCount_22(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		float L_3 = __this->get_fpsCooldown_21();
		if ((!(((float)L_3) >= ((float)(1.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_4 = __this->get_frameCount_22();
		__this->set__fps_15(L_4);
		__this->set_frameCount_22(0);
		float L_5 = __this->get_fpsCooldown_21();
		__this->set_fpsCooldown_21(((float)il2cpp_codegen_subtract((float)L_5, (float)(1.0f))));
		ManomotionManager_CalculateProcessingTime_m262869436(__this, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void ManomotionManager::CalculateProcessingTime()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_CalculateProcessingTime_m262869436 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManomotionManager_CalculateProcessingTime_m262869436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		List_1_t128053199 * L_0 = __this->get_processing_time_list_23();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m361000296(L_0, /*hidden argument*/List_1_get_Count_m361000296_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_002d;
	}

IL_001a:
	{
		int32_t L_2 = V_0;
		List_1_t128053199 * L_3 = __this->get_processing_time_list_23();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = List_1_get_Item_m888956288(L_3, L_4, /*hidden argument*/List_1_get_Item_m888956288_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_5));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_7 = V_1;
		List_1_t128053199 * L_8 = __this->get_processing_time_list_23();
		NullCheck(L_8);
		int32_t L_9 = List_1_get_Count_m361000296(L_8, /*hidden argument*/List_1_get_Count_m361000296_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_10 = V_0;
		List_1_t128053199 * L_11 = __this->get_processing_time_list_23();
		NullCheck(L_11);
		int32_t L_12 = List_1_get_Count_m361000296(L_11, /*hidden argument*/List_1_get_Count_m361000296_RuntimeMethod_var);
		V_0 = ((int32_t)((int32_t)L_10/(int32_t)L_12));
		int32_t L_13 = V_0;
		__this->set__processing_time_16(L_13);
		List_1_t128053199 * L_14 = __this->get_processing_time_list_23();
		NullCheck(L_14);
		List_1_Clear_m2154023298(L_14, /*hidden argument*/List_1_Clear_m2154023298_RuntimeMethod_var);
	}

IL_005e:
	{
		return;
	}
}
// System.Void ManomotionManager::ProcessFrame()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_ProcessFrame_m2242379321 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	{
		HandInfoUnityU5BU5D_t4085119228* L_0 = __this->get_hand_infos_9();
		NullCheck(L_0);
		HandInfo_t3661823187 * L_1 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_address_of_hand_info_0();
		HandInfoUnityU5BU5D_t4085119228* L_2 = __this->get_hand_infos_9();
		NullCheck(L_2);
		HandInfo_t3661823187 * L_3 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->get_address_of_hand_info_0();
		Session_t4211189121 * L_4 = __this->get_address_of_manomotion_Session_11();
		ManomotionManager_processFrame_m46076805(NULL /*static, unused*/, (HandInfo_t3661823187 *)L_1, (HandInfo_t3661823187 *)L_3, (Session_t4211189121 *)L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionManager::Calibrate()
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_Calibrate_m923709651 (ManomotionManager_t565502280 * __this, const RuntimeMethod* method)
{
	{
		Color32U5BU5D_t3850468773* L_0 = __this->get__pixels_24();
		ManomotionManager_SetFrameArray_m3794714405(__this, L_0, /*hidden argument*/NULL);
		ManomotionManager_calibrate_m554122296(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionManager::Set2HandSupport(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ManomotionManager_Set2HandSupport_m3625082079 (ManomotionManager_t565502280 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		Session_t4211189121 * L_0 = __this->get_address_of_manomotion_Session_11();
		int32_t L_1 = ___value0;
		L_0->set_is_two_hands_enabled_by_developer_8(L_1);
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
// System.Void ManomotionUIManagment::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ManomotionUIManagment__ctor_m3399294611 (ManomotionUIManagment_t1133875195 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionUIManagment::Update()
extern "C" IL2CPP_METHOD_ATTR void ManomotionUIManagment_Update_m875799084 (ManomotionUIManagment_t1133875195 * __this, const RuntimeMethod* method)
{
	{
		ManomotionUIManagment_UpdateFPSText_m1694195280(__this, /*hidden argument*/NULL);
		ManomotionUIManagment_UpdateProcessingTime_m2069571183(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionUIManagment::ToggleUIElement(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void ManomotionUIManagment_ToggleUIElement_m1577112070 (ManomotionUIManagment_t1133875195 * __this, GameObject_t1113636619 * ___givenObject0, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = ___givenObject0;
		GameObject_t1113636619 * L_1 = ___givenObject0;
		NullCheck(L_1);
		bool L_2 = GameObject_get_activeInHierarchy_m2006396688(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionUIManagment::UpdateFPSText()
extern "C" IL2CPP_METHOD_ATTR void ManomotionUIManagment_UpdateFPSText_m1694195280 (ManomotionUIManagment_t1133875195 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Text_t1901882714 * L_0 = __this->get_FPSValueText_5();
		ManomotionManager_t565502280 * L_1 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = ManomotionManager_get_Fps_m499303649(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		return;
	}
}
// System.Void ManomotionUIManagment::UpdateProcessingTime()
extern "C" IL2CPP_METHOD_ATTR void ManomotionUIManagment_UpdateProcessingTime_m2069571183 (ManomotionUIManagment_t1133875195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManomotionUIManagment_UpdateProcessingTime_m2069571183_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Text_t1901882714 * L_0 = __this->get_processingTimeValueText_6();
		ManomotionManager_t565502280 * L_1 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = ManomotionManager_get_Processing_time_m755508692(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, L_3, _stringLiteral4119825963, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		return;
	}
}
// System.Void ManomotionUIManagment::ShowAvailableBackgroundModes()
extern "C" IL2CPP_METHOD_ATTR void ManomotionUIManagment_ShowAvailableBackgroundModes_m1281665793 (ManomotionUIManagment_t1133875195 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_availablebackgroundModes_7();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ManomotionUIManagment::HideHandButtons()
extern "C" IL2CPP_METHOD_ATTR void ManomotionUIManagment_HideHandButtons_m3446296647 (ManomotionUIManagment_t1133875195 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0007:
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_handButtons_4();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t1113636619 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)0, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0019:
	{
		int32_t L_5 = V_0;
		GameObjectU5BU5D_t3328599146* L_6 = __this->get_handButtons_4();
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ManomotionUIManagment::ShowHandButtons()
extern "C" IL2CPP_METHOD_ATTR void ManomotionUIManagment_ShowHandButtons_m1167001449 (ManomotionUIManagment_t1133875195 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0007:
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_handButtons_4();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t1113636619 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)1, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0019:
	{
		int32_t L_5 = V_0;
		GameObjectU5BU5D_t3328599146* L_6 = __this->get_handButtons_4();
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
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
// System.Void MenuManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MenuManager__ctor_m426485761 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MenuManager::get_MenuIsOpen()
extern "C" IL2CPP_METHOD_ATTR bool MenuManager_get_MenuIsOpen_m854335795 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__menuIsOpen_9();
		return L_0;
	}
}
// System.Void MenuManager::set_MenuIsOpen(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MenuManager_set_MenuIsOpen_m2823805563 (MenuManager_t2761117704 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__menuIsOpen_9(L_0);
		return;
	}
}
// System.Void MenuManager::Start()
extern "C" IL2CPP_METHOD_ATTR void MenuManager_Start_m2906916493 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuManager_Start_m2906916493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Transform_GetChild_m1092972975(L_0, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Image_t2670269651 * L_3 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_2, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		__this->set_buttonImage_8(L_3);
		Image_t2670269651 * L_4 = __this->get_buttonImage_8();
		Sprite_t280657092 * L_5 = __this->get_menuClosedImage_7();
		NullCheck(L_4);
		Image_set_sprite_m2369174689(L_4, L_5, /*hidden argument*/NULL);
		__this->set__menuIsOpen_9((bool)0);
		return;
	}
}
// System.Void MenuManager::ToggleIconsMenu()
extern "C" IL2CPP_METHOD_ATTR void MenuManager_ToggleIconsMenu_m1739422287 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__menuIsOpen_9();
		__this->set__menuIsOpen_9((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		bool L_1 = __this->get__menuIsOpen_9();
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		Image_t2670269651 * L_2 = __this->get_buttonImage_8();
		Sprite_t280657092 * L_3 = __this->get_menuOpenImage_6();
		NullCheck(L_2);
		Image_set_sprite_m2369174689(L_2, L_3, /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_0030:
	{
		Image_t2670269651 * L_4 = __this->get_buttonImage_8();
		Sprite_t280657092 * L_5 = __this->get_menuClosedImage_7();
		NullCheck(L_4);
		Image_set_sprite_m2369174689(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0041:
	{
		GameObject_t1113636619 * L_6 = __this->get_iconsCanvas_4();
		bool L_7 = __this->get__menuIsOpen_9();
		NullCheck(L_6);
		GameObject_SetActive_m796801857(L_6, L_7, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = __this->get_manomotionCanvas_5();
		bool L_9 = __this->get__menuIsOpen_9();
		NullCheck(L_8);
		GameObject_SetActive_m796801857(L_8, (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuManager::CloseMenu()
extern "C" IL2CPP_METHOD_ATTR void MenuManager_CloseMenu_m331373 (MenuManager_t2761117704 * __this, const RuntimeMethod* method)
{
	{
		__this->set__menuIsOpen_9((bool)0);
		Image_t2670269651 * L_0 = __this->get_buttonImage_8();
		Sprite_t280657092 * L_1 = __this->get_menuClosedImage_7();
		NullCheck(L_0);
		Image_set_sprite_m2369174689(L_0, L_1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_iconsCanvas_4();
		bool L_3 = __this->get__menuIsOpen_9();
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, L_3, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get_manomotionCanvas_5();
		bool L_5 = __this->get__menuIsOpen_9();
		NullCheck(L_4);
		GameObject_SetActive_m796801857(L_4, (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
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
// System.Void MenuOrientation::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MenuOrientation__ctor_m1664503415 (MenuOrientation_t2641058044 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuOrientation::add_OnOrientationChanged(MenuOrientation/OrientationChange)
extern "C" IL2CPP_METHOD_ATTR void MenuOrientation_add_OnOrientationChanged_m1240686245 (RuntimeObject * __this /* static, unused */, OrientationChange_t2630486480 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOrientation_add_OnOrientationChanged_m1240686245_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OrientationChange_t2630486480 * V_0 = NULL;
	OrientationChange_t2630486480 * V_1 = NULL;
	{
		OrientationChange_t2630486480 * L_0 = ((MenuOrientation_t2641058044_StaticFields*)il2cpp_codegen_static_fields_for(MenuOrientation_t2641058044_il2cpp_TypeInfo_var))->get_OnOrientationChanged_4();
		V_0 = L_0;
	}

IL_0006:
	{
		OrientationChange_t2630486480 * L_1 = V_0;
		V_1 = L_1;
		OrientationChange_t2630486480 * L_2 = V_1;
		OrientationChange_t2630486480 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		OrientationChange_t2630486480 * L_5 = V_0;
		OrientationChange_t2630486480 * L_6 = InterlockedCompareExchangeImpl<OrientationChange_t2630486480 *>((OrientationChange_t2630486480 **)(((MenuOrientation_t2641058044_StaticFields*)il2cpp_codegen_static_fields_for(MenuOrientation_t2641058044_il2cpp_TypeInfo_var))->get_address_of_OnOrientationChanged_4()), ((OrientationChange_t2630486480 *)CastclassSealed((RuntimeObject*)L_4, OrientationChange_t2630486480_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		OrientationChange_t2630486480 * L_7 = V_0;
		OrientationChange_t2630486480 * L_8 = V_1;
		if ((!(((RuntimeObject*)(OrientationChange_t2630486480 *)L_7) == ((RuntimeObject*)(OrientationChange_t2630486480 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void MenuOrientation::remove_OnOrientationChanged(MenuOrientation/OrientationChange)
extern "C" IL2CPP_METHOD_ATTR void MenuOrientation_remove_OnOrientationChanged_m808801842 (RuntimeObject * __this /* static, unused */, OrientationChange_t2630486480 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOrientation_remove_OnOrientationChanged_m808801842_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OrientationChange_t2630486480 * V_0 = NULL;
	OrientationChange_t2630486480 * V_1 = NULL;
	{
		OrientationChange_t2630486480 * L_0 = ((MenuOrientation_t2641058044_StaticFields*)il2cpp_codegen_static_fields_for(MenuOrientation_t2641058044_il2cpp_TypeInfo_var))->get_OnOrientationChanged_4();
		V_0 = L_0;
	}

IL_0006:
	{
		OrientationChange_t2630486480 * L_1 = V_0;
		V_1 = L_1;
		OrientationChange_t2630486480 * L_2 = V_1;
		OrientationChange_t2630486480 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		OrientationChange_t2630486480 * L_5 = V_0;
		OrientationChange_t2630486480 * L_6 = InterlockedCompareExchangeImpl<OrientationChange_t2630486480 *>((OrientationChange_t2630486480 **)(((MenuOrientation_t2641058044_StaticFields*)il2cpp_codegen_static_fields_for(MenuOrientation_t2641058044_il2cpp_TypeInfo_var))->get_address_of_OnOrientationChanged_4()), ((OrientationChange_t2630486480 *)CastclassSealed((RuntimeObject*)L_4, OrientationChange_t2630486480_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		OrientationChange_t2630486480 * L_7 = V_0;
		OrientationChange_t2630486480 * L_8 = V_1;
		if ((!(((RuntimeObject*)(OrientationChange_t2630486480 *)L_7) == ((RuntimeObject*)(OrientationChange_t2630486480 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void MenuOrientation::Start()
extern "C" IL2CPP_METHOD_ATTR void MenuOrientation_Start_m2346561389 (MenuOrientation_t2641058044 * __this, const RuntimeMethod* method)
{
	{
		__this->set_currentOrientation_5(0);
		return;
	}
}
// System.Void MenuOrientation::Update()
extern "C" IL2CPP_METHOD_ATTR void MenuOrientation_Update_m1350520523 (MenuOrientation_t2641058044 * __this, const RuntimeMethod* method)
{
	{
		MenuOrientation_CheckForScreenOrientationChange_m1694487744(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuOrientation::CheckForScreenOrientationChange()
extern "C" IL2CPP_METHOD_ATTR void MenuOrientation_CheckForScreenOrientationChange_m1694487744 (MenuOrientation_t2641058044 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOrientation_CheckForScreenOrientationChange_m1694487744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_currentOrientation_5();
		int32_t L_1 = Screen_get_orientation_m3354122719(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = Screen_get_orientation_m3354122719(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_currentOrientation_5(L_2);
		OrientationChange_t2630486480 * L_3 = ((MenuOrientation_t2641058044_StaticFields*)il2cpp_codegen_static_fields_for(MenuOrientation_t2641058044_il2cpp_TypeInfo_var))->get_OnOrientationChanged_4();
		NullCheck(L_3);
		OrientationChange_Invoke_m3966996779(L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void MenuOrientation::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void MenuOrientation_OnEnable_m3958811327 (MenuOrientation_t2641058044 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOrientation_OnEnable_m3958811327_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OrientationChange_t2630486480 * L_0 = ((MenuOrientation_t2641058044_StaticFields*)il2cpp_codegen_static_fields_for(MenuOrientation_t2641058044_il2cpp_TypeInfo_var))->get_OnOrientationChanged_4();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		OrientationChange_t2630486480 * L_1 = ((MenuOrientation_t2641058044_StaticFields*)il2cpp_codegen_static_fields_for(MenuOrientation_t2641058044_il2cpp_TypeInfo_var))->get_OnOrientationChanged_4();
		NullCheck(L_1);
		OrientationChange_Invoke_m3966996779(L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
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
extern "C"  void DelegatePInvokeWrapper_OrientationChange_t2630486480 (OrientationChange_t2630486480 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MenuOrientation/OrientationChange::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OrientationChange__ctor_m2413559254 (OrientationChange_t2630486480 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MenuOrientation/OrientationChange::Invoke()
extern "C" IL2CPP_METHOD_ATTR void OrientationChange_Invoke_m3966996779 (OrientationChange_t2630486480 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OrientationChange_Invoke_m3966996779((OrientationChange_t2630486480 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MenuOrientation/OrientationChange::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OrientationChange_BeginInvoke_m1174980005 (OrientationChange_t2630486480 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void MenuOrientation/OrientationChange::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OrientationChange_EndInvoke_m3439877880 (OrientationChange_t2630486480 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SwipeInput::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SwipeInput__ctor_m2055829296 (SwipeInput_t4249063973 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SwipeInput::Update()
extern "C" IL2CPP_METHOD_ATTR void SwipeInput_Update_m3988484844 (SwipeInput_t4249063973 * __this, const RuntimeMethod* method)
{
	{
		SwipeInput_DetectSwipe_m2790431000(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SwipeInput::DetectSwipe()
extern "C" IL2CPP_METHOD_ATTR void SwipeInput_DetectSwipe_m2790431000 (SwipeInput_t4249063973 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SwipeInput_DetectSwipe_m2790431000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		TouchU5BU5D_t1849554061* L_1 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Touch_get_phase_m214549210((Touch_t1921856868 *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		TouchU5BU5D_t1849554061* L_3 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector2_t2156229523  L_4 = Touch_get_position_m3109777936((Touch_t1921856868 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		__this->set_touchPosition_5(L_4);
		goto IL_00a8;
	}

IL_003b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		TouchU5BU5D_t1849554061* L_5 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = Touch_get_phase_m214549210((Touch_t1921856868 *)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_00a8;
		}
	}
	{
		Vector2_t2156229523  L_7 = __this->get_touchPosition_5();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		TouchU5BU5D_t1849554061* L_8 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector2_t2156229523  L_9 = Touch_get_position_m3109777936((Touch_t1921856868 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		float L_10 = Vector2_Distance_m3048868881(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_11 = fabsf(L_10);
		float L_12 = __this->get_minimulSwipeDistance_4();
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		TouchU5BU5D_t1849554061* L_13 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector2_t2156229523  L_14 = Touch_get_position_m3109777936((Touch_t1921856868 *)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		SwipeInput_EvaluateTouch_m4092136656(__this, L_14, /*hidden argument*/NULL);
		TouchU5BU5D_t1849554061* L_15 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector2_t2156229523  L_16 = Touch_get_position_m3109777936((Touch_t1921856868 *)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		__this->set_touchPosition_5(L_16);
	}

IL_00a8:
	{
		return;
	}
}
// System.Void SwipeInput::EvaluateTouch(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void SwipeInput_EvaluateTouch_m4092136656 (SwipeInput_t4249063973 * __this, Vector2_t2156229523  ___releasePosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SwipeInput_EvaluateTouch_m4092136656_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t2156229523 * L_0 = __this->get_address_of_touchPosition_5();
		float L_1 = L_0->get_x_0();
		float L_2 = (&___releasePosition0)->get_x_0();
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_003f;
		}
	}
	{
		float L_3 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = L_3;
		RuntimeObject * L_5 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m904156431(NULL /*static, unused*/, L_5, _stringLiteral673443485, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		InstructionsManager_t4057271102 * L_7 = InstructionsManager_get_Instance_m729986502(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		InstructionsManager_DecreaseSlide_m522884142(L_7, /*hidden argument*/NULL);
		goto IL_0060;
	}

IL_003f:
	{
		Vector2_t2156229523 * L_8 = __this->get_address_of_touchPosition_5();
		float L_9 = L_8->get_x_0();
		float L_10 = (&___releasePosition0)->get_x_0();
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_0060;
		}
	}
	{
		InstructionsManager_t4057271102 * L_11 = InstructionsManager_get_Instance_m729986502(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		InstructionsManager_IncreaseSlide_m382126618(L_11, /*hidden argument*/NULL);
	}

IL_0060:
	{
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
// System.Void ToggleGizmos::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ToggleGizmos__ctor_m3205483938 (ToggleGizmos_t1626358663 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ToggleGizmos::Start()
extern "C" IL2CPP_METHOD_ATTR void ToggleGizmos_Start_m1683588176 (ToggleGizmos_t1626358663 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleGizmos_Start_m1683588176_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GizmoManager_t3350963123 * L_0 = Component_GetComponent_TisGizmoManager_t3350963123_m91259053(__this, /*hidden argument*/Component_GetComponent_TisGizmoManager_t3350963123_m91259053_RuntimeMethod_var);
		__this->set__gizmoManager_4(L_0);
		return;
	}
}
// System.Void ToggleGizmos::ToggleShowRotation()
extern "C" IL2CPP_METHOD_ATTR void ToggleGizmos_ToggleShowRotation_m2422200007 (ToggleGizmos_t1626358663 * __this, const RuntimeMethod* method)
{
	{
		GizmoManager_t3350963123 * L_0 = __this->get__gizmoManager_4();
		GizmoManager_t3350963123 * L_1 = __this->get__gizmoManager_4();
		NullCheck(L_1);
		bool L_2 = GizmoManager_get_Show_rotation_m4091965537(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GizmoManager_set_Show_rotation_m2451467461(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ToggleGizmos::ToggleShowDepth()
extern "C" IL2CPP_METHOD_ATTR void ToggleGizmos_ToggleShowDepth_m2001998155 (ToggleGizmos_t1626358663 * __this, const RuntimeMethod* method)
{
	{
		GizmoManager_t3350963123 * L_0 = __this->get__gizmoManager_4();
		GizmoManager_t3350963123 * L_1 = __this->get__gizmoManager_4();
		NullCheck(L_1);
		bool L_2 = GizmoManager_get_Show_depth_m1953621816(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GizmoManager_set_Show_depth_m1354116995(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ToggleGizmos::ToggleShowHandStates()
extern "C" IL2CPP_METHOD_ATTR void ToggleGizmos_ToggleShowHandStates_m3464197082 (ToggleGizmos_t1626358663 * __this, const RuntimeMethod* method)
{
	{
		GizmoManager_t3350963123 * L_0 = __this->get__gizmoManager_4();
		GizmoManager_t3350963123 * L_1 = __this->get__gizmoManager_4();
		NullCheck(L_1);
		bool L_2 = GizmoManager_get_Show_hand_states_m92485017(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GizmoManager_set_Show_hand_states_m3260194944(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ToggleGizmos::ToggleShowManoclass()
extern "C" IL2CPP_METHOD_ATTR void ToggleGizmos_ToggleShowManoclass_m795790548 (ToggleGizmos_t1626358663 * __this, const RuntimeMethod* method)
{
	{
		GizmoManager_t3350963123 * L_0 = __this->get__gizmoManager_4();
		GizmoManager_t3350963123 * L_1 = __this->get__gizmoManager_4();
		NullCheck(L_1);
		bool L_2 = GizmoManager_get_Show_mano_class_m1694794017(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GizmoManager_set_Show_mano_class_m2348218322(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ToggleGizmos::ToggleShowTriggerGesture()
extern "C" IL2CPP_METHOD_ATTR void ToggleGizmos_ToggleShowTriggerGesture_m3598439230 (ToggleGizmos_t1626358663 * __this, const RuntimeMethod* method)
{
	{
		GizmoManager_t3350963123 * L_0 = __this->get__gizmoManager_4();
		GizmoManager_t3350963123 * L_1 = __this->get__gizmoManager_4();
		NullCheck(L_1);
		bool L_2 = GizmoManager_get_Show_trigger_gesture_m1981626667(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GizmoManager_set_Show_trigger_gesture_m3462699790(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ToggleGizmos::ToggleShowContinuousGesture()
extern "C" IL2CPP_METHOD_ATTR void ToggleGizmos_ToggleShowContinuousGesture_m754714295 (ToggleGizmos_t1626358663 * __this, const RuntimeMethod* method)
{
	{
		GizmoManager_t3350963123 * L_0 = __this->get__gizmoManager_4();
		GizmoManager_t3350963123 * L_1 = __this->get__gizmoManager_4();
		NullCheck(L_1);
		bool L_2 = GizmoManager_get_Show_continuous_gesture_m2573721889(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GizmoManager_set_Show_continuous_gesture_m3086081878(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ToggleGizmos::ToggleBoundingBox()
extern "C" IL2CPP_METHOD_ATTR void ToggleGizmos_ToggleBoundingBox_m2110094593 (ToggleGizmos_t1626358663 * __this, const RuntimeMethod* method)
{
	{
		GizmoManager_t3350963123 * L_0 = __this->get__gizmoManager_4();
		GizmoManager_t3350963123 * L_1 = __this->get__gizmoManager_4();
		NullCheck(L_1);
		bool L_2 = GizmoManager_get_Show_bounding_box_m1220638282(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GizmoManager_set_Show_bounding_box_m615923224(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ToggleGizmos::ToggleShowFlags()
extern "C" IL2CPP_METHOD_ATTR void ToggleGizmos_ToggleShowFlags_m975281933 (ToggleGizmos_t1626358663 * __this, const RuntimeMethod* method)
{
	{
		GizmoManager_t3350963123 * L_0 = __this->get__gizmoManager_4();
		GizmoManager_t3350963123 * L_1 = __this->get__gizmoManager_4();
		NullCheck(L_1);
		bool L_2 = GizmoManager_get_Show_flags_m4007314770(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GizmoManager_set_Show_flags_m2897812482(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
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
// System.Void ToggleUIRow::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ToggleUIRow__ctor_m1131844135 (ToggleUIRow_t356789805 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// ToggleUIRow ToggleUIRow::get_Instance()
extern "C" IL2CPP_METHOD_ATTR ToggleUIRow_t356789805 * ToggleUIRow_get_Instance_m3991570607 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleUIRow_get_Instance_m3991570607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ToggleUIRow_t356789805 * L_0 = ((ToggleUIRow_t356789805_StaticFields*)il2cpp_codegen_static_fields_for(ToggleUIRow_t356789805_il2cpp_TypeInfo_var))->get__instance_4();
		return L_0;
	}
}
// System.Void ToggleUIRow::Start()
extern "C" IL2CPP_METHOD_ATTR void ToggleUIRow_Start_m3436007693 (ToggleUIRow_t356789805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleUIRow_Start_m3436007693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ToggleUIRow_t356789805 * L_0 = ((ToggleUIRow_t356789805_StaticFields*)il2cpp_codegen_static_fields_for(ToggleUIRow_t356789805_il2cpp_TypeInfo_var))->get__instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		((ToggleUIRow_t356789805_StaticFields*)il2cpp_codegen_static_fields_for(ToggleUIRow_t356789805_il2cpp_TypeInfo_var))->set__instance_4(__this);
	}

IL_0016:
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_001d:
	{
		ButtonU5BU5D_t2297175928* L_2 = __this->get_backgroundModeIcons_5();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Button_t4055032469 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		ButtonClickedEvent_t48803504 * L_6 = Button_get_onClick_m2332132945(L_5, /*hidden argument*/NULL);
		intptr_t L_7 = (intptr_t)ToggleUIRow_ClickedBackgroundMode_m3422804074_RuntimeMethod_var;
		UnityAction_t3245792599 * L_8 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_8, __this, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m2276267359(L_6, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		ButtonU5BU5D_t2297175928* L_11 = __this->get_backgroundModeIcons_5();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_001d;
		}
	}
	{
		Button_t4055032469 * L_12 = __this->get_backgroundSelectorIcon_6();
		NullCheck(L_12);
		ButtonClickedEvent_t48803504 * L_13 = Button_get_onClick_m2332132945(L_12, /*hidden argument*/NULL);
		intptr_t L_14 = (intptr_t)ToggleUIRow_ClickedMenuButoon_m629596037_RuntimeMethod_var;
		UnityAction_t3245792599 * L_15 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_15, __this, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		UnityEvent_AddListener_m2276267359(L_13, L_15, /*hidden argument*/NULL);
		__this->set_backgroundMenuIsOpen_7((bool)1);
		return;
	}
}
// System.Void ToggleUIRow::ClickedMenuButoon()
extern "C" IL2CPP_METHOD_ATTR void ToggleUIRow_ClickedMenuButoon_m629596037 (ToggleUIRow_t356789805 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_backgroundMenuIsOpen_7();
		__this->set_backgroundMenuIsOpen_7((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		return;
	}
}
// System.Void ToggleUIRow::ClickedBackgroundMode()
extern "C" IL2CPP_METHOD_ATTR void ToggleUIRow_ClickedBackgroundMode_m3422804074 (ToggleUIRow_t356789805 * __this, const RuntimeMethod* method)
{
	{
		__this->set_backgroundMenuIsOpen_7((bool)0);
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
// System.Void ToggleVisualizationValues::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ToggleVisualizationValues__ctor_m869425462 (ToggleVisualizationValues_t3491163021 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ToggleVisualizationValues::Start()
extern "C" IL2CPP_METHOD_ATTR void ToggleVisualizationValues_Start_m3570687182 (ToggleVisualizationValues_t3491163021 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleVisualizationValues_Start_m3570687182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ManoVisualization_t1421820612 * L_0 = Component_GetComponent_TisManoVisualization_t1421820612_m3996609868(__this, /*hidden argument*/Component_GetComponent_TisManoVisualization_t1421820612_m3996609868_RuntimeMethod_var);
		__this->set__manoVisualization_4(L_0);
		return;
	}
}
// System.Void ToggleVisualizationValues::ToggleShowInner()
extern "C" IL2CPP_METHOD_ATTR void ToggleVisualizationValues_ToggleShowInner_m4060671384 (ToggleVisualizationValues_t3491163021 * __this, const RuntimeMethod* method)
{
	{
		ManoVisualization_t1421820612 * L_0 = __this->get__manoVisualization_4();
		ManoVisualization_t1421820612 * L_1 = __this->get__manoVisualization_4();
		NullCheck(L_1);
		bool L_2 = ManoVisualization_get_Show_inner_m260116457(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		ManoVisualization_set_Show_inner_m2901024986(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ToggleVisualizationValues::ToggleShowContour()
extern "C" IL2CPP_METHOD_ATTR void ToggleVisualizationValues_ToggleShowContour_m2024765814 (ToggleVisualizationValues_t3491163021 * __this, const RuntimeMethod* method)
{
	{
		ManoVisualization_t1421820612 * L_0 = __this->get__manoVisualization_4();
		ManoVisualization_t1421820612 * L_1 = __this->get__manoVisualization_4();
		NullCheck(L_1);
		bool L_2 = ManoVisualization_get_Show_contour_m3318944812(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		ManoVisualization_set_Show_contour_m1529468790(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ToggleVisualizationValues::ToggleShowPalmCenter()
extern "C" IL2CPP_METHOD_ATTR void ToggleVisualizationValues_ToggleShowPalmCenter_m3677012491 (ToggleVisualizationValues_t3491163021 * __this, const RuntimeMethod* method)
{
	{
		ManoVisualization_t1421820612 * L_0 = __this->get__manoVisualization_4();
		ManoVisualization_t1421820612 * L_1 = __this->get__manoVisualization_4();
		NullCheck(L_1);
		bool L_2 = ManoVisualization_get_Show_palm_center_m94080673(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		ManoVisualization_set_Show_palm_center_m1713916509(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ToggleVisualizationValues::ToggleShowFingertips()
extern "C" IL2CPP_METHOD_ATTR void ToggleVisualizationValues_ToggleShowFingertips_m2024651377 (ToggleVisualizationValues_t3491163021 * __this, const RuntimeMethod* method)
{
	{
		ManoVisualization_t1421820612 * L_0 = __this->get__manoVisualization_4();
		ManoVisualization_t1421820612 * L_1 = __this->get__manoVisualization_4();
		NullCheck(L_1);
		bool L_2 = ManoVisualization_get_Show_fingertips_m3026400719(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		ManoVisualization_set_Show_fingertips_m1674203565(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ToggleVisualizationValues::ToggleShowFingertipLabels()
extern "C" IL2CPP_METHOD_ATTR void ToggleVisualizationValues_ToggleShowFingertipLabels_m2386870179 (ToggleVisualizationValues_t3491163021 * __this, const RuntimeMethod* method)
{
	{
		ManoVisualization_t1421820612 * L_0 = __this->get__manoVisualization_4();
		ManoVisualization_t1421820612 * L_1 = __this->get__manoVisualization_4();
		NullCheck(L_1);
		bool L_2 = ManoVisualization_get_Show_fingertip_labels_m2652058975(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		ManoVisualization_set_Show_fingertip_labels_m186525592(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ToggleVisualizationValues::ToggleShowHandLayer()
extern "C" IL2CPP_METHOD_ATTR void ToggleVisualizationValues_ToggleShowHandLayer_m834561185 (ToggleVisualizationValues_t3491163021 * __this, const RuntimeMethod* method)
{
	{
		ManoVisualization_t1421820612 * L_0 = __this->get__manoVisualization_4();
		ManoVisualization_t1421820612 * L_1 = __this->get__manoVisualization_4();
		NullCheck(L_1);
		bool L_2 = ManoVisualization_get_Show_hand_layer_m2063885413(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		ManoVisualization_set_Show_hand_layer_m2731680885(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ToggleVisualizationValues::ToggleShowBackgroundLayer()
extern "C" IL2CPP_METHOD_ATTR void ToggleVisualizationValues_ToggleShowBackgroundLayer_m842930933 (ToggleVisualizationValues_t3491163021 * __this, const RuntimeMethod* method)
{
	{
		ManoVisualization_t1421820612 * L_0 = __this->get__manoVisualization_4();
		ManoVisualization_t1421820612 * L_1 = __this->get__manoVisualization_4();
		NullCheck(L_1);
		bool L_2 = ManoVisualization_get_Show_background_layer_m1244111248(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		ManoVisualization_set_Show_background_layer_m3585397262(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ToggleVisualizationValues::ToggleBoundingBox()
extern "C" IL2CPP_METHOD_ATTR void ToggleVisualizationValues_ToggleBoundingBox_m1464541273 (ToggleVisualizationValues_t3491163021 * __this, const RuntimeMethod* method)
{
	{
		ManoVisualization_t1421820612 * L_0 = __this->get__manoVisualization_4();
		ManoVisualization_t1421820612 * L_1 = __this->get__manoVisualization_4();
		NullCheck(L_1);
		bool L_2 = ManoVisualization_get_Show_bounding_box_m2573940089(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		ManoVisualization_set_Show_bounding_box_m168115305(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: TrackingInfo
extern "C" void TrackingInfo_t3990182144_marshal_pinvoke(const TrackingInfo_t3990182144& unmarshaled, TrackingInfo_t3990182144_marshaled_pinvoke& marshaled)
{
	marshaled.___bounding_box_0 = unmarshaled.get_bounding_box_0();
	marshaled.___palm_center_1 = unmarshaled.get_palm_center_1();
	marshaled.___rotation_2 = unmarshaled.get_rotation_2();
	marshaled.___relative_depth_3 = unmarshaled.get_relative_depth_3();
	marshaled.___amount_of_contour_points_4 = unmarshaled.get_amount_of_contour_points_4();
	marshaled.___amount_of_inner_points_5 = unmarshaled.get_amount_of_inner_points_5();
	if (unmarshaled.get_finger_tips_6() != NULL)
	{
		if (5 > (unmarshaled.get_finger_tips_6())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL, NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(5); i++)
		{
			(marshaled.___finger_tips_6)[i] = (unmarshaled.get_finger_tips_6())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	if (unmarshaled.get_contour_points_7() != NULL)
	{
		if (200 > (unmarshaled.get_contour_points_7())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL, NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(200); i++)
		{
			(marshaled.___contour_points_7)[i] = (unmarshaled.get_contour_points_7())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	if (unmarshaled.get_inner_points_8() != NULL)
	{
		if (200 > (unmarshaled.get_inner_points_8())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL, NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(200); i++)
		{
			(marshaled.___inner_points_8)[i] = (unmarshaled.get_inner_points_8())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
extern "C" void TrackingInfo_t3990182144_marshal_pinvoke_back(const TrackingInfo_t3990182144_marshaled_pinvoke& marshaled, TrackingInfo_t3990182144& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackingInfo_t3990182144_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BoundingBox_t2874819887  unmarshaled_bounding_box_temp_0;
	memset(&unmarshaled_bounding_box_temp_0, 0, sizeof(unmarshaled_bounding_box_temp_0));
	unmarshaled_bounding_box_temp_0 = marshaled.___bounding_box_0;
	unmarshaled.set_bounding_box_0(unmarshaled_bounding_box_temp_0);
	Vector3_t3722313464  unmarshaled_palm_center_temp_1;
	memset(&unmarshaled_palm_center_temp_1, 0, sizeof(unmarshaled_palm_center_temp_1));
	unmarshaled_palm_center_temp_1 = marshaled.___palm_center_1;
	unmarshaled.set_palm_center_1(unmarshaled_palm_center_temp_1);
	float unmarshaled_rotation_temp_2 = 0.0f;
	unmarshaled_rotation_temp_2 = marshaled.___rotation_2;
	unmarshaled.set_rotation_2(unmarshaled_rotation_temp_2);
	float unmarshaled_relative_depth_temp_3 = 0.0f;
	unmarshaled_relative_depth_temp_3 = marshaled.___relative_depth_3;
	unmarshaled.set_relative_depth_3(unmarshaled_relative_depth_temp_3);
	int32_t unmarshaled_amount_of_contour_points_temp_4 = 0;
	unmarshaled_amount_of_contour_points_temp_4 = marshaled.___amount_of_contour_points_4;
	unmarshaled.set_amount_of_contour_points_4(unmarshaled_amount_of_contour_points_temp_4);
	int32_t unmarshaled_amount_of_inner_points_temp_5 = 0;
	unmarshaled_amount_of_inner_points_temp_5 = marshaled.___amount_of_inner_points_5;
	unmarshaled.set_amount_of_inner_points_5(unmarshaled_amount_of_inner_points_temp_5);
	unmarshaled.set_finger_tips_6(reinterpret_cast<Vector3U5BU5D_t1718750761*>(SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, 5)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(5); i++)
	{
		(unmarshaled.get_finger_tips_6())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___finger_tips_6)[i]);
	}
	unmarshaled.set_contour_points_7(reinterpret_cast<Vector3U5BU5D_t1718750761*>(SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, 200)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(200); i++)
	{
		(unmarshaled.get_contour_points_7())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___contour_points_7)[i]);
	}
	unmarshaled.set_inner_points_8(reinterpret_cast<Vector3U5BU5D_t1718750761*>(SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, 200)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(200); i++)
	{
		(unmarshaled.get_inner_points_8())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___inner_points_8)[i]);
	}
}
// Conversion method for clean up from marshalling of: TrackingInfo
extern "C" void TrackingInfo_t3990182144_marshal_pinvoke_cleanup(TrackingInfo_t3990182144_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: TrackingInfo
extern "C" void TrackingInfo_t3990182144_marshal_com(const TrackingInfo_t3990182144& unmarshaled, TrackingInfo_t3990182144_marshaled_com& marshaled)
{
	marshaled.___bounding_box_0 = unmarshaled.get_bounding_box_0();
	marshaled.___palm_center_1 = unmarshaled.get_palm_center_1();
	marshaled.___rotation_2 = unmarshaled.get_rotation_2();
	marshaled.___relative_depth_3 = unmarshaled.get_relative_depth_3();
	marshaled.___amount_of_contour_points_4 = unmarshaled.get_amount_of_contour_points_4();
	marshaled.___amount_of_inner_points_5 = unmarshaled.get_amount_of_inner_points_5();
	if (unmarshaled.get_finger_tips_6() != NULL)
	{
		if (5 > (unmarshaled.get_finger_tips_6())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL, NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(5); i++)
		{
			(marshaled.___finger_tips_6)[i] = (unmarshaled.get_finger_tips_6())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	if (unmarshaled.get_contour_points_7() != NULL)
	{
		if (200 > (unmarshaled.get_contour_points_7())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL, NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(200); i++)
		{
			(marshaled.___contour_points_7)[i] = (unmarshaled.get_contour_points_7())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	if (unmarshaled.get_inner_points_8() != NULL)
	{
		if (200 > (unmarshaled.get_inner_points_8())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL, NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(200); i++)
		{
			(marshaled.___inner_points_8)[i] = (unmarshaled.get_inner_points_8())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
extern "C" void TrackingInfo_t3990182144_marshal_com_back(const TrackingInfo_t3990182144_marshaled_com& marshaled, TrackingInfo_t3990182144& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackingInfo_t3990182144_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BoundingBox_t2874819887  unmarshaled_bounding_box_temp_0;
	memset(&unmarshaled_bounding_box_temp_0, 0, sizeof(unmarshaled_bounding_box_temp_0));
	unmarshaled_bounding_box_temp_0 = marshaled.___bounding_box_0;
	unmarshaled.set_bounding_box_0(unmarshaled_bounding_box_temp_0);
	Vector3_t3722313464  unmarshaled_palm_center_temp_1;
	memset(&unmarshaled_palm_center_temp_1, 0, sizeof(unmarshaled_palm_center_temp_1));
	unmarshaled_palm_center_temp_1 = marshaled.___palm_center_1;
	unmarshaled.set_palm_center_1(unmarshaled_palm_center_temp_1);
	float unmarshaled_rotation_temp_2 = 0.0f;
	unmarshaled_rotation_temp_2 = marshaled.___rotation_2;
	unmarshaled.set_rotation_2(unmarshaled_rotation_temp_2);
	float unmarshaled_relative_depth_temp_3 = 0.0f;
	unmarshaled_relative_depth_temp_3 = marshaled.___relative_depth_3;
	unmarshaled.set_relative_depth_3(unmarshaled_relative_depth_temp_3);
	int32_t unmarshaled_amount_of_contour_points_temp_4 = 0;
	unmarshaled_amount_of_contour_points_temp_4 = marshaled.___amount_of_contour_points_4;
	unmarshaled.set_amount_of_contour_points_4(unmarshaled_amount_of_contour_points_temp_4);
	int32_t unmarshaled_amount_of_inner_points_temp_5 = 0;
	unmarshaled_amount_of_inner_points_temp_5 = marshaled.___amount_of_inner_points_5;
	unmarshaled.set_amount_of_inner_points_5(unmarshaled_amount_of_inner_points_temp_5);
	unmarshaled.set_finger_tips_6(reinterpret_cast<Vector3U5BU5D_t1718750761*>(SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, 5)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(5); i++)
	{
		(unmarshaled.get_finger_tips_6())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___finger_tips_6)[i]);
	}
	unmarshaled.set_contour_points_7(reinterpret_cast<Vector3U5BU5D_t1718750761*>(SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, 200)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(200); i++)
	{
		(unmarshaled.get_contour_points_7())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___contour_points_7)[i]);
	}
	unmarshaled.set_inner_points_8(reinterpret_cast<Vector3U5BU5D_t1718750761*>(SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, 200)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(200); i++)
	{
		(unmarshaled.get_inner_points_8())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___inner_points_8)[i]);
	}
}
// Conversion method for clean up from marshalling of: TrackingInfo
extern "C" void TrackingInfo_t3990182144_marshal_com_cleanup(TrackingInfo_t3990182144_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TwoHandSupport::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TwoHandSupport__ctor_m3707736992 (TwoHandSupport_t1057924416 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TwoHandSupport::Update()
extern "C" IL2CPP_METHOD_ATTR void TwoHandSupport_Update_m3412762990 (TwoHandSupport_t1057924416 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TwoHandSupport_Update_m3412762990_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Session_t4211189121  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Session_t4211189121  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		ManomotionManager_t565502280 * L_0 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Session_t4211189121  L_1 = ManomotionManager_get_Manomotion_Session_m1809168976(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (&V_0)->get_two_hands_supported_9();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2703724416, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		ManomotionManager_t565502280 * L_7 = ManomotionManager_get_Instance_m1503785506(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		Session_t4211189121  L_8 = ManomotionManager_get_Manomotion_Session_m1809168976(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		int32_t L_9 = (&V_1)->get_two_hands_supported_9();
		NullCheck(L_6);
		GameObject_SetActive_m796801857(L_6, (bool)((((int32_t)L_9) == ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
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
// System.Void UIIconBehavior::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UIIconBehavior__ctor_m2320629194 (UIIconBehavior_t2038039704 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIIconBehavior::Start()
extern "C" IL2CPP_METHOD_ATTR void UIIconBehavior_Start_m500251274 (UIIconBehavior_t2038039704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIIconBehavior_Start_m500251274_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color32_t2600501292  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Color32__ctor_m4150508762((&L_0), (uint8_t)((int32_t)61), (uint8_t)((int32_t)87), (uint8_t)((int32_t)127), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_t2555686324  L_1 = Color32_op_Implicit_m213813866(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_activeColor_10(L_1);
		Button_t4055032469 * L_2 = Component_GetComponent_TisButton_t4055032469_m1381873113(__this, /*hidden argument*/Component_GetComponent_TisButton_t4055032469_m1381873113_RuntimeMethod_var);
		__this->set_thisButton_7(L_2);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = Transform_Find_m1729760951(L_3, _stringLiteral2756225712, /*hidden argument*/NULL);
		NullCheck(L_4);
		Image_t2670269651 * L_5 = Component_GetComponent_TisImage_t2670269651_m980647750(L_4, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		__this->set_buttonFrame_8(L_5);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = Transform_Find_m1729760951(L_6, _stringLiteral416089558, /*hidden argument*/NULL);
		NullCheck(L_7);
		Image_t2670269651 * L_8 = Component_GetComponent_TisImage_t2670269651_m980647750(L_7, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		__this->set_buttonIcon_9(L_8);
		bool L_9 = __this->get_isActive_6();
		UIIconBehavior_UpdateIconAndFrame_m2547845981(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIIconBehavior::UpdateIconAndFrame(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UIIconBehavior_UpdateIconAndFrame_m2547845981 (UIIconBehavior_t2038039704 * __this, bool ___state0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___state0;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		Image_t2670269651 * L_1 = __this->get_buttonFrame_8();
		Sprite_t280657092 * L_2 = __this->get_activeFrame_4();
		NullCheck(L_1);
		Image_set_sprite_m2369174689(L_1, L_2, /*hidden argument*/NULL);
		Image_t2670269651 * L_3 = __this->get_buttonIcon_9();
		Color_t2555686324  L_4 = __this->get_activeColor_10();
		NullCheck(L_3);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		goto IL_004e;
	}

IL_002d:
	{
		Image_t2670269651 * L_5 = __this->get_buttonFrame_8();
		Sprite_t280657092 * L_6 = __this->get_inactiveFrame_5();
		NullCheck(L_5);
		Image_set_sprite_m2369174689(L_5, L_6, /*hidden argument*/NULL);
		Image_t2670269651 * L_7 = __this->get_buttonIcon_9();
		Color_t2555686324  L_8 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
	}

IL_004e:
	{
		return;
	}
}
// System.Void UIIconBehavior::ToggleActive()
extern "C" IL2CPP_METHOD_ATTR void UIIconBehavior_ToggleActive_m2191215008 (UIIconBehavior_t2038039704 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isActive_6();
		__this->set_isActive_6((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		bool L_1 = __this->get_isActive_6();
		UIIconBehavior_UpdateIconAndFrame_m2547845981(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIIconBehavior::DeactivateIcon()
extern "C" IL2CPP_METHOD_ATTR void UIIconBehavior_DeactivateIcon_m1995043395 (UIIconBehavior_t2038039704 * __this, const RuntimeMethod* method)
{
	{
		__this->set_isActive_6((bool)0);
		bool L_0 = __this->get_isActive_6();
		UIIconBehavior_UpdateIconAndFrame_m2547845981(__this, L_0, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: VisualizationInfo
extern "C" void VisualizationInfo_t4138410502_marshal_pinvoke(const VisualizationInfo_t4138410502& unmarshaled, VisualizationInfo_t4138410502_marshaled_pinvoke& marshaled)
{
	Exception_t* ___binary_image_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'binary_image' of type 'VisualizationInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___binary_image_0Exception, NULL, NULL);
}
extern "C" void VisualizationInfo_t4138410502_marshal_pinvoke_back(const VisualizationInfo_t4138410502_marshaled_pinvoke& marshaled, VisualizationInfo_t4138410502& unmarshaled)
{
	Exception_t* ___binary_image_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'binary_image' of type 'VisualizationInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___binary_image_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: VisualizationInfo
extern "C" void VisualizationInfo_t4138410502_marshal_pinvoke_cleanup(VisualizationInfo_t4138410502_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: VisualizationInfo
extern "C" void VisualizationInfo_t4138410502_marshal_com(const VisualizationInfo_t4138410502& unmarshaled, VisualizationInfo_t4138410502_marshaled_com& marshaled)
{
	Exception_t* ___binary_image_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'binary_image' of type 'VisualizationInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___binary_image_0Exception, NULL, NULL);
}
extern "C" void VisualizationInfo_t4138410502_marshal_com_back(const VisualizationInfo_t4138410502_marshaled_com& marshaled, VisualizationInfo_t4138410502& unmarshaled)
{
	Exception_t* ___binary_image_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'binary_image' of type 'VisualizationInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___binary_image_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: VisualizationInfo
extern "C" void VisualizationInfo_t4138410502_marshal_com_cleanup(VisualizationInfo_t4138410502_marshaled_com& marshaled)
{
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

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Portal

#include "Basic.hpp"

#include "Struct_settings_structs.hpp"
#include "Struct_save_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function portal.portal_C.dreamInv
// 0x0018 (0x0018 - 0x0000)
struct Portal_C_DreamInv final
{
public:
	TArray<struct FStruct_save>                   Invv;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ADreamBase_C*                           Base_0;                                            // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Portal_C_DreamInv) == 0x000008, "Wrong alignment on Portal_C_DreamInv");
static_assert(sizeof(Portal_C_DreamInv) == 0x000018, "Wrong size on Portal_C_DreamInv");
static_assert(offsetof(Portal_C_DreamInv, Invv) == 0x000000, "Member 'Portal_C_DreamInv::Invv' has a wrong offset!");
static_assert(offsetof(Portal_C_DreamInv, Base_0) == 0x000010, "Member 'Portal_C_DreamInv::Base_0' has a wrong offset!");

// Function portal.portal_C.SetActive
// 0x0001 (0x0001 - 0x0000)
struct Portal_C_SetActive final
{
public:
	bool                                          IsActive_0;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Portal_C_SetActive) == 0x000001, "Wrong alignment on Portal_C_SetActive");
static_assert(sizeof(Portal_C_SetActive) == 0x000001, "Wrong size on Portal_C_SetActive");
static_assert(offsetof(Portal_C_SetActive, IsActive_0) == 0x000000, "Member 'Portal_C_SetActive::IsActive_0' has a wrong offset!");

// Function portal.portal_C.applyVisual
// 0x0008 (0x0008 - 0x0000)
struct Portal_C_ApplyVisual final
{
public:
	float                                         CallFunc_GetMinElement_ReturnValue;                // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Portal_C_ApplyVisual) == 0x000004, "Wrong alignment on Portal_C_ApplyVisual");
static_assert(sizeof(Portal_C_ApplyVisual) == 0x000008, "Wrong size on Portal_C_ApplyVisual");
static_assert(offsetof(Portal_C_ApplyVisual, CallFunc_GetMinElement_ReturnValue) == 0x000000, "Member 'Portal_C_ApplyVisual::CallFunc_GetMinElement_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ApplyVisual, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000004, "Member 'Portal_C_ApplyVisual::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ApplyVisual, CallFunc_SetStaticMesh_ReturnValue) == 0x000005, "Member 'Portal_C_ApplyVisual::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");

// Function portal.portal_C.Render
// 0x0001 (0x0001 - 0x0000)
struct Portal_C_Render final
{
public:
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Portal_C_Render) == 0x000001, "Wrong alignment on Portal_C_Render");
static_assert(sizeof(Portal_C_Render) == 0x000001, "Wrong size on Portal_C_Render");
static_assert(offsetof(Portal_C_Render, CallFunc_BooleanAND_ReturnValue) == 0x000000, "Member 'Portal_C_Render::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function portal.portal_C.makeRt
// 0x0018 (0x0018 - 0x0000)
struct Portal_C_MakeRt final
{
public:
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              CallFunc_Conv_Vector2DToIntPoint_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 CallFunc_CreateRenderTarget2D_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Portal_C_MakeRt) == 0x000008, "Wrong alignment on Portal_C_MakeRt");
static_assert(sizeof(Portal_C_MakeRt) == 0x000018, "Wrong size on Portal_C_MakeRt");
static_assert(offsetof(Portal_C_MakeRt, CallFunc_GetViewportSize_ReturnValue) == 0x000000, "Member 'Portal_C_MakeRt::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_MakeRt, CallFunc_Conv_Vector2DToIntPoint_ReturnValue) == 0x000008, "Member 'Portal_C_MakeRt::CallFunc_Conv_Vector2DToIntPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_MakeRt, CallFunc_CreateRenderTarget2D_ReturnValue) == 0x000010, "Member 'Portal_C_MakeRt::CallFunc_CreateRenderTarget2D_ReturnValue' has a wrong offset!");

// Function portal.portal_C.applyColor
// 0x0010 (0x0010 - 0x0000)
struct Portal_C_ApplyColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Portal_C_ApplyColor) == 0x000004, "Wrong alignment on Portal_C_ApplyColor");
static_assert(sizeof(Portal_C_ApplyColor) == 0x000010, "Wrong size on Portal_C_ApplyColor");
static_assert(offsetof(Portal_C_ApplyColor, Color) == 0x000000, "Member 'Portal_C_ApplyColor::Color' has a wrong offset!");

// Function portal.portal_C.texturePickerApply
// 0x0018 (0x0018 - 0x0000)
struct Portal_C_TexturePickerApply final
{
public:
	class UUmg_texturePicker_C*                   Picker;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Portal_C_TexturePickerApply) == 0x000008, "Wrong alignment on Portal_C_TexturePickerApply");
static_assert(sizeof(Portal_C_TexturePickerApply) == 0x000018, "Wrong size on Portal_C_TexturePickerApply");
static_assert(offsetof(Portal_C_TexturePickerApply, Picker) == 0x000000, "Member 'Portal_C_TexturePickerApply::Picker' has a wrong offset!");
static_assert(offsetof(Portal_C_TexturePickerApply, Texture) == 0x000008, "Member 'Portal_C_TexturePickerApply::Texture' has a wrong offset!");
static_assert(offsetof(Portal_C_TexturePickerApply, Index_0) == 0x000010, "Member 'Portal_C_TexturePickerApply::Index_0' has a wrong offset!");

// Function portal.portal_C.settingsApplied
// 0x0100 (0x0100 - 0x0000)
struct Portal_C_SettingsApplied final
{
public:
	struct FStruct_settings                       Settings;                                          // 0x0000(0x0100)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(Portal_C_SettingsApplied) == 0x000008, "Wrong alignment on Portal_C_SettingsApplied");
static_assert(sizeof(Portal_C_SettingsApplied) == 0x000100, "Wrong size on Portal_C_SettingsApplied");
static_assert(offsetof(Portal_C_SettingsApplied, Settings) == 0x000000, "Member 'Portal_C_SettingsApplied::Settings' has a wrong offset!");

// Function portal.portal_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Portal_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Portal_C_ReceiveTick) == 0x000004, "Wrong alignment on Portal_C_ReceiveTick");
static_assert(sizeof(Portal_C_ReceiveTick) == 0x000004, "Wrong size on Portal_C_ReceiveTick");
static_assert(offsetof(Portal_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Portal_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function portal.portal_C.AnyKey
// 0x0020 (0x0020 - 0x0000)
struct Portal_C_AnyKey final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Pressed;                                           // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Portal_C_AnyKey) == 0x000008, "Wrong alignment on Portal_C_AnyKey");
static_assert(sizeof(Portal_C_AnyKey) == 0x000020, "Wrong size on Portal_C_AnyKey");
static_assert(offsetof(Portal_C_AnyKey, Key) == 0x000000, "Member 'Portal_C_AnyKey::Key' has a wrong offset!");
static_assert(offsetof(Portal_C_AnyKey, Pressed) == 0x000018, "Member 'Portal_C_AnyKey::Pressed' has a wrong offset!");

// Function portal.portal_C.stuffUpgraded
// 0x0008 (0x0008 - 0x0000)
struct Portal_C_StuffUpgraded final
{
public:
	class AMainGamemode_C*                        GameMode_0;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Portal_C_StuffUpgraded) == 0x000008, "Wrong alignment on Portal_C_StuffUpgraded");
static_assert(sizeof(Portal_C_StuffUpgraded) == 0x000008, "Wrong size on Portal_C_StuffUpgraded");
static_assert(offsetof(Portal_C_StuffUpgraded, GameMode_0) == 0x000000, "Member 'Portal_C_StuffUpgraded::GameMode_0' has a wrong offset!");

// Function portal.portal_C.fl
// 0x0010 (0x0010 - 0x0000)
struct Portal_C_Fl final
{
public:
	class USpotLightComponent*                    Light;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Visible;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Portal_C_Fl) == 0x000008, "Wrong alignment on Portal_C_Fl");
static_assert(sizeof(Portal_C_Fl) == 0x000010, "Wrong size on Portal_C_Fl");
static_assert(offsetof(Portal_C_Fl, Light) == 0x000000, "Member 'Portal_C_Fl::Light' has a wrong offset!");
static_assert(offsetof(Portal_C_Fl, Visible) == 0x000008, "Member 'Portal_C_Fl::Visible' has a wrong offset!");

// Function portal.portal_C.ExecuteUbergraph_portal
// 0x0590 (0x0590 - 0x0000)
struct Portal_C_ExecuteUbergraph_portal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0xB];                                        // 0x0005(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	struct FLinearColor                           K2Node_Event_color;                                // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUmg_texturePicker_C*                   K2Node_Event_picker;                               // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Event_texture;                              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_settings                       K2Node_Event_settings;                             // 0x0068(0x0100)(HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x0180(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x01B0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue_1;     // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFOVAngle_ReturnValue;                  // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EC[0x4];                                      // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue_2;     // 0x01F0(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeRelativeTransform_ReturnValue;        // 0x0220(0x0030)(IsPlainOldData, NoDestructor)
	TDelegate<void(class USpotLightComponent* Light, bool Visible)> K2Node_CreateDelegate_OutputDelegate;              // 0x0250(0x0010)(ZeroConstructor, NoDestructor)
	struct FTransform                             CallFunc_ComposeTransforms_ReturnValue;            // 0x0260(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_291[0x3];                                      // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0294(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x02A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_Event_key;                                  // 0x02B0(0x0018)(HasGetValueTypeHash)
	bool                                          K2Node_Event_pressed;                              // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C9[0x7];                                      // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue_2;     // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x02D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E4[0x4];                                      // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        K2Node_Event_gamemode;                             // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x02F0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_1;           // 0x0378(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0384(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0390(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39C[0x4];                                      // 0x039C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue_3;     // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x03A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x03B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B9[0x7];                                      // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player;              // 0x03C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x03C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x03D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x03E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EC[0x4];                                      // 0x03EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USpotLightComponent*                    K2Node_CustomEvent_light;                          // 0x03F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_visible;                        // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F9[0x3];                                      // 0x03F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x03FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_401[0xF];                                      // 0x0401(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue_3;     // 0x0410(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue_4;     // 0x0440(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeRelativeTransform_ReturnValue_1;      // 0x0470(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChildActor_ReturnValue;                 // 0x04A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A1[0xF];                                      // 0x04A1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_ComposeTransforms_ReturnValue_1;          // 0x04B0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_GetParentActor_ReturnValue;               // 0x04E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x04E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E9[0x3];                                      // 0x04E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult_1;    // 0x04EC(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0574(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0575(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0576(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_577[0x1];                                      // 0x0577(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0578(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0580(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Portal_C_ExecuteUbergraph_portal) == 0x000010, "Wrong alignment on Portal_C_ExecuteUbergraph_portal");
static_assert(sizeof(Portal_C_ExecuteUbergraph_portal) == 0x000590, "Wrong size on Portal_C_ExecuteUbergraph_portal");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, EntryPoint) == 0x000000, "Member 'Portal_C_ExecuteUbergraph_portal::EntryPoint' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, Temp_bool_Variable) == 0x000004, "Member 'Portal_C_ExecuteUbergraph_portal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000010, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, K2Node_Event_color) == 0x000040, "Member 'Portal_C_ExecuteUbergraph_portal::K2Node_Event_color' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, K2Node_Event_picker) == 0x000050, "Member 'Portal_C_ExecuteUbergraph_portal::K2Node_Event_picker' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, K2Node_Event_texture) == 0x000058, "Member 'Portal_C_ExecuteUbergraph_portal::K2Node_Event_texture' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, K2Node_Event_index) == 0x000060, "Member 'Portal_C_ExecuteUbergraph_portal::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, K2Node_Event_settings) == 0x000068, "Member 'Portal_C_ExecuteUbergraph_portal::K2Node_Event_settings' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, K2Node_Event_DeltaSeconds) == 0x000168, "Member 'Portal_C_ExecuteUbergraph_portal::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000170, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000178, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_K2_GetComponentToWorld_ReturnValue_1) == 0x000180, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_K2_GetComponentToWorld_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_GetTransform_ReturnValue) == 0x0001B0, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_GetPlayerCameraManager_ReturnValue_1) == 0x0001E0, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_GetPlayerCameraManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_GetFOVAngle_ReturnValue) == 0x0001E8, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_GetFOVAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_K2_GetComponentToWorld_ReturnValue_2) == 0x0001F0, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_K2_GetComponentToWorld_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_MakeRelativeTransform_ReturnValue) == 0x000220, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_MakeRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, K2Node_CreateDelegate_OutputDelegate) == 0x000250, "Member 'Portal_C_ExecuteUbergraph_portal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_ComposeTransforms_ReturnValue) == 0x000260, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_ComposeTransforms_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_IsValid_ReturnValue) == 0x000290, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_GetForwardVector_ReturnValue) == 0x000294, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0002A0, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, K2Node_Event_key) == 0x0002B0, "Member 'Portal_C_ExecuteUbergraph_portal::K2Node_Event_key' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, K2Node_Event_pressed) == 0x0002C8, "Member 'Portal_C_ExecuteUbergraph_portal::K2Node_Event_pressed' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_GetPlayerCameraManager_ReturnValue_2) == 0x0002D0, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_GetPlayerCameraManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0002D8, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, K2Node_Event_gamemode) == 0x0002E8, "Member 'Portal_C_ExecuteUbergraph_portal::K2Node_Event_gamemode' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x0002F0, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_GetForwardVector_ReturnValue_1) == 0x000378, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_GetForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000384, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000390, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_GetPlayerCameraManager_ReturnValue_3) == 0x0003A0, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_GetPlayerCameraManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x0003A8, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_Vector_Distance_ReturnValue) == 0x0003B4, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x0003B8, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_getMainPlayer_AsMain_Player) == 0x0003C0, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_getMainPlayer_AsMain_Player' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x0003C8, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x0003D4, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_Normal_ReturnValue) == 0x0003E0, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, K2Node_CustomEvent_light) == 0x0003F0, "Member 'Portal_C_ExecuteUbergraph_portal::K2Node_CustomEvent_light' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, K2Node_CustomEvent_visible) == 0x0003F8, "Member 'Portal_C_ExecuteUbergraph_portal::K2Node_CustomEvent_visible' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_Dot_VectorVector_ReturnValue) == 0x0003FC, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_Less_FloatFloat_ReturnValue) == 0x000400, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_K2_GetComponentToWorld_ReturnValue_3) == 0x000410, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_K2_GetComponentToWorld_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_K2_GetComponentToWorld_ReturnValue_4) == 0x000440, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_K2_GetComponentToWorld_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_MakeRelativeTransform_ReturnValue_1) == 0x000470, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_MakeRelativeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_IsChildActor_ReturnValue) == 0x0004A0, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_IsChildActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_ComposeTransforms_ReturnValue_1) == 0x0004B0, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_ComposeTransforms_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_GetParentActor_ReturnValue) == 0x0004E0, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_GetParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, K2Node_Select_Default) == 0x0004E8, "Member 'Portal_C_ExecuteUbergraph_portal::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_K2_SetWorldTransform_SweepHitResult_1) == 0x0004EC, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_K2_SetWorldTransform_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_Not_PreBool_ReturnValue) == 0x000574, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_BooleanAND_ReturnValue) == 0x000575, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_BooleanAND_ReturnValue_1) == 0x000576, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000578, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Portal_C_ExecuteUbergraph_portal, CallFunc_IsValid_ReturnValue_1) == 0x000580, "Member 'Portal_C_ExecuteUbergraph_portal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

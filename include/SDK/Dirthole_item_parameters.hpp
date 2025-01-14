#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dirthole_item

#include "Basic.hpp"

#include "Struct_settings_structs.hpp"
#include "Struct_save_structs.hpp"
#include "Struct_mClass_structs.hpp"
#include "Struct_mFloat_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Struct_mBool_structs.hpp"
#include "Struct_mString_structs.hpp"
#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function dirthole_item.dirthole_item_C.ExecuteUbergraph_dirthole_item
// 0x0310 (0x0310 - 0x0000)
struct Dirthole_item_C_ExecuteUbergraph_dirthole_item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_save1_C>          K2Node_DynamicCast_AsInt_Save_1;                   // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_save                           CallFunc_getData_data;                             // 0x0030(0x00C0)(HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_DynamicCast_AsPrimitive_Component;          // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_objects_C>        K2Node_DynamicCast_AsInt_Objects;                  // 0x0100(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0118(0x0010)(ConstParm, ReferenceParm)
	class AMainGamemode_C*                        K2Node_Event_gamemode;                             // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_settings                       K2Node_Event_settings;                             // 0x0130(0x0100)(HasGetValueTypeHash)
	struct FKey                                   K2Node_Event_key;                                  // 0x0230(0x0018)(HasGetValueTypeHash)
	bool                                          K2Node_Event_pressed;                              // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_249[0x3];                                      // 0x0249(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Event_color;                                // 0x024C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25C[0x4];                                      // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUmg_texturePicker_C*                   K2Node_Event_picker;                               // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Event_texture;                              // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0274(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0280(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_291[0x3];                                      // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatPlusEquals_FloatOut;          // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x029C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_SphereOverlapActors_OutActors;            // 0x02B0(0x0010)(ReferenceParm)
	bool                                          CallFunc_SphereOverlapActors_ReturnValue;          // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable_1;                            // 0x02C8(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D9[0x7];                                      // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_SphereOverlapActors_OutActors_1;          // 0x02E0(0x0010)(ReferenceParm)
	bool                                          CallFunc_SphereOverlapActors_ReturnValue_1;        // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F1[0x7];                                      // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_301[0x3];                                      // 0x0301(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0304(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Dirthole_item_C_ExecuteUbergraph_dirthole_item) == 0x000010, "Wrong alignment on Dirthole_item_C_ExecuteUbergraph_dirthole_item");
static_assert(sizeof(Dirthole_item_C_ExecuteUbergraph_dirthole_item) == 0x000310, "Wrong size on Dirthole_item_C_ExecuteUbergraph_dirthole_item");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, EntryPoint) == 0x000000, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::EntryPoint' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, K2Node_DynamicCast_AsInt_Save_1) == 0x000008, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::K2Node_DynamicCast_AsInt_Save_1' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000020, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, CallFunc_getData_data) == 0x000030, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, K2Node_DynamicCast_AsPrimitive_Component) == 0x0000F0, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::K2Node_DynamicCast_AsPrimitive_Component' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, K2Node_DynamicCast_bSuccess_1) == 0x0000F8, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, K2Node_DynamicCast_AsInt_Objects) == 0x000100, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::K2Node_DynamicCast_AsInt_Objects' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, K2Node_DynamicCast_bSuccess_2) == 0x000110, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, Temp_object_Variable) == 0x000118, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, K2Node_Event_gamemode) == 0x000128, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::K2Node_Event_gamemode' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, K2Node_Event_settings) == 0x000130, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::K2Node_Event_settings' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, K2Node_Event_key) == 0x000230, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::K2Node_Event_key' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, K2Node_Event_pressed) == 0x000248, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::K2Node_Event_pressed' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, K2Node_Event_color) == 0x00024C, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::K2Node_Event_color' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, K2Node_Event_picker) == 0x000260, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::K2Node_Event_picker' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, K2Node_Event_texture) == 0x000268, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::K2Node_Event_texture' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, K2Node_Event_index) == 0x000270, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000274, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, K2Node_MakeArray_Array) == 0x000280, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000290, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000294, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, CallFunc_VictoryFloatPlusEquals_FloatOut) == 0x000298, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::CallFunc_VictoryFloatPlusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x00029C, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0002A8, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, CallFunc_SphereOverlapActors_OutActors) == 0x0002B0, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::CallFunc_SphereOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, CallFunc_SphereOverlapActors_ReturnValue) == 0x0002C0, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::CallFunc_SphereOverlapActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, Temp_object_Variable_1) == 0x0002C8, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, CallFunc_Not_PreBool_ReturnValue) == 0x0002D8, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, CallFunc_SphereOverlapActors_OutActors_1) == 0x0002E0, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::CallFunc_SphereOverlapActors_OutActors_1' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, CallFunc_SphereOverlapActors_ReturnValue_1) == 0x0002F0, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::CallFunc_SphereOverlapActors_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, CallFunc_Array_Get_Item) == 0x0002F8, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, CallFunc_Array_RemoveItem_ReturnValue) == 0x000300, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_ExecuteUbergraph_dirthole_item, CallFunc_Array_Add_ReturnValue) == 0x000304, "Member 'Dirthole_item_C_ExecuteUbergraph_dirthole_item::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function dirthole_item.dirthole_item_C.texturePickerApply
// 0x0018 (0x0018 - 0x0000)
struct Dirthole_item_C_TexturePickerApply final
{
public:
	class UUmg_texturePicker_C*                   Picker;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Dirthole_item_C_TexturePickerApply) == 0x000008, "Wrong alignment on Dirthole_item_C_TexturePickerApply");
static_assert(sizeof(Dirthole_item_C_TexturePickerApply) == 0x000018, "Wrong size on Dirthole_item_C_TexturePickerApply");
static_assert(offsetof(Dirthole_item_C_TexturePickerApply, Picker) == 0x000000, "Member 'Dirthole_item_C_TexturePickerApply::Picker' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_TexturePickerApply, Texture) == 0x000008, "Member 'Dirthole_item_C_TexturePickerApply::Texture' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_TexturePickerApply, Index_0) == 0x000010, "Member 'Dirthole_item_C_TexturePickerApply::Index_0' has a wrong offset!");

// Function dirthole_item.dirthole_item_C.applyColor
// 0x0010 (0x0010 - 0x0000)
struct Dirthole_item_C_ApplyColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Dirthole_item_C_ApplyColor) == 0x000004, "Wrong alignment on Dirthole_item_C_ApplyColor");
static_assert(sizeof(Dirthole_item_C_ApplyColor) == 0x000010, "Wrong size on Dirthole_item_C_ApplyColor");
static_assert(offsetof(Dirthole_item_C_ApplyColor, Color) == 0x000000, "Member 'Dirthole_item_C_ApplyColor::Color' has a wrong offset!");

// Function dirthole_item.dirthole_item_C.AnyKey
// 0x0020 (0x0020 - 0x0000)
struct Dirthole_item_C_AnyKey final
{
public:
	struct FKey                                   Key_0;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Pressed;                                           // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Dirthole_item_C_AnyKey) == 0x000008, "Wrong alignment on Dirthole_item_C_AnyKey");
static_assert(sizeof(Dirthole_item_C_AnyKey) == 0x000020, "Wrong size on Dirthole_item_C_AnyKey");
static_assert(offsetof(Dirthole_item_C_AnyKey, Key_0) == 0x000000, "Member 'Dirthole_item_C_AnyKey::Key_0' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_AnyKey, Pressed) == 0x000018, "Member 'Dirthole_item_C_AnyKey::Pressed' has a wrong offset!");

// Function dirthole_item.dirthole_item_C.settingsApplied
// 0x0100 (0x0100 - 0x0000)
struct Dirthole_item_C_SettingsApplied final
{
public:
	struct FStruct_settings                       Settings;                                          // 0x0000(0x0100)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(Dirthole_item_C_SettingsApplied) == 0x000008, "Wrong alignment on Dirthole_item_C_SettingsApplied");
static_assert(sizeof(Dirthole_item_C_SettingsApplied) == 0x000100, "Wrong size on Dirthole_item_C_SettingsApplied");
static_assert(offsetof(Dirthole_item_C_SettingsApplied, Settings) == 0x000000, "Member 'Dirthole_item_C_SettingsApplied::Settings' has a wrong offset!");

// Function dirthole_item.dirthole_item_C.stuffUpgraded
// 0x0008 (0x0008 - 0x0000)
struct Dirthole_item_C_StuffUpgraded final
{
public:
	class AMainGamemode_C*                        GameMode_0;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Dirthole_item_C_StuffUpgraded) == 0x000008, "Wrong alignment on Dirthole_item_C_StuffUpgraded");
static_assert(sizeof(Dirthole_item_C_StuffUpgraded) == 0x000008, "Wrong size on Dirthole_item_C_StuffUpgraded");
static_assert(offsetof(Dirthole_item_C_StuffUpgraded, GameMode_0) == 0x000000, "Member 'Dirthole_item_C_StuffUpgraded::GameMode_0' has a wrong offset!");

// Function dirthole_item.dirthole_item_C.pullOut
// 0x0001 (0x0001 - 0x0000)
struct Dirthole_item_C_PullOut final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Dirthole_item_C_PullOut) == 0x000001, "Wrong alignment on Dirthole_item_C_PullOut");
static_assert(sizeof(Dirthole_item_C_PullOut) == 0x000001, "Wrong size on Dirthole_item_C_PullOut");
static_assert(offsetof(Dirthole_item_C_PullOut, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'Dirthole_item_C_PullOut::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function dirthole_item.dirthole_item_C.buryItem
// 0x0120 (0x0120 - 0x0000)
struct Dirthole_item_C_buryItem final
{
public:
	class AActor*                                 Ac_0;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_objects_C>        K2Node_DynamicCast_AsInt_Objects;                  // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_save1_C>          K2Node_DynamicCast_AsInt_Save_1;                   // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_DynamicCast_AsPrimitive_Component;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0xF];                                       // 0x0051(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_save                           CallFunc_getData_data;                             // 0x0060(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Dirthole_item_C_buryItem) == 0x000010, "Wrong alignment on Dirthole_item_C_buryItem");
static_assert(sizeof(Dirthole_item_C_buryItem) == 0x000120, "Wrong size on Dirthole_item_C_buryItem");
static_assert(offsetof(Dirthole_item_C_buryItem, Ac_0) == 0x000000, "Member 'Dirthole_item_C_buryItem::Ac_0' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_buryItem, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'Dirthole_item_C_buryItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_buryItem, K2Node_DynamicCast_AsInt_Objects) == 0x000010, "Member 'Dirthole_item_C_buryItem::K2Node_DynamicCast_AsInt_Objects' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_buryItem, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Dirthole_item_C_buryItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_buryItem, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000028, "Member 'Dirthole_item_C_buryItem::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_buryItem, K2Node_DynamicCast_AsInt_Save_1) == 0x000030, "Member 'Dirthole_item_C_buryItem::K2Node_DynamicCast_AsInt_Save_1' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_buryItem, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'Dirthole_item_C_buryItem::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_buryItem, K2Node_DynamicCast_AsPrimitive_Component) == 0x000048, "Member 'Dirthole_item_C_buryItem::K2Node_DynamicCast_AsPrimitive_Component' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_buryItem, K2Node_DynamicCast_bSuccess_2) == 0x000050, "Member 'Dirthole_item_C_buryItem::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_buryItem, CallFunc_getData_data) == 0x000060, "Member 'Dirthole_item_C_buryItem::CallFunc_getData_data' has a wrong offset!");

// Function dirthole_item.dirthole_item_C.dreamInv
// 0x0018 (0x0018 - 0x0000)
struct Dirthole_item_C_DreamInv final
{
public:
	TArray<struct FStruct_save>                   Invv;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ADreamBase_C*                           Base;                                              // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Dirthole_item_C_DreamInv) == 0x000008, "Wrong alignment on Dirthole_item_C_DreamInv");
static_assert(sizeof(Dirthole_item_C_DreamInv) == 0x000018, "Wrong size on Dirthole_item_C_DreamInv");
static_assert(offsetof(Dirthole_item_C_DreamInv, Invv) == 0x000000, "Member 'Dirthole_item_C_DreamInv::Invv' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_DreamInv, Base) == 0x000010, "Member 'Dirthole_item_C_DreamInv::Base' has a wrong offset!");

// Function dirthole_item.dirthole_item_C.loadData
// 0x0130 (0x0130 - 0x0000)
struct Dirthole_item_C_LoadData final
{
public:
	struct FStruct_save                           Data_0;                                            // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mClass                         CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	struct FStruct_mString                        CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0010)(HasGetValueTypeHash)
	class UClass*                                 CallFunc_Array_Get_Item_2;                         // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item_3;                         // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_mFloat                         CallFunc_Array_Get_Item_4;                         // 0x0108(0x0010)(HasGetValueTypeHash)
	struct FStruct_mBool                          CallFunc_Array_Get_Item_5;                         // 0x0118(0x0010)(HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item_6;                         // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item_7;                         // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Get_Item_8;                         // 0x012D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Dirthole_item_C_LoadData) == 0x000010, "Wrong alignment on Dirthole_item_C_LoadData");
static_assert(sizeof(Dirthole_item_C_LoadData) == 0x000130, "Wrong size on Dirthole_item_C_LoadData");
static_assert(offsetof(Dirthole_item_C_LoadData, Data_0) == 0x000000, "Member 'Dirthole_item_C_LoadData::Data_0' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_LoadData, Return) == 0x0000C0, "Member 'Dirthole_item_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Dirthole_item_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Dirthole_item_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_LoadData, CallFunc_Array_Get_Item_2) == 0x0000E8, "Member 'Dirthole_item_C_LoadData::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_LoadData, CallFunc_Array_Get_Item_3) == 0x0000F0, "Member 'Dirthole_item_C_LoadData::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_LoadData, CallFunc_Conv_StringToName_ReturnValue) == 0x000100, "Member 'Dirthole_item_C_LoadData::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_LoadData, CallFunc_Array_Get_Item_4) == 0x000108, "Member 'Dirthole_item_C_LoadData::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_LoadData, CallFunc_Array_Get_Item_5) == 0x000118, "Member 'Dirthole_item_C_LoadData::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_LoadData, CallFunc_Array_Get_Item_6) == 0x000128, "Member 'Dirthole_item_C_LoadData::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_LoadData, CallFunc_Array_Get_Item_7) == 0x00012C, "Member 'Dirthole_item_C_LoadData::CallFunc_Array_Get_Item_7' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_LoadData, CallFunc_Array_Get_Item_8) == 0x00012D, "Member 'Dirthole_item_C_LoadData::CallFunc_Array_Get_Item_8' has a wrong offset!");

// Function dirthole_item.dirthole_item_C.getData
// 0x0310 (0x0310 - 0x0000)
struct Dirthole_item_C_GetData final
{
public:
	struct FStruct_save                           Data_0;                                            // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	TArray<class UClass*>                         K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ReferenceParm)
	TArray<float>                                 K2Node_MakeArray_Array_1;                          // 0x00D0(0x0010)(ReferenceParm)
	struct FStruct_mClass                         K2Node_MakeStruct_struct_mClass;                   // 0x00E0(0x0010)(HasGetValueTypeHash)
	struct FStruct_mFloat                         K2Node_MakeStruct_struct_mFloat;                   // 0x00F0(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mClass>                 K2Node_MakeArray_Array_2;                          // 0x0100(0x0010)(ReferenceParm)
	TArray<struct FStruct_mFloat>                 K2Node_MakeArray_Array_3;                          // 0x0110(0x0010)(ReferenceParm)
	TArray<bool>                                  K2Node_MakeArray_Array_4;                          // 0x0120(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FStruct_mBool                          K2Node_MakeStruct_struct_mBool;                    // 0x0140(0x0010)(HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array_5;                          // 0x0150(0x0010)(ReferenceParm)
	TArray<struct FStruct_mBool>                  K2Node_MakeArray_Array_6;                          // 0x0160(0x0010)(ReferenceParm)
	struct FStruct_mString                        K2Node_MakeStruct_struct_mString;                  // 0x0170(0x0010)(HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x0180(0x00C0)(HasGetValueTypeHash)
	TArray<struct FStruct_mString>                K2Node_MakeArray_Array_7;                          // 0x0240(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x0250(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Dirthole_item_C_GetData) == 0x000010, "Wrong alignment on Dirthole_item_C_GetData");
static_assert(sizeof(Dirthole_item_C_GetData) == 0x000310, "Wrong size on Dirthole_item_C_GetData");
static_assert(offsetof(Dirthole_item_C_GetData, Data_0) == 0x000000, "Member 'Dirthole_item_C_GetData::Data_0' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_GetData, K2Node_MakeArray_Array) == 0x0000C0, "Member 'Dirthole_item_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_GetData, K2Node_MakeArray_Array_1) == 0x0000D0, "Member 'Dirthole_item_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_GetData, K2Node_MakeStruct_struct_mClass) == 0x0000E0, "Member 'Dirthole_item_C_GetData::K2Node_MakeStruct_struct_mClass' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_GetData, K2Node_MakeStruct_struct_mFloat) == 0x0000F0, "Member 'Dirthole_item_C_GetData::K2Node_MakeStruct_struct_mFloat' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_GetData, K2Node_MakeArray_Array_2) == 0x000100, "Member 'Dirthole_item_C_GetData::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_GetData, K2Node_MakeArray_Array_3) == 0x000110, "Member 'Dirthole_item_C_GetData::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_GetData, K2Node_MakeArray_Array_4) == 0x000120, "Member 'Dirthole_item_C_GetData::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_GetData, CallFunc_Conv_NameToString_ReturnValue) == 0x000130, "Member 'Dirthole_item_C_GetData::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_GetData, K2Node_MakeStruct_struct_mBool) == 0x000140, "Member 'Dirthole_item_C_GetData::K2Node_MakeStruct_struct_mBool' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_GetData, K2Node_MakeArray_Array_5) == 0x000150, "Member 'Dirthole_item_C_GetData::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_GetData, K2Node_MakeArray_Array_6) == 0x000160, "Member 'Dirthole_item_C_GetData::K2Node_MakeArray_Array_6' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_GetData, K2Node_MakeStruct_struct_mString) == 0x000170, "Member 'Dirthole_item_C_GetData::K2Node_MakeStruct_struct_mString' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_GetData, CallFunc_getData_data) == 0x000180, "Member 'Dirthole_item_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_GetData, K2Node_MakeArray_Array_7) == 0x000240, "Member 'Dirthole_item_C_GetData::K2Node_MakeArray_Array_7' has a wrong offset!");
static_assert(offsetof(Dirthole_item_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x000250, "Member 'Dirthole_item_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

}


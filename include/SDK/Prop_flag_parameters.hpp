#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_flag

#include "Basic.hpp"

#include "Enum_interactionActions_structs.hpp"
#include "Struct_settings_structs.hpp"
#include "Struct_save_structs.hpp"
#include "Struct_mInt_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_flag.prop_flag_C.ExecuteUbergraph_prop_flag
// 0x01C8 (0x01C8 - 0x0000)
struct Prop_flag_C_ExecuteUbergraph_prop_flag final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0018(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_settings                       K2Node_Event_settings;                             // 0x00A8(0x0100)(HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUmg_texturePicker_C*                   K2Node_Event_picker;                               // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Event_texture;                              // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_flag_C_ExecuteUbergraph_prop_flag) == 0x000008, "Wrong alignment on Prop_flag_C_ExecuteUbergraph_prop_flag");
static_assert(sizeof(Prop_flag_C_ExecuteUbergraph_prop_flag) == 0x0001C8, "Wrong size on Prop_flag_C_ExecuteUbergraph_prop_flag");
static_assert(offsetof(Prop_flag_C_ExecuteUbergraph_prop_flag, EntryPoint) == 0x000000, "Member 'Prop_flag_C_ExecuteUbergraph_prop_flag::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_ExecuteUbergraph_prop_flag, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'Prop_flag_C_ExecuteUbergraph_prop_flag::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_ExecuteUbergraph_prop_flag, K2Node_Event_player) == 0x000010, "Member 'Prop_flag_C_ExecuteUbergraph_prop_flag::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_ExecuteUbergraph_prop_flag, K2Node_Event_hit) == 0x000018, "Member 'Prop_flag_C_ExecuteUbergraph_prop_flag::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_ExecuteUbergraph_prop_flag, K2Node_Event_action) == 0x0000A0, "Member 'Prop_flag_C_ExecuteUbergraph_prop_flag::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_ExecuteUbergraph_prop_flag, K2Node_Event_settings) == 0x0000A8, "Member 'Prop_flag_C_ExecuteUbergraph_prop_flag::K2Node_Event_settings' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_ExecuteUbergraph_prop_flag, K2Node_SwitchEnum_CmpSuccess) == 0x0001A8, "Member 'Prop_flag_C_ExecuteUbergraph_prop_flag::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_ExecuteUbergraph_prop_flag, K2Node_Event_picker) == 0x0001B0, "Member 'Prop_flag_C_ExecuteUbergraph_prop_flag::K2Node_Event_picker' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_ExecuteUbergraph_prop_flag, K2Node_Event_texture) == 0x0001B8, "Member 'Prop_flag_C_ExecuteUbergraph_prop_flag::K2Node_Event_texture' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_ExecuteUbergraph_prop_flag, K2Node_Event_index) == 0x0001C0, "Member 'Prop_flag_C_ExecuteUbergraph_prop_flag::K2Node_Event_index' has a wrong offset!");

// Function prop_flag.prop_flag_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Prop_flag_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       Action;                                            // 0x0090(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_flag_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Prop_flag_C_ActionOptionIndex");
static_assert(sizeof(Prop_flag_C_ActionOptionIndex) == 0x000098, "Wrong size on Prop_flag_C_ActionOptionIndex");
static_assert(offsetof(Prop_flag_C_ActionOptionIndex, Player) == 0x000000, "Member 'Prop_flag_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_ActionOptionIndex, Hit_0) == 0x000008, "Member 'Prop_flag_C_ActionOptionIndex::Hit_0' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_ActionOptionIndex, Action) == 0x000090, "Member 'Prop_flag_C_ActionOptionIndex::Action' has a wrong offset!");

// Function prop_flag.prop_flag_C.setTex
// 0x0008 (0x0008 - 0x0000)
struct Prop_flag_C_SetTex final
{
public:
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_flag_C_SetTex) == 0x000008, "Wrong alignment on Prop_flag_C_SetTex");
static_assert(sizeof(Prop_flag_C_SetTex) == 0x000008, "Wrong size on Prop_flag_C_SetTex");
static_assert(offsetof(Prop_flag_C_SetTex, CallFunc_Array_Get_Item) == 0x000000, "Member 'Prop_flag_C_SetTex::CallFunc_Array_Get_Item' has a wrong offset!");

// Function prop_flag.prop_flag_C.settingsApplied
// 0x0100 (0x0100 - 0x0000)
struct Prop_flag_C_SettingsApplied final
{
public:
	struct FStruct_settings                       Settings;                                          // 0x0000(0x0100)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(Prop_flag_C_SettingsApplied) == 0x000008, "Wrong alignment on Prop_flag_C_SettingsApplied");
static_assert(sizeof(Prop_flag_C_SettingsApplied) == 0x000100, "Wrong size on Prop_flag_C_SettingsApplied");
static_assert(offsetof(Prop_flag_C_SettingsApplied, Settings) == 0x000000, "Member 'Prop_flag_C_SettingsApplied::Settings' has a wrong offset!");

// Function prop_flag.prop_flag_C.texturePickerApply
// 0x0018 (0x0018 - 0x0000)
struct Prop_flag_C_TexturePickerApply final
{
public:
	class UUmg_texturePicker_C*                   Picker;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_flag_C_TexturePickerApply) == 0x000008, "Wrong alignment on Prop_flag_C_TexturePickerApply");
static_assert(sizeof(Prop_flag_C_TexturePickerApply) == 0x000018, "Wrong size on Prop_flag_C_TexturePickerApply");
static_assert(offsetof(Prop_flag_C_TexturePickerApply, Picker) == 0x000000, "Member 'Prop_flag_C_TexturePickerApply::Picker' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_TexturePickerApply, Texture) == 0x000008, "Member 'Prop_flag_C_TexturePickerApply::Texture' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_TexturePickerApply, Index_0) == 0x000010, "Member 'Prop_flag_C_TexturePickerApply::Index_0' has a wrong offset!");

// Function prop_flag.prop_flag_C.loadData
// 0x00E0 (0x00E0 - 0x0000)
struct Prop_flag_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mInt                           CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_flag_C_LoadData) == 0x000010, "Wrong alignment on Prop_flag_C_LoadData");
static_assert(sizeof(Prop_flag_C_LoadData) == 0x0000E0, "Wrong size on Prop_flag_C_LoadData");
static_assert(offsetof(Prop_flag_C_LoadData, Data) == 0x000000, "Member 'Prop_flag_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_LoadData, Return) == 0x0000C0, "Member 'Prop_flag_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Prop_flag_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Prop_flag_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Prop_flag_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function prop_flag.prop_flag_C.getData
// 0x0270 (0x0270 - 0x0000)
struct Prop_flag_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x00C0(0x00C0)(HasGetValueTypeHash)
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	struct FStruct_mInt                           K2Node_MakeStruct_struct_mInt;                     // 0x0190(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mInt>                   K2Node_MakeArray_Array_1;                          // 0x01A0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01B0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Prop_flag_C_GetData) == 0x000010, "Wrong alignment on Prop_flag_C_GetData");
static_assert(sizeof(Prop_flag_C_GetData) == 0x000270, "Wrong size on Prop_flag_C_GetData");
static_assert(offsetof(Prop_flag_C_GetData, Data) == 0x000000, "Member 'Prop_flag_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_GetData, CallFunc_getData_data) == 0x0000C0, "Member 'Prop_flag_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_GetData, K2Node_MakeArray_Array) == 0x000180, "Member 'Prop_flag_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_GetData, K2Node_MakeStruct_struct_mInt) == 0x000190, "Member 'Prop_flag_C_GetData::K2Node_MakeStruct_struct_mInt' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_GetData, K2Node_MakeArray_Array_1) == 0x0001A0, "Member 'Prop_flag_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001B0, "Member 'Prop_flag_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function prop_flag.prop_flag_C.getActionOptions
// 0x0060 (0x0060 - 0x0000)
struct Prop_flag_C_GetActionOptions final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Component;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Actor;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Options;                                           // 0x0018(0x0010)(Parm, OutParm)
	TArray<Enum_interactionActions>               Options_enum;                                      // 0x0028(0x0010)(Parm, OutParm)
	TArray<class FText>                           OptionsNamesOverlay;                               // 0x0038(0x0010)(Parm, OutParm)
	uint8                                         Number;                                            // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<Enum_interactionActions>               K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm)
};
static_assert(alignof(Prop_flag_C_GetActionOptions) == 0x000008, "Wrong alignment on Prop_flag_C_GetActionOptions");
static_assert(sizeof(Prop_flag_C_GetActionOptions) == 0x000060, "Wrong size on Prop_flag_C_GetActionOptions");
static_assert(offsetof(Prop_flag_C_GetActionOptions, Player) == 0x000000, "Member 'Prop_flag_C_GetActionOptions::Player' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_GetActionOptions, Component) == 0x000008, "Member 'Prop_flag_C_GetActionOptions::Component' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_GetActionOptions, Actor) == 0x000010, "Member 'Prop_flag_C_GetActionOptions::Actor' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_GetActionOptions, Options) == 0x000018, "Member 'Prop_flag_C_GetActionOptions::Options' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_GetActionOptions, Options_enum) == 0x000028, "Member 'Prop_flag_C_GetActionOptions::Options_enum' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_GetActionOptions, OptionsNamesOverlay) == 0x000038, "Member 'Prop_flag_C_GetActionOptions::OptionsNamesOverlay' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_GetActionOptions, Number) == 0x000048, "Member 'Prop_flag_C_GetActionOptions::Number' has a wrong offset!");
static_assert(offsetof(Prop_flag_C_GetActionOptions, K2Node_MakeArray_Array) == 0x000050, "Member 'Prop_flag_C_GetActionOptions::K2Node_MakeArray_Array' has a wrong offset!");

}


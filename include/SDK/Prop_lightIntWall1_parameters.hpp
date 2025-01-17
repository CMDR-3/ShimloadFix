#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_lightIntWall1

#include "Basic.hpp"

#include "Struct_save_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Struct_mBool_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_lightIntWall1.prop_lightIntWall1_C.ExecuteUbergraph_prop_lightIntWall1
// 0x00D0 (0x00D0 - 0x0000)
struct Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AWire_C*                                K2Node_Event_wire_1;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_side;                                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0028(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B3[0x5];                                       // 0x00B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AWire_C*                                K2Node_Event_wire_2;                               // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_side_1;                               // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AWire_C*                                K2Node_Event_wire;                                 // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1) == 0x000008, "Wrong alignment on Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1");
static_assert(sizeof(Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1) == 0x0000D0, "Wrong size on Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1");
static_assert(offsetof(Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1, EntryPoint) == 0x000000, "Member 'Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1, K2Node_Event_wire_1) == 0x000008, "Member 'Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1::K2Node_Event_wire_1' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1, K2Node_Event_side) == 0x000010, "Member 'Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1::K2Node_Event_side' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000014, "Member 'Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1, K2Node_Event_player) == 0x000020, "Member 'Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1, K2Node_Event_hit) == 0x000028, "Member 'Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1, K2Node_Event_action) == 0x0000B0, "Member 'Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1, K2Node_SwitchEnum_CmpSuccess) == 0x0000B1, "Member 'Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1, CallFunc_Not_PreBool_ReturnValue) == 0x0000B2, "Member 'Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1, K2Node_Event_wire_2) == 0x0000B8, "Member 'Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1::K2Node_Event_wire_2' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1, K2Node_Event_side_1) == 0x0000C0, "Member 'Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1::K2Node_Event_side_1' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1, K2Node_Event_wire) == 0x0000C8, "Member 'Prop_lightIntWall1_C_ExecuteUbergraph_prop_lightIntWall1::K2Node_Event_wire' has a wrong offset!");

// Function prop_lightIntWall1.prop_lightIntWall1_C.wirePass
// 0x0008 (0x0008 - 0x0000)
struct Prop_lightIntWall1_C_WirePass final
{
public:
	class AWire_C*                                Wire;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_lightIntWall1_C_WirePass) == 0x000008, "Wrong alignment on Prop_lightIntWall1_C_WirePass");
static_assert(sizeof(Prop_lightIntWall1_C_WirePass) == 0x000008, "Wrong size on Prop_lightIntWall1_C_WirePass");
static_assert(offsetof(Prop_lightIntWall1_C_WirePass, Wire) == 0x000000, "Member 'Prop_lightIntWall1_C_WirePass::Wire' has a wrong offset!");

// Function prop_lightIntWall1.prop_lightIntWall1_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Prop_lightIntWall1_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       Action;                                            // 0x0090(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_lightIntWall1_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Prop_lightIntWall1_C_ActionOptionIndex");
static_assert(sizeof(Prop_lightIntWall1_C_ActionOptionIndex) == 0x000098, "Wrong size on Prop_lightIntWall1_C_ActionOptionIndex");
static_assert(offsetof(Prop_lightIntWall1_C_ActionOptionIndex, Player) == 0x000000, "Member 'Prop_lightIntWall1_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_ActionOptionIndex, Hit_0) == 0x000008, "Member 'Prop_lightIntWall1_C_ActionOptionIndex::Hit_0' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_ActionOptionIndex, Action) == 0x000090, "Member 'Prop_lightIntWall1_C_ActionOptionIndex::Action' has a wrong offset!");

// Function prop_lightIntWall1.prop_lightIntWall1_C.wireDisconnected
// 0x0010 (0x0010 - 0x0000)
struct Prop_lightIntWall1_C_WireDisconnected final
{
public:
	class AWire_C*                                Wire;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Side;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_lightIntWall1_C_WireDisconnected) == 0x000008, "Wrong alignment on Prop_lightIntWall1_C_WireDisconnected");
static_assert(sizeof(Prop_lightIntWall1_C_WireDisconnected) == 0x000010, "Wrong size on Prop_lightIntWall1_C_WireDisconnected");
static_assert(offsetof(Prop_lightIntWall1_C_WireDisconnected, Wire) == 0x000000, "Member 'Prop_lightIntWall1_C_WireDisconnected::Wire' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_WireDisconnected, Side) == 0x000008, "Member 'Prop_lightIntWall1_C_WireDisconnected::Side' has a wrong offset!");

// Function prop_lightIntWall1.prop_lightIntWall1_C.wireConnected
// 0x0010 (0x0010 - 0x0000)
struct Prop_lightIntWall1_C_WireConnected final
{
public:
	class AWire_C*                                Wire;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Side;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_lightIntWall1_C_WireConnected) == 0x000008, "Wrong alignment on Prop_lightIntWall1_C_WireConnected");
static_assert(sizeof(Prop_lightIntWall1_C_WireConnected) == 0x000010, "Wrong size on Prop_lightIntWall1_C_WireConnected");
static_assert(offsetof(Prop_lightIntWall1_C_WireConnected, Wire) == 0x000000, "Member 'Prop_lightIntWall1_C_WireConnected::Wire' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_WireConnected, Side) == 0x000008, "Member 'Prop_lightIntWall1_C_WireConnected::Side' has a wrong offset!");

// Function prop_lightIntWall1.prop_lightIntWall1_C.upd
// 0x0020 (0x0020 - 0x0000)
struct Prop_lightIntWall1_C_Upd final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_lightIntWall1_C_Upd) == 0x000008, "Wrong alignment on Prop_lightIntWall1_C_Upd");
static_assert(sizeof(Prop_lightIntWall1_C_Upd) == 0x000020, "Wrong size on Prop_lightIntWall1_C_Upd");
static_assert(offsetof(Prop_lightIntWall1_C_Upd, Temp_bool_Variable) == 0x000000, "Member 'Prop_lightIntWall1_C_Upd::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_Upd, Temp_object_Variable) == 0x000008, "Member 'Prop_lightIntWall1_C_Upd::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_Upd, Temp_object_Variable_1) == 0x000010, "Member 'Prop_lightIntWall1_C_Upd::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_Upd, K2Node_Select_Default) == 0x000018, "Member 'Prop_lightIntWall1_C_Upd::K2Node_Select_Default' has a wrong offset!");

// Function prop_lightIntWall1.prop_lightIntWall1_C.loadData
// 0x00E0 (0x00E0 - 0x0000)
struct Prop_lightIntWall1_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mBool                          CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_lightIntWall1_C_LoadData) == 0x000010, "Wrong alignment on Prop_lightIntWall1_C_LoadData");
static_assert(sizeof(Prop_lightIntWall1_C_LoadData) == 0x0000E0, "Wrong size on Prop_lightIntWall1_C_LoadData");
static_assert(offsetof(Prop_lightIntWall1_C_LoadData, Data) == 0x000000, "Member 'Prop_lightIntWall1_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_LoadData, Return) == 0x0000C0, "Member 'Prop_lightIntWall1_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Prop_lightIntWall1_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Prop_lightIntWall1_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Prop_lightIntWall1_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function prop_lightIntWall1.prop_lightIntWall1_C.getData
// 0x0280 (0x0280 - 0x0000)
struct Prop_lightIntWall1_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x00C0(0x00C0)(HasGetValueTypeHash)
	TArray<bool>                                  K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	struct FStruct_mBool                          K2Node_MakeStruct_struct_mBool;                    // 0x0190(0x0010)(HasGetValueTypeHash)
	struct FStruct_mBool                          CallFunc_Array_Get_Item;                           // 0x01A0(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mBool>                  K2Node_MakeArray_Array_1;                          // 0x01B0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01C0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Prop_lightIntWall1_C_GetData) == 0x000010, "Wrong alignment on Prop_lightIntWall1_C_GetData");
static_assert(sizeof(Prop_lightIntWall1_C_GetData) == 0x000280, "Wrong size on Prop_lightIntWall1_C_GetData");
static_assert(offsetof(Prop_lightIntWall1_C_GetData, Data) == 0x000000, "Member 'Prop_lightIntWall1_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_GetData, CallFunc_getData_data) == 0x0000C0, "Member 'Prop_lightIntWall1_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_GetData, K2Node_MakeArray_Array) == 0x000180, "Member 'Prop_lightIntWall1_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_GetData, K2Node_MakeStruct_struct_mBool) == 0x000190, "Member 'Prop_lightIntWall1_C_GetData::K2Node_MakeStruct_struct_mBool' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_GetData, CallFunc_Array_Get_Item) == 0x0001A0, "Member 'Prop_lightIntWall1_C_GetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_GetData, K2Node_MakeArray_Array_1) == 0x0001B0, "Member 'Prop_lightIntWall1_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001C0, "Member 'Prop_lightIntWall1_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function prop_lightIntWall1.prop_lightIntWall1_C.getActionOptions
// 0x0060 (0x0060 - 0x0000)
struct Prop_lightIntWall1_C_GetActionOptions final
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
static_assert(alignof(Prop_lightIntWall1_C_GetActionOptions) == 0x000008, "Wrong alignment on Prop_lightIntWall1_C_GetActionOptions");
static_assert(sizeof(Prop_lightIntWall1_C_GetActionOptions) == 0x000060, "Wrong size on Prop_lightIntWall1_C_GetActionOptions");
static_assert(offsetof(Prop_lightIntWall1_C_GetActionOptions, Player) == 0x000000, "Member 'Prop_lightIntWall1_C_GetActionOptions::Player' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_GetActionOptions, Component) == 0x000008, "Member 'Prop_lightIntWall1_C_GetActionOptions::Component' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_GetActionOptions, Actor) == 0x000010, "Member 'Prop_lightIntWall1_C_GetActionOptions::Actor' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_GetActionOptions, Options) == 0x000018, "Member 'Prop_lightIntWall1_C_GetActionOptions::Options' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_GetActionOptions, Options_enum) == 0x000028, "Member 'Prop_lightIntWall1_C_GetActionOptions::Options_enum' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_GetActionOptions, OptionsNamesOverlay) == 0x000038, "Member 'Prop_lightIntWall1_C_GetActionOptions::OptionsNamesOverlay' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_GetActionOptions, Number) == 0x000048, "Member 'Prop_lightIntWall1_C_GetActionOptions::Number' has a wrong offset!");
static_assert(offsetof(Prop_lightIntWall1_C_GetActionOptions, K2Node_MakeArray_Array) == 0x000050, "Member 'Prop_lightIntWall1_C_GetActionOptions::K2Node_MakeArray_Array' has a wrong offset!");

}


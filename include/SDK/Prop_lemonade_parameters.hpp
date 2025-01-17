#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_lemonade

#include "Basic.hpp"

#include "Struct_save_structs.hpp"
#include "Struct_mFloat_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_lemonade.prop_lemonade_C.ExecuteUbergraph_prop_lemonade
// 0x00D0 (0x00D0 - 0x0000)
struct Prop_lemonade_C_ExecuteUbergraph_prop_lemonade final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_C*                                CallFunc_FinishSpawningActor_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue;          // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatMinusEquals_FloatOut;         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0xF];                                       // 0x0081(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;               // 0x0090(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExplosion_C*                           CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_lemonade_C_ExecuteUbergraph_prop_lemonade) == 0x000010, "Wrong alignment on Prop_lemonade_C_ExecuteUbergraph_prop_lemonade");
static_assert(sizeof(Prop_lemonade_C_ExecuteUbergraph_prop_lemonade) == 0x0000D0, "Wrong size on Prop_lemonade_C_ExecuteUbergraph_prop_lemonade");
static_assert(offsetof(Prop_lemonade_C_ExecuteUbergraph_prop_lemonade, EntryPoint) == 0x000000, "Member 'Prop_lemonade_C_ExecuteUbergraph_prop_lemonade::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_ExecuteUbergraph_prop_lemonade, K2Node_Event_player) == 0x000008, "Member 'Prop_lemonade_C_ExecuteUbergraph_prop_lemonade::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_ExecuteUbergraph_prop_lemonade, Temp_name_Variable) == 0x000010, "Member 'Prop_lemonade_C_ExecuteUbergraph_prop_lemonade::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_ExecuteUbergraph_prop_lemonade, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'Prop_lemonade_C_ExecuteUbergraph_prop_lemonade::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_ExecuteUbergraph_prop_lemonade, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000050, "Member 'Prop_lemonade_C_ExecuteUbergraph_prop_lemonade::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_ExecuteUbergraph_prop_lemonade, CallFunc_FinishSpawningActor_ReturnValue) == 0x000058, "Member 'Prop_lemonade_C_ExecuteUbergraph_prop_lemonade::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_ExecuteUbergraph_prop_lemonade, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000060, "Member 'Prop_lemonade_C_ExecuteUbergraph_prop_lemonade::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_ExecuteUbergraph_prop_lemonade, CallFunc_GetActorRightVector_ReturnValue) == 0x000064, "Member 'Prop_lemonade_C_ExecuteUbergraph_prop_lemonade::CallFunc_GetActorRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_ExecuteUbergraph_prop_lemonade, CallFunc_VictoryFloatMinusEquals_FloatOut) == 0x000070, "Member 'Prop_lemonade_C_ExecuteUbergraph_prop_lemonade::CallFunc_VictoryFloatMinusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_ExecuteUbergraph_prop_lemonade, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000074, "Member 'Prop_lemonade_C_ExecuteUbergraph_prop_lemonade::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_ExecuteUbergraph_prop_lemonade, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000080, "Member 'Prop_lemonade_C_ExecuteUbergraph_prop_lemonade::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_ExecuteUbergraph_prop_lemonade, CallFunc_GetTransform_ReturnValue_1) == 0x000090, "Member 'Prop_lemonade_C_ExecuteUbergraph_prop_lemonade::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_ExecuteUbergraph_prop_lemonade, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x0000C0, "Member 'Prop_lemonade_C_ExecuteUbergraph_prop_lemonade::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_ExecuteUbergraph_prop_lemonade, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x0000C8, "Member 'Prop_lemonade_C_ExecuteUbergraph_prop_lemonade::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");

// Function prop_lemonade.prop_lemonade_C.playerHandUse_RMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_lemonade_C_PlayerHandUse_RMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_lemonade_C_PlayerHandUse_RMB) == 0x000008, "Wrong alignment on Prop_lemonade_C_PlayerHandUse_RMB");
static_assert(sizeof(Prop_lemonade_C_PlayerHandUse_RMB) == 0x000008, "Wrong size on Prop_lemonade_C_PlayerHandUse_RMB");
static_assert(offsetof(Prop_lemonade_C_PlayerHandUse_RMB, Player) == 0x000000, "Member 'Prop_lemonade_C_PlayerHandUse_RMB::Player' has a wrong offset!");

// Function prop_lemonade.prop_lemonade_C.loadData
// 0x00E0 (0x00E0 - 0x0000)
struct Prop_lemonade_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mFloat                         CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_loadData_return;                          // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Array_Get_Item_1;                         // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_lemonade_C_LoadData) == 0x000010, "Wrong alignment on Prop_lemonade_C_LoadData");
static_assert(sizeof(Prop_lemonade_C_LoadData) == 0x0000E0, "Wrong size on Prop_lemonade_C_LoadData");
static_assert(offsetof(Prop_lemonade_C_LoadData, Data) == 0x000000, "Member 'Prop_lemonade_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_LoadData, Return) == 0x0000C0, "Member 'Prop_lemonade_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_LoadData, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000C1, "Member 'Prop_lemonade_C_LoadData::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Prop_lemonade_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_LoadData, CallFunc_loadData_return) == 0x0000D8, "Member 'Prop_lemonade_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000DC, "Member 'Prop_lemonade_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function prop_lemonade.prop_lemonade_C.getData
// 0x0280 (0x0280 - 0x0000)
struct Prop_lemonade_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x00C0(0x00C0)(HasGetValueTypeHash)
	TArray<float>                                 K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	struct FStruct_mFloat                         K2Node_MakeStruct_struct_mFloat;                   // 0x0190(0x0010)(HasGetValueTypeHash)
	struct FStruct_mFloat                         CallFunc_Array_Get_Item;                           // 0x01A0(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mFloat>                 K2Node_MakeArray_Array_1;                          // 0x01B0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01C0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Prop_lemonade_C_GetData) == 0x000010, "Wrong alignment on Prop_lemonade_C_GetData");
static_assert(sizeof(Prop_lemonade_C_GetData) == 0x000280, "Wrong size on Prop_lemonade_C_GetData");
static_assert(offsetof(Prop_lemonade_C_GetData, Data) == 0x000000, "Member 'Prop_lemonade_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_GetData, CallFunc_getData_data) == 0x0000C0, "Member 'Prop_lemonade_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_GetData, K2Node_MakeArray_Array) == 0x000180, "Member 'Prop_lemonade_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_GetData, K2Node_MakeStruct_struct_mFloat) == 0x000190, "Member 'Prop_lemonade_C_GetData::K2Node_MakeStruct_struct_mFloat' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_GetData, CallFunc_Array_Get_Item) == 0x0001A0, "Member 'Prop_lemonade_C_GetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_GetData, K2Node_MakeArray_Array_1) == 0x0001B0, "Member 'Prop_lemonade_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Prop_lemonade_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001C0, "Member 'Prop_lemonade_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

}


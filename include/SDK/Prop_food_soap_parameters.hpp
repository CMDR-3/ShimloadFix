#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food_soap

#include "Basic.hpp"

#include "Struct_save_structs.hpp"
#include "Engine_structs.hpp"
#include "Struct_mFloat_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_food_soap.prop_food_soap_C.ExecuteUbergraph_prop_food_soap
// 0x00D8 (0x00D8 - 0x0000)
struct Prop_food_soap_C_ExecuteUbergraph_prop_food_soap final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0010(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatPlusEquals_FloatOut;          // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_food_soap_C_ExecuteUbergraph_prop_food_soap) == 0x000008, "Wrong alignment on Prop_food_soap_C_ExecuteUbergraph_prop_food_soap");
static_assert(sizeof(Prop_food_soap_C_ExecuteUbergraph_prop_food_soap) == 0x0000D8, "Wrong size on Prop_food_soap_C_ExecuteUbergraph_prop_food_soap");
static_assert(offsetof(Prop_food_soap_C_ExecuteUbergraph_prop_food_soap, EntryPoint) == 0x000000, "Member 'Prop_food_soap_C_ExecuteUbergraph_prop_food_soap::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_ExecuteUbergraph_prop_food_soap, K2Node_Event_player) == 0x000008, "Member 'Prop_food_soap_C_ExecuteUbergraph_prop_food_soap::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_ExecuteUbergraph_prop_food_soap, K2Node_Event_hit) == 0x000010, "Member 'Prop_food_soap_C_ExecuteUbergraph_prop_food_soap::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_ExecuteUbergraph_prop_food_soap, CallFunc_GetActorForwardVector_ReturnValue) == 0x000098, "Member 'Prop_food_soap_C_ExecuteUbergraph_prop_food_soap::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_ExecuteUbergraph_prop_food_soap, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000A4, "Member 'Prop_food_soap_C_ExecuteUbergraph_prop_food_soap::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_ExecuteUbergraph_prop_food_soap, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0000B0, "Member 'Prop_food_soap_C_ExecuteUbergraph_prop_food_soap::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_ExecuteUbergraph_prop_food_soap, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x0000BC, "Member 'Prop_food_soap_C_ExecuteUbergraph_prop_food_soap::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_ExecuteUbergraph_prop_food_soap, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x0000C8, "Member 'Prop_food_soap_C_ExecuteUbergraph_prop_food_soap::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_ExecuteUbergraph_prop_food_soap, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000CC, "Member 'Prop_food_soap_C_ExecuteUbergraph_prop_food_soap::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_ExecuteUbergraph_prop_food_soap, CallFunc_VictoryFloatPlusEquals_FloatOut) == 0x0000D0, "Member 'Prop_food_soap_C_ExecuteUbergraph_prop_food_soap::CallFunc_VictoryFloatPlusEquals_FloatOut' has a wrong offset!");

// Function prop_food_soap.prop_food_soap_C.upd
// 0x0020 (0x0020 - 0x0000)
struct Prop_food_soap_C_Upd final
{
public:
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VEase_ReturnValue;                        // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_food_soap_C_Upd) == 0x000004, "Wrong alignment on Prop_food_soap_C_Upd");
static_assert(sizeof(Prop_food_soap_C_Upd) == 0x000020, "Wrong size on Prop_food_soap_C_Upd");
static_assert(offsetof(Prop_food_soap_C_Upd, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000000, "Member 'Prop_food_soap_C_Upd::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_Upd, CallFunc_FClamp_ReturnValue) == 0x000004, "Member 'Prop_food_soap_C_Upd::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_Upd, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000008, "Member 'Prop_food_soap_C_Upd::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_Upd, CallFunc_Lerp_ReturnValue) == 0x00000C, "Member 'Prop_food_soap_C_Upd::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_Upd, CallFunc_Lerp_ReturnValue_1) == 0x000010, "Member 'Prop_food_soap_C_Upd::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_Upd, CallFunc_VEase_ReturnValue) == 0x000014, "Member 'Prop_food_soap_C_Upd::CallFunc_VEase_ReturnValue' has a wrong offset!");

// Function prop_food_soap.prop_food_soap_C.steppedOn
// 0x0090 (0x0090 - 0x0000)
struct Prop_food_soap_C_SteppedOn final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_food_soap_C_SteppedOn) == 0x000008, "Wrong alignment on Prop_food_soap_C_SteppedOn");
static_assert(sizeof(Prop_food_soap_C_SteppedOn) == 0x000090, "Wrong size on Prop_food_soap_C_SteppedOn");
static_assert(offsetof(Prop_food_soap_C_SteppedOn, Player) == 0x000000, "Member 'Prop_food_soap_C_SteppedOn::Player' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_SteppedOn, Hit_0) == 0x000008, "Member 'Prop_food_soap_C_SteppedOn::Hit_0' has a wrong offset!");

// Function prop_food_soap.prop_food_soap_C.loadData
// 0x00E0 (0x00E0 - 0x0000)
struct Prop_food_soap_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mFloat                         CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_food_soap_C_LoadData) == 0x000010, "Wrong alignment on Prop_food_soap_C_LoadData");
static_assert(sizeof(Prop_food_soap_C_LoadData) == 0x0000E0, "Wrong size on Prop_food_soap_C_LoadData");
static_assert(offsetof(Prop_food_soap_C_LoadData, Data) == 0x000000, "Member 'Prop_food_soap_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_LoadData, Return) == 0x0000C0, "Member 'Prop_food_soap_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Prop_food_soap_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Prop_food_soap_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Prop_food_soap_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function prop_food_soap.prop_food_soap_C.getData
// 0x0280 (0x0280 - 0x0000)
struct Prop_food_soap_C_GetData final
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
static_assert(alignof(Prop_food_soap_C_GetData) == 0x000010, "Wrong alignment on Prop_food_soap_C_GetData");
static_assert(sizeof(Prop_food_soap_C_GetData) == 0x000280, "Wrong size on Prop_food_soap_C_GetData");
static_assert(offsetof(Prop_food_soap_C_GetData, Data) == 0x000000, "Member 'Prop_food_soap_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_GetData, CallFunc_getData_data) == 0x0000C0, "Member 'Prop_food_soap_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_GetData, K2Node_MakeArray_Array) == 0x000180, "Member 'Prop_food_soap_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_GetData, K2Node_MakeStruct_struct_mFloat) == 0x000190, "Member 'Prop_food_soap_C_GetData::K2Node_MakeStruct_struct_mFloat' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_GetData, CallFunc_Array_Get_Item) == 0x0001A0, "Member 'Prop_food_soap_C_GetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_GetData, K2Node_MakeArray_Array_1) == 0x0001B0, "Member 'Prop_food_soap_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Prop_food_soap_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001C0, "Member 'Prop_food_soap_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

}

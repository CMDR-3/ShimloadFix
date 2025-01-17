#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Windturbine

#include "Basic.hpp"

#include "Struct_save_structs.hpp"
#include "Engine_structs.hpp"
#include "Struct_mFloat_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function windturbine.windturbine_C.getData
// 0x0270 (0x0270 - 0x0000)
struct Windturbine_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x00C0(0x00C0)(HasGetValueTypeHash)
	TArray<float>                                 K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	struct FStruct_mFloat                         K2Node_MakeStruct_struct_mFloat;                   // 0x0190(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mFloat>                 K2Node_MakeArray_Array_1;                          // 0x01A0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01B0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Windturbine_C_GetData) == 0x000010, "Wrong alignment on Windturbine_C_GetData");
static_assert(sizeof(Windturbine_C_GetData) == 0x000270, "Wrong size on Windturbine_C_GetData");
static_assert(offsetof(Windturbine_C_GetData, Data) == 0x000000, "Member 'Windturbine_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Windturbine_C_GetData, CallFunc_getData_data) == 0x0000C0, "Member 'Windturbine_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Windturbine_C_GetData, K2Node_MakeArray_Array) == 0x000180, "Member 'Windturbine_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Windturbine_C_GetData, K2Node_MakeStruct_struct_mFloat) == 0x000190, "Member 'Windturbine_C_GetData::K2Node_MakeStruct_struct_mFloat' has a wrong offset!");
static_assert(offsetof(Windturbine_C_GetData, K2Node_MakeArray_Array_1) == 0x0001A0, "Member 'Windturbine_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Windturbine_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001B0, "Member 'Windturbine_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function windturbine.windturbine_C.loadData
// 0x00E0 (0x00E0 - 0x0000)
struct Windturbine_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mFloat                         CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item_2;                         // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Windturbine_C_LoadData) == 0x000010, "Wrong alignment on Windturbine_C_LoadData");
static_assert(sizeof(Windturbine_C_LoadData) == 0x0000E0, "Wrong size on Windturbine_C_LoadData");
static_assert(offsetof(Windturbine_C_LoadData, Data) == 0x000000, "Member 'Windturbine_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Windturbine_C_LoadData, Return) == 0x0000C0, "Member 'Windturbine_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Windturbine_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Windturbine_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Windturbine_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Windturbine_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Windturbine_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Windturbine_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Windturbine_C_LoadData, CallFunc_Array_Get_Item_2) == 0x0000DC, "Member 'Windturbine_C_LoadData::CallFunc_Array_Get_Item_2' has a wrong offset!");

// Function windturbine.windturbine_C.gatherDataFromKey
// 0x0001 (0x0001 - 0x0000)
struct Windturbine_C_GatherDataFromKey final
{
public:
	bool                                          Gather;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Windturbine_C_GatherDataFromKey) == 0x000001, "Wrong alignment on Windturbine_C_GatherDataFromKey");
static_assert(sizeof(Windturbine_C_GatherDataFromKey) == 0x000001, "Wrong size on Windturbine_C_GatherDataFromKey");
static_assert(offsetof(Windturbine_C_GatherDataFromKey, Gather) == 0x000000, "Member 'Windturbine_C_GatherDataFromKey::Gather' has a wrong offset!");

// Function windturbine.windturbine_C.setTargetRots
// 0x0004 (0x0004 - 0x0000)
struct Windturbine_C_SetTargetRots final
{
public:
	float                                         TargetRot_0;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Windturbine_C_SetTargetRots) == 0x000004, "Wrong alignment on Windturbine_C_SetTargetRots");
static_assert(sizeof(Windturbine_C_SetTargetRots) == 0x000004, "Wrong size on Windturbine_C_SetTargetRots");
static_assert(offsetof(Windturbine_C_SetTargetRots, TargetRot_0) == 0x000000, "Member 'Windturbine_C_SetTargetRots::TargetRot_0' has a wrong offset!");

// Function windturbine.windturbine_C.Set Rots
// 0x01CC (0x01CC - 0x0000)
struct Windturbine_C_Set_Rots final
{
public:
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x000C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_2;                // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x00BC(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x0144(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Windturbine_C_Set_Rots) == 0x000004, "Wrong alignment on Windturbine_C_Set_Rots");
static_assert(sizeof(Windturbine_C_Set_Rots) == 0x0001CC, "Wrong size on Windturbine_C_Set_Rots");
static_assert(offsetof(Windturbine_C_Set_Rots, CallFunc_MakeRotator_ReturnValue) == 0x000000, "Member 'Windturbine_C_Set_Rots::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_Set_Rots, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x00000C, "Member 'Windturbine_C_Set_Rots::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Windturbine_C_Set_Rots, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000094, "Member 'Windturbine_C_Set_Rots::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_Set_Rots, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000098, "Member 'Windturbine_C_Set_Rots::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_Set_Rots, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x00009C, "Member 'Windturbine_C_Set_Rots::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Windturbine_C_Set_Rots, CallFunc_MakeRotator_ReturnValue_1) == 0x0000A0, "Member 'Windturbine_C_Set_Rots::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Windturbine_C_Set_Rots, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x0000AC, "Member 'Windturbine_C_Set_Rots::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Windturbine_C_Set_Rots, CallFunc_MakeRotator_ReturnValue_2) == 0x0000B0, "Member 'Windturbine_C_Set_Rots::CallFunc_MakeRotator_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Windturbine_C_Set_Rots, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x0000BC, "Member 'Windturbine_C_Set_Rots::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Windturbine_C_Set_Rots, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x000144, "Member 'Windturbine_C_Set_Rots::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");

// Function windturbine.windturbine_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Windturbine_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Windturbine_C_ReceiveTick) == 0x000004, "Wrong alignment on Windturbine_C_ReceiveTick");
static_assert(sizeof(Windturbine_C_ReceiveTick) == 0x000004, "Wrong size on Windturbine_C_ReceiveTick");
static_assert(offsetof(Windturbine_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Windturbine_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function windturbine.windturbine_C.ExecuteUbergraph_windturbine
// 0x00D8 (0x00D8 - 0x0000)
struct Windturbine_C_ExecuteUbergraph_windturbine final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FloatSpringInterp_ReturnValue;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92[0x6];                                       // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AWindturbine_C*                         CallFunc_Array_Get_Item;                           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatPlusEquals_FloatOut;          // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Windturbine_C_ExecuteUbergraph_windturbine) == 0x000008, "Wrong alignment on Windturbine_C_ExecuteUbergraph_windturbine");
static_assert(sizeof(Windturbine_C_ExecuteUbergraph_windturbine) == 0x0000D8, "Wrong size on Windturbine_C_ExecuteUbergraph_windturbine");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, EntryPoint) == 0x000000, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::EntryPoint' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000004, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, Temp_int_Variable) == 0x000010, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, K2Node_Event_DeltaSeconds) == 0x000030, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000034, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000038, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x00003C, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_FloatSpringInterp_ReturnValue) == 0x000040, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_FloatSpringInterp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_RandomFloatInRange_ReturnValue) == 0x000044, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000058, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000060, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_Add_FloatFloat_ReturnValue) == 0x000064, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000068, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00006C, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000070, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_FFloor_ReturnValue) == 0x000074, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000078, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_Percent_IntInt_ReturnValue) == 0x000084, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000088, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000090, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000091, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_Array_Get_Item) == 0x000098, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_Array_Length_ReturnValue) == 0x0000A0, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_Less_IntInt_ReturnValue) == 0x0000A4, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x0000A8, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_VictoryFloatPlusEquals_FloatOut) == 0x0000AC, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_VictoryFloatPlusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x0000B0, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x0000B8, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000C0, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_Vector_Distance_ReturnValue) == 0x0000CC, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Windturbine_C_ExecuteUbergraph_windturbine, CallFunc_Less_FloatFloat_ReturnValue) == 0x0000D0, "Member 'Windturbine_C_ExecuteUbergraph_windturbine::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_vehtp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Struct_triggerSave_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function trigger_vehtp.trigger_vehtp_C.getTriggerData
// 0x02E0 (0x02E0 - 0x0000)
struct Trigger_vehtp_C_GetTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_triggerSave                    CallFunc_getTriggerData_data;                      // 0x00F0(0x00F0)(HasGetValueTypeHash)
	TArray<struct FVector>                        K2Node_MakeArray_Array;                            // 0x01E0(0x0010)(ReferenceParm)
	struct FStruct_triggerSave                    K2Node_SetFieldsInStruct_StructOut;                // 0x01F0(0x00F0)(HasGetValueTypeHash)
};
static_assert(alignof(Trigger_vehtp_C_GetTriggerData) == 0x000010, "Wrong alignment on Trigger_vehtp_C_GetTriggerData");
static_assert(sizeof(Trigger_vehtp_C_GetTriggerData) == 0x0002E0, "Wrong size on Trigger_vehtp_C_GetTriggerData");
static_assert(offsetof(Trigger_vehtp_C_GetTriggerData, Data) == 0x000000, "Member 'Trigger_vehtp_C_GetTriggerData::Data' has a wrong offset!");
static_assert(offsetof(Trigger_vehtp_C_GetTriggerData, CallFunc_getTriggerData_data) == 0x0000F0, "Member 'Trigger_vehtp_C_GetTriggerData::CallFunc_getTriggerData_data' has a wrong offset!");
static_assert(offsetof(Trigger_vehtp_C_GetTriggerData, K2Node_MakeArray_Array) == 0x0001E0, "Member 'Trigger_vehtp_C_GetTriggerData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Trigger_vehtp_C_GetTriggerData, K2Node_SetFieldsInStruct_StructOut) == 0x0001F0, "Member 'Trigger_vehtp_C_GetTriggerData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function trigger_vehtp.trigger_vehtp_C.loadTriggerData
// 0x0100 (0x0100 - 0x0000)
struct Trigger_vehtp_C_LoadTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00F0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadTriggerData_return;                   // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F2[0x2];                                       // 0x00F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_vehtp_C_LoadTriggerData) == 0x000010, "Wrong alignment on Trigger_vehtp_C_LoadTriggerData");
static_assert(sizeof(Trigger_vehtp_C_LoadTriggerData) == 0x000100, "Wrong size on Trigger_vehtp_C_LoadTriggerData");
static_assert(offsetof(Trigger_vehtp_C_LoadTriggerData, Data) == 0x000000, "Member 'Trigger_vehtp_C_LoadTriggerData::Data' has a wrong offset!");
static_assert(offsetof(Trigger_vehtp_C_LoadTriggerData, Return) == 0x0000F0, "Member 'Trigger_vehtp_C_LoadTriggerData::Return' has a wrong offset!");
static_assert(offsetof(Trigger_vehtp_C_LoadTriggerData, CallFunc_loadTriggerData_return) == 0x0000F1, "Member 'Trigger_vehtp_C_LoadTriggerData::CallFunc_loadTriggerData_return' has a wrong offset!");
static_assert(offsetof(Trigger_vehtp_C_LoadTriggerData, CallFunc_Array_Get_Item) == 0x0000F4, "Member 'Trigger_vehtp_C_LoadTriggerData::CallFunc_Array_Get_Item' has a wrong offset!");

// Function trigger_vehtp.trigger_vehtp_C.UserConstructionScript
// 0x000C (0x000C - 0x0000)
struct Trigger_vehtp_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_vehtp_C_UserConstructionScript) == 0x000004, "Wrong alignment on Trigger_vehtp_C_UserConstructionScript");
static_assert(sizeof(Trigger_vehtp_C_UserConstructionScript) == 0x00000C, "Wrong size on Trigger_vehtp_C_UserConstructionScript");
static_assert(offsetof(Trigger_vehtp_C_UserConstructionScript, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000000, "Member 'Trigger_vehtp_C_UserConstructionScript::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

// Function trigger_vehtp.trigger_vehtp_C.runTrigger
// 0x0010 (0x0010 - 0x0000)
struct Trigger_vehtp_C_RunTrigger final
{
public:
	class AActor*                                 Owner_0;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_vehtp_C_RunTrigger) == 0x000008, "Wrong alignment on Trigger_vehtp_C_RunTrigger");
static_assert(sizeof(Trigger_vehtp_C_RunTrigger) == 0x000010, "Wrong size on Trigger_vehtp_C_RunTrigger");
static_assert(offsetof(Trigger_vehtp_C_RunTrigger, Owner_0) == 0x000000, "Member 'Trigger_vehtp_C_RunTrigger::Owner_0' has a wrong offset!");
static_assert(offsetof(Trigger_vehtp_C_RunTrigger, Index_0) == 0x000008, "Member 'Trigger_vehtp_C_RunTrigger::Index_0' has a wrong offset!");

// Function trigger_vehtp.trigger_vehtp_C.ExecuteUbergraph_trigger_vehtp
// 0x0148 (0x0148 - 0x0000)
struct Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_owner;                                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0028(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_WasRecentlyRendered_ReturnValue;          // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult_1;     // 0x00C0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp) == 0x000008, "Wrong alignment on Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp");
static_assert(sizeof(Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp) == 0x000148, "Wrong size on Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp");
static_assert(offsetof(Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp, EntryPoint) == 0x000000, "Member 'Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp::EntryPoint' has a wrong offset!");
static_assert(offsetof(Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000004, "Member 'Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp, K2Node_Event_owner) == 0x000010, "Member 'Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp::K2Node_Event_owner' has a wrong offset!");
static_assert(offsetof(Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp, K2Node_Event_index) == 0x000018, "Member 'Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x00001C, "Member 'Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000028, "Member 'Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp, CallFunc_WasRecentlyRendered_ReturnValue) == 0x0000B0, "Member 'Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp::CallFunc_WasRecentlyRendered_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x0000B4, "Member 'Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp, CallFunc_K2_SetWorldLocation_SweepHitResult_1) == 0x0000C0, "Member 'Trigger_vehtp_C_ExecuteUbergraph_trigger_vehtp::CallFunc_K2_SetWorldLocation_SweepHitResult_1' has a wrong offset!");

}


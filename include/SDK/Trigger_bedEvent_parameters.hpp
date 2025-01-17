#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_bedEvent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function trigger_bedEvent.trigger_bedEvent_C.runTrigger
// 0x0010 (0x0010 - 0x0000)
struct Trigger_bedEvent_C_RunTrigger final
{
public:
	class AActor*                                 Owner_0;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_bedEvent_C_RunTrigger) == 0x000008, "Wrong alignment on Trigger_bedEvent_C_RunTrigger");
static_assert(sizeof(Trigger_bedEvent_C_RunTrigger) == 0x000010, "Wrong size on Trigger_bedEvent_C_RunTrigger");
static_assert(offsetof(Trigger_bedEvent_C_RunTrigger, Owner_0) == 0x000000, "Member 'Trigger_bedEvent_C_RunTrigger::Owner_0' has a wrong offset!");
static_assert(offsetof(Trigger_bedEvent_C_RunTrigger, Index_0) == 0x000008, "Member 'Trigger_bedEvent_C_RunTrigger::Index_0' has a wrong offset!");

// Function trigger_bedEvent.trigger_bedEvent_C.ExecuteUbergraph_trigger_bedEvent
// 0x0060 (0x0060 - 0x0000)
struct Trigger_bedEvent_C_ExecuteUbergraph_trigger_bedEvent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0010(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_owner;                                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AbedEvent_C*                            CallFunc_FinishSpawningActor_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_bedEvent_C_ExecuteUbergraph_trigger_bedEvent) == 0x000010, "Wrong alignment on Trigger_bedEvent_C_ExecuteUbergraph_trigger_bedEvent");
static_assert(sizeof(Trigger_bedEvent_C_ExecuteUbergraph_trigger_bedEvent) == 0x000060, "Wrong size on Trigger_bedEvent_C_ExecuteUbergraph_trigger_bedEvent");
static_assert(offsetof(Trigger_bedEvent_C_ExecuteUbergraph_trigger_bedEvent, EntryPoint) == 0x000000, "Member 'Trigger_bedEvent_C_ExecuteUbergraph_trigger_bedEvent::EntryPoint' has a wrong offset!");
static_assert(offsetof(Trigger_bedEvent_C_ExecuteUbergraph_trigger_bedEvent, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'Trigger_bedEvent_C_ExecuteUbergraph_trigger_bedEvent::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_bedEvent_C_ExecuteUbergraph_trigger_bedEvent, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000040, "Member 'Trigger_bedEvent_C_ExecuteUbergraph_trigger_bedEvent::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_bedEvent_C_ExecuteUbergraph_trigger_bedEvent, K2Node_Event_owner) == 0x000048, "Member 'Trigger_bedEvent_C_ExecuteUbergraph_trigger_bedEvent::K2Node_Event_owner' has a wrong offset!");
static_assert(offsetof(Trigger_bedEvent_C_ExecuteUbergraph_trigger_bedEvent, K2Node_Event_index) == 0x000050, "Member 'Trigger_bedEvent_C_ExecuteUbergraph_trigger_bedEvent::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Trigger_bedEvent_C_ExecuteUbergraph_trigger_bedEvent, CallFunc_FinishSpawningActor_ReturnValue) == 0x000058, "Member 'Trigger_bedEvent_C_ExecuteUbergraph_trigger_bedEvent::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}


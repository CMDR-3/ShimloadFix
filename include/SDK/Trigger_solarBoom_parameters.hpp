#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_solarBoom

#include "Basic.hpp"


namespace SDK::Params
{

// Function trigger_solarBoom.trigger_solarBoom_C.UserConstructionScript
// 0x0048 (0x0048 - 0x0000)
struct Trigger_solarBoom_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATrigger_lightRoot_C*                   CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_objects_C>        CallFunc_getKey_self_CastInput;                    // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_getKey_key;                               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_solarBoom_C_UserConstructionScript) == 0x000008, "Wrong alignment on Trigger_solarBoom_C_UserConstructionScript");
static_assert(sizeof(Trigger_solarBoom_C_UserConstructionScript) == 0x000048, "Wrong size on Trigger_solarBoom_C_UserConstructionScript");
static_assert(offsetof(Trigger_solarBoom_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000000, "Member 'Trigger_solarBoom_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Trigger_solarBoom_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Trigger_solarBoom_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Trigger_solarBoom_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Trigger_solarBoom_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_solarBoom_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000010, "Member 'Trigger_solarBoom_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Trigger_solarBoom_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'Trigger_solarBoom_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_solarBoom_C_UserConstructionScript, CallFunc_getKey_self_CastInput) == 0x000020, "Member 'Trigger_solarBoom_C_UserConstructionScript::CallFunc_getKey_self_CastInput' has a wrong offset!");
static_assert(offsetof(Trigger_solarBoom_C_UserConstructionScript, CallFunc_getKey_key) == 0x000030, "Member 'Trigger_solarBoom_C_UserConstructionScript::CallFunc_getKey_key' has a wrong offset!");
static_assert(offsetof(Trigger_solarBoom_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'Trigger_solarBoom_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_solarBoom_C_UserConstructionScript, CallFunc_Array_Add_ReturnValue) == 0x000044, "Member 'Trigger_solarBoom_C_UserConstructionScript::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function trigger_solarBoom.trigger_solarBoom_C.runTrigger
// 0x0010 (0x0010 - 0x0000)
struct Trigger_solarBoom_C_RunTrigger final
{
public:
	class AActor*                                 Owner_0;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_solarBoom_C_RunTrigger) == 0x000008, "Wrong alignment on Trigger_solarBoom_C_RunTrigger");
static_assert(sizeof(Trigger_solarBoom_C_RunTrigger) == 0x000010, "Wrong size on Trigger_solarBoom_C_RunTrigger");
static_assert(offsetof(Trigger_solarBoom_C_RunTrigger, Owner_0) == 0x000000, "Member 'Trigger_solarBoom_C_RunTrigger::Owner_0' has a wrong offset!");
static_assert(offsetof(Trigger_solarBoom_C_RunTrigger, Index_0) == 0x000008, "Member 'Trigger_solarBoom_C_RunTrigger::Index_0' has a wrong offset!");

// Function trigger_solarBoom.trigger_solarBoom_C.ExecuteUbergraph_trigger_solarBoom
// 0x0018 (0x0018 - 0x0000)
struct Trigger_solarBoom_C_ExecuteUbergraph_trigger_solarBoom final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_owner;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_solarBoom_C_ExecuteUbergraph_trigger_solarBoom) == 0x000008, "Wrong alignment on Trigger_solarBoom_C_ExecuteUbergraph_trigger_solarBoom");
static_assert(sizeof(Trigger_solarBoom_C_ExecuteUbergraph_trigger_solarBoom) == 0x000018, "Wrong size on Trigger_solarBoom_C_ExecuteUbergraph_trigger_solarBoom");
static_assert(offsetof(Trigger_solarBoom_C_ExecuteUbergraph_trigger_solarBoom, EntryPoint) == 0x000000, "Member 'Trigger_solarBoom_C_ExecuteUbergraph_trigger_solarBoom::EntryPoint' has a wrong offset!");
static_assert(offsetof(Trigger_solarBoom_C_ExecuteUbergraph_trigger_solarBoom, K2Node_Event_owner) == 0x000008, "Member 'Trigger_solarBoom_C_ExecuteUbergraph_trigger_solarBoom::K2Node_Event_owner' has a wrong offset!");
static_assert(offsetof(Trigger_solarBoom_C_ExecuteUbergraph_trigger_solarBoom, K2Node_Event_index) == 0x000010, "Member 'Trigger_solarBoom_C_ExecuteUbergraph_trigger_solarBoom::K2Node_Event_index' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_alarm

#include "Basic.hpp"


namespace SDK::Params
{

// Function trigger_alarm.trigger_alarm_C.ExecuteUbergraph_trigger_alarm
// 0x0078 (0x0078 - 0x0000)
struct Trigger_alarm_C_ExecuteUbergraph_trigger_alarm final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_getObjectFromKey_Output;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_objects_C>        K2Node_DynamicCast_AsInt_Objects;                  // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_owner;                                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AAlarmLamp_C*                           CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ACeilingLamp_C*>                 CallFunc_GetAllActorsOfClass_OutActors;            // 0x0058(0x0010)(ReferenceParm)
	class ACeilingLamp_C*                         CallFunc_Array_Get_Item_1;                         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm) == 0x000008, "Wrong alignment on Trigger_alarm_C_ExecuteUbergraph_trigger_alarm");
static_assert(sizeof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm) == 0x000078, "Wrong size on Trigger_alarm_C_ExecuteUbergraph_trigger_alarm");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, EntryPoint) == 0x000000, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::EntryPoint' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, Temp_int_Variable) == 0x000004, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, CallFunc_getObjectFromKey_Output) == 0x000008, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::CallFunc_getObjectFromKey_Output' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, K2Node_DynamicCast_AsInt_Objects) == 0x000018, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::K2Node_DynamicCast_AsInt_Objects' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, Temp_int_Variable_1) == 0x00002C, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, K2Node_Event_owner) == 0x000038, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::K2Node_Event_owner' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, K2Node_Event_index) == 0x000040, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, CallFunc_Conv_IntToBool_ReturnValue) == 0x000044, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, CallFunc_Array_Get_Item) == 0x000048, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, CallFunc_GetAllActorsOfClass_OutActors) == 0x000058, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, CallFunc_Array_Length_ReturnValue_1) == 0x000070, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, CallFunc_Less_IntInt_ReturnValue_1) == 0x000074, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, CallFunc_Not_PreBool_ReturnValue) == 0x000075, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ExecuteUbergraph_trigger_alarm, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000076, "Member 'Trigger_alarm_C_ExecuteUbergraph_trigger_alarm::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function trigger_alarm.trigger_alarm_C.runTrigger
// 0x0010 (0x0010 - 0x0000)
struct Trigger_alarm_C_RunTrigger final
{
public:
	class AActor*                                 Owner_0;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_alarm_C_RunTrigger) == 0x000008, "Wrong alignment on Trigger_alarm_C_RunTrigger");
static_assert(sizeof(Trigger_alarm_C_RunTrigger) == 0x000010, "Wrong size on Trigger_alarm_C_RunTrigger");
static_assert(offsetof(Trigger_alarm_C_RunTrigger, Owner_0) == 0x000000, "Member 'Trigger_alarm_C_RunTrigger::Owner_0' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_RunTrigger, Index_0) == 0x000008, "Member 'Trigger_alarm_C_RunTrigger::Index_0' has a wrong offset!");

// Function trigger_alarm.trigger_alarm_C.processKeys
// 0x0038 (0x0038 - 0x0000)
struct Trigger_alarm_C_ProcessKeys final
{
public:
	bool                                          Return;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAlarmLamp_C*                           K2Node_DynamicCast_AsAlarm_Lamp;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_processKeys_return;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Trigger_alarm_C_ProcessKeys) == 0x000008, "Wrong alignment on Trigger_alarm_C_ProcessKeys");
static_assert(sizeof(Trigger_alarm_C_ProcessKeys) == 0x000038, "Wrong size on Trigger_alarm_C_ProcessKeys");
static_assert(offsetof(Trigger_alarm_C_ProcessKeys, Return) == 0x000000, "Member 'Trigger_alarm_C_ProcessKeys::Return' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ProcessKeys, Temp_int_Array_Index_Variable) == 0x000004, "Member 'Trigger_alarm_C_ProcessKeys::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ProcessKeys, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'Trigger_alarm_C_ProcessKeys::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ProcessKeys, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'Trigger_alarm_C_ProcessKeys::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ProcessKeys, CallFunc_Array_Get_Item) == 0x000010, "Member 'Trigger_alarm_C_ProcessKeys::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ProcessKeys, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'Trigger_alarm_C_ProcessKeys::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ProcessKeys, K2Node_DynamicCast_AsAlarm_Lamp) == 0x000020, "Member 'Trigger_alarm_C_ProcessKeys::K2Node_DynamicCast_AsAlarm_Lamp' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ProcessKeys, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'Trigger_alarm_C_ProcessKeys::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ProcessKeys, CallFunc_Less_IntInt_ReturnValue) == 0x000029, "Member 'Trigger_alarm_C_ProcessKeys::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ProcessKeys, CallFunc_Array_Add_ReturnValue) == 0x00002C, "Member 'Trigger_alarm_C_ProcessKeys::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_alarm_C_ProcessKeys, CallFunc_processKeys_return) == 0x000030, "Member 'Trigger_alarm_C_ProcessKeys::CallFunc_processKeys_return' has a wrong offset!");

}


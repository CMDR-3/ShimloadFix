#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IndoorAmbienceVolume

#include "Basic.hpp"


namespace SDK::Params
{

// Function indoorAmbienceVolume.indoorAmbienceVolume_C.ExecuteUbergraph_indoorAmbienceVolume
// 0x001C (0x001C - 0x0000)
struct IndoorAmbienceVolume_C_ExecuteUbergraph_indoorAmbienceVolume final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_activate;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_isOn;                           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IndoorAmbienceVolume_C_ExecuteUbergraph_indoorAmbienceVolume) == 0x000004, "Wrong alignment on IndoorAmbienceVolume_C_ExecuteUbergraph_indoorAmbienceVolume");
static_assert(sizeof(IndoorAmbienceVolume_C_ExecuteUbergraph_indoorAmbienceVolume) == 0x00001C, "Wrong size on IndoorAmbienceVolume_C_ExecuteUbergraph_indoorAmbienceVolume");
static_assert(offsetof(IndoorAmbienceVolume_C_ExecuteUbergraph_indoorAmbienceVolume, EntryPoint) == 0x000000, "Member 'IndoorAmbienceVolume_C_ExecuteUbergraph_indoorAmbienceVolume::EntryPoint' has a wrong offset!");
static_assert(offsetof(IndoorAmbienceVolume_C_ExecuteUbergraph_indoorAmbienceVolume, K2Node_CustomEvent_activate) == 0x000004, "Member 'IndoorAmbienceVolume_C_ExecuteUbergraph_indoorAmbienceVolume::K2Node_CustomEvent_activate' has a wrong offset!");
static_assert(offsetof(IndoorAmbienceVolume_C_ExecuteUbergraph_indoorAmbienceVolume, K2Node_CustomEvent_isOn) == 0x000005, "Member 'IndoorAmbienceVolume_C_ExecuteUbergraph_indoorAmbienceVolume::K2Node_CustomEvent_isOn' has a wrong offset!");
static_assert(offsetof(IndoorAmbienceVolume_C_ExecuteUbergraph_indoorAmbienceVolume, CallFunc_Lerp_ReturnValue) == 0x000008, "Member 'IndoorAmbienceVolume_C_ExecuteUbergraph_indoorAmbienceVolume::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(IndoorAmbienceVolume_C_ExecuteUbergraph_indoorAmbienceVolume, CallFunc_Conv_StringToName_ReturnValue) == 0x00000C, "Member 'IndoorAmbienceVolume_C_ExecuteUbergraph_indoorAmbienceVolume::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(IndoorAmbienceVolume_C_ExecuteUbergraph_indoorAmbienceVolume, CallFunc_Conv_StringToName_ReturnValue_1) == 0x000014, "Member 'IndoorAmbienceVolume_C_ExecuteUbergraph_indoorAmbienceVolume::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");

// Function indoorAmbienceVolume.indoorAmbienceVolume_C.Activate
// 0x0002 (0x0002 - 0x0000)
struct IndoorAmbienceVolume_C_Activate final
{
public:
	bool                                          Activate_0;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsOn;                                              // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(IndoorAmbienceVolume_C_Activate) == 0x000001, "Wrong alignment on IndoorAmbienceVolume_C_Activate");
static_assert(sizeof(IndoorAmbienceVolume_C_Activate) == 0x000002, "Wrong size on IndoorAmbienceVolume_C_Activate");
static_assert(offsetof(IndoorAmbienceVolume_C_Activate, Activate_0) == 0x000000, "Member 'IndoorAmbienceVolume_C_Activate::Activate_0' has a wrong offset!");
static_assert(offsetof(IndoorAmbienceVolume_C_Activate, IsOn) == 0x000001, "Member 'IndoorAmbienceVolume_C_Activate::IsOn' has a wrong offset!");

}


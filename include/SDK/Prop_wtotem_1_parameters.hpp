#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wtotem_1

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_wtotem_1.prop_wtotem_1_C.ExecuteUbergraph_prop_wtotem_1
// 0x0060 (0x0060 - 0x0000)
struct Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Temp_struct_Variable;                              // 0x0004(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWendussy_C*                            CallFunc_FinishSpawningActor_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1) == 0x000010, "Wrong alignment on Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1");
static_assert(sizeof(Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1) == 0x000060, "Wrong size on Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1");
static_assert(offsetof(Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1, EntryPoint) == 0x000000, "Member 'Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1, Temp_struct_Variable) == 0x000004, "Member 'Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1, CallFunc_RandomFloatInRange_ReturnValue) == 0x00001C, "Member 'Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1, CallFunc_MakeTransform_ReturnValue) == 0x000020, "Member 'Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000050, "Member 'Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1, CallFunc_FinishSpawningActor_ReturnValue) == 0x000058, "Member 'Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

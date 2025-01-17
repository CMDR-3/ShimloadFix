#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_drive_explosive

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_drive_explosive.prop_drive_explosive_C.ExecuteUbergraph_prop_drive_explosive
// 0x00D0 (0x00D0 - 0x0000)
struct Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0xC];                                       // 0x0074(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0080(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExplosion_C*                           CallFunc_FinishSpawningActor_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExplosion_C*                           CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive) == 0x000010, "Wrong alignment on Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive");
static_assert(sizeof(Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive) == 0x0000D0, "Wrong size on Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive");
static_assert(offsetof(Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive, EntryPoint) == 0x000000, "Member 'Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000004, "Member 'Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive, CallFunc_Add_VectorVector_ReturnValue) == 0x000010, "Member 'Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive, CallFunc_MakeTransform_ReturnValue) == 0x000020, "Member 'Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000050, "Member 'Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000060, "Member 'Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000068, "Member 'Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive, CallFunc_MakeTransform_ReturnValue_1) == 0x000080, "Member 'Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x0000B0, "Member 'Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000B8, "Member 'Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x0000C0, "Member 'Prop_drive_explosive_C_ExecuteUbergraph_prop_drive_explosive::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");

}


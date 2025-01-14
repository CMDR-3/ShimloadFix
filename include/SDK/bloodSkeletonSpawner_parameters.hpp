#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bloodSkeletonSpawner

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function bloodSkeletonSpawner.bloodSkeletonSpawner_C.ExecuteUbergraph_bloodSkeletonSpawner
// 0x0050 (0x0050 - 0x0000)
struct bloodSkeletonSpawner_C_ExecuteUbergraph_bloodSkeletonSpawner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecal_skeletonBlood_C*                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(bloodSkeletonSpawner_C_ExecuteUbergraph_bloodSkeletonSpawner) == 0x000010, "Wrong alignment on bloodSkeletonSpawner_C_ExecuteUbergraph_bloodSkeletonSpawner");
static_assert(sizeof(bloodSkeletonSpawner_C_ExecuteUbergraph_bloodSkeletonSpawner) == 0x000050, "Wrong size on bloodSkeletonSpawner_C_ExecuteUbergraph_bloodSkeletonSpawner");
static_assert(offsetof(bloodSkeletonSpawner_C_ExecuteUbergraph_bloodSkeletonSpawner, EntryPoint) == 0x000000, "Member 'bloodSkeletonSpawner_C_ExecuteUbergraph_bloodSkeletonSpawner::EntryPoint' has a wrong offset!");
static_assert(offsetof(bloodSkeletonSpawner_C_ExecuteUbergraph_bloodSkeletonSpawner, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000010, "Member 'bloodSkeletonSpawner_C_ExecuteUbergraph_bloodSkeletonSpawner::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(bloodSkeletonSpawner_C_ExecuteUbergraph_bloodSkeletonSpawner, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000040, "Member 'bloodSkeletonSpawner_C_ExecuteUbergraph_bloodSkeletonSpawner::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(bloodSkeletonSpawner_C_ExecuteUbergraph_bloodSkeletonSpawner, CallFunc_FinishSpawningActor_ReturnValue) == 0x000048, "Member 'bloodSkeletonSpawner_C_ExecuteUbergraph_bloodSkeletonSpawner::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}


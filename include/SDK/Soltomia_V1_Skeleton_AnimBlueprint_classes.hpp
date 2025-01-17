#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Soltomia_V1_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass soltomia_V1_Skeleton_AnimBlueprint.soltomia_V1_Skeleton_AnimBlueprint_C
// 0x0220 (0x04E0 - 0x02C0)
class USoltomia_V1_Skeleton_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x02F8(0x0118)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0410(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0458(0x0080)()

public:
	void ExecuteUbergraph_soltomia_V1_Skeleton_AnimBlueprint(int32 EntryPoint);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"soltomia_V1_Skeleton_AnimBlueprint_C">();
	}
	static class USoltomia_V1_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoltomia_V1_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(USoltomia_V1_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on USoltomia_V1_Skeleton_AnimBlueprint_C");
static_assert(sizeof(USoltomia_V1_Skeleton_AnimBlueprint_C) == 0x0004E0, "Wrong size on USoltomia_V1_Skeleton_AnimBlueprint_C");
static_assert(offsetof(USoltomia_V1_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x0002C0, "Member 'USoltomia_V1_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USoltomia_V1_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x0002C8, "Member 'USoltomia_V1_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(USoltomia_V1_Skeleton_AnimBlueprint_C, AnimGraphNode_LinkedInputPose) == 0x0002F8, "Member 'USoltomia_V1_Skeleton_AnimBlueprint_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(USoltomia_V1_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot) == 0x000410, "Member 'USoltomia_V1_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(USoltomia_V1_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer) == 0x000458, "Member 'USoltomia_V1_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Kefrus_face_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass kefrus_face_Skeleton_AnimBlueprint.kefrus_face_Skeleton_AnimBlueprint_C
// 0x0B10 (0x0DD0 - 0x02C0)
class UKefrus_face_Skeleton_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x02F8(0x0080)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0378(0x0048)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x03C0(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_6;                        // 0x03E0(0x0108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x04E8(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_5;                        // 0x0508(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x0610(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x0718(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x0820(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0928(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0A30(0x0108)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x0B38(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0C00(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0D58(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0D80(0x0028)()
	float                                         Angy;                                              // 0x0DA8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Eye1;                                              // 0x0DAC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Eye2;                                              // 0x0DB8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_kefrus_face_Skeleton_AnimBlueprint(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"kefrus_face_Skeleton_AnimBlueprint_C">();
	}
	static class UKefrus_face_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKefrus_face_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(UKefrus_face_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on UKefrus_face_Skeleton_AnimBlueprint_C");
static_assert(sizeof(UKefrus_face_Skeleton_AnimBlueprint_C) == 0x000DD0, "Wrong size on UKefrus_face_Skeleton_AnimBlueprint_C");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x0002C0, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer) == 0x0002F8, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot) == 0x000378, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace) == 0x0003C0, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_6) == 0x0003E0, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_6' has a wrong offset!");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace) == 0x0004E8, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_5) == 0x000508, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_5' has a wrong offset!");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_4) == 0x000610, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_3) == 0x000718, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_2) == 0x000820, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_1) == 0x000928, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone) == 0x000A30, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, AnimGraphNode_TwoWayBlend) == 0x000B38, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose) == 0x000C00, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_1) == 0x000D58, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose) == 0x000D80, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, Angy) == 0x000DA8, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::Angy' has a wrong offset!");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, Eye1) == 0x000DAC, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::Eye1' has a wrong offset!");
static_assert(offsetof(UKefrus_face_Skeleton_AnimBlueprint_C, Eye2) == 0x000DB8, "Member 'UKefrus_face_Skeleton_AnimBlueprint_C::Eye2' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KerfurOmegaV1_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass kerfurOmegaV1_Skeleton_AnimBlueprint.kerfurOmegaV1_Skeleton_AnimBlueprint_C
// 0x1CF0 (0x1FB0 - 0x02C0)
class UKerfurOmegaV1_Skeleton_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x02C8(0x00E8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x03B0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x03D0(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x03F0(0x0048)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x0438(0x0020)()
	uint8                                         Pad_458[0x8];                                      // 0x0458(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_3;                         // 0x0460(0x01E0)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x0640(0x0020)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_2;                         // 0x0660(0x01E0)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x0840(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;                    // 0x0908(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x0A60(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x0A88(0x00C0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x0B48(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x0B90(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x0BB8(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0BE0(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0C28(0x00C0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0CE8(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x0D30(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x0E88(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x0EB0(0x0028)()
	uint8                                         Pad_ED8[0x8];                                      // 0x0ED8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_1;                         // 0x0EE0(0x01E0)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK;                           // 0x10C0(0x01E0)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x12A0(0x0030)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x12D0(0x0108)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x13D8(0x0158)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x1530(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x1558(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x1580(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x15A8(0x0030)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x15D8(0x0028)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1600(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1620(0x0020)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt_1;                            // 0x1640(0x01B0)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt;                              // 0x17F0(0x01B0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x19A0(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x19D0(0x00B0)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x1A80(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x1AA8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1AD0(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x1B50(0x0030)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x1B80(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x1BA8(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x1BD8(0x00B0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x1C88(0x0158)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x1DE0(0x0108)()
	float                                         WalkSpeed;                                         // 0x1EE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EEC[0x4];                                     // 0x1EEC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  Pawn;                                              // 0x1EF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            Controller;                                        // 0x1EF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPawnMovementComponent*                 Movement;                                          // 0x1F00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimWalkAlpha;                                     // 0x1F08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimWalkRate;                                      // 0x1F0C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LookAt;                                            // 0x1F10(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GrabLoc;                                           // 0x1F1C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GrabAlpha;                                         // 0x1F28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ObjectSize;                                        // 0x1F2C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RVec;                                              // 0x1F30(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F3C[0x4];                                     // 0x1F3C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             Character;                                         // 0x1F40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FootZ_R;                                           // 0x1F48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FootZ_L;                                           // 0x1F4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FloorFoot_R;                                       // 0x1F50(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FloorFoot_L;                                       // 0x1F5C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PelvisLoc;                                         // 0x1F68(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OffsetCenter;                                      // 0x1F74(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOnAtv;                                           // 0x1F80(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LookingAtPlayer;                                   // 0x1F81(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F82[0x6];                                     // 0x1F82(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AKerfurOmega_C*                         Kerfur;                                            // 0x1F88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x1F90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WalkSpeedMultiplier;                               // 0x1F98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Spd;                                               // 0x1F9C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                TorsoOffset;                                       // 0x1FA0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_kerfurOmegaV1_Skeleton_AnimBlueprint(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_kerfurOmegaV1_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_F93AE202460F9822DEC7AEB309D72BE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_kerfurOmegaV1_Skeleton_AnimBlueprint_AnimGraphNode_TwoBoneIK_01A022564E01EA619A70D2BF70652E39();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_kerfurOmegaV1_Skeleton_AnimBlueprint_AnimGraphNode_TwoBoneIK_F655A51E4F5B0557A104E9BACC543BDC();
	void BlueprintBeginPlay();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"kerfurOmegaV1_Skeleton_AnimBlueprint_C">();
	}
	static class UKerfurOmegaV1_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKerfurOmegaV1_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on UKerfurOmegaV1_Skeleton_AnimBlueprint_C");
static_assert(sizeof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C) == 0x001FB0, "Wrong size on UKerfurOmegaV1_Skeleton_AnimBlueprint_C");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x0002C0, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer) == 0x0002C8, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace_2) == 0x0003B0, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalToComponentSpace_2' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace_2) == 0x0003D0, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace_2' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot_3) == 0x0003F0, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot_3' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace_1) == 0x000438, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_TwoBoneIK_3) == 0x000460, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_TwoBoneIK_3' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x000640, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_TwoBoneIK_2) == 0x000660, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_TwoBoneIK_2' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_TwoWayBlend) == 0x000840, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose_3) == 0x000908, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose_3' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_7) == 0x000A60, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_7' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_LayeredBoneBlend_1) == 0x000A88, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot_2) == 0x000B48, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_6) == 0x000B90, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_5) == 0x000BB8, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot_1) == 0x000BE0, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_LayeredBoneBlend) == 0x000C28, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot) == 0x000CE8, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose_2) == 0x000D30, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_4) == 0x000E88, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_3) == 0x000EB0, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_TwoBoneIK_1) == 0x000EE0, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_TwoBoneIK_1' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_TwoBoneIK) == 0x0010C0, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_TwoBoneIK' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x0012A0, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_1) == 0x0012D0, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose_1) == 0x0013D8, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_TransitionResult_3) == 0x001530, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_TransitionResult_2) == 0x001558, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_2) == 0x001580, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_StateResult_3) == 0x0015A8, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_1) == 0x0015D8, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace) == 0x001600, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace) == 0x001620, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_LookAt_1) == 0x001640, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_LookAt_1' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_LookAt) == 0x0017F0, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_LookAt' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_StateResult_2) == 0x0019A0, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_StateMachine_1) == 0x0019D0, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_TransitionResult_1) == 0x001A80, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_TransitionResult) == 0x001AA8, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer) == 0x001AD0, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_StateResult_1) == 0x001B50, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose) == 0x001B80, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_StateResult) == 0x001BA8, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_StateMachine) == 0x001BD8, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose) == 0x001C88, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone) == 0x001DE0, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, WalkSpeed) == 0x001EE8, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::WalkSpeed' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, Pawn) == 0x001EF0, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::Pawn' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, Controller) == 0x001EF8, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::Controller' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, Movement) == 0x001F00, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::Movement' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimWalkAlpha) == 0x001F08, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimWalkAlpha' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, AnimWalkRate) == 0x001F0C, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::AnimWalkRate' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, LookAt) == 0x001F10, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::LookAt' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, GrabLoc) == 0x001F1C, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::GrabLoc' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, GrabAlpha) == 0x001F28, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::GrabAlpha' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, ObjectSize) == 0x001F2C, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::ObjectSize' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, RVec) == 0x001F30, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::RVec' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, Character) == 0x001F40, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::Character' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, FootZ_R) == 0x001F48, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::FootZ_R' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, FootZ_L) == 0x001F4C, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::FootZ_L' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, FloorFoot_R) == 0x001F50, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::FloorFoot_R' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, FloorFoot_L) == 0x001F5C, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::FloorFoot_L' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, PelvisLoc) == 0x001F68, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::PelvisLoc' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, OffsetCenter) == 0x001F74, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::OffsetCenter' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, IsOnAtv) == 0x001F80, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::IsOnAtv' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, LookingAtPlayer) == 0x001F81, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::LookingAtPlayer' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, Kerfur) == 0x001F88, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::Kerfur' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, SkeletalMesh) == 0x001F90, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, WalkSpeedMultiplier) == 0x001F98, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::WalkSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, Spd) == 0x001F9C, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::Spd' has a wrong offset!");
static_assert(offsetof(UKerfurOmegaV1_Skeleton_AnimBlueprint_C, TorsoOffset) == 0x001FA0, "Member 'UKerfurOmegaV1_Skeleton_AnimBlueprint_C::TorsoOffset' has a wrong offset!");

}


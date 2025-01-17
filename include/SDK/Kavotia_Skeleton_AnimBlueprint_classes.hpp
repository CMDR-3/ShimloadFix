#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Kavotia_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass kavotia_Skeleton_AnimBlueprint.kavotia_Skeleton_AnimBlueprint_C
// 0x0D30 (0x0FF0 - 0x02C0)
class UKavotia_Skeleton_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x02F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0320(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0348(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0370(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0398(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x03C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x03E8(0x0028)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt_1;                            // 0x0410(0x01B0)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x05C0(0x0020)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt;                              // 0x05E0(0x01B0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0790(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x07B0(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x07D8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0808(0x0080)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0888(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x08D0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0900(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0980(0x0030)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x09B0(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x09D8(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0A08(0x00B0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0AB8(0x00C0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0B78(0x0048)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x0BC0(0x00E8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x0CA8(0x0158)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0E00(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0F58(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0F80(0x0028)()
	bool                                          IsLaying;                                          // 0x0FA8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FA9[0x3];                                      // 0x0FA9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                MovingDir;                                         // 0x0FAC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  Pawn;                                              // 0x0FB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKavotia_C*                             Kavotia;                                           // 0x0FC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0FC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WalkSpeed;                                         // 0x0FD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShooting;                                        // 0x0FD4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FD5[0x3];                                      // 0x0FD5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ShootTarget;                                       // 0x0FD8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_kavotia_Skeleton_AnimBlueprint(int32 EntryPoint);
	void BlueprintBeginPlay();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_kavotia_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_11CBAF6C42FEB0620F1992A7CAABE884();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_kavotia_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_41BA1C2C424BF677EC7744828930AAF4();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"kavotia_Skeleton_AnimBlueprint_C">();
	}
	static class UKavotia_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKavotia_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(UKavotia_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on UKavotia_Skeleton_AnimBlueprint_C");
static_assert(sizeof(UKavotia_Skeleton_AnimBlueprint_C) == 0x000FF0, "Wrong size on UKavotia_Skeleton_AnimBlueprint_C");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x0002C0, "Member 'UKavotia_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_TransitionResult_6) == 0x0002F8, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_TransitionResult_5) == 0x000320, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_TransitionResult_4) == 0x000348, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_TransitionResult_3) == 0x000370, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_TransitionResult_2) == 0x000398, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_TransitionResult_1) == 0x0003C0, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_TransitionResult) == 0x0003E8, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_LookAt_1) == 0x000410, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_LookAt_1' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace) == 0x0005C0, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_LookAt) == 0x0005E0, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_LookAt' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace) == 0x000790, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_3) == 0x0007B0, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_StateResult_3) == 0x0007D8, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer_1) == 0x000808, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot_1) == 0x000888, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_StateResult_2) == 0x0008D0, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer) == 0x000900, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_StateResult_1) == 0x000980, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_2) == 0x0009B0, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_StateResult) == 0x0009D8, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_StateMachine) == 0x000A08, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_LayeredBoneBlend) == 0x000AB8, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot) == 0x000B78, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer) == 0x000BC0, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose_1) == 0x000CA8, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_SaveCachedPose) == 0x000E00, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose_1) == 0x000F58, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, AnimGraphNode_UseCachedPose) == 0x000F80, "Member 'UKavotia_Skeleton_AnimBlueprint_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, IsLaying) == 0x000FA8, "Member 'UKavotia_Skeleton_AnimBlueprint_C::IsLaying' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, MovingDir) == 0x000FAC, "Member 'UKavotia_Skeleton_AnimBlueprint_C::MovingDir' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, Pawn) == 0x000FB8, "Member 'UKavotia_Skeleton_AnimBlueprint_C::Pawn' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, Kavotia) == 0x000FC0, "Member 'UKavotia_Skeleton_AnimBlueprint_C::Kavotia' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, Mesh) == 0x000FC8, "Member 'UKavotia_Skeleton_AnimBlueprint_C::Mesh' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, WalkSpeed) == 0x000FD0, "Member 'UKavotia_Skeleton_AnimBlueprint_C::WalkSpeed' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, IsShooting) == 0x000FD4, "Member 'UKavotia_Skeleton_AnimBlueprint_C::IsShooting' has a wrong offset!");
static_assert(offsetof(UKavotia_Skeleton_AnimBlueprint_C, ShootTarget) == 0x000FD8, "Member 'UKavotia_Skeleton_AnimBlueprint_C::ShootTarget' has a wrong offset!");

}


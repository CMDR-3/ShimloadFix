#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_grayFigure

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_grayFigure.prop_grayFigure_C
// 0x0028 (0x0380 - 0x0358)
class AProp_grayFigure_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_grayFigure_C;                  // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C* Anim;                                              // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          R;                                                 // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_grayFigure(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_grayFigure_C">();
	}
	static class AProp_grayFigure_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_grayFigure_C>();
	}
};
static_assert(alignof(AProp_grayFigure_C) == 0x000008, "Wrong alignment on AProp_grayFigure_C");
static_assert(sizeof(AProp_grayFigure_C) == 0x000380, "Wrong size on AProp_grayFigure_C");
static_assert(offsetof(AProp_grayFigure_C, UberGraphFrame_Prop_grayFigure_C) == 0x000358, "Member 'AProp_grayFigure_C::UberGraphFrame_Prop_grayFigure_C' has a wrong offset!");
static_assert(offsetof(AProp_grayFigure_C, Billboard) == 0x000360, "Member 'AProp_grayFigure_C::Billboard' has a wrong offset!");
static_assert(offsetof(AProp_grayFigure_C, SkeletalMesh) == 0x000368, "Member 'AProp_grayFigure_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(AProp_grayFigure_C, Anim) == 0x000370, "Member 'AProp_grayFigure_C::Anim' has a wrong offset!");
static_assert(offsetof(AProp_grayFigure_C, R) == 0x000378, "Member 'AProp_grayFigure_C::R' has a wrong offset!");

}

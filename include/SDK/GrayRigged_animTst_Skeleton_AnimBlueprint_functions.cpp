#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GrayRigged_animTst_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "GrayRigged_animTst_Skeleton_AnimBlueprint_classes.hpp"
#include "GrayRigged_animTst_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function grayRigged_animTst_Skeleton_AnimBlueprint.grayRigged_animTst_Skeleton_AnimBlueprint_C.ExecuteUbergraph_grayRigged_animTst_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGrayRigged_animTst_Skeleton_AnimBlueprint_C::ExecuteUbergraph_grayRigged_animTst_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("grayRigged_animTst_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_grayRigged_animTst_Skeleton_AnimBlueprint");

	Params::GrayRigged_animTst_Skeleton_AnimBlueprint_C_ExecuteUbergraph_grayRigged_animTst_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function grayRigged_animTst_Skeleton_AnimBlueprint.grayRigged_animTst_Skeleton_AnimBlueprint_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UGrayRigged_animTst_Skeleton_AnimBlueprint_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("grayRigged_animTst_Skeleton_AnimBlueprint_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function grayRigged_animTst_Skeleton_AnimBlueprint.grayRigged_animTst_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGrayRigged_animTst_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("grayRigged_animTst_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::GrayRigged_animTst_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function grayRigged_animTst_Skeleton_AnimBlueprint.grayRigged_animTst_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_grayRigged_animTst_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_3B81EE1C4C2A86658B5F9E8B37203570
// (BlueprintEvent)

void UGrayRigged_animTst_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_grayRigged_animTst_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_3B81EE1C4C2A86658B5F9E8B37203570()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("grayRigged_animTst_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_grayRigged_animTst_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_3B81EE1C4C2A86658B5F9E8B37203570");

	UObject::ProcessEvent(Func, nullptr);
}


// Function grayRigged_animTst_Skeleton_AnimBlueprint.grayRigged_animTst_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UGrayRigged_animTst_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("grayRigged_animTst_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::GrayRigged_animTst_Skeleton_AnimBlueprint_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

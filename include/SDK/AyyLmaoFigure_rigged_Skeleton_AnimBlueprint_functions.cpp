#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AyyLmaoFigure_rigged_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "AyyLmaoFigure_rigged_Skeleton_AnimBlueprint_classes.hpp"
#include "AyyLmaoFigure_rigged_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function ayyLmaoFigure_rigged_Skeleton_AnimBlueprint.ayyLmaoFigure_rigged_Skeleton_AnimBlueprint_C.ExecuteUbergraph_ayyLmaoFigure_rigged_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C::ExecuteUbergraph_ayyLmaoFigure_rigged_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ayyLmaoFigure_rigged_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_ayyLmaoFigure_rigged_Skeleton_AnimBlueprint");

	Params::AyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C_ExecuteUbergraph_ayyLmaoFigure_rigged_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ayyLmaoFigure_rigged_Skeleton_AnimBlueprint.ayyLmaoFigure_rigged_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ayyLmaoFigure_rigged_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::AyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}


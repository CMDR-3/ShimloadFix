#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShitDuende_rigged_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "ShitDuende_rigged_Skeleton_AnimBlueprint_classes.hpp"
#include "ShitDuende_rigged_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function shitDuende_rigged_Skeleton_AnimBlueprint.shitDuende_rigged_Skeleton_AnimBlueprint_C.ExecuteUbergraph_shitDuende_rigged_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShitDuende_rigged_Skeleton_AnimBlueprint_C::ExecuteUbergraph_shitDuende_rigged_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("shitDuende_rigged_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_shitDuende_rigged_Skeleton_AnimBlueprint");

	Params::ShitDuende_rigged_Skeleton_AnimBlueprint_C_ExecuteUbergraph_shitDuende_rigged_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function shitDuende_rigged_Skeleton_AnimBlueprint.shitDuende_rigged_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShitDuende_rigged_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("shitDuende_rigged_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::ShitDuende_rigged_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function shitDuende_rigged_Skeleton_AnimBlueprint.shitDuende_rigged_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UShitDuende_rigged_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("shitDuende_rigged_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::ShitDuende_rigged_Skeleton_AnimBlueprint_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KillerWispAnim1_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "KillerWispAnim1_Skeleton_AnimBlueprint_classes.hpp"
#include "KillerWispAnim1_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function killerWispAnim1_Skeleton_AnimBlueprint.killerWispAnim1_Skeleton_AnimBlueprint_C.ExecuteUbergraph_killerWispAnim1_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKillerWispAnim1_Skeleton_AnimBlueprint_C::ExecuteUbergraph_killerWispAnim1_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("killerWispAnim1_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_killerWispAnim1_Skeleton_AnimBlueprint");

	Params::KillerWispAnim1_Skeleton_AnimBlueprint_C_ExecuteUbergraph_killerWispAnim1_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function killerWispAnim1_Skeleton_AnimBlueprint.killerWispAnim1_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UKillerWispAnim1_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("killerWispAnim1_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::KillerWispAnim1_Skeleton_AnimBlueprint_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

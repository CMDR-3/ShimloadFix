#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: button_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "button_Skeleton_AnimBlueprint_classes.hpp"
#include "button_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function button_Skeleton_AnimBlueprint.button_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void Ubutton_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("button_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::button_Skeleton_AnimBlueprint_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function button_Skeleton_AnimBlueprint.button_Skeleton_AnimBlueprint_C.ExecuteUbergraph_button_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubutton_Skeleton_AnimBlueprint_C::ExecuteUbergraph_button_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("button_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_button_Skeleton_AnimBlueprint");

	Params::button_Skeleton_AnimBlueprint_C_ExecuteUbergraph_button_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

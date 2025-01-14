#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Funguy_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Funguy_Skeleton_AnimBlueprint_classes.hpp"
#include "Funguy_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function funguy_Skeleton_AnimBlueprint.funguy_Skeleton_AnimBlueprint_C.ExecuteUbergraph_funguy_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunguy_Skeleton_AnimBlueprint_C::ExecuteUbergraph_funguy_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("funguy_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_funguy_Skeleton_AnimBlueprint");

	Params::Funguy_Skeleton_AnimBlueprint_C_ExecuteUbergraph_funguy_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function funguy_Skeleton_AnimBlueprint.funguy_Skeleton_AnimBlueprint_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UFunguy_Skeleton_AnimBlueprint_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("funguy_Skeleton_AnimBlueprint_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function funguy_Skeleton_AnimBlueprint.funguy_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFunguy_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("funguy_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::Funguy_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function funguy_Skeleton_AnimBlueprint.funguy_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_funguy_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_02684C654F02F666EC4107B352FDABE7
// (BlueprintEvent)

void UFunguy_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_funguy_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_02684C654F02F666EC4107B352FDABE7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("funguy_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_funguy_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_02684C654F02F666EC4107B352FDABE7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function funguy_Skeleton_AnimBlueprint.funguy_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UFunguy_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("funguy_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::Funguy_Skeleton_AnimBlueprint_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}


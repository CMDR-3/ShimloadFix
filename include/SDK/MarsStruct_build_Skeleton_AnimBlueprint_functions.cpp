#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MarsStruct_build_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "MarsStruct_build_Skeleton_AnimBlueprint_classes.hpp"
#include "MarsStruct_build_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function marsStruct_build_Skeleton_AnimBlueprint.marsStruct_build_Skeleton_AnimBlueprint_C.ExecuteUbergraph_marsStruct_build_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMarsStruct_build_Skeleton_AnimBlueprint_C::ExecuteUbergraph_marsStruct_build_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("marsStruct_build_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_marsStruct_build_Skeleton_AnimBlueprint");

	Params::MarsStruct_build_Skeleton_AnimBlueprint_C_ExecuteUbergraph_marsStruct_build_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function marsStruct_build_Skeleton_AnimBlueprint.marsStruct_build_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_marsStruct_build_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_ADECC9764F99C99C098F479D9BB33E1B
// (BlueprintEvent)

void UMarsStruct_build_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_marsStruct_build_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_ADECC9764F99C99C098F479D9BB33E1B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("marsStruct_build_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_marsStruct_build_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_ADECC9764F99C99C098F479D9BB33E1B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function marsStruct_build_Skeleton_AnimBlueprint.marsStruct_build_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_marsStruct_build_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_4B56065B45DBF3D9BF9EE3BB3A017F26
// (BlueprintEvent)

void UMarsStruct_build_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_marsStruct_build_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_4B56065B45DBF3D9BF9EE3BB3A017F26()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("marsStruct_build_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_marsStruct_build_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_4B56065B45DBF3D9BF9EE3BB3A017F26");

	UObject::ProcessEvent(Func, nullptr);
}


// Function marsStruct_build_Skeleton_AnimBlueprint.marsStruct_build_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMarsStruct_build_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("marsStruct_build_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::MarsStruct_build_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function marsStruct_build_Skeleton_AnimBlueprint.marsStruct_build_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UMarsStruct_build_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("marsStruct_build_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::MarsStruct_build_Skeleton_AnimBlueprint_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}


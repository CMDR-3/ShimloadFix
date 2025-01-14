#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewBlueprint444

#include "Basic.hpp"

#include "NewBlueprint444_classes.hpp"
#include "NewBlueprint444_parameters.hpp"


namespace SDK
{

// Function NewBlueprint444.NewBlueprint444_C.ExecuteUbergraph_NewBlueprint444
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANewBlueprint444_C::ExecuteUbergraph_NewBlueprint444(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint444_C", "ExecuteUbergraph_NewBlueprint444");

	Params::NewBlueprint444_C_ExecuteUbergraph_NewBlueprint444 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewBlueprint444.NewBlueprint444_C.ewqweewq
// (BlueprintCallable, BlueprintEvent)

void ANewBlueprint444_C::Ewqweewq()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint444_C", "ewqweewq");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewBlueprint444.NewBlueprint444_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANewBlueprint444_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint444_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewBlueprint444.NewBlueprint444_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANewBlueprint444_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint444_C", "ReceiveTick");

	Params::NewBlueprint444_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewBlueprint14

#include "Basic.hpp"

#include "NewBlueprint14_classes.hpp"
#include "NewBlueprint14_parameters.hpp"


namespace SDK
{

// Function NewBlueprint14.NewBlueprint14_C.ExecuteUbergraph_NewBlueprint14
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANewBlueprint14_C::ExecuteUbergraph_NewBlueprint14(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint14_C", "ExecuteUbergraph_NewBlueprint14");

	Params::NewBlueprint14_C_ExecuteUbergraph_NewBlueprint14 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewBlueprint14.NewBlueprint14_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANewBlueprint14_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint14_C", "ReceiveTick");

	Params::NewBlueprint14_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewBlueprint14.NewBlueprint14_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANewBlueprint14_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint14_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewBlueprint14.NewBlueprint14_C.invis
// (BlueprintCallable, BlueprintEvent)

void ANewBlueprint14_C::Invis()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint14_C", "invis");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewBlueprint14.NewBlueprint14_C.unvis
// (BlueprintCallable, BlueprintEvent)

void ANewBlueprint14_C::Unvis()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint14_C", "unvis");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewBlueprint14.NewBlueprint14_C.a__UpdateFunc
// (BlueprintEvent)

void ANewBlueprint14_C::A__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint14_C", "a__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewBlueprint14.NewBlueprint14_C.a__FinishedFunc
// (BlueprintEvent)

void ANewBlueprint14_C::A__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint14_C", "a__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewBlueprint14.NewBlueprint14_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANewBlueprint14_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint14_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewBlueprint14.NewBlueprint14_C.gen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANewBlueprint14_C::Gen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint14_C", "gen");

	UObject::ProcessEvent(Func, nullptr);
}

}


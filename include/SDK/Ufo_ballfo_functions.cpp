#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ufo_ballfo

#include "Basic.hpp"

#include "Ufo_ballfo_classes.hpp"
#include "Ufo_ballfo_parameters.hpp"


namespace SDK
{

// Function ufo_ballfo.ufo_ballfo_C.ExecuteUbergraph_ufo_ballfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUfo_ballfo_C::ExecuteUbergraph_ufo_ballfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufo_ballfo_C", "ExecuteUbergraph_ufo_ballfo");

	Params::Ufo_ballfo_C_ExecuteUbergraph_ufo_ballfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ufo_ballfo.ufo_ballfo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AUfo_ballfo_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufo_ballfo_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufo_ballfo.ufo_ballfo_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUfo_ballfo_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufo_ballfo_C", "ReceiveTick");

	Params::Ufo_ballfo_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ufo_ballfo.ufo_ballfo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AUfo_ballfo_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufo_ballfo_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufo_ballfo.ufo_ballfo_C.set
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AUfo_ballfo_C::Set()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufo_ballfo_C", "set");

	UObject::ProcessEvent(Func, nullptr);
}

}


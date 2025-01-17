#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkyUfo

#include "Basic.hpp"

#include "SkyUfo_classes.hpp"
#include "SkyUfo_parameters.hpp"


namespace SDK
{

// Function skyUfo.skyUfo_C.ExecuteUbergraph_skyUfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASkyUfo_C::ExecuteUbergraph_skyUfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("skyUfo_C", "ExecuteUbergraph_skyUfo");

	Params::SkyUfo_C_ExecuteUbergraph_skyUfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function skyUfo.skyUfo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASkyUfo_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("skyUfo_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function skyUfo.skyUfo_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASkyUfo_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("skyUfo_C", "ReceiveTick");

	Params::SkyUfo_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}


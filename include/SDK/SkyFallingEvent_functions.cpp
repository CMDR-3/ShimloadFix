#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkyFallingEvent

#include "Basic.hpp"

#include "SkyFallingEvent_classes.hpp"
#include "SkyFallingEvent_parameters.hpp"


namespace SDK
{

// Function skyFallingEvent.skyFallingEvent_C.ExecuteUbergraph_skyFallingEvent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASkyFallingEvent_C::ExecuteUbergraph_skyFallingEvent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("skyFallingEvent_C", "ExecuteUbergraph_skyFallingEvent");

	Params::SkyFallingEvent_C_ExecuteUbergraph_skyFallingEvent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function skyFallingEvent.skyFallingEvent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASkyFallingEvent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("skyFallingEvent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function skyFallingEvent.skyFallingEvent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASkyFallingEvent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("skyFallingEvent_C", "ReceiveTick");

	Params::SkyFallingEvent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}


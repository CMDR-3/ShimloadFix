#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WaspSwarm

#include "Basic.hpp"

#include "WaspSwarm_classes.hpp"
#include "WaspSwarm_parameters.hpp"


namespace SDK
{

// Function waspSwarm.waspSwarm_C.ExecuteUbergraph_waspSwarm
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaspSwarm_C::ExecuteUbergraph_waspSwarm(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("waspSwarm_C", "ExecuteUbergraph_waspSwarm");

	Params::WaspSwarm_C_ExecuteUbergraph_waspSwarm Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function waspSwarm.waspSwarm_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWaspSwarm_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("waspSwarm_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function waspSwarm.waspSwarm_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWaspSwarm_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("waspSwarm_C", "ReceiveTick");

	Params::WaspSwarm_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}


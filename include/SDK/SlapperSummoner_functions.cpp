#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SlapperSummoner

#include "Basic.hpp"

#include "SlapperSummoner_classes.hpp"
#include "SlapperSummoner_parameters.hpp"


namespace SDK
{

// Function slapperSummoner.slapperSummoner_C.ExecuteUbergraph_slapperSummoner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlapperSummoner_C::ExecuteUbergraph_slapperSummoner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("slapperSummoner_C", "ExecuteUbergraph_slapperSummoner");

	Params::SlapperSummoner_C_ExecuteUbergraph_slapperSummoner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function slapperSummoner.slapperSummoner_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void USlapperSummoner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("slapperSummoner_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function slapperSummoner.slapperSummoner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlapperSummoner_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("slapperSummoner_C", "ReceiveTick");

	Params::SlapperSummoner_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}


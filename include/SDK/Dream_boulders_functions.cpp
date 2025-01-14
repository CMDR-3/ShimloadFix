#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dream_boulders

#include "Basic.hpp"

#include "Dream_boulders_classes.hpp"
#include "Dream_boulders_parameters.hpp"


namespace SDK
{

// Function dream_boulders.dream_boulders_C.ExecuteUbergraph_dream_boulders
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADream_boulders_C::ExecuteUbergraph_dream_boulders(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dream_boulders_C", "ExecuteUbergraph_dream_boulders");

	Params::Dream_boulders_C_ExecuteUbergraph_dream_boulders Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function dream_boulders.dream_boulders_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADream_boulders_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dream_boulders_C", "ReceiveTick");

	Params::Dream_boulders_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function dream_boulders.dream_boulders_C.spawnBoulder
// (BlueprintCallable, BlueprintEvent)

void ADream_boulders_C::SpawnBoulder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dream_boulders_C", "spawnBoulder");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dream_boulders.dream_boulders_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADream_boulders_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dream_boulders_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ticker_fireflySpawner

#include "Basic.hpp"

#include "Ticker_fireflySpawner_classes.hpp"
#include "Ticker_fireflySpawner_parameters.hpp"


namespace SDK
{

// Function ticker_fireflySpawner.ticker_fireflySpawner_C.ExecuteUbergraph_ticker_fireflySpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATicker_fireflySpawner_C::ExecuteUbergraph_ticker_fireflySpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ticker_fireflySpawner_C", "ExecuteUbergraph_ticker_fireflySpawner");

	Params::Ticker_fireflySpawner_C_ExecuteUbergraph_ticker_fireflySpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ticker_fireflySpawner.ticker_fireflySpawner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATicker_fireflySpawner_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ticker_fireflySpawner_C", "ReceiveTick");

	Params::Ticker_fireflySpawner_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

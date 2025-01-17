#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ticker_mannequinSpawner

#include "Basic.hpp"

#include "Ticker_mannequinSpawner_classes.hpp"
#include "Ticker_mannequinSpawner_parameters.hpp"


namespace SDK
{

// Function ticker_mannequinSpawner.ticker_mannequinSpawner_C.ExecuteUbergraph_ticker_mannequinSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATicker_mannequinSpawner_C::ExecuteUbergraph_ticker_mannequinSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ticker_mannequinSpawner_C", "ExecuteUbergraph_ticker_mannequinSpawner");

	Params::Ticker_mannequinSpawner_C_ExecuteUbergraph_ticker_mannequinSpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ticker_mannequinSpawner.ticker_mannequinSpawner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATicker_mannequinSpawner_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ticker_mannequinSpawner_C", "ReceiveTick");

	Params::Ticker_mannequinSpawner_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ticker_hexahiveSpawner

#include "Basic.hpp"

#include "Ticker_hexahiveSpawner_classes.hpp"
#include "Ticker_hexahiveSpawner_parameters.hpp"


namespace SDK
{

// Function ticker_hexahiveSpawner.ticker_hexahiveSpawner_C.ExecuteUbergraph_ticker_hexahiveSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATicker_hexahiveSpawner_C::ExecuteUbergraph_ticker_hexahiveSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ticker_hexahiveSpawner_C", "ExecuteUbergraph_ticker_hexahiveSpawner");

	Params::Ticker_hexahiveSpawner_C_ExecuteUbergraph_ticker_hexahiveSpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ticker_hexahiveSpawner.ticker_hexahiveSpawner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATicker_hexahiveSpawner_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ticker_hexahiveSpawner_C", "ReceiveTick");

	Params::Ticker_hexahiveSpawner_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}


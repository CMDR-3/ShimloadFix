#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ticker_foodHall

#include "Basic.hpp"

#include "Ticker_foodHall_classes.hpp"
#include "Ticker_foodHall_parameters.hpp"


namespace SDK
{

// Function ticker_foodHall.ticker_foodHall_C.ExecuteUbergraph_ticker_foodHall
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATicker_foodHall_C::ExecuteUbergraph_ticker_foodHall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ticker_foodHall_C", "ExecuteUbergraph_ticker_foodHall");

	Params::Ticker_foodHall_C_ExecuteUbergraph_ticker_foodHall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ticker_foodHall.ticker_foodHall_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATicker_foodHall_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ticker_foodHall_C", "ReceiveTick");

	Params::Ticker_foodHall_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}


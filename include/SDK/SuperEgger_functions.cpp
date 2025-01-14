#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SuperEgger

#include "Basic.hpp"

#include "SuperEgger_classes.hpp"
#include "SuperEgger_parameters.hpp"


namespace SDK
{

// Function superEgger.superEgger_C.ExecuteUbergraph_superEgger
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASuperEgger_C::ExecuteUbergraph_superEgger(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("superEgger_C", "ExecuteUbergraph_superEgger");

	Params::SuperEgger_C_ExecuteUbergraph_superEgger Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function superEgger.superEgger_C.spwn
// (BlueprintCallable, BlueprintEvent)

void ASuperEgger_C::Spwn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("superEgger_C", "spwn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function superEgger.superEgger_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASuperEgger_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("superEgger_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}


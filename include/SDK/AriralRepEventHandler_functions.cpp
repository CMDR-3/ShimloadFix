#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AriralRepEventHandler

#include "Basic.hpp"

#include "AriralRepEventHandler_classes.hpp"
#include "AriralRepEventHandler_parameters.hpp"


namespace SDK
{

// Function ariralRepEventHandler.ariralRepEventHandler_C.ExecuteUbergraph_ariralRepEventHandler
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAriralRepEventHandler_C::ExecuteUbergraph_ariralRepEventHandler(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ariralRepEventHandler_C", "ExecuteUbergraph_ariralRepEventHandler");

	Params::AriralRepEventHandler_C_ExecuteUbergraph_ariralRepEventHandler Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ariralRepEventHandler.ariralRepEventHandler_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAriralRepEventHandler_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ariralRepEventHandler_C", "ReceiveTick");

	Params::AriralRepEventHandler_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ariralRepEventHandler.ariralRepEventHandler_C.launchEvent
// (BlueprintCallable, BlueprintEvent)

void AAriralRepEventHandler_C::LaunchEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ariralRepEventHandler_C", "launchEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ariralRepEventHandler.ariralRepEventHandler_C.calcRep
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 AAriralRepEventHandler_C::CalcRep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ariralRepEventHandler_C", "calcRep");

	Params::AriralRepEventHandler_C_CalcRep Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

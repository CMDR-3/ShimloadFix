#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PreLoad

#include "Basic.hpp"

#include "PreLoad_classes.hpp"
#include "PreLoad_parameters.hpp"


namespace SDK
{

// Function preLoad.preLoad_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APreLoad_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("preLoad_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function preLoad.preLoad_C.ExecuteUbergraph_preLoad
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APreLoad_C::ExecuteUbergraph_preLoad(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("preLoad_C", "ExecuteUbergraph_preLoad");

	Params::PreLoad_C_ExecuteUbergraph_preLoad Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_gatowell

#include "Basic.hpp"

#include "Prop_gatowell_classes.hpp"
#include "Prop_gatowell_parameters.hpp"


namespace SDK
{

// Function prop_gatowell.prop_gatowell_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_gatowell_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_gatowell_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_gatowell.prop_gatowell_C.ExecuteUbergraph_prop_gatowell
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_gatowell_C::ExecuteUbergraph_prop_gatowell(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_gatowell_C", "ExecuteUbergraph_prop_gatowell");

	Params::Prop_gatowell_C_ExecuteUbergraph_prop_gatowell Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

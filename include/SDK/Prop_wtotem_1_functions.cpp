#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wtotem_1

#include "Basic.hpp"

#include "Prop_wtotem_1_classes.hpp"
#include "Prop_wtotem_1_parameters.hpp"


namespace SDK
{

// Function prop_wtotem_1.prop_wtotem_1_C.ExecuteUbergraph_prop_wtotem_1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wtotem_1_C::ExecuteUbergraph_prop_wtotem_1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wtotem_1_C", "ExecuteUbergraph_prop_wtotem_1");

	Params::Prop_wtotem_1_C_ExecuteUbergraph_prop_wtotem_1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wtotem_1.prop_wtotem_1_C.broken_fire
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_wtotem_1_C::broken_fire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wtotem_1_C", "broken_fire");

	UObject::ProcessEvent(Func, nullptr);
}

}

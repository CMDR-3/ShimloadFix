#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_crystal_explode

#include "Basic.hpp"

#include "Prop_crystal_explode_classes.hpp"
#include "Prop_crystal_explode_parameters.hpp"


namespace SDK
{

// Function prop_crystal_explode.prop_crystal_explode_C.ExecuteUbergraph_prop_crystal_explode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_crystal_explode_C::ExecuteUbergraph_prop_crystal_explode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_crystal_explode_C", "ExecuteUbergraph_prop_crystal_explode");

	Params::Prop_crystal_explode_C_ExecuteUbergraph_prop_crystal_explode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_crystal_explode.prop_crystal_explode_C.broken
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_crystal_explode_C::broken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_crystal_explode_C", "broken");

	UObject::ProcessEvent(Func, nullptr);
}

}


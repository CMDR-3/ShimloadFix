#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_padlock

#include "Basic.hpp"

#include "Prop_padlock_classes.hpp"
#include "Prop_padlock_parameters.hpp"


namespace SDK
{

// Function prop_padlock.prop_padlock_C.ExecuteUbergraph_prop_padlock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_padlock_C::ExecuteUbergraph_prop_padlock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_padlock_C", "ExecuteUbergraph_prop_padlock");

	Params::Prop_padlock_C_ExecuteUbergraph_prop_padlock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_padlock.prop_padlock_C.broken_fire
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_padlock_C::broken_fire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_padlock_C", "broken_fire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_padlock.prop_padlock_C.broken
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_padlock_C::broken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_padlock_C", "broken");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_crowbar

#include "Basic.hpp"

#include "Prop_crowbar_classes.hpp"
#include "Prop_crowbar_parameters.hpp"


namespace SDK
{

// Function prop_crowbar.prop_crowbar_C.ExecuteUbergraph_prop_crowbar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_crowbar_C::ExecuteUbergraph_prop_crowbar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_crowbar_C", "ExecuteUbergraph_prop_crowbar");

	Params::Prop_crowbar_C_ExecuteUbergraph_prop_crowbar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_crowbar.prop_crowbar_C.afterplay
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_crowbar_C::Afterplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_crowbar_C", "afterplay");

	UObject::ProcessEvent(Func, nullptr);
}

}

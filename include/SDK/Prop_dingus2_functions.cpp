#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_dingus2

#include "Basic.hpp"

#include "Prop_dingus2_classes.hpp"
#include "Prop_dingus2_parameters.hpp"


namespace SDK
{

// Function prop_dingus2.prop_dingus2_C.ExecuteUbergraph_prop_dingus2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_dingus2_C::ExecuteUbergraph_prop_dingus2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_dingus2_C", "ExecuteUbergraph_prop_dingus2");

	Params::Prop_dingus2_C_ExecuteUbergraph_prop_dingus2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}


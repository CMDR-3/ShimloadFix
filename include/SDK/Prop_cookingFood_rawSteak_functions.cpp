#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_cookingFood_rawSteak

#include "Basic.hpp"

#include "Prop_cookingFood_rawSteak_classes.hpp"
#include "Prop_cookingFood_rawSteak_parameters.hpp"


namespace SDK
{

// Function prop_cookingFood_rawSteak.prop_cookingFood_rawSteak_C.ExecuteUbergraph_prop_cookingFood_rawSteak
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_cookingFood_rawSteak_C::ExecuteUbergraph_prop_cookingFood_rawSteak(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_cookingFood_rawSteak_C", "ExecuteUbergraph_prop_cookingFood_rawSteak");

	Params::Prop_cookingFood_rawSteak_C_ExecuteUbergraph_prop_cookingFood_rawSteak Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_cookingFood_rawSteak.prop_cookingFood_rawSteak_C.slice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Clean                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_cookingFood_rawSteak_C::Slice(bool Clean)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_cookingFood_rawSteak_C", "slice");

	Params::Prop_cookingFood_rawSteak_C_Slice Parms{};

	Parms.Clean = Clean;

	UObject::ProcessEvent(Func, &Parms);
}

}

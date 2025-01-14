#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food_poison

#include "Basic.hpp"

#include "Prop_food_poison_classes.hpp"
#include "Prop_food_poison_parameters.hpp"


namespace SDK
{

// Function prop_food_poison.prop_food_poison_C.ExecuteUbergraph_prop_food_poison
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_food_poison_C::ExecuteUbergraph_prop_food_poison(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_food_poison_C", "ExecuteUbergraph_prop_food_poison");

	Params::Prop_food_poison_C_ExecuteUbergraph_prop_food_poison Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_food_poison.prop_food_poison_C.bitten
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_food_poison_C::bitten()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_food_poison_C", "bitten");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_food_poison.prop_food_poison_C.eaten
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_food_poison_C::Eaten()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_food_poison_C", "eaten");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_cookingFood_shrimp1

#include "Basic.hpp"

#include "Prop_cookingFood_shrimp1_classes.hpp"
#include "Prop_cookingFood_shrimp1_parameters.hpp"


namespace SDK
{

// Function prop_cookingFood_shrimp1.prop_cookingFood_shrimp1_C.cooked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProp_cookingFood_shrimp1_C::Cooked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_cookingFood_shrimp1_C", "cooked");

	UObject::ProcessEvent(Func, nullptr);
}

}


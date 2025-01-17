#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_rune_2

#include "Basic.hpp"

#include "Prop_rune_2_classes.hpp"
#include "Prop_rune_2_parameters.hpp"


namespace SDK
{

// Function prop_rune_2.prop_rune_2_C.ExecuteUbergraph_prop_rune_2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_rune_2_C::ExecuteUbergraph_prop_rune_2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rune_2_C", "ExecuteUbergraph_prop_rune_2");

	Params::Prop_rune_2_C_ExecuteUbergraph_prop_rune_2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_rune_2.prop_rune_2_C.fireDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_rune_2_C::FireDamage(float Damage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rune_2_C", "fireDamage");

	Params::Prop_rune_2_C_FireDamage Parms{};

	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);
}

}


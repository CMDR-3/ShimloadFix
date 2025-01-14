#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_coal

#include "Basic.hpp"

#include "Prop_coal_classes.hpp"
#include "Prop_coal_parameters.hpp"


namespace SDK
{

// Function prop_coal.prop_coal_C.ExecuteUbergraph_prop_coal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_coal_C::ExecuteUbergraph_prop_coal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_coal_C", "ExecuteUbergraph_prop_coal");

	Params::Prop_coal_C_ExecuteUbergraph_prop_coal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_coal.prop_coal_C.ignite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Fuel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_coal_C::Ignite(float Fuel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_coal_C", "ignite");

	Params::Prop_coal_C_Ignite Parms{};

	Parms.Fuel = Fuel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_coal.prop_coal_C.fireDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_coal_C::FireDamage(float Damage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_coal_C", "fireDamage");

	Params::Prop_coal_C_FireDamage Parms{};

	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);
}

}


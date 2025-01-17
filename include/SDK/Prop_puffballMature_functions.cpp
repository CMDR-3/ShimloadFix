#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_puffballMature

#include "Basic.hpp"

#include "Prop_puffballMature_classes.hpp"
#include "Prop_puffballMature_parameters.hpp"


namespace SDK
{

// Function prop_puffballMature.prop_puffballMature_C.ExecuteUbergraph_prop_puffballMature
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_puffballMature_C::ExecuteUbergraph_prop_puffballMature(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_puffballMature_C", "ExecuteUbergraph_prop_puffballMature");

	Params::Prop_puffballMature_C_ExecuteUbergraph_prop_puffballMature Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_puffballMature.prop_puffballMature_C.attemptExplode
// (BlueprintCallable, BlueprintEvent)

void AProp_puffballMature_C::AttemptExplode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_puffballMature_C", "attemptExplode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_puffballMature.prop_puffballMature_C.toggleNuclear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Nuclear_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_puffballMature_C::ToggleNuclear(bool Nuclear_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_puffballMature_C", "toggleNuclear");

	Params::Prop_puffballMature_C_ToggleNuclear Parms{};

	Parms.Nuclear_0 = Nuclear_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_puffballMature.prop_puffballMature_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_puffballMature_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_puffballMature_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_puffballMature.prop_puffballMature_C.actionOptionIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// Enum_interactionActions                 Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_puffballMature_C::ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_puffballMature_C", "actionOptionIndex");

	Params::Prop_puffballMature_C_ActionOptionIndex Parms{};

	Parms.Player = Player;
	Parms.Hit_0 = std::move(Hit_0);
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_puffballMature.prop_puffballMature_C.broken
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_puffballMature_C::broken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_puffballMature_C", "broken");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_puffballMature.prop_puffballMature_C.broken_fire
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_puffballMature_C::broken_fire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_puffballMature_C", "broken_fire");

	UObject::ProcessEvent(Func, nullptr);
}

}


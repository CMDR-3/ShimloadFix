#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_radCrystal_quartz

#include "Basic.hpp"

#include "Prop_radCrystal_quartz_classes.hpp"
#include "Prop_radCrystal_quartz_parameters.hpp"


namespace SDK
{

// Function prop_radCrystal_quartz.prop_radCrystal_quartz_C.ExecuteUbergraph_prop_radCrystal_quartz
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_radCrystal_quartz_C::ExecuteUbergraph_prop_radCrystal_quartz(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_radCrystal_quartz_C", "ExecuteUbergraph_prop_radCrystal_quartz");

	Params::Prop_radCrystal_quartz_C_ExecuteUbergraph_prop_radCrystal_quartz Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_radCrystal_quartz.prop_radCrystal_quartz_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_radCrystal_quartz_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_radCrystal_quartz_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_radCrystal_quartz.prop_radCrystal_quartz_C.damageByPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_radCrystal_quartz_C::DamageByPlayer(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, float Damage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_radCrystal_quartz_C", "damageByPlayer");

	Params::Prop_radCrystal_quartz_C_DamageByPlayer Parms{};

	Parms.Player = Player;
	Parms.Hit_0 = std::move(Hit_0);
	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);
}

}

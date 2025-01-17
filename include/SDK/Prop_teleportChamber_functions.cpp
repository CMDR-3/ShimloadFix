#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_teleportChamber

#include "Basic.hpp"

#include "Prop_teleportChamber_classes.hpp"
#include "Prop_teleportChamber_parameters.hpp"


namespace SDK
{

// Function prop_teleportChamber.prop_teleportChamber_C.spawned
// (BlueprintCallable, BlueprintEvent)

void AProp_teleportChamber_C::Spawned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_teleportChamber_C", "spawned");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_teleportChamber.prop_teleportChamber_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_teleportChamber_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_teleportChamber_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_teleportChamber.prop_teleportChamber_C.ExecuteUbergraph_prop_teleportChamber
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_teleportChamber_C::ExecuteUbergraph_prop_teleportChamber(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_teleportChamber_C", "ExecuteUbergraph_prop_teleportChamber");

	Params::Prop_teleportChamber_C_ExecuteUbergraph_prop_teleportChamber Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}


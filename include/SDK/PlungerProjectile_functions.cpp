#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlungerProjectile

#include "Basic.hpp"

#include "PlungerProjectile_classes.hpp"
#include "PlungerProjectile_parameters.hpp"


namespace SDK
{

// Function plungerProjectile.plungerProjectile_C.ExecuteUbergraph_plungerProjectile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlungerProjectile_C::ExecuteUbergraph_plungerProjectile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("plungerProjectile_C", "ExecuteUbergraph_plungerProjectile");

	Params::PlungerProjectile_C_ExecuteUbergraph_plungerProjectile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function plungerProjectile.plungerProjectile_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlungerProjectile_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("plungerProjectile_C", "ReceiveTick");

	Params::PlungerProjectile_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function plungerProjectile.plungerProjectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlungerProjectile_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("plungerProjectile_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}


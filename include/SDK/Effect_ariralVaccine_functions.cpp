#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Effect_ariralVaccine

#include "Basic.hpp"

#include "Effect_ariralVaccine_classes.hpp"
#include "Effect_ariralVaccine_parameters.hpp"


namespace SDK
{

// Function effect_ariralVaccine.effect_ariralVaccine_C.ExecuteUbergraph_effect_ariralVaccine
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffect_ariralVaccine_C::ExecuteUbergraph_effect_ariralVaccine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("effect_ariralVaccine_C", "ExecuteUbergraph_effect_ariralVaccine");

	Params::Effect_ariralVaccine_C_ExecuteUbergraph_effect_ariralVaccine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function effect_ariralVaccine.effect_ariralVaccine_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffect_ariralVaccine_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("effect_ariralVaccine_C", "ReceiveTick");

	Params::Effect_ariralVaccine_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function effect_ariralVaccine.effect_ariralVaccine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEffect_ariralVaccine_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("effect_ariralVaccine_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

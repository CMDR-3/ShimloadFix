#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ariral_pigBeater

#include "Basic.hpp"

#include "Ariral_pigBeater_classes.hpp"
#include "Ariral_pigBeater_parameters.hpp"


namespace SDK
{

// Function ariral_pigBeater.ariral_pigBeater_C.ExecuteUbergraph_ariral_pigBeater
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAriral_pigBeater_C::ExecuteUbergraph_ariral_pigBeater(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ariral_pigBeater_C", "ExecuteUbergraph_ariral_pigBeater");

	Params::Ariral_pigBeater_C_ExecuteUbergraph_ariral_pigBeater Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ariral_pigBeater.ariral_pigBeater_C.targetDestroyed_d
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAriral_pigBeater_C::TargetDestroyed_d(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ariral_pigBeater_C", "targetDestroyed_d");

	Params::Ariral_pigBeater_C_TargetDestroyed_d Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ariral_pigBeater.ariral_pigBeater_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAriral_pigBeater_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ariral_pigBeater_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}


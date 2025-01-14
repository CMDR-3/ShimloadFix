#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_ambientSound

#include "Basic.hpp"

#include "Trigger_ambientSound_classes.hpp"
#include "Trigger_ambientSound_parameters.hpp"


namespace SDK
{

// Function trigger_ambientSound.trigger_ambientSound_C.upd
// (Public, BlueprintCallable, BlueprintEvent)

void ATrigger_ambientSound_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_ambientSound_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function trigger_ambientSound.trigger_ambientSound_C.setVol2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Volume_2_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrigger_ambientSound_C::SetVol2(float Volume_2_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_ambientSound_C", "setVol2");

	Params::Trigger_ambientSound_C_SetVol2 Parms{};

	Parms.Volume_2_0 = Volume_2_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function trigger_ambientSound.trigger_ambientSound_C.ignoreSave_trigger
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ignore                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrigger_ambientSound_C::IgnoreSave_trigger(bool* Ignore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_ambientSound_C", "ignoreSave_trigger");

	Params::Trigger_ambientSound_C_IgnoreSave_trigger Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ignore != nullptr)
		*Ignore = Parms.Ignore;
}

}


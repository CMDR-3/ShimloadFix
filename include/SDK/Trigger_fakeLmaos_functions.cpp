#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_fakeLmaos

#include "Basic.hpp"

#include "Trigger_fakeLmaos_classes.hpp"
#include "Trigger_fakeLmaos_parameters.hpp"


namespace SDK
{

// Function trigger_fakeLmaos.trigger_fakeLmaos_C.getTriggerData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_triggerSave              Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void ATrigger_fakeLmaos_C::GetTriggerData(struct FStruct_triggerSave* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_fakeLmaos_C", "getTriggerData");

	Params::Trigger_fakeLmaos_C_GetTriggerData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function trigger_fakeLmaos.trigger_fakeLmaos_C.loadTriggerData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_triggerSave              Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrigger_fakeLmaos_C::LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_fakeLmaos_C", "loadTriggerData");

	Params::Trigger_fakeLmaos_C_LoadTriggerData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function trigger_fakeLmaos.trigger_fakeLmaos_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrigger_fakeLmaos_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_fakeLmaos_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function trigger_fakeLmaos.trigger_fakeLmaos_C.runTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Owner_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrigger_fakeLmaos_C::RunTrigger(class AActor* Owner_0, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_fakeLmaos_C", "runTrigger");

	Params::Trigger_fakeLmaos_C_RunTrigger Parms{};

	Parms.Owner_0 = Owner_0;
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function trigger_fakeLmaos.trigger_fakeLmaos_C.ExecuteUbergraph_trigger_fakeLmaos
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrigger_fakeLmaos_C::ExecuteUbergraph_trigger_fakeLmaos(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_fakeLmaos_C", "ExecuteUbergraph_trigger_fakeLmaos");

	Params::Trigger_fakeLmaos_C_ExecuteUbergraph_trigger_fakeLmaos Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}


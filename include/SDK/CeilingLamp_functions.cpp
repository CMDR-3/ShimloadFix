#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CeilingLamp

#include "Basic.hpp"

#include "CeilingLamp_classes.hpp"
#include "CeilingLamp_parameters.hpp"


namespace SDK
{

// Function ceilingLamp.ceilingLamp_C.ExecuteUbergraph_ceilingLamp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACeilingLamp_C::ExecuteUbergraph_ceilingLamp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ceilingLamp_C", "ExecuteUbergraph_ceilingLamp");

	Params::CeilingLamp_C_ExecuteUbergraph_ceilingLamp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ceilingLamp.ceilingLamp_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ACeilingLamp_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ceilingLamp_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ceilingLamp.ceilingLamp_C.blink
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Weight                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACeilingLamp_C::blink(float Weight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ceilingLamp_C", "blink");

	Params::CeilingLamp_C_blink Parms{};

	Parms.Weight = Weight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ceilingLamp.ceilingLamp_C.settingsApplied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_settings                 Settings                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACeilingLamp_C::SettingsApplied(const struct FStruct_settings& Settings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ceilingLamp_C", "settingsApplied");

	Params::CeilingLamp_C_SettingsApplied Parms{};

	Parms.Settings = std::move(Settings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ceilingLamp.ceilingLamp_C.gamemodeBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void ACeilingLamp_C::GamemodeBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ceilingLamp_C", "gamemodeBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ceilingLamp.ceilingLamp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACeilingLamp_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ceilingLamp_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ceilingLamp.ceilingLamp_C.off
// (BlueprintCallable, BlueprintEvent)

void ACeilingLamp_C::Off()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ceilingLamp_C", "off");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ceilingLamp.ceilingLamp_C.powerChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active_calc                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Active_downl                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Active_coords                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Active_play                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Active_light                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACeilingLamp_C::PowerChanged(bool Active_calc, bool Active_downl, bool Active_coords, bool Active_play, bool Active_light)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ceilingLamp_C", "powerChanged");

	Params::CeilingLamp_C_PowerChanged Parms{};

	Parms.Active_calc = Active_calc;
	Parms.Active_downl = Active_downl;
	Parms.Active_coords = Active_coords;
	Parms.Active_play = Active_play;
	Parms.Active_light = Active_light;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ceilingLamp.ceilingLamp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACeilingLamp_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ceilingLamp_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ceilingLamp.ceilingLamp_C.toggle
// (Public, BlueprintCallable, BlueprintEvent)

void ACeilingLamp_C::Toggle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ceilingLamp_C", "toggle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ceilingLamp.ceilingLamp_C.Deactivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HasPower_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACeilingLamp_C::Deactivate(bool HasPower_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ceilingLamp_C", "Deactivate");

	Params::CeilingLamp_C_Deactivate Parms{};

	Parms.HasPower_0 = HasPower_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ceilingLamp.ceilingLamp_C.setVis
// (Public, BlueprintCallable, BlueprintEvent)

void ACeilingLamp_C::SetVis()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ceilingLamp_C", "setVis");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ceilingLamp.ceilingLamp_C.solar
// (Public, BlueprintCallable, BlueprintEvent)

void ACeilingLamp_C::Solar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ceilingLamp_C", "solar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ceilingLamp.ceilingLamp_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACeilingLamp_C::SetActive(bool IsActive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ceilingLamp_C", "SetActive");

	Params::CeilingLamp_C_SetActive Parms{};

	Parms.IsActive_0 = IsActive_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ceilingLamp.ceilingLamp_C.loadTriggerData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_triggerSave              Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACeilingLamp_C::LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ceilingLamp_C", "loadTriggerData");

	Params::CeilingLamp_C_LoadTriggerData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function ceilingLamp.ceilingLamp_C.getTriggerData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_triggerSave              Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void ACeilingLamp_C::GetTriggerData(struct FStruct_triggerSave* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ceilingLamp_C", "getTriggerData");

	Params::CeilingLamp_C_GetTriggerData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function ceilingLamp.ceilingLamp_C.upd
// (Public, BlueprintCallable, BlueprintEvent)

void ACeilingLamp_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ceilingLamp_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ceilingLamp.ceilingLamp_C.gatherDataFromKeyT
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Gather                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACeilingLamp_C::GatherDataFromKeyT(bool* Gather)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ceilingLamp_C", "gatherDataFromKeyT");

	Params::CeilingLamp_C_GatherDataFromKeyT Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Gather != nullptr)
		*Gather = Parms.Gather;
}

}

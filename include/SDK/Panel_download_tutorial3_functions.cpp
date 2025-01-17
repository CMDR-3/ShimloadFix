#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Panel_download_tutorial3

#include "Basic.hpp"

#include "Panel_download_tutorial3_classes.hpp"
#include "Panel_download_tutorial3_parameters.hpp"


namespace SDK
{

// Function panel_download_tutorial3.panel_download_tutorial3_C.ExecuteUbergraph_panel_download_tutorial3
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APanel_download_tutorial3_C::ExecuteUbergraph_panel_download_tutorial3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("panel_download_tutorial3_C", "ExecuteUbergraph_panel_download_tutorial3");

	Params::Panel_download_tutorial3_C_ExecuteUbergraph_panel_download_tutorial3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function panel_download_tutorial3.panel_download_tutorial3_C.runTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Owner_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APanel_download_tutorial3_C::RunTrigger(class AActor* Owner_0, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("panel_download_tutorial3_C", "runTrigger");

	Params::Panel_download_tutorial3_C_RunTrigger Parms{};

	Parms.Owner_0 = Owner_0;
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function panel_download_tutorial3.panel_download_tutorial3_C.setActiveTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SentFrom                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APanel_download_tutorial3_C::SetActiveTrigger(class AActor* SentFrom, bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("panel_download_tutorial3_C", "setActiveTrigger");

	Params::Panel_download_tutorial3_C_SetActiveTrigger Parms{};

	Parms.SentFrom = SentFrom;
	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function panel_download_tutorial3.panel_download_tutorial3_C.cordUnplugged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACord_C*                          Cord                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACordSocket_C*                    Socket                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APanel_download_tutorial3_C::CordUnplugged(class ACord_C* Cord, class ACordSocket_C* Socket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("panel_download_tutorial3_C", "cordUnplugged");

	Params::Panel_download_tutorial3_C_CordUnplugged Parms{};

	Parms.Cord = Cord;
	Parms.Socket = Socket;

	UObject::ProcessEvent(Func, &Parms);
}


// Function panel_download_tutorial3.panel_download_tutorial3_C.cordPlugged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACord_C*                          Cord                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACordSocket_C*                    Socket                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APanel_download_tutorial3_C::CordPlugged(class ACord_C* Cord, class ACordSocket_C* Socket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("panel_download_tutorial3_C", "cordPlugged");

	Params::Panel_download_tutorial3_C_CordPlugged Parms{};

	Parms.Cord = Cord;
	Parms.Socket = Socket;

	UObject::ProcessEvent(Func, &Parms);
}


// Function panel_download_tutorial3.panel_download_tutorial3_C.set_ignoreSave_trigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APanel_download_tutorial3_C::Set_ignoreSave_trigger(bool NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("panel_download_tutorial3_C", "set_ignoreSave_trigger");

	Params::Panel_download_tutorial3_C_Set_ignoreSave_trigger Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function panel_download_tutorial3.panel_download_tutorial3_C.ignoreSave_trigger
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ignore                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APanel_download_tutorial3_C::IgnoreSave_trigger(bool* Ignore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("panel_download_tutorial3_C", "ignoreSave_trigger");

	Params::Panel_download_tutorial3_C_IgnoreSave_trigger Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ignore != nullptr)
		*Ignore = Parms.Ignore;
}


// Function panel_download_tutorial3.panel_download_tutorial3_C.loadTriggerData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_triggerSave              Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APanel_download_tutorial3_C::LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("panel_download_tutorial3_C", "loadTriggerData");

	Params::Panel_download_tutorial3_C_LoadTriggerData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function panel_download_tutorial3.panel_download_tutorial3_C.getTriggerData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_triggerSave              Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void APanel_download_tutorial3_C::GetTriggerData(struct FStruct_triggerSave* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("panel_download_tutorial3_C", "getTriggerData");

	Params::Panel_download_tutorial3_C_GetTriggerData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function panel_download_tutorial3.panel_download_tutorial3_C.gatherDataFromKeyT
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Gather                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APanel_download_tutorial3_C::GatherDataFromKeyT(bool* Gather)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("panel_download_tutorial3_C", "gatherDataFromKeyT");

	Params::Panel_download_tutorial3_C_GatherDataFromKeyT Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Gather != nullptr)
		*Gather = Parms.Gather;
}


// Function panel_download_tutorial3.panel_download_tutorial3_C.downloaded
// (Public, BlueprintCallable, BlueprintEvent)

void APanel_download_tutorial3_C::Downloaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("panel_download_tutorial3_C", "downloaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function panel_download_tutorial3.panel_download_tutorial3_C.gamemodeBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void APanel_download_tutorial3_C::GamemodeBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("panel_download_tutorial3_C", "gamemodeBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}


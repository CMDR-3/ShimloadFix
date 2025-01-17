#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_settingsSlot_assetFolder

#include "Basic.hpp"

#include "Umg_settingsSlot_assetFolder_classes.hpp"
#include "Umg_settingsSlot_assetFolder_parameters.hpp"


namespace SDK
{

// Function umg_settingsSlot_assetFolder.umg_settingsSlot_assetFolder_C.ExecuteUbergraph_umg_settingsSlot_assetFolder
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_settingsSlot_assetFolder_C::ExecuteUbergraph_umg_settingsSlot_assetFolder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_settingsSlot_assetFolder_C", "ExecuteUbergraph_umg_settingsSlot_assetFolder");

	Params::Umg_settingsSlot_assetFolder_C_ExecuteUbergraph_umg_settingsSlot_assetFolder Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_settingsSlot_assetFolder.umg_settingsSlot_assetFolder_C.BndEvt__umg_settingsSlot_assetFolder_textbox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_settingsSlot_assetFolder_C::BndEvt__umg_settingsSlot_assetFolder_textbox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_settingsSlot_assetFolder_C", "BndEvt__umg_settingsSlot_assetFolder_textbox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::Umg_settingsSlot_assetFolder_C_BndEvt__umg_settingsSlot_assetFolder_textbox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_settingsSlot_assetFolder.umg_settingsSlot_assetFolder_C.upd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUmg_settingsSlot_assetFolder_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_settingsSlot_assetFolder_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}

}


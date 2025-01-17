#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_help

#include "Basic.hpp"

#include "Umg_help_classes.hpp"
#include "Umg_help_parameters.hpp"


namespace SDK
{

// Function umg_help.umg_help_C.ExecuteUbergraph_umg_help
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_help_C::ExecuteUbergraph_umg_help(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_help_C", "ExecuteUbergraph_umg_help");

	Params::Umg_help_C_ExecuteUbergraph_umg_help Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_help.umg_help_C.BndEvt__umg_help_textbox_search_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUmg_help_C::BndEvt__umg_help_textbox_search_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_help_C", "BndEvt__umg_help_textbox_search_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::Umg_help_C_BndEvt__umg_help_textbox_search_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_help.umg_help_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUmg_help_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_help_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_help.umg_help_C.resume
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_help_C::Resume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_help_C", "resume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_help.umg_help_C.BndEvt__button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_help_C::BndEvt__button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_help_C", "BndEvt__button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_help.umg_help_C.setIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_help_C::SetIndex(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_help_C", "setIndex");

	Params::Umg_help_C_SetIndex Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_help.umg_help_C.press
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUmg_helpButton_C*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_help_C::Press(class UUmg_helpButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_help_C", "press");

	Params::Umg_help_C_Press Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_help.umg_help_C.Search
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Prompt                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UUmg_help_C::Search(const class FText& Prompt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_help_C", "Search");

	Params::Umg_help_C_Search Parms{};

	Parms.Prompt = std::move(Prompt);

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_resetSave

#include "Basic.hpp"

#include "Umg_resetSave_classes.hpp"
#include "Umg_resetSave_parameters.hpp"


namespace SDK
{

// Function umg_resetSave.umg_resetSave_C.ExecuteUbergraph_umg_resetSave
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_resetSave_C::ExecuteUbergraph_umg_resetSave(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_resetSave_C", "ExecuteUbergraph_umg_resetSave");

	Params::Umg_resetSave_C_ExecuteUbergraph_umg_resetSave Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_resetSave.umg_resetSave_C.setIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_resetSave_C::SetIndex(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_resetSave_C", "setIndex");

	Params::Umg_resetSave_C_SetIndex Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_resetSave.umg_resetSave_C.BndEvt__button_okay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_resetSave_C::BndEvt__button_okay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_resetSave_C", "BndEvt__button_okay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_resetSave.umg_resetSave_C.BndEvt__button_back_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_resetSave_C::BndEvt__button_back_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_resetSave_C", "BndEvt__button_back_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_resetSave.umg_resetSave_C.BndEvt__button_day_minus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_resetSave_C::BndEvt__button_day_minus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_resetSave_C", "BndEvt__button_day_minus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_resetSave.umg_resetSave_C.BndEvt__button_day_plus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_resetSave_C::BndEvt__button_day_plus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_resetSave_C", "BndEvt__button_day_plus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_resetSave.umg_resetSave_C.resume
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_resetSave_C::Resume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_resetSave_C", "resume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_resetSave.umg_resetSave_C.upd
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_resetSave_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_resetSave_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_resetSave.umg_resetSave_C.updTxt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUmg_resetSave_C::UpdTxt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_resetSave_C", "updTxt");

	UObject::ProcessEvent(Func, nullptr);
}

}


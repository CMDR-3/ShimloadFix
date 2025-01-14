#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SignalSlot

#include "Basic.hpp"

#include "SignalSlot_classes.hpp"
#include "SignalSlot_parameters.hpp"


namespace SDK
{

// Function signalSlot.signalSlot_C.ExecuteUbergraph_signalSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USignalSlot_C::ExecuteUbergraph_signalSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("signalSlot_C", "ExecuteUbergraph_signalSlot");

	Params::SignalSlot_C_ExecuteUbergraph_signalSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function signalSlot.signalSlot_C.setIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USignalSlot_C::SetIndex(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("signalSlot_C", "setIndex");

	Params::SignalSlot_C_SetIndex Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function signalSlot.signalSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USignalSlot_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("signalSlot_C", "BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function signalSlot.signalSlot_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void USignalSlot_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("signalSlot_C", "OnFocusLost");

	Params::SignalSlot_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function signalSlot.signalSlot_C.BndEvt__Button_70_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USignalSlot_C::BndEvt__Button_70_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("signalSlot_C", "BndEvt__Button_70_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function signalSlot.signalSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USignalSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("signalSlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function signalSlot.signalSlot_C.resume
// (Public, BlueprintCallable, BlueprintEvent)

void USignalSlot_C::Resume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("signalSlot_C", "resume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function signalSlot.signalSlot_C.sett
// (Public, BlueprintCallable, BlueprintEvent)

void USignalSlot_C::Sett()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("signalSlot_C", "sett");

	UObject::ProcessEvent(Func, nullptr);
}


// Function signalSlot.signalSlot_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply USignalSlot_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("signalSlot_C", "OnKeyDown");

	Params::SignalSlot_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function signalSlot.signalSlot_C.setPos
// (Public, BlueprintCallable, BlueprintEvent)

void USignalSlot_C::SetPos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("signalSlot_C", "setPos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function signalSlot.signalSlot_C.updName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USignalSlot_C::UpdName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("signalSlot_C", "updName");

	UObject::ProcessEvent(Func, nullptr);
}

}


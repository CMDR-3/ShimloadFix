#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_playerInvContainerSlot

#include "Basic.hpp"

#include "Umg_playerInvContainerSlot_classes.hpp"
#include "Umg_playerInvContainerSlot_parameters.hpp"


namespace SDK
{

// Function umg_playerInvContainerSlot.umg_playerInvContainerSlot_C.ExecuteUbergraph_umg_playerInvContainerSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_playerInvContainerSlot_C::ExecuteUbergraph_umg_playerInvContainerSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInvContainerSlot_C", "ExecuteUbergraph_umg_playerInvContainerSlot");

	Params::Umg_playerInvContainerSlot_C_ExecuteUbergraph_umg_playerInvContainerSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_playerInvContainerSlot.umg_playerInvContainerSlot_C.BndEvt__Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_playerInvContainerSlot_C::BndEvt__Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInvContainerSlot_C", "BndEvt__Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInvContainerSlot.umg_playerInvContainerSlot_C.BndEvt__umg_propInvSlor_Button_action_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_playerInvContainerSlot_C::BndEvt__umg_propInvSlor_Button_action_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInvContainerSlot_C", "BndEvt__umg_propInvSlor_Button_action_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInvContainerSlot.umg_playerInvContainerSlot_C.BndEvt__umg_propInvSlor_Button_action_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_playerInvContainerSlot_C::BndEvt__umg_propInvSlor_Button_action_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInvContainerSlot_C", "BndEvt__umg_propInvSlor_Button_action_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInvContainerSlot.umg_playerInvContainerSlot_C.Init
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ItemToFind                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// float                                   Weight_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Volume_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_playerInvContainerSlot_C::Init(const class FString& ItemToFind, float Weight_0, float Volume_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInvContainerSlot_C", "Init");

	Params::Umg_playerInvContainerSlot_C_Init Parms{};

	Parms.ItemToFind = std::move(ItemToFind);
	Parms.Weight_0 = Weight_0;
	Parms.Volume_0 = Volume_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_playerInvContainerSlot.umg_playerInvContainerSlot_C.setAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUmg_playerInvContainerSlot_C::SetAmount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInvContainerSlot_C", "setAmount");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_placeTp

#include "Basic.hpp"

#include "Umg_placeTp_classes.hpp"
#include "Umg_placeTp_parameters.hpp"


namespace SDK
{

// Function umg_placeTp.umg_placeTp_C.ExecuteUbergraph_umg_placeTp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_placeTp_C::ExecuteUbergraph_umg_placeTp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_placeTp_C", "ExecuteUbergraph_umg_placeTp");

	Params::Umg_placeTp_C_ExecuteUbergraph_umg_placeTp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_placeTp.umg_placeTp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUmg_placeTp_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_placeTp_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_placeTp.umg_placeTp_C.BndEvt__umg_placeTp_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_placeTp_C::BndEvt__umg_placeTp_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_placeTp_C", "BndEvt__umg_placeTp_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

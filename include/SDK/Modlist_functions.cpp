#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Modlist

#include "Basic.hpp"

#include "Modlist_classes.hpp"
#include "Modlist_parameters.hpp"


namespace SDK
{

// Function modlist.modlist_C.BndEvt__modlist_CloseMenu_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UModlist_C::BndEvt__modlist_CloseMenu_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("modlist_C", "BndEvt__modlist_CloseMenu_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function modlist.modlist_C.ExecuteUbergraph_modlist
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModlist_C::ExecuteUbergraph_modlist(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("modlist_C", "ExecuteUbergraph_modlist");

	Params::Modlist_C_ExecuteUbergraph_modlist Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

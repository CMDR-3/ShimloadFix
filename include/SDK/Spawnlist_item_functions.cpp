#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Spawnlist_item

#include "Basic.hpp"

#include "Spawnlist_item_classes.hpp"
#include "Spawnlist_item_parameters.hpp"


namespace SDK
{

// Function spawnlist_item.spawnlist_item_C.BndEvt__Button_43_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USpawnlist_item_C::BndEvt__Button_43_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("spawnlist_item_C", "BndEvt__Button_43_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function spawnlist_item.spawnlist_item_C.ExecuteUbergraph_spawnlist_item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpawnlist_item_C::ExecuteUbergraph_spawnlist_item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("spawnlist_item_C", "ExecuteUbergraph_spawnlist_item");

	Params::Spawnlist_item_C_ExecuteUbergraph_spawnlist_item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

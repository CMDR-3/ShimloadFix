#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Spawnlist

#include "Basic.hpp"

#include "Spawnlist_classes.hpp"
#include "Spawnlist_parameters.hpp"


namespace SDK
{

// Function spawnlist.spawnlist_C.AddSpawnButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USpawnlist_C::AddSpawnButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("spawnlist_C", "AddSpawnButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function spawnlist.spawnlist_C.BndEvt__spawnlist_DeleteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USpawnlist_C::BndEvt__spawnlist_DeleteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("spawnlist_C", "BndEvt__spawnlist_DeleteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function spawnlist.spawnlist_C.ExecuteUbergraph_spawnlist
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpawnlist_C::ExecuteUbergraph_spawnlist(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("spawnlist_C", "ExecuteUbergraph_spawnlist");

	Params::Spawnlist_C_ExecuteUbergraph_spawnlist Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

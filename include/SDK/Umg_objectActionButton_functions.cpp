#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_objectActionButton

#include "Basic.hpp"

#include "Umg_objectActionButton_classes.hpp"
#include "Umg_objectActionButton_parameters.hpp"


namespace SDK
{

// Function umg_objectActionButton.umg_objectActionButton_C.ExecuteUbergraph_umg_objectActionButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_objectActionButton_C::ExecuteUbergraph_umg_objectActionButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_objectActionButton_C", "ExecuteUbergraph_umg_objectActionButton");

	Params::Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_objectActionButton.umg_objectActionButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUmg_objectActionButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_objectActionButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_objectActionButton.umg_objectActionButton_C.upd
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_objectActionButton_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_objectActionButton_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_statsSlot

#include "Basic.hpp"

#include "Umg_statsSlot_classes.hpp"
#include "Umg_statsSlot_parameters.hpp"


namespace SDK
{

// Function umg_statsSlot.umg_statsSlot_C.ExecuteUbergraph_umg_statsSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_statsSlot_C::ExecuteUbergraph_umg_statsSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_statsSlot_C", "ExecuteUbergraph_umg_statsSlot");

	Params::Umg_statsSlot_C_ExecuteUbergraph_umg_statsSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_statsSlot.umg_statsSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUmg_statsSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_statsSlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_statsSlot.umg_statsSlot_C.upd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Stat_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_statsSlot_C::Upd(float Stat_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_statsSlot_C", "upd");

	Params::Umg_statsSlot_C_Upd Parms{};

	Parms.Stat_0 = Stat_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

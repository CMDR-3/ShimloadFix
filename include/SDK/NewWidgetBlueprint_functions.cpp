#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewWidgetBlueprint

#include "Basic.hpp"

#include "NewWidgetBlueprint_classes.hpp"
#include "NewWidgetBlueprint_parameters.hpp"


namespace SDK
{

// Function NewWidgetBlueprint.NewWidgetBlueprint_C.ExecuteUbergraph_NewWidgetBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewWidgetBlueprint_C::ExecuteUbergraph_NewWidgetBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewWidgetBlueprint_C", "ExecuteUbergraph_NewWidgetBlueprint");

	Params::NewWidgetBlueprint_C_ExecuteUbergraph_NewWidgetBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewWidgetBlueprint.NewWidgetBlueprint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewWidgetBlueprint_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewWidgetBlueprint_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

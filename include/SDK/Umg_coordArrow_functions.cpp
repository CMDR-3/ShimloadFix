#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_coordArrow

#include "Basic.hpp"

#include "Umg_coordArrow_classes.hpp"
#include "Umg_coordArrow_parameters.hpp"


namespace SDK
{

// Function umg_coordArrow.umg_coordArrow_C.ExecuteUbergraph_umg_coordArrow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_coordArrow_C::ExecuteUbergraph_umg_coordArrow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_coordArrow_C", "ExecuteUbergraph_umg_coordArrow");

	Params::Umg_coordArrow_C_ExecuteUbergraph_umg_coordArrow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_coordArrow.umg_coordArrow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUmg_coordArrow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_coordArrow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_coordArrow.umg_coordArrow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_coordArrow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_coordArrow_C", "Tick");

	Params::Umg_coordArrow_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}


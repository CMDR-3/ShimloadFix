#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_hovertextNametag

#include "Basic.hpp"

#include "Umg_hovertextNametag_classes.hpp"
#include "Umg_hovertextNametag_parameters.hpp"


namespace SDK
{

// Function umg_hovertextNametag.umg_hovertextNametag_C.ExecuteUbergraph_umg_hovertextNametag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_hovertextNametag_C::ExecuteUbergraph_umg_hovertextNametag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_hovertextNametag_C", "ExecuteUbergraph_umg_hovertextNametag");

	Params::Umg_hovertextNametag_C_ExecuteUbergraph_umg_hovertextNametag Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_hovertextNametag.umg_hovertextNametag_C.Update
// (BlueprintCallable, BlueprintEvent)

void UUmg_hovertextNametag_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_hovertextNametag_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_hovertextNametag.umg_hovertextNametag_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_hovertextNametag_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_hovertextNametag_C", "Tick");

	Params::Umg_hovertextNametag_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_hovertextNametag.umg_hovertextNametag_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUmg_hovertextNametag_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_hovertextNametag_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_hovertextNametag.umg_hovertextNametag_C.Loc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Origin                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_hovertextNametag_C::Loc(struct FVector* Origin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_hovertextNametag_C", "Loc");

	Params::Umg_hovertextNametag_C_Loc Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Origin != nullptr)
		*Origin = std::move(Parms.Origin);
}

}

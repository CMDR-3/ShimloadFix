#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_radDetec

#include "Basic.hpp"

#include "Prop_radDetec_classes.hpp"
#include "Prop_radDetec_parameters.hpp"


namespace SDK
{

// Function prop_radDetec.prop_radDetec_C.ExecuteUbergraph_prop_radDetec
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_radDetec_C::ExecuteUbergraph_prop_radDetec(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_radDetec_C", "ExecuteUbergraph_prop_radDetec");

	Params::Prop_radDetec_C_ExecuteUbergraph_prop_radDetec Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_radDetec.prop_radDetec_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_radDetec_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_radDetec_C", "ReceiveTick");

	Params::Prop_radDetec_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_radDetec.prop_radDetec_C.detected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Loc                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Dist                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Pow                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_radDetec_C::Detected(const struct FVector& Loc, float Dist, float Pow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_radDetec_C", "detected");

	Params::Prop_radDetec_C_Detected Parms{};

	Parms.Loc = std::move(Loc);
	Parms.Dist = Dist;
	Parms.Pow = Pow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_radDetec.prop_radDetec_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_radDetec_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_radDetec_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}


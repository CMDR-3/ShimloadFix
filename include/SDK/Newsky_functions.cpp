#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Newsky

#include "Basic.hpp"

#include "Newsky_classes.hpp"
#include "Newsky_parameters.hpp"


namespace SDK
{

// Function newsky.newsky_C.ExecuteUbergraph_newsky
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANewsky_C::ExecuteUbergraph_newsky(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("newsky_C", "ExecuteUbergraph_newsky");

	Params::Newsky_C_ExecuteUbergraph_newsky Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function newsky.newsky_C.setMoonPhase
// (BlueprintCallable, BlueprintEvent)

void ANewsky_C::SetMoonPhase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("newsky_C", "setMoonPhase");

	UObject::ProcessEvent(Func, nullptr);
}


// Function newsky.newsky_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANewsky_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("newsky_C", "ReceiveTick");

	Params::Newsky_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function newsky.newsky_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANewsky_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("newsky_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function newsky.newsky_C.tp
// (BlueprintCallable, BlueprintEvent)

void ANewsky_C::Tp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("newsky_C", "tp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function newsky.newsky_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANewsky_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("newsky_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function newsky.newsky_C.upd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANewsky_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("newsky_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function newsky.newsky_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void ANewsky_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("newsky_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function newsky.newsky_C.skyVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewHidden                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ANewsky_C::SkyVisibility(bool bNewHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("newsky_C", "skyVisibility");

	Params::Newsky_C_SkyVisibility Parms{};

	Parms.bNewHidden = bNewHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function newsky.newsky_C.setSunIntensity
// (Public, BlueprintCallable, BlueprintEvent)

void ANewsky_C::SetSunIntensity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("newsky_C", "setSunIntensity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function newsky.newsky_C.setEye
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Eye_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ANewsky_C::SetEye(bool Eye_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("newsky_C", "setEye");

	Params::Newsky_C_SetEye Parms{};

	Parms.Eye_0 = Eye_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

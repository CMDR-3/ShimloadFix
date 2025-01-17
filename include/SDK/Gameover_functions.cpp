#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Gameover

#include "Basic.hpp"

#include "Gameover_classes.hpp"
#include "Gameover_parameters.hpp"


namespace SDK
{

// Function gameover.gameover_C.ExecuteUbergraph_gameover
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameover_C::ExecuteUbergraph_gameover(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("gameover_C", "ExecuteUbergraph_gameover");

	Params::Gameover_C_ExecuteUbergraph_gameover Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function gameover.gameover_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGameover_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("gameover_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function gameover.gameover_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameover_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("gameover_C", "ReceiveTick");

	Params::Gameover_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function gameover.gameover_C.conv
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGameover_C::Conv()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("gameover_C", "conv");

	UObject::ProcessEvent(Func, nullptr);
}

}


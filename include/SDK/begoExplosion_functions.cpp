#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: begoExplosion

#include "Basic.hpp"

#include "begoExplosion_classes.hpp"
#include "begoExplosion_parameters.hpp"


namespace SDK
{

// Function begoExplosion.begoExplosion_C.ExecuteUbergraph_begoExplosion
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AbegoExplosion_C::ExecuteUbergraph_begoExplosion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("begoExplosion_C", "ExecuteUbergraph_begoExplosion");

	Params::begoExplosion_C_ExecuteUbergraph_begoExplosion Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function begoExplosion.begoExplosion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AbegoExplosion_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("begoExplosion_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

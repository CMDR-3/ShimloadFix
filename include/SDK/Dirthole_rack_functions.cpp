#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dirthole_rack

#include "Basic.hpp"

#include "Dirthole_rack_classes.hpp"
#include "Dirthole_rack_parameters.hpp"


namespace SDK
{

// Function dirthole_rack.dirthole_rack_C.ExecuteUbergraph_dirthole_rack
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADirthole_rack_C::ExecuteUbergraph_dirthole_rack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dirthole_rack_C", "ExecuteUbergraph_dirthole_rack");

	Params::Dirthole_rack_C_ExecuteUbergraph_dirthole_rack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function dirthole_rack.dirthole_rack_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADirthole_rack_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dirthole_rack_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

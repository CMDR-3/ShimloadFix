#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cig_boof

#include "Basic.hpp"

#include "Cig_boof_classes.hpp"
#include "Cig_boof_parameters.hpp"


namespace SDK
{

// Function cig_boof.cig_boof_C.ExecuteUbergraph_cig_boof
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACig_boof_C::ExecuteUbergraph_cig_boof(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("cig_boof_C", "ExecuteUbergraph_cig_boof");

	Params::Cig_boof_C_ExecuteUbergraph_cig_boof Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function cig_boof.cig_boof_C.dropped
// (Public, BlueprintCallable, BlueprintEvent)

void ACig_boof_C::Dropped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("cig_boof_C", "dropped");

	UObject::ProcessEvent(Func, nullptr);
}

}

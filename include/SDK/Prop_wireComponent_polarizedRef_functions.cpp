#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_polarizedRef

#include "Basic.hpp"

#include "Prop_wireComponent_polarizedRef_classes.hpp"
#include "Prop_wireComponent_polarizedRef_parameters.hpp"


namespace SDK
{

// Function prop_wireComponent_polarizedRef.prop_wireComponent_polarizedRef_C.ExecuteUbergraph_prop_wireComponent_polarizedRef
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wireComponent_polarizedRef_C::ExecuteUbergraph_prop_wireComponent_polarizedRef(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_polarizedRef_C", "ExecuteUbergraph_prop_wireComponent_polarizedRef");

	Params::Prop_wireComponent_polarizedRef_C_ExecuteUbergraph_prop_wireComponent_polarizedRef Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_polarizedRef.prop_wireComponent_polarizedRef_C.wirePass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWire_C*                          Wire_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wireComponent_polarizedRef_C::WirePass(class AWire_C* Wire_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_polarizedRef_C", "wirePass");

	Params::Prop_wireComponent_polarizedRef_C_WirePass Parms{};

	Parms.Wire_0 = Wire_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_binary

#include "Basic.hpp"

#include "Prop_wireComponent_binary_classes.hpp"
#include "Prop_wireComponent_binary_parameters.hpp"


namespace SDK
{

// Function prop_wireComponent_binary.prop_wireComponent_binary_C.ExecuteUbergraph_prop_wireComponent_binary
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wireComponent_binary_C::ExecuteUbergraph_prop_wireComponent_binary(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_binary_C", "ExecuteUbergraph_prop_wireComponent_binary");

	Params::Prop_wireComponent_binary_C_ExecuteUbergraph_prop_wireComponent_binary Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_binary.prop_wireComponent_binary_C.wirePass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWire_C*                          Wire_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wireComponent_binary_C::WirePass(class AWire_C* Wire_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_binary_C", "wirePass");

	Params::Prop_wireComponent_binary_C_WirePass Parms{};

	Parms.Wire_0 = Wire_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_binary.prop_wireComponent_binary_C.wireDisconnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWire_C*                          Wire_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Side                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_wireComponent_binary_C::WireDisconnected(class AWire_C* Wire_0, bool Side)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_binary_C", "wireDisconnected");

	Params::Prop_wireComponent_binary_C_WireDisconnected Parms{};

	Parms.Wire_0 = Wire_0;
	Parms.Side = Side;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_binary.prop_wireComponent_binary_C.wireConnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWire_C*                          Wire_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Side                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_wireComponent_binary_C::WireConnected(class AWire_C* Wire_0, bool Side)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_binary_C", "wireConnected");

	Params::Prop_wireComponent_binary_C_WireConnected Parms{};

	Parms.Wire_0 = Wire_0;
	Parms.Side = Side;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_binary.prop_wireComponent_binary_C.upd
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_wireComponent_binary_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_binary_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_wireComponent_binary.prop_wireComponent_binary_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_wireComponent_binary_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_binary_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}


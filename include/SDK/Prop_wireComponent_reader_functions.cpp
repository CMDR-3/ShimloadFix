#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_reader

#include "Basic.hpp"

#include "Prop_wireComponent_reader_classes.hpp"
#include "Prop_wireComponent_reader_parameters.hpp"


namespace SDK
{

// Function prop_wireComponent_reader.prop_wireComponent_reader_C.ExecuteUbergraph_prop_wireComponent_reader
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wireComponent_reader_C::ExecuteUbergraph_prop_wireComponent_reader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_reader_C", "ExecuteUbergraph_prop_wireComponent_reader");

	Params::Prop_wireComponent_reader_C_ExecuteUbergraph_prop_wireComponent_reader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_reader.prop_wireComponent_reader_C.wireDisconnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWire_C*                          Wire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Side                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_wireComponent_reader_C::WireDisconnected(class AWire_C* Wire, bool Side)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_reader_C", "wireDisconnected");

	Params::Prop_wireComponent_reader_C_WireDisconnected Parms{};

	Parms.Wire = Wire;
	Parms.Side = Side;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_reader.prop_wireComponent_reader_C.wireConnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWire_C*                          Wire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Side                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_wireComponent_reader_C::WireConnected(class AWire_C* Wire, bool Side)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_reader_C", "wireConnected");

	Params::Prop_wireComponent_reader_C_WireConnected Parms{};

	Parms.Wire = Wire;
	Parms.Side = Side;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_reader.prop_wireComponent_reader_C.wirePass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWire_C*                          Wire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wireComponent_reader_C::WirePass(class AWire_C* Wire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_reader_C", "wirePass");

	Params::Prop_wireComponent_reader_C_WirePass Parms{};

	Parms.Wire = Wire;

	UObject::ProcessEvent(Func, &Parms);
}

}


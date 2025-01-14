#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_argbl

#include "Basic.hpp"

#include "Prop_argbl_classes.hpp"
#include "Prop_argbl_parameters.hpp"


namespace SDK
{

// Function prop_argbl.prop_argbl_C.ExecuteUbergraph_prop_argbl
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_argbl_C::ExecuteUbergraph_prop_argbl(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_argbl_C", "ExecuteUbergraph_prop_argbl");

	Params::Prop_argbl_C_ExecuteUbergraph_prop_argbl Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_argbl.prop_argbl_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_argbl_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_argbl_C", "ReceiveTick");

	Params::Prop_argbl_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_argbl.prop_argbl_C.setmats
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_argbl_C::Setmats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_argbl_C", "setmats");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_argbl.prop_argbl_C.gamemodeBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_argbl_C::GamemodeBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_argbl_C", "gamemodeBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_argbl.prop_argbl_C.propRenderer_finishProps
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_argbl_C::PropRenderer_finishProps()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_argbl_C", "propRenderer_finishProps");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_argbl.prop_argbl_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_argbl_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_argbl_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_argbl.prop_argbl_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_argbl_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_argbl_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}

}


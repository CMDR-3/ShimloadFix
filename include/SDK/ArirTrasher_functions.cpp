#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArirTrasher

#include "Basic.hpp"

#include "ArirTrasher_classes.hpp"
#include "ArirTrasher_parameters.hpp"


namespace SDK
{

// Function arirTrasher.arirTrasher_C.ExecuteUbergraph_arirTrasher
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArirTrasher_C::ExecuteUbergraph_arirTrasher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("arirTrasher_C", "ExecuteUbergraph_arirTrasher");

	Params::ArirTrasher_C_ExecuteUbergraph_arirTrasher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function arirTrasher.arirTrasher_C.trash
// (BlueprintCallable, BlueprintEvent)

void AArirTrasher_C::Trash()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("arirTrasher_C", "trash");

	UObject::ProcessEvent(Func, nullptr);
}


// Function arirTrasher.arirTrasher_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AArirTrasher_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("arirTrasher_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dream_room

#include "Basic.hpp"

#include "Dream_room_classes.hpp"
#include "Dream_room_parameters.hpp"


namespace SDK
{

// Function dream_room.dream_room_C.ExecuteUbergraph_dream_room
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADream_room_C::ExecuteUbergraph_dream_room(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dream_room_C", "ExecuteUbergraph_dream_room");

	Params::Dream_room_C_ExecuteUbergraph_dream_room Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function dream_room.dream_room_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADream_room_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dream_room_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dream_room.dream_room_C.a__UpdateFunc
// (BlueprintEvent)

void ADream_room_C::A__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dream_room_C", "a__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dream_room.dream_room_C.a__FinishedFunc
// (BlueprintEvent)

void ADream_room_C::A__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dream_room_C", "a__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

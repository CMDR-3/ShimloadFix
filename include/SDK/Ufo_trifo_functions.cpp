#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ufo_trifo

#include "Basic.hpp"

#include "Ufo_trifo_classes.hpp"
#include "Ufo_trifo_parameters.hpp"


namespace SDK
{

// Function ufo_trifo.ufo_trifo_C.ExecuteUbergraph_ufo_trifo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUfo_trifo_C::ExecuteUbergraph_ufo_trifo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufo_trifo_C", "ExecuteUbergraph_ufo_trifo");

	Params::Ufo_trifo_C_ExecuteUbergraph_ufo_trifo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ufo_trifo.ufo_trifo_C.abduct
// (BlueprintCallable, BlueprintEvent)

void AUfo_trifo_C::Abduct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufo_trifo_C", "abduct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufo_trifo.ufo_trifo_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUfo_trifo_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufo_trifo_C", "ReceiveTick");

	Params::Ufo_trifo_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ufo_trifo.ufo_trifo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AUfo_trifo_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufo_trifo_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufo_trifo.ufo_trifo_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void AUfo_trifo_C::Timeline_2__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufo_trifo_C", "Timeline_2__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufo_trifo.ufo_trifo_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void AUfo_trifo_C::Timeline_2__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufo_trifo_C", "Timeline_2__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufo_trifo.ufo_trifo_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AUfo_trifo_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufo_trifo_C", "Timeline_1__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufo_trifo.ufo_trifo_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AUfo_trifo_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufo_trifo_C", "Timeline_1__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufo_trifo.ufo_trifo_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AUfo_trifo_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufo_trifo_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufo_trifo.ufo_trifo_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AUfo_trifo_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufo_trifo_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufo_trifo.ufo_trifo_C.flyTL__UpdateFunc
// (BlueprintEvent)

void AUfo_trifo_C::FlyTL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufo_trifo_C", "flyTL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufo_trifo.ufo_trifo_C.flyTL__FinishedFunc
// (BlueprintEvent)

void AUfo_trifo_C::FlyTL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufo_trifo_C", "flyTL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufo_trifo.ufo_trifo_C.brightness__UpdateFunc
// (BlueprintEvent)

void AUfo_trifo_C::brightness__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufo_trifo_C", "brightness__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufo_trifo.ufo_trifo_C.brightness__FinishedFunc
// (BlueprintEvent)

void AUfo_trifo_C::brightness__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufo_trifo_C", "brightness__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UfoDropper

#include "Basic.hpp"

#include "UfoDropper_classes.hpp"
#include "UfoDropper_parameters.hpp"


namespace SDK
{

// Function ufoDropper.ufoDropper_C.ExecuteUbergraph_ufoDropper
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUfoDropper_C::ExecuteUbergraph_ufoDropper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufoDropper_C", "ExecuteUbergraph_ufoDropper");

	Params::UfoDropper_C_ExecuteUbergraph_ufoDropper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ufoDropper.ufoDropper_C.killKerfur
// (BlueprintCallable, BlueprintEvent)

void AUfoDropper_C::KillKerfur()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufoDropper_C", "killKerfur");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufoDropper.ufoDropper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AUfoDropper_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufoDropper_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufoDropper.ufoDropper_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUfoDropper_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufoDropper_C", "ReceiveTick");

	Params::UfoDropper_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ufoDropper.ufoDropper_C.forceDeploy
// (BlueprintCallable, BlueprintEvent)

void AUfoDropper_C::ForceDeploy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufoDropper_C", "forceDeploy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufoDropper.ufoDropper_C.BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AUfoDropper_C::BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufoDropper_C", "BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::UfoDropper_C_BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ufoDropper.ufoDropper_C.Timeline_0__drop__EventFunc
// (BlueprintEvent)

void AUfoDropper_C::Timeline_0__drop__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufoDropper_C", "Timeline_0__drop__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufoDropper.ufoDropper_C.Timeline_0__turnoff__EventFunc
// (BlueprintEvent)

void AUfoDropper_C::Timeline_0__turnoff__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufoDropper_C", "Timeline_0__turnoff__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufoDropper.ufoDropper_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AUfoDropper_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufoDropper_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufoDropper.ufoDropper_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AUfoDropper_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufoDropper_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufoDropper.ufoDropper_C.activated
// (Public, BlueprintCallable, BlueprintEvent)

void AUfoDropper_C::Activated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufoDropper_C", "activated");

	UObject::ProcessEvent(Func, nullptr);
}

}


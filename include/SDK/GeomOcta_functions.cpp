#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeomOcta

#include "Basic.hpp"

#include "GeomOcta_classes.hpp"
#include "GeomOcta_parameters.hpp"


namespace SDK
{

// Function geomOcta.geomOcta_C.ExecuteUbergraph_geomOcta
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::ExecuteUbergraph_geomOcta(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "ExecuteUbergraph_geomOcta");

	Params::GeomOcta_C_ExecuteUbergraph_geomOcta Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.despawnAttempt
// (BlueprintCallable, BlueprintEvent)

void AGeomOcta_C::DespawnAttempt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "despawnAttempt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function geomOcta.geomOcta_C.BndEvt__geomOcta_propAggroSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AGeomOcta_C::BndEvt__geomOcta_propAggroSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "BndEvt__geomOcta_propAggroSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::GeomOcta_C_BndEvt__geomOcta_propAggroSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.Sound
// (BlueprintCallable, BlueprintEvent)

void AGeomOcta_C::Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "Sound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function geomOcta.geomOcta_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGeomOcta_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function geomOcta.geomOcta_C.move
// (BlueprintCallable, BlueprintEvent)

void AGeomOcta_C::Move()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "move");

	UObject::ProcessEvent(Func, nullptr);
}


// Function geomOcta.geomOcta_C.charge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGeomOcta_C::Charge(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "charge");

	Params::GeomOcta_C_Charge Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.rotateTo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGeomOcta_C::RotateTo(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "rotateTo");

	Params::GeomOcta_C_RotateTo Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "ReceiveTick");

	Params::GeomOcta_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.BndEvt__geomOcta_minSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AGeomOcta_C::BndEvt__geomOcta_minSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "BndEvt__geomOcta_minSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::GeomOcta_C_BndEvt__geomOcta_minSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.aggro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::Aggro(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "aggro");

	Params::GeomOcta_C_Aggro Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.fire
// (BlueprintCallable, BlueprintEvent)

void AGeomOcta_C::Fire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "fire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function geomOcta.geomOcta_C.OnSuccess_B50B45FF44BBE3579FA455929797BD91
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::OnSuccess_B50B45FF44BBE3579FA455929797BD91(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "OnSuccess_B50B45FF44BBE3579FA455929797BD91");

	Params::GeomOcta_C_OnSuccess_B50B45FF44BBE3579FA455929797BD91 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.OnFail_B50B45FF44BBE3579FA455929797BD91
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::OnFail_B50B45FF44BBE3579FA455929797BD91(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "OnFail_B50B45FF44BBE3579FA455929797BD91");

	Params::GeomOcta_C_OnFail_B50B45FF44BBE3579FA455929797BD91 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.OnCompleted_1DFC28904024A8FB71C3ACA9DBD440F9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::OnCompleted_1DFC28904024A8FB71C3ACA9DBD440F9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "OnCompleted_1DFC28904024A8FB71C3ACA9DBD440F9");

	Params::GeomOcta_C_OnCompleted_1DFC28904024A8FB71C3ACA9DBD440F9 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.OnBlendOut_1DFC28904024A8FB71C3ACA9DBD440F9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::OnBlendOut_1DFC28904024A8FB71C3ACA9DBD440F9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "OnBlendOut_1DFC28904024A8FB71C3ACA9DBD440F9");

	Params::GeomOcta_C_OnBlendOut_1DFC28904024A8FB71C3ACA9DBD440F9 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.OnInterrupted_1DFC28904024A8FB71C3ACA9DBD440F9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::OnInterrupted_1DFC28904024A8FB71C3ACA9DBD440F9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "OnInterrupted_1DFC28904024A8FB71C3ACA9DBD440F9");

	Params::GeomOcta_C_OnInterrupted_1DFC28904024A8FB71C3ACA9DBD440F9 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.OnNotifyBegin_1DFC28904024A8FB71C3ACA9DBD440F9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::OnNotifyBegin_1DFC28904024A8FB71C3ACA9DBD440F9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "OnNotifyBegin_1DFC28904024A8FB71C3ACA9DBD440F9");

	Params::GeomOcta_C_OnNotifyBegin_1DFC28904024A8FB71C3ACA9DBD440F9 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.OnNotifyEnd_1DFC28904024A8FB71C3ACA9DBD440F9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::OnNotifyEnd_1DFC28904024A8FB71C3ACA9DBD440F9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "OnNotifyEnd_1DFC28904024A8FB71C3ACA9DBD440F9");

	Params::GeomOcta_C_OnNotifyEnd_1DFC28904024A8FB71C3ACA9DBD440F9 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.OnCompleted_9B2108B443F09BA08A3C20ADBECCC562
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::OnCompleted_9B2108B443F09BA08A3C20ADBECCC562(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "OnCompleted_9B2108B443F09BA08A3C20ADBECCC562");

	Params::GeomOcta_C_OnCompleted_9B2108B443F09BA08A3C20ADBECCC562 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.OnBlendOut_9B2108B443F09BA08A3C20ADBECCC562
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::OnBlendOut_9B2108B443F09BA08A3C20ADBECCC562(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "OnBlendOut_9B2108B443F09BA08A3C20ADBECCC562");

	Params::GeomOcta_C_OnBlendOut_9B2108B443F09BA08A3C20ADBECCC562 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.OnInterrupted_9B2108B443F09BA08A3C20ADBECCC562
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::OnInterrupted_9B2108B443F09BA08A3C20ADBECCC562(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "OnInterrupted_9B2108B443F09BA08A3C20ADBECCC562");

	Params::GeomOcta_C_OnInterrupted_9B2108B443F09BA08A3C20ADBECCC562 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.OnNotifyBegin_9B2108B443F09BA08A3C20ADBECCC562
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::OnNotifyBegin_9B2108B443F09BA08A3C20ADBECCC562(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "OnNotifyBegin_9B2108B443F09BA08A3C20ADBECCC562");

	Params::GeomOcta_C_OnNotifyBegin_9B2108B443F09BA08A3C20ADBECCC562 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.OnNotifyEnd_9B2108B443F09BA08A3C20ADBECCC562
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::OnNotifyEnd_9B2108B443F09BA08A3C20ADBECCC562(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "OnNotifyEnd_9B2108B443F09BA08A3C20ADBECCC562");

	Params::GeomOcta_C_OnNotifyEnd_9B2108B443F09BA08A3C20ADBECCC562 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.OnCompleted_40CAEEF14EA3484C8E679EA6A1BD5F5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::OnCompleted_40CAEEF14EA3484C8E679EA6A1BD5F5D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "OnCompleted_40CAEEF14EA3484C8E679EA6A1BD5F5D");

	Params::GeomOcta_C_OnCompleted_40CAEEF14EA3484C8E679EA6A1BD5F5D Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.OnBlendOut_40CAEEF14EA3484C8E679EA6A1BD5F5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::OnBlendOut_40CAEEF14EA3484C8E679EA6A1BD5F5D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "OnBlendOut_40CAEEF14EA3484C8E679EA6A1BD5F5D");

	Params::GeomOcta_C_OnBlendOut_40CAEEF14EA3484C8E679EA6A1BD5F5D Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.OnInterrupted_40CAEEF14EA3484C8E679EA6A1BD5F5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::OnInterrupted_40CAEEF14EA3484C8E679EA6A1BD5F5D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "OnInterrupted_40CAEEF14EA3484C8E679EA6A1BD5F5D");

	Params::GeomOcta_C_OnInterrupted_40CAEEF14EA3484C8E679EA6A1BD5F5D Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.OnNotifyBegin_40CAEEF14EA3484C8E679EA6A1BD5F5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::OnNotifyBegin_40CAEEF14EA3484C8E679EA6A1BD5F5D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "OnNotifyBegin_40CAEEF14EA3484C8E679EA6A1BD5F5D");

	Params::GeomOcta_C_OnNotifyBegin_40CAEEF14EA3484C8E679EA6A1BD5F5D Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.OnNotifyEnd_40CAEEF14EA3484C8E679EA6A1BD5F5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeomOcta_C::OnNotifyEnd_40CAEEF14EA3484C8E679EA6A1BD5F5D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "OnNotifyEnd_40CAEEF14EA3484C8E679EA6A1BD5F5D");

	Params::GeomOcta_C_OnNotifyEnd_40CAEEF14EA3484C8E679EA6A1BD5F5D Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function geomOcta.geomOcta_C.chareTL__UpdateFunc
// (BlueprintEvent)

void AGeomOcta_C::ChareTL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "chareTL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function geomOcta.geomOcta_C.chareTL__FinishedFunc
// (BlueprintEvent)

void AGeomOcta_C::ChareTL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "chareTL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function geomOcta.geomOcta_C.timelineRot__UpdateFunc
// (BlueprintEvent)

void AGeomOcta_C::TimelineRot__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "timelineRot__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function geomOcta.geomOcta_C.timelineRot__FinishedFunc
// (BlueprintEvent)

void AGeomOcta_C::TimelineRot__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "timelineRot__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function geomOcta.geomOcta_C.rot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         OutputPin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGeomOcta_C::Rot(struct FRotator* OutputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("geomOcta_C", "rot");

	Params::GeomOcta_C_Rot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = std::move(Parms.OutputPin);
}

}


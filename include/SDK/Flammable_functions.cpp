#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Flammable

#include "Basic.hpp"

#include "Flammable_classes.hpp"
#include "Flammable_parameters.hpp"


namespace SDK
{

// Function flammable.flammable_C.extinguished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFlammable_C::Extinguished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("flammable_C", "extinguished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function flammable.flammable_C.ExecuteUbergraph_flammable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlammable_C::ExecuteUbergraph_flammable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("flammable_C", "ExecuteUbergraph_flammable");

	Params::Flammable_C_ExecuteUbergraph_flammable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function flammable.flammable_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlammable_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("flammable_C", "ReceiveTick");

	Params::Flammable_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function flammable.flammable_C.spreadFire
// (BlueprintCallable, BlueprintEvent)

void UFlammable_C::SpreadFire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("flammable_C", "spreadFire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function flammable.flammable_C.des
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlammable_C::Des(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("flammable_C", "des");

	Params::Flammable_C_Des Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function flammable.flammable_C.extinguish
// (BlueprintCallable, BlueprintEvent)

void UFlammable_C::Extinguish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("flammable_C", "extinguish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function flammable.flammable_C.ignite_s
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Fuel_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlammable_C::Ignite_s(float Fuel_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("flammable_C", "ignite_s");

	Params::Flammable_C_Ignite_s Parms{};

	Parms.Fuel_0 = Fuel_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function flammable.flammable_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UFlammable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("flammable_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function flammable.flammable_C.bound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*                  Component_0                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Origin                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          BoxExtent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlammable_C::bound(const class USceneComponent* Component_0, struct FVector* Origin, struct FVector* BoxExtent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("flammable_C", "bound");

	Params::Flammable_C_bound Parms{};

	Parms.Component_0 = Component_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Origin != nullptr)
		*Origin = std::move(Parms.Origin);

	if (BoxExtent != nullptr)
		*BoxExtent = std::move(Parms.BoxExtent);
}


// Function flammable.flammable_C.igniteSound
// (Public, BlueprintCallable, BlueprintEvent)

void UFlammable_C::IgniteSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("flammable_C", "igniteSound");

	UObject::ProcessEvent(Func, nullptr);
}

}

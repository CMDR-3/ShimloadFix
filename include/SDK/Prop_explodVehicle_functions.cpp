#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_explodVehicle

#include "Basic.hpp"

#include "Prop_explodVehicle_classes.hpp"
#include "Prop_explodVehicle_parameters.hpp"


namespace SDK
{

// Function prop_explodVehicle.prop_explodVehicle_C.ExecuteUbergraph_prop_explodVehicle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_explodVehicle_C::ExecuteUbergraph_prop_explodVehicle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_explodVehicle_C", "ExecuteUbergraph_prop_explodVehicle");

	Params::Prop_explodVehicle_C_ExecuteUbergraph_prop_explodVehicle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_explodVehicle.prop_explodVehicle_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelfMoved                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit_0                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProp_explodVehicle_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_explodVehicle_C", "ReceiveHit");

	Params::Prop_explodVehicle_C_ReceiveHit Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitNormal = std::move(HitNormal);
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit_0 = std::move(Hit_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_explodVehicle.prop_explodVehicle_C.impactDamageCPP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Impact                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_explodVehicle_C::ImpactDamageCPP(float Damage, const struct FHitResult& Hit_0, class AActor* Actor, const struct FVector& Impact)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_explodVehicle_C", "impactDamageCPP");

	Params::Prop_explodVehicle_C_ImpactDamageCPP Parms{};

	Parms.Damage = Damage;
	Parms.Hit_0 = std::move(Hit_0);
	Parms.Actor = Actor;
	Parms.Impact = std::move(Impact);

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_explodVehicle.prop_explodVehicle_C.setPropProps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Static_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Frozen_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_explodVehicle_C::SetPropProps(bool Static_0, bool Frozen_0, bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_explodVehicle_C", "setPropProps");

	Params::Prop_explodVehicle_C_SetPropProps Parms{};

	Parms.Static_0 = Static_0;
	Parms.Frozen_0 = Frozen_0;
	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_explodVehicle.prop_explodVehicle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_explodVehicle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_explodVehicle_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}


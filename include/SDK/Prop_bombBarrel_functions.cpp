#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_bombBarrel

#include "Basic.hpp"

#include "Prop_bombBarrel_classes.hpp"
#include "Prop_bombBarrel_parameters.hpp"


namespace SDK
{

// Function prop_bombBarrel.prop_bombBarrel_C.ExecuteUbergraph_prop_bombBarrel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_bombBarrel_C::ExecuteUbergraph_prop_bombBarrel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_bombBarrel_C", "ExecuteUbergraph_prop_bombBarrel");

	Params::Prop_bombBarrel_C_ExecuteUbergraph_prop_bombBarrel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_bombBarrel.prop_bombBarrel_C.BndEvt__prop_bombBarrel_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit_0                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProp_bombBarrel_C::BndEvt__prop_bombBarrel_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_bombBarrel_C", "BndEvt__prop_bombBarrel_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::Prop_bombBarrel_C_BndEvt__prop_bombBarrel_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit_0 = std::move(Hit_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_bombBarrel.prop_bombBarrel_C.addDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                          Impact_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipSetting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_bombBarrel_C::AddDamage(class AActor* Actor, float Damage, const struct FHitResult& Hit_0, const struct FVector& Impact_0, bool SkipSetting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_bombBarrel_C", "addDamage");

	Params::Prop_bombBarrel_C_AddDamage Parms{};

	Parms.Actor = Actor;
	Parms.Damage = Damage;
	Parms.Hit_0 = std::move(Hit_0);
	Parms.Impact_0 = std::move(Impact_0);
	Parms.SkipSetting = SkipSetting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_bombBarrel.prop_bombBarrel_C.fireDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_bombBarrel_C::FireDamage(float Damage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_bombBarrel_C", "fireDamage");

	Params::Prop_bombBarrel_C_FireDamage Parms{};

	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_bombBarrel.prop_bombBarrel_C.broken_fire
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_bombBarrel_C::broken_fire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_bombBarrel_C", "broken_fire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_bombBarrel.prop_bombBarrel_C.broken
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_bombBarrel_C::broken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_bombBarrel_C", "broken");

	UObject::ProcessEvent(Func, nullptr);
}

}

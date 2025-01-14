#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PropThrown

#include "Basic.hpp"

#include "PropThrown_classes.hpp"
#include "PropThrown_parameters.hpp"


namespace SDK
{

// Function propThrown.propThrown_C.ExecuteUbergraph_propThrown
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPropThrown_C::ExecuteUbergraph_propThrown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("propThrown_C", "ExecuteUbergraph_propThrown");

	Params::PropThrown_C_ExecuteUbergraph_propThrown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function propThrown.propThrown_C.hitted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UPropThrown_C::Hitted(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("propThrown_C", "hitted");

	Params::PropThrown_C_Hitted Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function propThrown.propThrown_C.fin
// (BlueprintCallable, BlueprintEvent)

void UPropThrown_C::Fin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("propThrown_C", "fin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function propThrown.propThrown_C.throw
// (BlueprintCallable, BlueprintEvent)

void UPropThrown_C::Throw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("propThrown_C", "throw");

	UObject::ProcessEvent(Func, nullptr);
}


// Function propThrown.propThrown_C.repeat
// (BlueprintCallable, BlueprintEvent)

void UPropThrown_C::Repeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("propThrown_C", "repeat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function propThrown.propThrown_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProp_C*                          Prop_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Component_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPropThrown_C::Init(class AProp_C* Prop_0, class UPrimitiveComponent* Component_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("propThrown_C", "Init");

	Params::PropThrown_C_Init Parms{};

	Parms.Prop_0 = Prop_0;
	Parms.Component_0 = Component_0;

	UObject::ProcessEvent(Func, &Parms);
}

}


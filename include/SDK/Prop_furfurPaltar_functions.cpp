#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_furfurPaltar

#include "Basic.hpp"

#include "Prop_furfurPaltar_classes.hpp"
#include "Prop_furfurPaltar_parameters.hpp"


namespace SDK
{

// Function prop_furfurPaltar.prop_furfurPAltar_C.ExecuteUbergraph_prop_furfurPAltar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_furfurPAltar_C::ExecuteUbergraph_prop_furfurPAltar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_furfurPAltar_C", "ExecuteUbergraph_prop_furfurPAltar");

	Params::Prop_furfurPAltar_C_ExecuteUbergraph_prop_furfurPAltar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_furfurPaltar.prop_furfurPAltar_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_furfurPAltar_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_furfurPAltar_C", "ReceiveTick");

	Params::Prop_furfurPAltar_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_furfurPaltar.prop_furfurPAltar_C.BndEvt__prop_furfurPAltar_2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProp_furfurPAltar_C::BndEvt__prop_furfurPAltar_2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_furfurPAltar_C", "BndEvt__prop_furfurPAltar_2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Prop_furfurPAltar_C_BndEvt__prop_furfurPAltar_2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_furfurPaltar.prop_furfurPAltar_C.BndEvt__prop_furfurPAltar_1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProp_furfurPAltar_C::BndEvt__prop_furfurPAltar_1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_furfurPAltar_C", "BndEvt__prop_furfurPAltar_1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Prop_furfurPAltar_C_BndEvt__prop_furfurPAltar_1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_furfurPaltar.prop_furfurPAltar_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_furfurPAltar_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_furfurPAltar_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_furfurPaltar.prop_furfurPAltar_C.gamemodeBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_furfurPAltar_C::GamemodeBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_furfurPAltar_C", "gamemodeBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_furfurPaltar.prop_furfurPAltar_C.loadData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_furfurPAltar_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_furfurPAltar_C", "loadData");

	Params::Prop_furfurPAltar_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function prop_furfurPaltar.prop_furfurPAltar_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AProp_furfurPAltar_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_furfurPAltar_C", "getData");

	Params::Prop_furfurPAltar_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}

}


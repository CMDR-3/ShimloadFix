#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Igetis

#include "Basic.hpp"

#include "Igetis_classes.hpp"
#include "Igetis_parameters.hpp"


namespace SDK
{

// Function igetis.igetis_C.ExecuteUbergraph_igetis
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIgetis_C::ExecuteUbergraph_igetis(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "ExecuteUbergraph_igetis");

	Params::Igetis_C_ExecuteUbergraph_igetis Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function igetis.igetis_C.beamPut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AIgetis_C::beamPut(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "beamPut");

	Params::Igetis_C_beamPut Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function igetis.igetis_C.beamOn2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AIgetis_C::beamOn2(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "beamOn2");

	Params::Igetis_C_beamOn2 Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function igetis.igetis_C.beamOn1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AIgetis_C::beamOn1(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "beamOn1");

	Params::Igetis_C_beamOn1 Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function igetis.igetis_C.put
// (BlueprintCallable, BlueprintEvent)

void AIgetis_C::Put()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "put");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.throw
// (BlueprintCallable, BlueprintEvent)

void AIgetis_C::Throw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "throw");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.magnetB
// (BlueprintCallable, BlueprintEvent)

void AIgetis_C::MagnetB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "magnetB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.checkVisible
// (BlueprintCallable, BlueprintEvent)

void AIgetis_C::CheckVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "checkVisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.magnetA
// (BlueprintCallable, BlueprintEvent)

void AIgetis_C::MagnetA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "magnetA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.BndEvt__igetis_Sphere1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AIgetis_C::BndEvt__igetis_Sphere1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "BndEvt__igetis_Sphere1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Igetis_C_BndEvt__igetis_Sphere1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function igetis.igetis_C.tryDestroyTimer
// (BlueprintCallable, BlueprintEvent)

void AIgetis_C::TryDestroyTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "tryDestroyTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.timerDestroy
// (BlueprintCallable, BlueprintEvent)

void AIgetis_C::TimerDestroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "timerDestroy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIgetis_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.BndEvt__igetis_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AIgetis_C::BndEvt__igetis_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "BndEvt__igetis_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Igetis_C_BndEvt__igetis_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function igetis.igetis_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIgetis_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "ReceiveTick");

	Params::Igetis_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function igetis.igetis_C.OnCompleted_1F02E3C54A95B9529AC8DE8ED5E6A6C9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIgetis_C::OnCompleted_1F02E3C54A95B9529AC8DE8ED5E6A6C9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "OnCompleted_1F02E3C54A95B9529AC8DE8ED5E6A6C9");

	Params::Igetis_C_OnCompleted_1F02E3C54A95B9529AC8DE8ED5E6A6C9 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function igetis.igetis_C.OnBlendOut_1F02E3C54A95B9529AC8DE8ED5E6A6C9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIgetis_C::OnBlendOut_1F02E3C54A95B9529AC8DE8ED5E6A6C9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "OnBlendOut_1F02E3C54A95B9529AC8DE8ED5E6A6C9");

	Params::Igetis_C_OnBlendOut_1F02E3C54A95B9529AC8DE8ED5E6A6C9 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function igetis.igetis_C.OnInterrupted_1F02E3C54A95B9529AC8DE8ED5E6A6C9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIgetis_C::OnInterrupted_1F02E3C54A95B9529AC8DE8ED5E6A6C9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "OnInterrupted_1F02E3C54A95B9529AC8DE8ED5E6A6C9");

	Params::Igetis_C_OnInterrupted_1F02E3C54A95B9529AC8DE8ED5E6A6C9 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function igetis.igetis_C.OnNotifyBegin_1F02E3C54A95B9529AC8DE8ED5E6A6C9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIgetis_C::OnNotifyBegin_1F02E3C54A95B9529AC8DE8ED5E6A6C9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "OnNotifyBegin_1F02E3C54A95B9529AC8DE8ED5E6A6C9");

	Params::Igetis_C_OnNotifyBegin_1F02E3C54A95B9529AC8DE8ED5E6A6C9 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function igetis.igetis_C.OnNotifyEnd_1F02E3C54A95B9529AC8DE8ED5E6A6C9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIgetis_C::OnNotifyEnd_1F02E3C54A95B9529AC8DE8ED5E6A6C9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "OnNotifyEnd_1F02E3C54A95B9529AC8DE8ED5E6A6C9");

	Params::Igetis_C_OnNotifyEnd_1F02E3C54A95B9529AC8DE8ED5E6A6C9 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function igetis.igetis_C.Timeline_4__UpdateFunc
// (BlueprintEvent)

void AIgetis_C::Timeline_4__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "Timeline_4__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.Timeline_4__FinishedFunc
// (BlueprintEvent)

void AIgetis_C::Timeline_4__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "Timeline_4__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.Timeline_3__UpdateFunc
// (BlueprintEvent)

void AIgetis_C::Timeline_3__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "Timeline_3__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.Timeline_3__FinishedFunc
// (BlueprintEvent)

void AIgetis_C::Timeline_3__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "Timeline_3__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void AIgetis_C::Timeline_2__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "Timeline_2__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void AIgetis_C::Timeline_2__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "Timeline_2__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AIgetis_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "Timeline_1__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AIgetis_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "Timeline_1__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AIgetis_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AIgetis_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.magna__UpdateFunc
// (BlueprintEvent)

void AIgetis_C::Magna__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "magna__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.magna__FinishedFunc
// (BlueprintEvent)

void AIgetis_C::Magna__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "magna__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function igetis.igetis_C.tryDelete
// (Public, BlueprintCallable, BlueprintEvent)

void AIgetis_C::TryDelete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("igetis_C", "tryDelete");

	UObject::ProcessEvent(Func, nullptr);
}

}

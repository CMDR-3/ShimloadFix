#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Deer

#include "Basic.hpp"

#include "Deer_classes.hpp"
#include "Deer_parameters.hpp"


namespace SDK
{

// Function deer.deer_C.ExecuteUbergraph_deer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADeer_C::ExecuteUbergraph_deer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("deer_C", "ExecuteUbergraph_deer");

	Params::Deer_C_ExecuteUbergraph_deer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function deer.deer_C.disappear
// (BlueprintCallable, BlueprintEvent)

void ADeer_C::Disappear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("deer_C", "disappear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function deer.deer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADeer_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("deer_C", "ReceiveTick");

	Params::Deer_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function deer.deer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADeer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("deer_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function deer.deer_C.OnCompleted_2B335E8D47F780E7A147A08168D3E410
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADeer_C::OnCompleted_2B335E8D47F780E7A147A08168D3E410(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("deer_C", "OnCompleted_2B335E8D47F780E7A147A08168D3E410");

	Params::Deer_C_OnCompleted_2B335E8D47F780E7A147A08168D3E410 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function deer.deer_C.OnBlendOut_2B335E8D47F780E7A147A08168D3E410
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADeer_C::OnBlendOut_2B335E8D47F780E7A147A08168D3E410(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("deer_C", "OnBlendOut_2B335E8D47F780E7A147A08168D3E410");

	Params::Deer_C_OnBlendOut_2B335E8D47F780E7A147A08168D3E410 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function deer.deer_C.OnInterrupted_2B335E8D47F780E7A147A08168D3E410
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADeer_C::OnInterrupted_2B335E8D47F780E7A147A08168D3E410(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("deer_C", "OnInterrupted_2B335E8D47F780E7A147A08168D3E410");

	Params::Deer_C_OnInterrupted_2B335E8D47F780E7A147A08168D3E410 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function deer.deer_C.OnNotifyBegin_2B335E8D47F780E7A147A08168D3E410
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADeer_C::OnNotifyBegin_2B335E8D47F780E7A147A08168D3E410(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("deer_C", "OnNotifyBegin_2B335E8D47F780E7A147A08168D3E410");

	Params::Deer_C_OnNotifyBegin_2B335E8D47F780E7A147A08168D3E410 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function deer.deer_C.OnNotifyEnd_2B335E8D47F780E7A147A08168D3E410
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADeer_C::OnNotifyEnd_2B335E8D47F780E7A147A08168D3E410(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("deer_C", "OnNotifyEnd_2B335E8D47F780E7A147A08168D3E410");

	Params::Deer_C_OnNotifyEnd_2B335E8D47F780E7A147A08168D3E410 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function deer.deer_C.OnSuccess_75A9BA0E4DB0CE711F734395D44D4C89
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADeer_C::OnSuccess_75A9BA0E4DB0CE711F734395D44D4C89(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("deer_C", "OnSuccess_75A9BA0E4DB0CE711F734395D44D4C89");

	Params::Deer_C_OnSuccess_75A9BA0E4DB0CE711F734395D44D4C89 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function deer.deer_C.OnFail_75A9BA0E4DB0CE711F734395D44D4C89
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADeer_C::OnFail_75A9BA0E4DB0CE711F734395D44D4C89(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("deer_C", "OnFail_75A9BA0E4DB0CE711F734395D44D4C89");

	Params::Deer_C_OnFail_75A9BA0E4DB0CE711F734395D44D4C89 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function deer.deer_C.d__UpdateFunc
// (BlueprintEvent)

void ADeer_C::D__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("deer_C", "d__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function deer.deer_C.d__FinishedFunc
// (BlueprintEvent)

void ADeer_C::D__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("deer_C", "d__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}


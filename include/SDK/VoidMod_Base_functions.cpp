#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VoidMod_Base

#include "Basic.hpp"

#include "VoidMod_Base_classes.hpp"
#include "VoidMod_Base_parameters.hpp"


namespace SDK
{

// Function VoidMod_Base.VoidMod_Base_C.IsModLoaded
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           Mod_Id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Loaded                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVoidMod_Base_C::IsModLoaded(const class FString& Mod_Id, class UObject* __WorldContext, bool* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VoidMod_Base_C", "IsModLoaded");

	Params::VoidMod_Base_C_IsModLoaded Parms{};

	Parms.Mod_Id = std::move(Mod_Id);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Loaded != nullptr)
		*Loaded = Parms.Loaded;
}


// Function VoidMod_Base.VoidMod_Base_C.GetPlayerStatsPure
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Food                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Sleep                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   battery                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Health                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Points                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CarFuel                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CarHealth                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoidMod_Base_C::GetPlayerStatsPure(class UObject* __WorldContext, float* Food, float* Sleep, float* battery, float* Health, int32* Points, float* CarFuel, float* CarHealth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VoidMod_Base_C", "GetPlayerStatsPure");

	Params::VoidMod_Base_C_GetPlayerStatsPure Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Food != nullptr)
		*Food = Parms.Food;

	if (Sleep != nullptr)
		*Sleep = Parms.Sleep;

	if (battery != nullptr)
		*battery = Parms.battery;

	if (Health != nullptr)
		*Health = Parms.Health;

	if (Points != nullptr)
		*Points = Parms.Points;

	if (CarFuel != nullptr)
		*CarFuel = Parms.CarFuel;

	if (CarHealth != nullptr)
		*CarHealth = Parms.CarHealth;
}


// Function VoidMod_Base.VoidMod_Base_C.GetRoomFromPositionPure
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBaseRoom                               Room                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoidMod_Base_C::GetRoomFromPositionPure(const struct FVector& Location, class UObject* __WorldContext, EBaseRoom* Room)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VoidMod_Base_C", "GetRoomFromPositionPure");

	Params::VoidMod_Base_C_GetRoomFromPositionPure Parms{};

	Parms.Location = std::move(Location);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Room != nullptr)
		*Room = Parms.Room;
}


// Function VoidMod_Base.VoidMod_Base_C.GetVoidmodInstancePure
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ThrowError                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVoidModInstance_C*               Instance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoidMod_Base_C::GetVoidmodInstancePure(bool ThrowError, class UObject* __WorldContext, class AVoidModInstance_C** Instance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VoidMod_Base_C", "GetVoidmodInstancePure");

	Params::VoidMod_Base_C_GetVoidmodInstancePure Parms{};

	Parms.ThrowError = ThrowError;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Instance != nullptr)
		*Instance = Parms.Instance;
}


// Function VoidMod_Base.VoidMod_Base_C.GetIngameTimePure
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Day                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Hour                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Minute                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoidMod_Base_C::GetIngameTimePure(class UObject* __WorldContext, int32* Day, int32* Hour, int32* Minute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VoidMod_Base_C", "GetIngameTimePure");

	Params::VoidMod_Base_C_GetIngameTimePure Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Day != nullptr)
		*Day = Parms.Day;

	if (Hour != nullptr)
		*Hour = Parms.Hour;

	if (Minute != nullptr)
		*Minute = Parms.Minute;
}


// Function VoidMod_Base.VoidMod_Base_C.GetCycleTimescale
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TimeScale                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoidMod_Base_C::GetCycleTimescale(class UObject* __WorldContext, float* TimeScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VoidMod_Base_C", "GetCycleTimescale");

	Params::VoidMod_Base_C_GetCycleTimescale Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (TimeScale != nullptr)
		*TimeScale = Parms.TimeScale;
}


// Function VoidMod_Base.VoidMod_Base_C.SetCycleTimescale
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TimeScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Output                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoidMod_Base_C::SetCycleTimescale(float TimeScale, class UObject* __WorldContext, float* Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VoidMod_Base_C", "SetCycleTimescale");

	Params::VoidMod_Base_C_SetCycleTimescale Parms{};

	Parms.TimeScale = TimeScale;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;
}


// Function VoidMod_Base.VoidMod_Base_C.GetRoomFromPosition
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBaseRoom                               Room                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoidMod_Base_C::GetRoomFromPosition(const struct FVector& Location, class UObject* __WorldContext, EBaseRoom* Room)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VoidMod_Base_C", "GetRoomFromPosition");

	Params::VoidMod_Base_C_GetRoomFromPosition Parms{};

	Parms.Location = std::move(Location);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Room != nullptr)
		*Room = Parms.Room;
}


// Function VoidMod_Base.VoidMod_Base_C.GetPlayerStats
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Food                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Sleep                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   battery                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Health                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Points                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CarFuel                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CarHealth                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoidMod_Base_C::GetPlayerStats(class UObject* __WorldContext, float* Food, float* Sleep, float* battery, float* Health, int32* Points, float* CarFuel, float* CarHealth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VoidMod_Base_C", "GetPlayerStats");

	Params::VoidMod_Base_C_GetPlayerStats Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Food != nullptr)
		*Food = Parms.Food;

	if (Sleep != nullptr)
		*Sleep = Parms.Sleep;

	if (battery != nullptr)
		*battery = Parms.battery;

	if (Health != nullptr)
		*Health = Parms.Health;

	if (Points != nullptr)
		*Points = Parms.Points;

	if (CarFuel != nullptr)
		*CarFuel = Parms.CarFuel;

	if (CarHealth != nullptr)
		*CarHealth = Parms.CarHealth;
}


// Function VoidMod_Base.VoidMod_Base_C.GetIngameTime
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Day                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Hour                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Minute                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoidMod_Base_C::GetIngameTime(class UObject* __WorldContext, int32* Day, int32* Hour, int32* Minute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VoidMod_Base_C", "GetIngameTime");

	Params::VoidMod_Base_C_GetIngameTime Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Day != nullptr)
		*Day = Parms.Day;

	if (Hour != nullptr)
		*Hour = Parms.Hour;

	if (Minute != nullptr)
		*Minute = Parms.Minute;
}


// Function VoidMod_Base.VoidMod_Base_C.VoidModVersion
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           NewParam                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UVoidMod_Base_C::VoidModVersion(class UObject* __WorldContext, class FString* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VoidMod_Base_C", "VoidModVersion");

	Params::VoidMod_Base_C_VoidModVersion Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function VoidMod_Base.VoidMod_Base_C.VoidModDebugEnabled?
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Enabled                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVoidMod_Base_C::VoidModDebugEnabled_(class UObject* __WorldContext, bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VoidMod_Base_C", "VoidModDebugEnabled?");

	Params::VoidMod_Base_C_VoidModDebugEnabled_ Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;
}


// Function VoidMod_Base.VoidMod_Base_C.GetModActor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ModID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVoidModActor_C*                  ModActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoidMod_Base_C::GetModActor(const class FString& ModID, class UObject* __WorldContext, class AVoidModActor_C** ModActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VoidMod_Base_C", "GetModActor");

	Params::VoidMod_Base_C_GetModActor Parms{};

	Parms.ModID = std::move(ModID);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ModActor != nullptr)
		*ModActor = Parms.ModActor;
}


// Function VoidMod_Base.VoidMod_Base_C.RegisterNewMod
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ModID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ModDescription                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                       ModIcon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVoidModActor_C*                  ModActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVoidMod_CustomActor>     CustomActors                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FVoidMod_CustomEvent>     CustomEvents                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoidMod_Base_C::RegisterNewMod(const class FString& ModID, const class FString& ModDescription, class UTexture2D* ModIcon, class AVoidModActor_C* ModActor, TArray<struct FVoidMod_CustomActor>& CustomActors, TArray<struct FVoidMod_CustomEvent>& CustomEvents, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VoidMod_Base_C", "RegisterNewMod");

	Params::VoidMod_Base_C_RegisterNewMod Parms{};

	Parms.ModID = std::move(ModID);
	Parms.ModDescription = std::move(ModDescription);
	Parms.ModIcon = ModIcon;
	Parms.ModActor = ModActor;
	Parms.CustomActors = std::move(CustomActors);
	Parms.CustomEvents = std::move(CustomEvents);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	CustomActors = std::move(Parms.CustomActors);
	CustomEvents = std::move(Parms.CustomEvents);
}


// Function VoidMod_Base.VoidMod_Base_C.GetVoidmodInstance
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ThrowError                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVoidModInstance_C*               Instance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoidMod_Base_C::GetVoidmodInstance(bool ThrowError, class UObject* __WorldContext, class AVoidModInstance_C** Instance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VoidMod_Base_C", "GetVoidmodInstance");

	Params::VoidMod_Base_C_GetVoidmodInstance Parms{};

	Parms.ThrowError = ThrowError;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Instance != nullptr)
		*Instance = Parms.Instance;
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VoidMod_Base

#include "Basic.hpp"

#include "BaseRoom_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass VoidMod_Base.VoidMod_Base_C
// 0x0000 (0x0028 - 0x0028)
class UVoidMod_Base_C final : public UBlueprintFunctionLibrary
{
public:
	static void IsModLoaded(const class FString& Mod_Id, class UObject* __WorldContext, bool* Loaded);
	static void GetPlayerStatsPure(class UObject* __WorldContext, float* Food, float* Sleep, float* battery, float* Health, int32* Points, float* CarFuel, float* CarHealth);
	static void GetRoomFromPositionPure(const struct FVector& Location, class UObject* __WorldContext, EBaseRoom* Room);
	static void GetVoidmodInstancePure(bool ThrowError, class UObject* __WorldContext, class AVoidModInstance_C** Instance);
	static void GetIngameTimePure(class UObject* __WorldContext, int32* Day, int32* Hour, int32* Minute);
	static void GetCycleTimescale(class UObject* __WorldContext, float* TimeScale);
	static void SetCycleTimescale(float TimeScale, class UObject* __WorldContext, float* Output);
	static void GetRoomFromPosition(const struct FVector& Location, class UObject* __WorldContext, EBaseRoom* Room);
	static void GetPlayerStats(class UObject* __WorldContext, float* Food, float* Sleep, float* battery, float* Health, int32* Points, float* CarFuel, float* CarHealth);
	static void GetIngameTime(class UObject* __WorldContext, int32* Day, int32* Hour, int32* Minute);
	static void VoidModVersion(class UObject* __WorldContext, class FString* NewParam);
	static void VoidModDebugEnabled_(class UObject* __WorldContext, bool* Enabled);
	static void GetModActor(const class FString& ModID, class UObject* __WorldContext, class AVoidModActor_C** ModActor);
	static void RegisterNewMod(const class FString& ModID, const class FString& ModDescription, class UTexture2D* ModIcon, class AVoidModActor_C* ModActor, TArray<struct FVoidMod_CustomActor>& CustomActors, TArray<struct FVoidMod_CustomEvent>& CustomEvents, class UObject* __WorldContext);
	static void GetVoidmodInstance(bool ThrowError, class UObject* __WorldContext, class AVoidModInstance_C** Instance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VoidMod_Base_C">();
	}
	static class UVoidMod_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoidMod_Base_C>();
	}
};
static_assert(alignof(UVoidMod_Base_C) == 0x000008, "Wrong alignment on UVoidMod_Base_C");
static_assert(sizeof(UVoidMod_Base_C) == 0x000028, "Wrong size on UVoidMod_Base_C");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food

#include "Basic.hpp"

#include "Struct_food_structs.hpp"
#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_food.prop_food_C
// 0x0058 (0x03B0 - 0x0358)
class AProp_food_C : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_food_C;                        // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        FliesSlow_Cue;                                     // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Eff_spoiled;                                       // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Eff_steam;                                         // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FStruct_food                           FoodData;                                          // 0x0378(0x001C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Antibreather;                                      // 0x0394(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_395[0x3];                                      // 0x0395(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temperature;                                       // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Celsius;                                           // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ripeness;                                          // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFrozen;                                          // 0x03A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A5[0x3];                                      // 0x03A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SpoilageRate;                                      // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TempLessThan0;                                     // 0x03AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IgnoreSpoiling;                                    // 0x03AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NotEdible;                                         // 0x03AE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IgnoreRotting;                                     // 0x03AF(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_food(int32 EntryPoint);
	void SettingsApplied(const struct FStruct_settings& Settings);
	void FireDamage(float Damage);
	void ReceiveTick(float DeltaSeconds);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void Used();
	void AccumulateTemperature(float Temperature_0, float Speed);
	void AddTemperature(float Temperature_0);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void Microwave();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void IsButtonUsed(bool* Failed);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);
	void GetData(struct FStruct_save* Data);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);
	void Init();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_food_C">();
	}
	static class AProp_food_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_food_C>();
	}
};
static_assert(alignof(AProp_food_C) == 0x000008, "Wrong alignment on AProp_food_C");
static_assert(sizeof(AProp_food_C) == 0x0003B0, "Wrong size on AProp_food_C");
static_assert(offsetof(AProp_food_C, UberGraphFrame_Prop_food_C) == 0x000358, "Member 'AProp_food_C::UberGraphFrame_Prop_food_C' has a wrong offset!");
static_assert(offsetof(AProp_food_C, FliesSlow_Cue) == 0x000360, "Member 'AProp_food_C::FliesSlow_Cue' has a wrong offset!");
static_assert(offsetof(AProp_food_C, Eff_spoiled) == 0x000368, "Member 'AProp_food_C::Eff_spoiled' has a wrong offset!");
static_assert(offsetof(AProp_food_C, Eff_steam) == 0x000370, "Member 'AProp_food_C::Eff_steam' has a wrong offset!");
static_assert(offsetof(AProp_food_C, FoodData) == 0x000378, "Member 'AProp_food_C::FoodData' has a wrong offset!");
static_assert(offsetof(AProp_food_C, Antibreather) == 0x000394, "Member 'AProp_food_C::Antibreather' has a wrong offset!");
static_assert(offsetof(AProp_food_C, Temperature) == 0x000398, "Member 'AProp_food_C::Temperature' has a wrong offset!");
static_assert(offsetof(AProp_food_C, Celsius) == 0x00039C, "Member 'AProp_food_C::Celsius' has a wrong offset!");
static_assert(offsetof(AProp_food_C, Ripeness) == 0x0003A0, "Member 'AProp_food_C::Ripeness' has a wrong offset!");
static_assert(offsetof(AProp_food_C, IsFrozen) == 0x0003A4, "Member 'AProp_food_C::IsFrozen' has a wrong offset!");
static_assert(offsetof(AProp_food_C, SpoilageRate) == 0x0003A8, "Member 'AProp_food_C::SpoilageRate' has a wrong offset!");
static_assert(offsetof(AProp_food_C, TempLessThan0) == 0x0003AC, "Member 'AProp_food_C::TempLessThan0' has a wrong offset!");
static_assert(offsetof(AProp_food_C, IgnoreSpoiling) == 0x0003AD, "Member 'AProp_food_C::IgnoreSpoiling' has a wrong offset!");
static_assert(offsetof(AProp_food_C, NotEdible) == 0x0003AE, "Member 'AProp_food_C::NotEdible' has a wrong offset!");
static_assert(offsetof(AProp_food_C, IgnoreRotting) == 0x0003AF, "Member 'AProp_food_C::IgnoreRotting' has a wrong offset!");

}

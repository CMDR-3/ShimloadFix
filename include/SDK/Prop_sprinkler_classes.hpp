#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_sprinkler

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_sprinkler.prop_sprinkler_C
// 0x0050 (0x03A8 - 0x0358)
class AProp_sprinkler_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_sprinkler_C;                   // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio;                                             // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       WateringRadius;                                    // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Eff_water;                                         // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Head;                                              // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_381[0x7];                                      // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGroundHose_C*                          Hose;                                              // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Spd;                                               // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_394[0x4];                                      // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Hose_key;                                          // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_sprinkler(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void Dowater();
	void ReceiveTick(float DeltaSeconds);
	void ConnectHose(class AGroundHose_C* Hose_0, bool* Return);
	void Upd();
	void ReceiveBeginPlay();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void ProcessKeys(bool* Return);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_sprinkler_C">();
	}
	static class AProp_sprinkler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_sprinkler_C>();
	}
};
static_assert(alignof(AProp_sprinkler_C) == 0x000008, "Wrong alignment on AProp_sprinkler_C");
static_assert(sizeof(AProp_sprinkler_C) == 0x0003A8, "Wrong size on AProp_sprinkler_C");
static_assert(offsetof(AProp_sprinkler_C, UberGraphFrame_Prop_sprinkler_C) == 0x000358, "Member 'AProp_sprinkler_C::UberGraphFrame_Prop_sprinkler_C' has a wrong offset!");
static_assert(offsetof(AProp_sprinkler_C, Audio) == 0x000360, "Member 'AProp_sprinkler_C::Audio' has a wrong offset!");
static_assert(offsetof(AProp_sprinkler_C, WateringRadius) == 0x000368, "Member 'AProp_sprinkler_C::WateringRadius' has a wrong offset!");
static_assert(offsetof(AProp_sprinkler_C, Eff_water) == 0x000370, "Member 'AProp_sprinkler_C::Eff_water' has a wrong offset!");
static_assert(offsetof(AProp_sprinkler_C, Head) == 0x000378, "Member 'AProp_sprinkler_C::Head' has a wrong offset!");
static_assert(offsetof(AProp_sprinkler_C, Active) == 0x000380, "Member 'AProp_sprinkler_C::Active' has a wrong offset!");
static_assert(offsetof(AProp_sprinkler_C, Hose) == 0x000388, "Member 'AProp_sprinkler_C::Hose' has a wrong offset!");
static_assert(offsetof(AProp_sprinkler_C, Spd) == 0x000390, "Member 'AProp_sprinkler_C::Spd' has a wrong offset!");
static_assert(offsetof(AProp_sprinkler_C, Hose_key) == 0x000398, "Member 'AProp_sprinkler_C::Hose_key' has a wrong offset!");

}

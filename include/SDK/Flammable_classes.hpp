#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Flammable

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass flammable.flammable_C
// 0x0088 (0x0138 - 0x00B0)
class UFlammable_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 Owner;                                             // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Component;                                         // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Particle;                                          // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBurning;                                         // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Fuel;                                              // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Static;                                            // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                b_orig;                                            // 0x00E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                b_ext;                                             // 0x00F4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FuelSpeed;                                         // 0x0100(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TimerSpread;                                       // 0x0108(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         FireSize;                                          // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         EffectRate;                                        // 0x0114(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Extinguished;                                      // 0x0118(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UParticleSystem*                        FireParticleEmitter;                               // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         IgniteChance;                                      // 0x0130(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Extinguished__DelegateSignature();
	void ExecuteUbergraph_flammable(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void SpreadFire();
	void Des(class AActor* DestroyedActor);
	void Extinguish();
	void Ignite_s(float Fuel_0);
	void ReceiveBeginPlay();
	void bound(const class USceneComponent* Component_0, struct FVector* Origin, struct FVector* BoxExtent);
	void IgniteSound();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"flammable_C">();
	}
	static class UFlammable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFlammable_C>();
	}
};
static_assert(alignof(UFlammable_C) == 0x000008, "Wrong alignment on UFlammable_C");
static_assert(sizeof(UFlammable_C) == 0x000138, "Wrong size on UFlammable_C");
static_assert(offsetof(UFlammable_C, UberGraphFrame) == 0x0000B0, "Member 'UFlammable_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFlammable_C, Owner) == 0x0000B8, "Member 'UFlammable_C::Owner' has a wrong offset!");
static_assert(offsetof(UFlammable_C, Component) == 0x0000C0, "Member 'UFlammable_C::Component' has a wrong offset!");
static_assert(offsetof(UFlammable_C, Audio) == 0x0000C8, "Member 'UFlammable_C::Audio' has a wrong offset!");
static_assert(offsetof(UFlammable_C, Particle) == 0x0000D0, "Member 'UFlammable_C::Particle' has a wrong offset!");
static_assert(offsetof(UFlammable_C, IsBurning) == 0x0000D8, "Member 'UFlammable_C::IsBurning' has a wrong offset!");
static_assert(offsetof(UFlammable_C, Fuel) == 0x0000DC, "Member 'UFlammable_C::Fuel' has a wrong offset!");
static_assert(offsetof(UFlammable_C, Static) == 0x0000E0, "Member 'UFlammable_C::Static' has a wrong offset!");
static_assert(offsetof(UFlammable_C, b_orig) == 0x0000E8, "Member 'UFlammable_C::b_orig' has a wrong offset!");
static_assert(offsetof(UFlammable_C, b_ext) == 0x0000F4, "Member 'UFlammable_C::b_ext' has a wrong offset!");
static_assert(offsetof(UFlammable_C, FuelSpeed) == 0x000100, "Member 'UFlammable_C::FuelSpeed' has a wrong offset!");
static_assert(offsetof(UFlammable_C, TimerSpread) == 0x000108, "Member 'UFlammable_C::TimerSpread' has a wrong offset!");
static_assert(offsetof(UFlammable_C, FireSize) == 0x000110, "Member 'UFlammable_C::FireSize' has a wrong offset!");
static_assert(offsetof(UFlammable_C, EffectRate) == 0x000114, "Member 'UFlammable_C::EffectRate' has a wrong offset!");
static_assert(offsetof(UFlammable_C, Extinguished) == 0x000118, "Member 'UFlammable_C::Extinguished' has a wrong offset!");
static_assert(offsetof(UFlammable_C, FireParticleEmitter) == 0x000128, "Member 'UFlammable_C::FireParticleEmitter' has a wrong offset!");
static_assert(offsetof(UFlammable_C, IgniteChance) == 0x000130, "Member 'UFlammable_C::IgniteChance' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Candle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Actor_save_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass candle.candle_C
// 0x0050 (0x02A0 - 0x0250)
class ACandle_C final : public AActor_save_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Candle_C;                           // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Flame;                                             // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Candle;                                            // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Type;                                              // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Attach_key;                                        // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                 Attach_object;                                     // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Time;                                              // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_candle(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void Dest(class AActor* DestroyedActor);
	void AssignEvent();
	void ReceiveBeginPlay();
	void PlayerR(class AMainPlayer_C* Player);
	void PlayerHold(class AMainPlayer_C* Player);
	void PlayerUnequip(class AMainPlayer_C* Player);
	void UpdateStrAgl();
	void DamageByPlayer(class AMainPlayer_C* Player, const struct FHitResult& Hit, float Damage);
	void Thrown(class AMainPlayer_C* Player);
	void broken_fire();
	void broken();
	void SendName(class FName Name_0);
	void Kicked(bool Kick);
	void Player_use(class AMainPlayer_C* Player, const struct FHitResult& Hit);
	void DriveDetached();
	void Init();
	void Attach(class AActor* Attach_object_0);
	void Upd();
	void LandedOn(class AMainPlayer_C* Player, bool* IgnoreFallDamage);
	void CanBePutInContainer(bool* Return);
	void AsProp(class AProp_C** Return);
	void CanPickup(bool* Return);
	void NoRespawn(bool NoRespawn_0, bool* Return);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);
	void IsButtonUsed(bool* Failed);
	void AttemptIgnite();
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit, Enum_interactionActions Action);
	void Ignite(float Fuel);
	void UserConstructionScript();
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void ProcessKeys(bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"candle_C">();
	}
	static class ACandle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACandle_C>();
	}
};
static_assert(alignof(ACandle_C) == 0x000008, "Wrong alignment on ACandle_C");
static_assert(sizeof(ACandle_C) == 0x0002A0, "Wrong size on ACandle_C");
static_assert(offsetof(ACandle_C, UberGraphFrame_Candle_C) == 0x000250, "Member 'ACandle_C::UberGraphFrame_Candle_C' has a wrong offset!");
static_assert(offsetof(ACandle_C, Sphere) == 0x000258, "Member 'ACandle_C::Sphere' has a wrong offset!");
static_assert(offsetof(ACandle_C, PointLight) == 0x000260, "Member 'ACandle_C::PointLight' has a wrong offset!");
static_assert(offsetof(ACandle_C, Flame) == 0x000268, "Member 'ACandle_C::Flame' has a wrong offset!");
static_assert(offsetof(ACandle_C, Candle) == 0x000270, "Member 'ACandle_C::Candle' has a wrong offset!");
static_assert(offsetof(ACandle_C, Type) == 0x000278, "Member 'ACandle_C::Type' has a wrong offset!");
static_assert(offsetof(ACandle_C, Attach_key) == 0x000280, "Member 'ACandle_C::Attach_key' has a wrong offset!");
static_assert(offsetof(ACandle_C, Attach_object) == 0x000290, "Member 'ACandle_C::Attach_object' has a wrong offset!");
static_assert(offsetof(ACandle_C, Time) == 0x000298, "Member 'ACandle_C::Time' has a wrong offset!");

}

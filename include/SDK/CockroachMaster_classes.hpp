#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CockroachMaster

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass cockroachMaster.cockroachMaster_C
// 0x00D0 (0x02F0 - 0x0220)
class ACockroachMaster_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234[0x4];                                      // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMeshComponent*>           Roaches;                                           // 0x0238(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UStaticMeshComponent*                   Current;                                           // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Loc;                                               // 0x0250(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Forward;                                           // 0x025C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Right;                                             // 0x0268(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Up;                                                // 0x0274(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxAmount;                                         // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Target;                                            // 0x0284(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Size;                                              // 0x0290(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29C[0x4];                                      // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      Props;                                             // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                SpawnBox;                                          // 0x02B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoEat;                                             // 0x02BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BD[0x3];                                      // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Escape;                                            // 0x02C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CC[0x4];                                      // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPhysicalMaterial*>              bannedMats;                                        // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         I;                                                 // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E4[0x4];                                      // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        GameMode;                                          // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_cockroachMaster(int32 EntryPoint);
	void ImpactSquishCPP(class UPrimitiveComponent* Component);
	void SummonRoach();
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit, Enum_interactionActions Action);
	void SettingsApplied(const struct FStruct_settings& Settings);
	void SteppedOn(class AMainPlayer_C* Player, const struct FHitResult& Hit);
	void AddDamage(class AActor* Actor, float Damage, const struct FHitResult& Hit, const struct FVector& Impact, bool SkipSetting);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void HookTension(class AHook_C* Hook);
	void CleanSponge(float Clean, class AMainPlayer_C* Player);
	void Crafted();
	void Hooked(class AHook_C* Hook);
	void AttemptIgnite();
	void PlayerUsedOn(class AMainPlayer_C* Player, const struct FHitResult& Hit);
	void Slice(bool Clean);
	void bitten();
	void ReachedByExplosion(const struct FVector& Location, float Damage);
	void PlayerLookAway(class AMainPlayer_C* Player);
	void Stepped(float Volume);
	void ActionName(class AMainPlayer_C* Player, const struct FHitResult& Hit, const class FString& Name_0);
	void AccumulateTemperature(float Temperature, float Speed);
	void AddTemperature(float Temperature);
	void MicrowaveElec();
	void PlayerHandAnyKey(class AMainPlayer_C* Player, const struct FKey& Key, bool Pressed);
	void PlayerHandMouse(class AMainPlayer_C* Player, const struct FVector2D& Mouse);
	void PlayerHandMouseWheel(class AMainPlayer_C* Player, float WheelDelta);
	void PlayerHandRelease_LMB(class AMainPlayer_C* Player);
	void PlayerHandRelease_RMB(class AMainPlayer_C* Player);
	void ExtinguishFire();
	void Exploded(float Damage, const struct FVector& Location);
	void PlayerHandUse_LMB(class AMainPlayer_C* Player);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void ReceivedPhyiscsDamage(float Damage, const struct FHitResult& Hot);
	void Microwave();
	void Ignite(float Fuel);
	void FireDamage(float Damage);
	void Unhook();
	void DigUp();
	void PhysPreDestroyed();
	void PhysDestroyed();
	void SetKey(const class FString& Key);
	void SetPropProps(bool Static, bool Frozen, bool Active);
	void Virus(bool Activate);
	void Eaten();
	void LeaveWaterOrigin(class AWaterVolume_C* Water);
	void EnterWaterOrigin(class AWaterVolume_C* Water);
	void LeaveWater(class AWaterVolume_C* Water);
	void EnterWater(class AWaterVolume_C* Water);
	void ImpactDamage(float Damage, const struct FHitResult& Hit, class AActor* Actor, const struct FVector& Impact);
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
	void GamemodePostKeys();
	void NewFunction_3();
	void NewFunction_2();
	void TexturePickerApply(class UUmg_texturePicker_C* Picker, class UTexture2D* Texture, int32 Index_0);
	void ApplyColor(const struct FLinearColor& Color);
	void PropRenderer_finishProps();
	void GamemodeMakeKeys();
	void AnyKey(const struct FKey& Key, bool Pressed);
	void GamemodePreLoad();
	void Unfocused();
	void Unfoc();
	void StuffUpgraded(class AMainGamemode_C* GameMode_0);
	void GamemodeBeginPlay();
	void SignalSaved();
	void SignalDeleted();
	void ImpactDamageCPP(float Damage, const struct FHitResult& Hit, class AActor* Actor, const struct FVector& Impact);
	void ExitTheWater();
	void EnteredTheWater();
	void AddRoach(const struct FVector& Location, const struct FVector& Size_0, bool bypassCheck);
	void Upd();
	void UpdCurrent();
	void DeleteRoach(int32 IndexToRemove, bool Crush);
	void Dedt(const struct FHitResult& Hit);
	void CheckRoof();
	void TryCrush(const struct FVector& Loc_0, class UPrimitiveComponent* Object);
	void FoodRoachSpawn();
	void Calc();
	void SetPath(const TArray<struct FVector>& Path, bool* Return);
	void GetOnlyKey(class FString* Key);
	void ProcessKeys(bool* Return);
	void CanBeUsedHold(bool* Return);
	void GetKey(class FString* Key);
	void ToolboxFix(class AProp_toolbox_C* Toolbox, bool* Return);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);
	void GascanFuel(class AProp_gascan_C* Gascan, bool* Fueled);
	void SkipRadial(bool* Skip);
	void GetPriceMultiplier(float* PriceMult);
	void CanBePutInContainer(bool* Return);
	void AsProp(class AProp_C** Return);
	void CanPickup(bool* Return);
	void NoRespawn(bool NoRespawn_0, bool* Return);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);
	void IsButtonUsed(bool* Failed);
	void LandedOn(class AMainPlayer_C* Player, bool* IgnoreFallDamage);
	void DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"cockroachMaster_C">();
	}
	static class ACockroachMaster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACockroachMaster_C>();
	}
};
static_assert(alignof(ACockroachMaster_C) == 0x000008, "Wrong alignment on ACockroachMaster_C");
static_assert(sizeof(ACockroachMaster_C) == 0x0002F0, "Wrong size on ACockroachMaster_C");
static_assert(offsetof(ACockroachMaster_C, UberGraphFrame) == 0x000220, "Member 'ACockroachMaster_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACockroachMaster_C, DefaultSceneRoot) == 0x000228, "Member 'ACockroachMaster_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ACockroachMaster_C, Count) == 0x000230, "Member 'ACockroachMaster_C::Count' has a wrong offset!");
static_assert(offsetof(ACockroachMaster_C, Roaches) == 0x000238, "Member 'ACockroachMaster_C::Roaches' has a wrong offset!");
static_assert(offsetof(ACockroachMaster_C, Current) == 0x000248, "Member 'ACockroachMaster_C::Current' has a wrong offset!");
static_assert(offsetof(ACockroachMaster_C, Loc) == 0x000250, "Member 'ACockroachMaster_C::Loc' has a wrong offset!");
static_assert(offsetof(ACockroachMaster_C, Forward) == 0x00025C, "Member 'ACockroachMaster_C::Forward' has a wrong offset!");
static_assert(offsetof(ACockroachMaster_C, Right) == 0x000268, "Member 'ACockroachMaster_C::Right' has a wrong offset!");
static_assert(offsetof(ACockroachMaster_C, Up) == 0x000274, "Member 'ACockroachMaster_C::Up' has a wrong offset!");
static_assert(offsetof(ACockroachMaster_C, MaxAmount) == 0x000280, "Member 'ACockroachMaster_C::MaxAmount' has a wrong offset!");
static_assert(offsetof(ACockroachMaster_C, Target) == 0x000284, "Member 'ACockroachMaster_C::Target' has a wrong offset!");
static_assert(offsetof(ACockroachMaster_C, Size) == 0x000290, "Member 'ACockroachMaster_C::Size' has a wrong offset!");
static_assert(offsetof(ACockroachMaster_C, Props) == 0x0002A0, "Member 'ACockroachMaster_C::Props' has a wrong offset!");
static_assert(offsetof(ACockroachMaster_C, SpawnBox) == 0x0002B0, "Member 'ACockroachMaster_C::SpawnBox' has a wrong offset!");
static_assert(offsetof(ACockroachMaster_C, DoEat) == 0x0002BC, "Member 'ACockroachMaster_C::DoEat' has a wrong offset!");
static_assert(offsetof(ACockroachMaster_C, Escape) == 0x0002C0, "Member 'ACockroachMaster_C::Escape' has a wrong offset!");
static_assert(offsetof(ACockroachMaster_C, bannedMats) == 0x0002D0, "Member 'ACockroachMaster_C::bannedMats' has a wrong offset!");
static_assert(offsetof(ACockroachMaster_C, I) == 0x0002E0, "Member 'ACockroachMaster_C::I' has a wrong offset!");
static_assert(offsetof(ACockroachMaster_C, GameMode) == 0x0002E8, "Member 'ACockroachMaster_C::GameMode' has a wrong offset!");

}

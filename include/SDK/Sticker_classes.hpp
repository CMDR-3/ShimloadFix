#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Sticker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Actor_save_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass sticker.sticker_C
// 0x0048 (0x0298 - 0x0250)
class ASticker_C final : public AActor_save_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Sticker_C;                          // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Plane;                                             // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Coll;                                              // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Name_0;                                            // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 AttachTo;                                          // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                 Actor;                                             // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_sticker(int32 EntryPoint);
	void D(class AActor* DestroyedActor);
	void AssignDest();
	void ReceiveBeginPlay();
	void GamemodeBeginPlay();
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit, Enum_interactionActions Action);
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
	void AnyKey(const struct FKey& Key_0, bool Pressed);
	void GamemodePreLoad();
	void Unfocused();
	void SettingsApplied(const struct FStruct_settings& Settings);
	void Unfoc();
	void StuffUpgraded(class AMainGamemode_C* GameMode_0);
	void SignalSaved();
	void SignalDeleted();
	void UserConstructionScript();
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor_0, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);
	void SetPoster();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void ProcessKeys(bool* Return);
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
		return StaticBPGeneratedClassImpl<"sticker_C">();
	}
	static class ASticker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASticker_C>();
	}
};
static_assert(alignof(ASticker_C) == 0x000008, "Wrong alignment on ASticker_C");
static_assert(sizeof(ASticker_C) == 0x000298, "Wrong size on ASticker_C");
static_assert(offsetof(ASticker_C, UberGraphFrame_Sticker_C) == 0x000250, "Member 'ASticker_C::UberGraphFrame_Sticker_C' has a wrong offset!");
static_assert(offsetof(ASticker_C, Plane) == 0x000258, "Member 'ASticker_C::Plane' has a wrong offset!");
static_assert(offsetof(ASticker_C, Coll) == 0x000260, "Member 'ASticker_C::Coll' has a wrong offset!");
static_assert(offsetof(ASticker_C, Dynmat) == 0x000268, "Member 'ASticker_C::Dynmat' has a wrong offset!");
static_assert(offsetof(ASticker_C, Name_0) == 0x000270, "Member 'ASticker_C::Name_0' has a wrong offset!");
static_assert(offsetof(ASticker_C, AttachTo) == 0x000280, "Member 'ASticker_C::AttachTo' has a wrong offset!");
static_assert(offsetof(ASticker_C, Actor) == 0x000290, "Member 'ASticker_C::Actor' has a wrong offset!");

}

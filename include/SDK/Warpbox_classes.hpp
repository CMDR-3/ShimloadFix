#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Warpbox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Actor_save_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass warpbox.warpbox_C
// 0x0108 (0x0358 - 0x0250)
class AWarpbox_C final : public AActor_save_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Warpbox_C;                          // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Coll_block;                                        // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Coll1;                                             // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Warpbox_open;                                      // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Warpbox_impact;                                    // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Warpbox_tile;                                      // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                    RectLight;                                         // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Tilebox;                                           // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Four32_tiles_tile_009;                             // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Four32_tiles_tile_008;                             // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Four32_tiles_tile_007;                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Four32_tiles_tile_006;                             // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Four32_tiles_tile_005;                             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Four32_tiles_tile_004;                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Four32_tiles_tile_003;                             // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Four32_tiles_tile_002;                             // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Four32_tiles_tile_001;                             // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Portal;                                            // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Coll;                                              // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Four32low;                                         // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APortal_C*                              Portal_obj;                                        // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWarpbox_C*                             Out;                                               // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                  Tiles;                                             // 0x0308(0x0010)(Edit, BlueprintVisible)
	TArray<class UStaticMeshComponent*>           Tiles_mesh;                                        // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          Opened;                                            // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Anim;                                              // 0x0329(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Render;                                            // 0x032A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RenderPortal;                                      // 0x032B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32C[0x4];                                      // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Name_0;                                            // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 NameTo;                                            // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class APortal_phys_C*                         PhysPortal;                                        // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base);
	void LandedOn(class AMainPlayer_C* Player, bool* IgnoreFallDamage);
	void CanBePutInContainer(bool* Return);
	void IsButtonUsed(bool* Failed);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);
	void NoRespawn(bool NoRespawn_0, bool* Return);
	void CanPickup(bool* Return);
	void AsProp(class AProp_C** Return);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);
	void Form();
	void GetData(struct FStruct_save* Data);
	void PlaySound(class USoundBase* NewSound);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void Upd();
	void GetPortal(class APortal_C** Portal_obj_0);
	void UserConstructionScript();
	void OnNotifyEnd_7D39BA3C4D76CB4B48378FA14DE88C03(class FName NotifyName);
	void OnNotifyBegin_7D39BA3C4D76CB4B48378FA14DE88C03(class FName NotifyName);
	void OnInterrupted_7D39BA3C4D76CB4B48378FA14DE88C03(class FName NotifyName);
	void OnBlendOut_7D39BA3C4D76CB4B48378FA14DE88C03(class FName NotifyName);
	void OnCompleted_7D39BA3C4D76CB4B48378FA14DE88C03(class FName NotifyName);
	void SignalDeleted();
	void SignalSaved();
	void StuffUpgraded(class AMainGamemode_C* GameMode_0);
	void Unfoc();
	void Unfocused();
	void GamemodePreLoad();
	void AnyKey(const struct FKey& Key_0, bool Pressed);
	void GamemodeMakeKeys();
	void PropRenderer_finishProps();
	void ApplyColor(const struct FLinearColor& Color);
	void TexturePickerApply(class UUmg_texturePicker_C* Picker, class UTexture2D* Texture, int32 Index_0);
	void NewFunction_2();
	void NewFunction_3();
	void GamemodePostKeys();
	void DriveDetached();
	void Player_use(class AMainPlayer_C* Player, const struct FHitResult& Hit);
	void Kicked(bool Kick);
	void SendName(class FName Name_0);
	void broken();
	void broken_fire();
	void Thrown(class AMainPlayer_C* Player);
	void DamageByPlayer(class AMainPlayer_C* Player, const struct FHitResult& Hit, float Damage);
	void UpdateStrAgl();
	void PlayerUnequip(class AMainPlayer_C* Player);
	void PlayerHold(class AMainPlayer_C* Player);
	void PlayerR(class AMainPlayer_C* Player);
	void ReceiveBeginPlay();
	void Open(bool Opened_0);
	void BndEvt__tilebox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void GamemodeBeginPlay();
	void SettingsApplied(const struct FStruct_settings& Settings);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit, Enum_interactionActions Action);
	void ExecuteUbergraph_warpbox(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"warpbox_C">();
	}
	static class AWarpbox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWarpbox_C>();
	}
};
static_assert(alignof(AWarpbox_C) == 0x000008, "Wrong alignment on AWarpbox_C");
static_assert(sizeof(AWarpbox_C) == 0x000358, "Wrong size on AWarpbox_C");
static_assert(offsetof(AWarpbox_C, UberGraphFrame_Warpbox_C) == 0x000250, "Member 'AWarpbox_C::UberGraphFrame_Warpbox_C' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Coll_block) == 0x000258, "Member 'AWarpbox_C::Coll_block' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Coll1) == 0x000260, "Member 'AWarpbox_C::Coll1' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Warpbox_open) == 0x000268, "Member 'AWarpbox_C::Warpbox_open' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Warpbox_impact) == 0x000270, "Member 'AWarpbox_C::Warpbox_impact' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Warpbox_tile) == 0x000278, "Member 'AWarpbox_C::Warpbox_tile' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, RectLight) == 0x000280, "Member 'AWarpbox_C::RectLight' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Tilebox) == 0x000288, "Member 'AWarpbox_C::Tilebox' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Four32_tiles_tile_009) == 0x000290, "Member 'AWarpbox_C::Four32_tiles_tile_009' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Four32_tiles_tile_008) == 0x000298, "Member 'AWarpbox_C::Four32_tiles_tile_008' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Four32_tiles_tile_007) == 0x0002A0, "Member 'AWarpbox_C::Four32_tiles_tile_007' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Four32_tiles_tile_006) == 0x0002A8, "Member 'AWarpbox_C::Four32_tiles_tile_006' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Four32_tiles_tile_005) == 0x0002B0, "Member 'AWarpbox_C::Four32_tiles_tile_005' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Four32_tiles_tile_004) == 0x0002B8, "Member 'AWarpbox_C::Four32_tiles_tile_004' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Four32_tiles_tile_003) == 0x0002C0, "Member 'AWarpbox_C::Four32_tiles_tile_003' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Four32_tiles_tile_002) == 0x0002C8, "Member 'AWarpbox_C::Four32_tiles_tile_002' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Four32_tiles_tile_001) == 0x0002D0, "Member 'AWarpbox_C::Four32_tiles_tile_001' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Billboard) == 0x0002D8, "Member 'AWarpbox_C::Billboard' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Portal) == 0x0002E0, "Member 'AWarpbox_C::Portal' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Coll) == 0x0002E8, "Member 'AWarpbox_C::Coll' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Four32low) == 0x0002F0, "Member 'AWarpbox_C::Four32low' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Portal_obj) == 0x0002F8, "Member 'AWarpbox_C::Portal_obj' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Out) == 0x000300, "Member 'AWarpbox_C::Out' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Tiles) == 0x000308, "Member 'AWarpbox_C::Tiles' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Tiles_mesh) == 0x000318, "Member 'AWarpbox_C::Tiles_mesh' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Opened) == 0x000328, "Member 'AWarpbox_C::Opened' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Anim) == 0x000329, "Member 'AWarpbox_C::Anim' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Render) == 0x00032A, "Member 'AWarpbox_C::Render' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, RenderPortal) == 0x00032B, "Member 'AWarpbox_C::RenderPortal' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, Name_0) == 0x000330, "Member 'AWarpbox_C::Name_0' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, NameTo) == 0x000340, "Member 'AWarpbox_C::NameTo' has a wrong offset!");
static_assert(offsetof(AWarpbox_C, PhysPortal) == 0x000350, "Member 'AWarpbox_C::PhysPortal' has a wrong offset!");

}


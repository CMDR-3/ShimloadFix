#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_funGun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_funGun.prop_funGun_C
// 0x00E8 (0x0440 - 0x0358)
class AProp_funGun_C : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_funGun_C;                      // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Muzzle;                                            // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   Text_magazine;                                     // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        AmmoDrop;                                          // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Reload_primary;                                    // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Reload_secondary;                                  // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      D;                                                 // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         ReloadTime_primary;                                // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReloadTime_secondary;                              // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         bulletReload;                                      // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Damage;                                            // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         bulletForce;                                       // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4[0x4];                                      // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             FireSound_p;                                       // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         bulletSpread;                                      // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         bulletAmount;                                      // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Auto;                                              // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Hold;                                              // 0x03B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BA[0x6];                                      // 0x03BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          Player;                                            // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpreadPower;                                       // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxMagazine;                                       // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Ammo;                                              // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxMagazine_secondary;                             // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReloadBullets;                                     // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D9[0x7];                                      // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             ReloadSound_p;                                     // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Ammo_secondary;                                    // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAlt;                                             // 0x03EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UseAlt;                                            // 0x03ED(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EE[0x2];                                      // 0x03EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        MuzzleFlash;                                       // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UCameraShakeBase>           FireShake_primary;                                 // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         ShakePower_primary;                                // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_404[0x4];                                      // 0x0404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             FireSound_s;                                       // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UCameraShakeBase>           FireShake_secondary;                               // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         ShakePower_secondary;                              // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgnoteTickCheck;                                   // 0x041C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41D[0x3];                                      // 0x041D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Knockback;                                         // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_424[0x4];                                      // 0x0424(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             Character;                                         // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 AmmoObject;                                        // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Mags;                                              // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Ind;                                               // 0x043C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_funGun(int32 EntryPoint);
	void FireCharacter(class ACharacter* Character_0);
	void FireSecondary();
	void DropCase();
	void FirePrimary();
	void ReceiveTick(float DeltaSeconds);
	void UpdateMag();
	void FireBulletPrimary();
	void FireBulletSecondary();
	void CheckActorTick();
	void GetView(struct FVector* OutLocation, struct FRotator* OutRotation);
	void FindMag(bool CheckOnly, bool* Return);
	void Reloaded();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void PlayerHandUse_RMB(class AMainPlayer_C* Player_0);
	void PlayerHandRelease_LMB(class AMainPlayer_C* Player_0);
	void PlayerHandUse_LMB(class AMainPlayer_C* Player_0);
	void UserConstructionScript();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_funGun_C">();
	}
	static class AProp_funGun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_funGun_C>();
	}
};
static_assert(alignof(AProp_funGun_C) == 0x000008, "Wrong alignment on AProp_funGun_C");
static_assert(sizeof(AProp_funGun_C) == 0x000440, "Wrong size on AProp_funGun_C");
static_assert(offsetof(AProp_funGun_C, UberGraphFrame_Prop_funGun_C) == 0x000358, "Member 'AProp_funGun_C::UberGraphFrame_Prop_funGun_C' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, Muzzle) == 0x000360, "Member 'AProp_funGun_C::Muzzle' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, Text_magazine) == 0x000368, "Member 'AProp_funGun_C::Text_magazine' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, AmmoDrop) == 0x000370, "Member 'AProp_funGun_C::AmmoDrop' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, Reload_primary) == 0x000378, "Member 'AProp_funGun_C::Reload_primary' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, Reload_secondary) == 0x00037C, "Member 'AProp_funGun_C::Reload_secondary' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, D) == 0x000380, "Member 'AProp_funGun_C::D' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, ReloadTime_primary) == 0x000390, "Member 'AProp_funGun_C::ReloadTime_primary' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, ReloadTime_secondary) == 0x000394, "Member 'AProp_funGun_C::ReloadTime_secondary' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, bulletReload) == 0x000398, "Member 'AProp_funGun_C::bulletReload' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, Damage) == 0x00039C, "Member 'AProp_funGun_C::Damage' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, bulletForce) == 0x0003A0, "Member 'AProp_funGun_C::bulletForce' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, FireSound_p) == 0x0003A8, "Member 'AProp_funGun_C::FireSound_p' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, bulletSpread) == 0x0003B0, "Member 'AProp_funGun_C::bulletSpread' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, bulletAmount) == 0x0003B4, "Member 'AProp_funGun_C::bulletAmount' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, Auto) == 0x0003B8, "Member 'AProp_funGun_C::Auto' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, Hold) == 0x0003B9, "Member 'AProp_funGun_C::Hold' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, Player) == 0x0003C0, "Member 'AProp_funGun_C::Player' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, SpreadPower) == 0x0003C8, "Member 'AProp_funGun_C::SpreadPower' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, MaxMagazine) == 0x0003CC, "Member 'AProp_funGun_C::MaxMagazine' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, Ammo) == 0x0003D0, "Member 'AProp_funGun_C::Ammo' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, MaxMagazine_secondary) == 0x0003D4, "Member 'AProp_funGun_C::MaxMagazine_secondary' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, ReloadBullets) == 0x0003D8, "Member 'AProp_funGun_C::ReloadBullets' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, ReloadSound_p) == 0x0003E0, "Member 'AProp_funGun_C::ReloadSound_p' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, Ammo_secondary) == 0x0003E8, "Member 'AProp_funGun_C::Ammo_secondary' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, IsAlt) == 0x0003EC, "Member 'AProp_funGun_C::IsAlt' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, UseAlt) == 0x0003ED, "Member 'AProp_funGun_C::UseAlt' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, MuzzleFlash) == 0x0003F0, "Member 'AProp_funGun_C::MuzzleFlash' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, FireShake_primary) == 0x0003F8, "Member 'AProp_funGun_C::FireShake_primary' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, ShakePower_primary) == 0x000400, "Member 'AProp_funGun_C::ShakePower_primary' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, FireSound_s) == 0x000408, "Member 'AProp_funGun_C::FireSound_s' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, FireShake_secondary) == 0x000410, "Member 'AProp_funGun_C::FireShake_secondary' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, ShakePower_secondary) == 0x000418, "Member 'AProp_funGun_C::ShakePower_secondary' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, IgnoteTickCheck) == 0x00041C, "Member 'AProp_funGun_C::IgnoteTickCheck' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, Knockback) == 0x000420, "Member 'AProp_funGun_C::Knockback' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, Character) == 0x000428, "Member 'AProp_funGun_C::Character' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, AmmoObject) == 0x000430, "Member 'AProp_funGun_C::AmmoObject' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, Mags) == 0x000438, "Member 'AProp_funGun_C::Mags' has a wrong offset!");
static_assert(offsetof(AProp_funGun_C, Ind) == 0x00043C, "Member 'AProp_funGun_C::Ind' has a wrong offset!");

}

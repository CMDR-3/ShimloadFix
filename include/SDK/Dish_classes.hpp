#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dish

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass dish.dish_C
// 0x01A8 (0x03C8 - 0x0220)
class ADish_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                   Nme;                                               // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ConcreteFloor;                                     // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Lightroot;                                         // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Lightswitch;                                       // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Indoors;                                           // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem3;                                   // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          blockNav2;                                         // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          blockNav1;                                         // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    ServerSpawn;                                       // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          Railings;                                          // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Light;                                             // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Console;                                           // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Door;                                              // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Satellite_moveStop;                                // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Satellite_stop;                                    // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Axis_Y;                                            // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Satellite_move_Cue;                                // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Satellite_Cue;                                     // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Prot_satellite_rotat;                              // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Axis_Z;                                            // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Prot_satellite_dish;                               // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Prot_satellite_base;                               // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_a_881EDE1C438C131B465ABEB8E066792B;     // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_881EDE1C438C131B465ABEB8E066792B; // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F5[0x3];                                      // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Turnoff_a_9291585D4339A8FB0B26DC82C78FEBC0;        // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Turnoff__Direction_9291585D4339A8FB0B26DC82C78FEBC0; // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_305[0x3];                                      // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Turnoff;                                           // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_314[0x4];                                      // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   NameDish;                                          // 0x0318(0x0018)(Edit, BlueprintVisible)
	struct FVector                                LookAt;                                            // 0x0330(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMoving;                                          // 0x033C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33D[0x3];                                      // 0x033D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Rot_A;                                             // 0x0340(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Rot_B;                                             // 0x034C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsRotate;                                          // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_359[0x3];                                      // 0x0359(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Axis;                                              // 0x035C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Speed;                                             // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Calibration;                                       // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         C_offset;                                          // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LosePrec;                                          // 0x036C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_36D[0x3];                                      // 0x036D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxSpeed;                                          // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CalibLose;                                         // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Randrot;                                           // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          SpawnChilds;                                       // 0x0379(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37A[0x6];                                      // 0x037A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AServerBox_C*                           Serv;                                              // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Hashcode;                                          // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   NameClassic;                                       // 0x0398(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 Techname;                                          // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class AMainGamemode_C*                        GameMode;                                          // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_dish(int32 EntryPoint);
	void SettingsApplied(const struct FStruct_settings& Settings);
	void ReceiveBeginPlay();
	void GamemodeBeginPlay();
	void MovePow();
	void StartMove();
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
	void SignalSaved();
	void SignalDeleted();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Turnoff__UpdateFunc();
	void Turnoff__FinishedFunc();
	void UserConstructionScript();
	void StartMovingTo(const struct FVector& LookAt_0);
	void GetCoords(float* X, float* Y);
	void Stop();
	void buildRailing();
	void LoadData(const struct FStruct_save& Data);
	void GetData(struct FStruct_save* Data);
	void GenerteHashcode();
	void MakeName();
	void DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"dish_C">();
	}
	static class ADish_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADish_C>();
	}
};
static_assert(alignof(ADish_C) == 0x000008, "Wrong alignment on ADish_C");
static_assert(sizeof(ADish_C) == 0x0003C8, "Wrong size on ADish_C");
static_assert(offsetof(ADish_C, UberGraphFrame) == 0x000220, "Member 'ADish_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADish_C, Nme) == 0x000228, "Member 'ADish_C::Nme' has a wrong offset!");
static_assert(offsetof(ADish_C, ConcreteFloor) == 0x000230, "Member 'ADish_C::ConcreteFloor' has a wrong offset!");
static_assert(offsetof(ADish_C, Lightroot) == 0x000238, "Member 'ADish_C::Lightroot' has a wrong offset!");
static_assert(offsetof(ADish_C, Lightswitch) == 0x000240, "Member 'ADish_C::Lightswitch' has a wrong offset!");
static_assert(offsetof(ADish_C, Indoors) == 0x000248, "Member 'ADish_C::Indoors' has a wrong offset!");
static_assert(offsetof(ADish_C, ParticleSystem3) == 0x000250, "Member 'ADish_C::ParticleSystem3' has a wrong offset!");
static_assert(offsetof(ADish_C, blockNav2) == 0x000258, "Member 'ADish_C::blockNav2' has a wrong offset!");
static_assert(offsetof(ADish_C, blockNav1) == 0x000260, "Member 'ADish_C::blockNav1' has a wrong offset!");
static_assert(offsetof(ADish_C, StaticMesh) == 0x000268, "Member 'ADish_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ADish_C, ServerSpawn) == 0x000270, "Member 'ADish_C::ServerSpawn' has a wrong offset!");
static_assert(offsetof(ADish_C, Railings) == 0x000278, "Member 'ADish_C::Railings' has a wrong offset!");
static_assert(offsetof(ADish_C, Light) == 0x000280, "Member 'ADish_C::Light' has a wrong offset!");
static_assert(offsetof(ADish_C, Console) == 0x000288, "Member 'ADish_C::Console' has a wrong offset!");
static_assert(offsetof(ADish_C, Cube) == 0x000290, "Member 'ADish_C::Cube' has a wrong offset!");
static_assert(offsetof(ADish_C, Door) == 0x000298, "Member 'ADish_C::Door' has a wrong offset!");
static_assert(offsetof(ADish_C, Satellite_moveStop) == 0x0002A0, "Member 'ADish_C::Satellite_moveStop' has a wrong offset!");
static_assert(offsetof(ADish_C, Satellite_stop) == 0x0002A8, "Member 'ADish_C::Satellite_stop' has a wrong offset!");
static_assert(offsetof(ADish_C, Axis_Y) == 0x0002B0, "Member 'ADish_C::Axis_Y' has a wrong offset!");
static_assert(offsetof(ADish_C, Satellite_move_Cue) == 0x0002B8, "Member 'ADish_C::Satellite_move_Cue' has a wrong offset!");
static_assert(offsetof(ADish_C, Satellite_Cue) == 0x0002C0, "Member 'ADish_C::Satellite_Cue' has a wrong offset!");
static_assert(offsetof(ADish_C, Prot_satellite_rotat) == 0x0002C8, "Member 'ADish_C::Prot_satellite_rotat' has a wrong offset!");
static_assert(offsetof(ADish_C, Axis_Z) == 0x0002D0, "Member 'ADish_C::Axis_Z' has a wrong offset!");
static_assert(offsetof(ADish_C, Prot_satellite_dish) == 0x0002D8, "Member 'ADish_C::Prot_satellite_dish' has a wrong offset!");
static_assert(offsetof(ADish_C, Prot_satellite_base) == 0x0002E0, "Member 'ADish_C::Prot_satellite_base' has a wrong offset!");
static_assert(offsetof(ADish_C, DefaultSceneRoot) == 0x0002E8, "Member 'ADish_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ADish_C, Timeline_0_a_881EDE1C438C131B465ABEB8E066792B) == 0x0002F0, "Member 'ADish_C::Timeline_0_a_881EDE1C438C131B465ABEB8E066792B' has a wrong offset!");
static_assert(offsetof(ADish_C, Timeline_0__Direction_881EDE1C438C131B465ABEB8E066792B) == 0x0002F4, "Member 'ADish_C::Timeline_0__Direction_881EDE1C438C131B465ABEB8E066792B' has a wrong offset!");
static_assert(offsetof(ADish_C, Timeline_0) == 0x0002F8, "Member 'ADish_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ADish_C, Turnoff_a_9291585D4339A8FB0B26DC82C78FEBC0) == 0x000300, "Member 'ADish_C::Turnoff_a_9291585D4339A8FB0B26DC82C78FEBC0' has a wrong offset!");
static_assert(offsetof(ADish_C, Turnoff__Direction_9291585D4339A8FB0B26DC82C78FEBC0) == 0x000304, "Member 'ADish_C::Turnoff__Direction_9291585D4339A8FB0B26DC82C78FEBC0' has a wrong offset!");
static_assert(offsetof(ADish_C, Turnoff) == 0x000308, "Member 'ADish_C::Turnoff' has a wrong offset!");
static_assert(offsetof(ADish_C, Index_0) == 0x000310, "Member 'ADish_C::Index_0' has a wrong offset!");
static_assert(offsetof(ADish_C, NameDish) == 0x000318, "Member 'ADish_C::NameDish' has a wrong offset!");
static_assert(offsetof(ADish_C, LookAt) == 0x000330, "Member 'ADish_C::LookAt' has a wrong offset!");
static_assert(offsetof(ADish_C, IsMoving) == 0x00033C, "Member 'ADish_C::IsMoving' has a wrong offset!");
static_assert(offsetof(ADish_C, Rot_A) == 0x000340, "Member 'ADish_C::Rot_A' has a wrong offset!");
static_assert(offsetof(ADish_C, Rot_B) == 0x00034C, "Member 'ADish_C::Rot_B' has a wrong offset!");
static_assert(offsetof(ADish_C, IsRotate) == 0x000358, "Member 'ADish_C::IsRotate' has a wrong offset!");
static_assert(offsetof(ADish_C, Axis) == 0x00035C, "Member 'ADish_C::Axis' has a wrong offset!");
static_assert(offsetof(ADish_C, Speed) == 0x000360, "Member 'ADish_C::Speed' has a wrong offset!");
static_assert(offsetof(ADish_C, Calibration) == 0x000364, "Member 'ADish_C::Calibration' has a wrong offset!");
static_assert(offsetof(ADish_C, C_offset) == 0x000368, "Member 'ADish_C::C_offset' has a wrong offset!");
static_assert(offsetof(ADish_C, LosePrec) == 0x00036C, "Member 'ADish_C::LosePrec' has a wrong offset!");
static_assert(offsetof(ADish_C, MaxSpeed) == 0x000370, "Member 'ADish_C::MaxSpeed' has a wrong offset!");
static_assert(offsetof(ADish_C, CalibLose) == 0x000374, "Member 'ADish_C::CalibLose' has a wrong offset!");
static_assert(offsetof(ADish_C, Randrot) == 0x000378, "Member 'ADish_C::Randrot' has a wrong offset!");
static_assert(offsetof(ADish_C, SpawnChilds) == 0x000379, "Member 'ADish_C::SpawnChilds' has a wrong offset!");
static_assert(offsetof(ADish_C, Serv) == 0x000380, "Member 'ADish_C::Serv' has a wrong offset!");
static_assert(offsetof(ADish_C, Hashcode) == 0x000388, "Member 'ADish_C::Hashcode' has a wrong offset!");
static_assert(offsetof(ADish_C, NameClassic) == 0x000398, "Member 'ADish_C::NameClassic' has a wrong offset!");
static_assert(offsetof(ADish_C, Techname) == 0x0003B0, "Member 'ADish_C::Techname' has a wrong offset!");
static_assert(offsetof(ADish_C, GameMode) == 0x0003C0, "Member 'ADish_C::GameMode' has a wrong offset!");

}

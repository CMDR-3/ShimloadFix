#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_rdrone

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_rdrone.prop_rdrone_C
// 0x0060 (0x03B8 - 0x0358)
class AProp_rdrone_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_rdrone_C;                      // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    CordRoot;                                          // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Lgh;                                               // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UComp_radarPoint_C*                     RadarPoint;                                        // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        LookOffset;                                        // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               Cam_ir;                                            // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               Cam;                                               // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Look;                                              // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LightActive;                                       // 0x03A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A2[0x2];                                      // 0x03A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Energy;                                            // 0x03A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACord_C*                                ObjCord;                                           // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Charging;                                          // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_rdrone(int32 EntryPoint);
	void CordUnplugged(class ACord_C* Cord, class ACordSocket_C* Socket);
	void CordPlugged(class ACord_C* Cord, class ACordSocket_C* Socket);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void RunTrigger(class AActor* Owner_0, int32 Index_0);
	void Set_ignoreSave_trigger(bool NewParam);
	void SetActiveTrigger(class AActor* SentFrom, bool Active_0);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit_0);
	void Capture(class UUmg_laptop_C* Lap);
	void Move(float Forward, float Rot, float Up);
	void ALight(bool LightActive_0);
	void Upd();
	void IgnoreSave_trigger(bool* Ignore);
	void LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return);
	void GetTriggerData(struct FStruct_triggerSave* Data);
	void GatherDataFromKeyT(bool* Gather);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_rdrone_C">();
	}
	static class AProp_rdrone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_rdrone_C>();
	}
};
static_assert(alignof(AProp_rdrone_C) == 0x000008, "Wrong alignment on AProp_rdrone_C");
static_assert(sizeof(AProp_rdrone_C) == 0x0003B8, "Wrong size on AProp_rdrone_C");
static_assert(offsetof(AProp_rdrone_C, UberGraphFrame_Prop_rdrone_C) == 0x000358, "Member 'AProp_rdrone_C::UberGraphFrame_Prop_rdrone_C' has a wrong offset!");
static_assert(offsetof(AProp_rdrone_C, CordRoot) == 0x000360, "Member 'AProp_rdrone_C::CordRoot' has a wrong offset!");
static_assert(offsetof(AProp_rdrone_C, Lgh) == 0x000368, "Member 'AProp_rdrone_C::Lgh' has a wrong offset!");
static_assert(offsetof(AProp_rdrone_C, RadarPoint) == 0x000370, "Member 'AProp_rdrone_C::RadarPoint' has a wrong offset!");
static_assert(offsetof(AProp_rdrone_C, LookOffset) == 0x000378, "Member 'AProp_rdrone_C::LookOffset' has a wrong offset!");
static_assert(offsetof(AProp_rdrone_C, Cam_ir) == 0x000380, "Member 'AProp_rdrone_C::Cam_ir' has a wrong offset!");
static_assert(offsetof(AProp_rdrone_C, Audio) == 0x000388, "Member 'AProp_rdrone_C::Audio' has a wrong offset!");
static_assert(offsetof(AProp_rdrone_C, Cam) == 0x000390, "Member 'AProp_rdrone_C::Cam' has a wrong offset!");
static_assert(offsetof(AProp_rdrone_C, Look) == 0x000398, "Member 'AProp_rdrone_C::Look' has a wrong offset!");
static_assert(offsetof(AProp_rdrone_C, Active) == 0x0003A0, "Member 'AProp_rdrone_C::Active' has a wrong offset!");
static_assert(offsetof(AProp_rdrone_C, LightActive) == 0x0003A1, "Member 'AProp_rdrone_C::LightActive' has a wrong offset!");
static_assert(offsetof(AProp_rdrone_C, Energy) == 0x0003A4, "Member 'AProp_rdrone_C::Energy' has a wrong offset!");
static_assert(offsetof(AProp_rdrone_C, ObjCord) == 0x0003A8, "Member 'AProp_rdrone_C::ObjCord' has a wrong offset!");
static_assert(offsetof(AProp_rdrone_C, Charging) == 0x0003B0, "Member 'AProp_rdrone_C::Charging' has a wrong offset!");

}


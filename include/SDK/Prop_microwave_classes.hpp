#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_microwave

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_microwave.prop_microwave_C
// 0x0098 (0x03F0 - 0x0358)
class AProp_microwave_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_microwave_C;                   // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   Cord;                                              // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Microwave_open;                                    // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Microwave_loop;                                    // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Microwave_ding;                                    // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Microwave_close;                                   // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            Nocoll2;                                           // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            DoorAx;                                            // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Door;                                              // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            Nocoll1;                                           // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Plate;                                             // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Spin;                                              // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Opened;                                            // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Active;                                            // 0x03C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CA[0x2];                                      // 0x03CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Time;                                              // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanClose;                                          // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D1[0x3];                                      // 0x03D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Timer;                                             // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TimeMode;                                          // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Powered;                                           // 0x03DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DD[0x3];                                      // 0x03DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACord_C*                                ObjCord;                                           // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DelayClose;                                        // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_microwave(int32 EntryPoint);
	void OpenAttempt();
	void ForceOpenDoor();
	void CordUnplugged(class ACord_C* Cord_0, class ACordSocket_C* Socket);
	void CordPlugged(class ACord_C* Cord_0, class ACordSocket_C* Socket);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void SetCanOpen();
	void ReceiveTick(float DeltaSeconds);
	void Wave();
	void SetActiveTrigger(class AActor* SentFrom, bool Active_0);
	void Set_ignoreSave_trigger(bool NewParam);
	void RunTrigger(class AActor* Owner_0, int32 Index_0);
	void CloseDoor();
	void OpenDoor();
	void IgnoreSave_trigger(bool* Ignore);
	void LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return);
	void GetTriggerData(struct FStruct_triggerSave* Data);
	void GatherDataFromKeyT(bool* Gather);
	void AddDamage(class AActor* Actor, float Damage, const struct FHitResult& Hit_0, const struct FVector& Impact, bool SkipSetting);
	void ReceiveBeginPlay();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void IgnoreSave(bool* Param_IgnoreSave_0);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_microwave_C">();
	}
	static class AProp_microwave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_microwave_C>();
	}
};
static_assert(alignof(AProp_microwave_C) == 0x000008, "Wrong alignment on AProp_microwave_C");
static_assert(sizeof(AProp_microwave_C) == 0x0003F0, "Wrong size on AProp_microwave_C");
static_assert(offsetof(AProp_microwave_C, UberGraphFrame_Prop_microwave_C) == 0x000358, "Member 'AProp_microwave_C::UberGraphFrame_Prop_microwave_C' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, Cord) == 0x000360, "Member 'AProp_microwave_C::Cord' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, Box) == 0x000368, "Member 'AProp_microwave_C::Box' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, Microwave_open) == 0x000370, "Member 'AProp_microwave_C::Microwave_open' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, Microwave_loop) == 0x000378, "Member 'AProp_microwave_C::Microwave_loop' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, Microwave_ding) == 0x000380, "Member 'AProp_microwave_C::Microwave_ding' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, Microwave_close) == 0x000388, "Member 'AProp_microwave_C::Microwave_close' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, Nocoll2) == 0x000390, "Member 'AProp_microwave_C::Nocoll2' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, DoorAx) == 0x000398, "Member 'AProp_microwave_C::DoorAx' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, Door) == 0x0003A0, "Member 'AProp_microwave_C::Door' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, PointLight) == 0x0003A8, "Member 'AProp_microwave_C::PointLight' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, Nocoll1) == 0x0003B0, "Member 'AProp_microwave_C::Nocoll1' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, Plate) == 0x0003B8, "Member 'AProp_microwave_C::Plate' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, Spin) == 0x0003C0, "Member 'AProp_microwave_C::Spin' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, Opened) == 0x0003C8, "Member 'AProp_microwave_C::Opened' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, Active) == 0x0003C9, "Member 'AProp_microwave_C::Active' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, Time) == 0x0003CC, "Member 'AProp_microwave_C::Time' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, CanClose) == 0x0003D0, "Member 'AProp_microwave_C::CanClose' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, Timer) == 0x0003D4, "Member 'AProp_microwave_C::Timer' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, TimeMode) == 0x0003D8, "Member 'AProp_microwave_C::TimeMode' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, Powered) == 0x0003DC, "Member 'AProp_microwave_C::Powered' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, ObjCord) == 0x0003E0, "Member 'AProp_microwave_C::ObjCord' has a wrong offset!");
static_assert(offsetof(AProp_microwave_C, DelayClose) == 0x0003E8, "Member 'AProp_microwave_C::DelayClose' has a wrong offset!");

}


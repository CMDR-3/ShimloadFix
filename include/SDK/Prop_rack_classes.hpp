#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_rack

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_rack.prop_rack_C
// 0x00C8 (0x0420 - 0x0358)
class AProp_rack_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_rack_C;                        // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    B;                                                 // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         WhackTimeline_a_5E7C23F541054185D1F9E28582CBFA66;  // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            WhackTimeline__Direction_5E7C23F541054185D1F9E28582CBFA66; // 0x0384(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_385[0x3];                                      // 0x0385(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     WhackTimeline;                                     // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          Player;                                            // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Force;                                             // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Speed;                                             // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Whacking;                                          // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A1[0xF];                                      // 0x03A1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Tr_B;                                              // 0x03B0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             Tr_A;                                              // 0x03E0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Smacked;                                           // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_411[0x3];                                      // 0x0411(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Last;                                              // 0x0414(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_rack(int32 EntryPoint);
	void Whack();
	void OnCompleted_C4DD4A4849ECBCBBA470EE92776983F3(class FName NotifyName);
	void OnBlendOut_C4DD4A4849ECBCBBA470EE92776983F3(class FName NotifyName);
	void OnInterrupted_C4DD4A4849ECBCBBA470EE92776983F3(class FName NotifyName);
	void OnNotifyBegin_C4DD4A4849ECBCBBA470EE92776983F3(class FName NotifyName);
	void OnNotifyEnd_C4DD4A4849ECBCBBA470EE92776983F3(class FName NotifyName);
	void OnCompleted_0F7346AF4815D1B767E7E1B865F06C02(class FName NotifyName);
	void OnBlendOut_0F7346AF4815D1B767E7E1B865F06C02(class FName NotifyName);
	void OnInterrupted_0F7346AF4815D1B767E7E1B865F06C02(class FName NotifyName);
	void OnNotifyBegin_0F7346AF4815D1B767E7E1B865F06C02(class FName NotifyName);
	void OnNotifyEnd_0F7346AF4815D1B767E7E1B865F06C02(class FName NotifyName);
	void WhackTimeline__UpdateFunc();
	void WhackTimeline__FinishedFunc();
	void SteppedOn(class AMainPlayer_C* Player_0, const struct FHitResult& Hit_0);
	void PlayerHandRelease_RMB(class AMainPlayer_C* Player_0);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_rack_C">();
	}
	static class AProp_rack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_rack_C>();
	}
};
static_assert(alignof(AProp_rack_C) == 0x000010, "Wrong alignment on AProp_rack_C");
static_assert(sizeof(AProp_rack_C) == 0x000420, "Wrong size on AProp_rack_C");
static_assert(offsetof(AProp_rack_C, UberGraphFrame_Prop_rack_C) == 0x000358, "Member 'AProp_rack_C::UberGraphFrame_Prop_rack_C' has a wrong offset!");
static_assert(offsetof(AProp_rack_C, B) == 0x000360, "Member 'AProp_rack_C::B' has a wrong offset!");
static_assert(offsetof(AProp_rack_C, StaticMesh1) == 0x000368, "Member 'AProp_rack_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(AProp_rack_C, Arrow) == 0x000370, "Member 'AProp_rack_C::Arrow' has a wrong offset!");
static_assert(offsetof(AProp_rack_C, Capsule) == 0x000378, "Member 'AProp_rack_C::Capsule' has a wrong offset!");
static_assert(offsetof(AProp_rack_C, WhackTimeline_a_5E7C23F541054185D1F9E28582CBFA66) == 0x000380, "Member 'AProp_rack_C::WhackTimeline_a_5E7C23F541054185D1F9E28582CBFA66' has a wrong offset!");
static_assert(offsetof(AProp_rack_C, WhackTimeline__Direction_5E7C23F541054185D1F9E28582CBFA66) == 0x000384, "Member 'AProp_rack_C::WhackTimeline__Direction_5E7C23F541054185D1F9E28582CBFA66' has a wrong offset!");
static_assert(offsetof(AProp_rack_C, WhackTimeline) == 0x000388, "Member 'AProp_rack_C::WhackTimeline' has a wrong offset!");
static_assert(offsetof(AProp_rack_C, Player) == 0x000390, "Member 'AProp_rack_C::Player' has a wrong offset!");
static_assert(offsetof(AProp_rack_C, Force) == 0x000398, "Member 'AProp_rack_C::Force' has a wrong offset!");
static_assert(offsetof(AProp_rack_C, Speed) == 0x00039C, "Member 'AProp_rack_C::Speed' has a wrong offset!");
static_assert(offsetof(AProp_rack_C, Whacking) == 0x0003A0, "Member 'AProp_rack_C::Whacking' has a wrong offset!");
static_assert(offsetof(AProp_rack_C, Tr_B) == 0x0003B0, "Member 'AProp_rack_C::Tr_B' has a wrong offset!");
static_assert(offsetof(AProp_rack_C, Tr_A) == 0x0003E0, "Member 'AProp_rack_C::Tr_A' has a wrong offset!");
static_assert(offsetof(AProp_rack_C, Smacked) == 0x000410, "Member 'AProp_rack_C::Smacked' has a wrong offset!");
static_assert(offsetof(AProp_rack_C, Last) == 0x000414, "Member 'AProp_rack_C::Last' has a wrong offset!");

}

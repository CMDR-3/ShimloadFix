#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_saltrocket

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_saltrocket.prop_saltrocket_C
// 0x0048 (0x03A0 - 0x0358)
class AProp_saltrocket_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_saltrocket_C;                  // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Eff_fireworkThrust;                                // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Eff_fireworkFuse;                                  // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVelocityStuck_C*                       VelocityStuck;                                     // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_a_E3A7106047ABC1E6311474AC0994DF50;     // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_E3A7106047ABC1E6311474AC0994DF50; // 0x0384(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_385[0x3];                                      // 0x0385(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         A_a_DADD8E8C4CD1D3C2408CCA97705C7975;              // 0x0390(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            A__Direction_DADD8E8C4CD1D3C2408CCA97705C7975;     // 0x0394(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_395[0x3];                                      // 0x0395(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     A;                                                 // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_saltrocket(int32 EntryPoint);
	void Fire();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void A__UpdateFunc();
	void A__FinishedFunc();
	void Explode();
	void ReceiveBeginPlay();
	void broken_fire();
	void broken();
	void AttemptIgnite();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_saltrocket_C">();
	}
	static class AProp_saltrocket_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_saltrocket_C>();
	}
};
static_assert(alignof(AProp_saltrocket_C) == 0x000008, "Wrong alignment on AProp_saltrocket_C");
static_assert(sizeof(AProp_saltrocket_C) == 0x0003A0, "Wrong size on AProp_saltrocket_C");
static_assert(offsetof(AProp_saltrocket_C, UberGraphFrame_Prop_saltrocket_C) == 0x000358, "Member 'AProp_saltrocket_C::UberGraphFrame_Prop_saltrocket_C' has a wrong offset!");
static_assert(offsetof(AProp_saltrocket_C, Eff_fireworkThrust) == 0x000360, "Member 'AProp_saltrocket_C::Eff_fireworkThrust' has a wrong offset!");
static_assert(offsetof(AProp_saltrocket_C, Eff_fireworkFuse) == 0x000368, "Member 'AProp_saltrocket_C::Eff_fireworkFuse' has a wrong offset!");
static_assert(offsetof(AProp_saltrocket_C, Billboard) == 0x000370, "Member 'AProp_saltrocket_C::Billboard' has a wrong offset!");
static_assert(offsetof(AProp_saltrocket_C, VelocityStuck) == 0x000378, "Member 'AProp_saltrocket_C::VelocityStuck' has a wrong offset!");
static_assert(offsetof(AProp_saltrocket_C, Timeline_0_a_E3A7106047ABC1E6311474AC0994DF50) == 0x000380, "Member 'AProp_saltrocket_C::Timeline_0_a_E3A7106047ABC1E6311474AC0994DF50' has a wrong offset!");
static_assert(offsetof(AProp_saltrocket_C, Timeline_0__Direction_E3A7106047ABC1E6311474AC0994DF50) == 0x000384, "Member 'AProp_saltrocket_C::Timeline_0__Direction_E3A7106047ABC1E6311474AC0994DF50' has a wrong offset!");
static_assert(offsetof(AProp_saltrocket_C, Timeline_0) == 0x000388, "Member 'AProp_saltrocket_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AProp_saltrocket_C, A_a_DADD8E8C4CD1D3C2408CCA97705C7975) == 0x000390, "Member 'AProp_saltrocket_C::A_a_DADD8E8C4CD1D3C2408CCA97705C7975' has a wrong offset!");
static_assert(offsetof(AProp_saltrocket_C, A__Direction_DADD8E8C4CD1D3C2408CCA97705C7975) == 0x000394, "Member 'AProp_saltrocket_C::A__Direction_DADD8E8C4CD1D3C2408CCA97705C7975' has a wrong offset!");
static_assert(offsetof(AProp_saltrocket_C, A) == 0x000398, "Member 'AProp_saltrocket_C::A' has a wrong offset!");

}

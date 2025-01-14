#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_tpBeam

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_wireComponent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_wireComponent_tpBeam.prop_wireComponent_tpBeam_C
// 0x0058 (0x03B8 - 0x0360)
class AProp_wireComponent_tpBeam_C : public AProp_wireComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_wireComponent_tpBeam_C;        // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   Light;                                             // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Eff_beam;                                          // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TpAnim_a_8148159643412D4569D3C2A7D6E895E7;         // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TpAnim__Direction_8148159643412D4569D3C2A7D6E895E7; // 0x037C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37D[0x3];                                      // 0x037D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TpAnim;                                            // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_wireComponent_tpBeam_C*           TpTo;                                              // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOn;                                              // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_391[0x7];                                      // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        EffectOn;                                          // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        EffectOff;                                         // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Len;                                               // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rad;                                               // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Transform;                                         // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_wireComponent_tpBeam(int32 EntryPoint);
	void Telported();
	void WirePass(class AWire_C* Wire);
	void TpAnim__UpdateFunc();
	void TpAnim__FinishedFunc();
	void Tp();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_wireComponent_tpBeam_C">();
	}
	static class AProp_wireComponent_tpBeam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_wireComponent_tpBeam_C>();
	}
};
static_assert(alignof(AProp_wireComponent_tpBeam_C) == 0x000008, "Wrong alignment on AProp_wireComponent_tpBeam_C");
static_assert(sizeof(AProp_wireComponent_tpBeam_C) == 0x0003B8, "Wrong size on AProp_wireComponent_tpBeam_C");
static_assert(offsetof(AProp_wireComponent_tpBeam_C, UberGraphFrame_Prop_wireComponent_tpBeam_C) == 0x000360, "Member 'AProp_wireComponent_tpBeam_C::UberGraphFrame_Prop_wireComponent_tpBeam_C' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_tpBeam_C, Light) == 0x000368, "Member 'AProp_wireComponent_tpBeam_C::Light' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_tpBeam_C, Eff_beam) == 0x000370, "Member 'AProp_wireComponent_tpBeam_C::Eff_beam' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_tpBeam_C, TpAnim_a_8148159643412D4569D3C2A7D6E895E7) == 0x000378, "Member 'AProp_wireComponent_tpBeam_C::TpAnim_a_8148159643412D4569D3C2A7D6E895E7' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_tpBeam_C, TpAnim__Direction_8148159643412D4569D3C2A7D6E895E7) == 0x00037C, "Member 'AProp_wireComponent_tpBeam_C::TpAnim__Direction_8148159643412D4569D3C2A7D6E895E7' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_tpBeam_C, TpAnim) == 0x000380, "Member 'AProp_wireComponent_tpBeam_C::TpAnim' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_tpBeam_C, TpTo) == 0x000388, "Member 'AProp_wireComponent_tpBeam_C::TpTo' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_tpBeam_C, IsOn) == 0x000390, "Member 'AProp_wireComponent_tpBeam_C::IsOn' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_tpBeam_C, EffectOn) == 0x000398, "Member 'AProp_wireComponent_tpBeam_C::EffectOn' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_tpBeam_C, EffectOff) == 0x0003A0, "Member 'AProp_wireComponent_tpBeam_C::EffectOff' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_tpBeam_C, Len) == 0x0003A8, "Member 'AProp_wireComponent_tpBeam_C::Len' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_tpBeam_C, Rad) == 0x0003AC, "Member 'AProp_wireComponent_tpBeam_C::Rad' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_tpBeam_C, Transform) == 0x0003B0, "Member 'AProp_wireComponent_tpBeam_C::Transform' has a wrong offset!");

}


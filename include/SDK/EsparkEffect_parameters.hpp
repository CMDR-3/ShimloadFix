#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EsparkEffect

#include "Basic.hpp"


namespace SDK::Params
{

// Function esparkEffect.esparkEffect_C.ExecuteUbergraph_esparkEffect
// 0x0010 (0x0010 - 0x0000)
struct EsparkEffect_C_ExecuteUbergraph_esparkEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               K2Node_ComponentBoundEvent_PSystem;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EsparkEffect_C_ExecuteUbergraph_esparkEffect) == 0x000008, "Wrong alignment on EsparkEffect_C_ExecuteUbergraph_esparkEffect");
static_assert(sizeof(EsparkEffect_C_ExecuteUbergraph_esparkEffect) == 0x000010, "Wrong size on EsparkEffect_C_ExecuteUbergraph_esparkEffect");
static_assert(offsetof(EsparkEffect_C_ExecuteUbergraph_esparkEffect, EntryPoint) == 0x000000, "Member 'EsparkEffect_C_ExecuteUbergraph_esparkEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(EsparkEffect_C_ExecuteUbergraph_esparkEffect, K2Node_ComponentBoundEvent_PSystem) == 0x000008, "Member 'EsparkEffect_C_ExecuteUbergraph_esparkEffect::K2Node_ComponentBoundEvent_PSystem' has a wrong offset!");

// Function esparkEffect.esparkEffect_C.BndEvt__esparkEffect_ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct EsparkEffect_C_BndEvt__esparkEffect_ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature final
{
public:
	class UParticleSystemComponent*               PSystem;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EsparkEffect_C_BndEvt__esparkEffect_ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature) == 0x000008, "Wrong alignment on EsparkEffect_C_BndEvt__esparkEffect_ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature");
static_assert(sizeof(EsparkEffect_C_BndEvt__esparkEffect_ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature) == 0x000008, "Wrong size on EsparkEffect_C_BndEvt__esparkEffect_ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature");
static_assert(offsetof(EsparkEffect_C_BndEvt__esparkEffect_ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature, PSystem) == 0x000000, "Member 'EsparkEffect_C_BndEvt__esparkEffect_ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature::PSystem' has a wrong offset!");

}


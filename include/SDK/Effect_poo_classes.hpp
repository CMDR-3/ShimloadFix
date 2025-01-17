#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Effect_poo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Effect_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass effect_poo.effect_poo_C
// 0x0010 (0x0278 - 0x0268)
class AEffect_poo_C final : public AEffect_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Effect_poo_C;                       // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio;                                             // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_effect_poo(int32 EntryPoint);
	void BndEvt__effect_poo_Audio_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();
	void Poo();
	void RemoveRanout(bool Destroy);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"effect_poo_C">();
	}
	static class AEffect_poo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEffect_poo_C>();
	}
};
static_assert(alignof(AEffect_poo_C) == 0x000008, "Wrong alignment on AEffect_poo_C");
static_assert(sizeof(AEffect_poo_C) == 0x000278, "Wrong size on AEffect_poo_C");
static_assert(offsetof(AEffect_poo_C, UberGraphFrame_Effect_poo_C) == 0x000268, "Member 'AEffect_poo_C::UberGraphFrame_Effect_poo_C' has a wrong offset!");
static_assert(offsetof(AEffect_poo_C, Audio) == 0x000270, "Member 'AEffect_poo_C::Audio' has a wrong offset!");

}


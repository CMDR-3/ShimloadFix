#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Effect_ariralVaccine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Effect_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass effect_ariralVaccine.effect_ariralVaccine_C
// 0x0010 (0x0278 - 0x0268)
class AEffect_ariralVaccine_C final : public AEffect_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Effect_ariralVaccine_C;             // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUmg_ariralVaccine_C*                   Widget;                                            // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_effect_ariralVaccine(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"effect_ariralVaccine_C">();
	}
	static class AEffect_ariralVaccine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEffect_ariralVaccine_C>();
	}
};
static_assert(alignof(AEffect_ariralVaccine_C) == 0x000008, "Wrong alignment on AEffect_ariralVaccine_C");
static_assert(sizeof(AEffect_ariralVaccine_C) == 0x000278, "Wrong size on AEffect_ariralVaccine_C");
static_assert(offsetof(AEffect_ariralVaccine_C, UberGraphFrame_Effect_ariralVaccine_C) == 0x000268, "Member 'AEffect_ariralVaccine_C::UberGraphFrame_Effect_ariralVaccine_C' has a wrong offset!");
static_assert(offsetof(AEffect_ariralVaccine_C, Widget) == 0x000270, "Member 'AEffect_ariralVaccine_C::Widget' has a wrong offset!");

}

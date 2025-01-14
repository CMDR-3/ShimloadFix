#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_digcam

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_digcam.prop_digcam_C
// 0x0018 (0x0370 - 0x0358)
class AProp_digcam_C : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_digcam_C;                      // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Flash;                                             // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanPrint;                                          // 0x0369(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_digcam(int32 EntryPoint);
	void MakePhoto();
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void CheckPaper(bool* Return);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void PlayerHandUse_LMB(class AMainPlayer_C* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_digcam_C">();
	}
	static class AProp_digcam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_digcam_C>();
	}
};
static_assert(alignof(AProp_digcam_C) == 0x000008, "Wrong alignment on AProp_digcam_C");
static_assert(sizeof(AProp_digcam_C) == 0x000370, "Wrong size on AProp_digcam_C");
static_assert(offsetof(AProp_digcam_C, UberGraphFrame_Prop_digcam_C) == 0x000358, "Member 'AProp_digcam_C::UberGraphFrame_Prop_digcam_C' has a wrong offset!");
static_assert(offsetof(AProp_digcam_C, Arrow) == 0x000360, "Member 'AProp_digcam_C::Arrow' has a wrong offset!");
static_assert(offsetof(AProp_digcam_C, Flash) == 0x000368, "Member 'AProp_digcam_C::Flash' has a wrong offset!");
static_assert(offsetof(AProp_digcam_C, CanPrint) == 0x000369, "Member 'AProp_digcam_C::CanPrint' has a wrong offset!");

}


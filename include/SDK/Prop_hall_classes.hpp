#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_hall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_hall.prop_hall_C
// 0x0028 (0x0380 - 0x0358)
class AProp_hall_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_hall_C;                        // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Timeline_0_a_3FB1543B488AAEE05BA5C4BCC50134A4;     // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_3FB1543B488AAEE05BA5C4BCC50134A4; // 0x0364(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_365[0x3];                                      // 0x0365(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          A;                                                 // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_hall(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void ReceiveBeginPlay();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Init();
	void GetData(struct FStruct_save* Data);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);
	void IgnoreSave(bool* Param_IgnoreSave_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_hall_C">();
	}
	static class AProp_hall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_hall_C>();
	}
};
static_assert(alignof(AProp_hall_C) == 0x000008, "Wrong alignment on AProp_hall_C");
static_assert(sizeof(AProp_hall_C) == 0x000380, "Wrong size on AProp_hall_C");
static_assert(offsetof(AProp_hall_C, UberGraphFrame_Prop_hall_C) == 0x000358, "Member 'AProp_hall_C::UberGraphFrame_Prop_hall_C' has a wrong offset!");
static_assert(offsetof(AProp_hall_C, Timeline_0_a_3FB1543B488AAEE05BA5C4BCC50134A4) == 0x000360, "Member 'AProp_hall_C::Timeline_0_a_3FB1543B488AAEE05BA5C4BCC50134A4' has a wrong offset!");
static_assert(offsetof(AProp_hall_C, Timeline_0__Direction_3FB1543B488AAEE05BA5C4BCC50134A4) == 0x000364, "Member 'AProp_hall_C::Timeline_0__Direction_3FB1543B488AAEE05BA5C4BCC50134A4' has a wrong offset!");
static_assert(offsetof(AProp_hall_C, Timeline_0) == 0x000368, "Member 'AProp_hall_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AProp_hall_C, Dynmat) == 0x000370, "Member 'AProp_hall_C::Dynmat' has a wrong offset!");
static_assert(offsetof(AProp_hall_C, A) == 0x000378, "Member 'AProp_hall_C::A' has a wrong offset!");

}


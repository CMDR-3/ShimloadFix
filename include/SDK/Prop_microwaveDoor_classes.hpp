#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_microwaveDoor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_swinger_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_microwaveDoor.prop_microwaveDoor_C
// 0x0010 (0x0390 - 0x0380)
class AProp_microwaveDoor_C final : public AProp_swinger_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_microwaveDoor_C;               // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AProp_microwave_C*                      ParentMicrowave;                                   // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_microwaveDoor(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player_0, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void ReceiveBeginPlay();
	void GetActionOptions(class AMainPlayer_C* Player_0, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_microwaveDoor_C">();
	}
	static class AProp_microwaveDoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_microwaveDoor_C>();
	}
};
static_assert(alignof(AProp_microwaveDoor_C) == 0x000008, "Wrong alignment on AProp_microwaveDoor_C");
static_assert(sizeof(AProp_microwaveDoor_C) == 0x000390, "Wrong size on AProp_microwaveDoor_C");
static_assert(offsetof(AProp_microwaveDoor_C, UberGraphFrame_Prop_microwaveDoor_C) == 0x000380, "Member 'AProp_microwaveDoor_C::UberGraphFrame_Prop_microwaveDoor_C' has a wrong offset!");
static_assert(offsetof(AProp_microwaveDoor_C, ParentMicrowave) == 0x000388, "Member 'AProp_microwaveDoor_C::ParentMicrowave' has a wrong offset!");

}

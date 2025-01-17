#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_doughball

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_doughball.prop_doughball_C
// 0x0008 (0x0360 - 0x0358)
class AProp_doughball_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_doughball_C;                   // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_doughball(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_doughball_C">();
	}
	static class AProp_doughball_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_doughball_C>();
	}
};
static_assert(alignof(AProp_doughball_C) == 0x000008, "Wrong alignment on AProp_doughball_C");
static_assert(sizeof(AProp_doughball_C) == 0x000360, "Wrong size on AProp_doughball_C");
static_assert(offsetof(AProp_doughball_C, UberGraphFrame_Prop_doughball_C) == 0x000358, "Member 'AProp_doughball_C::UberGraphFrame_Prop_doughball_C' has a wrong offset!");

}


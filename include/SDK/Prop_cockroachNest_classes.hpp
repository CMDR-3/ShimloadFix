#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_cockroachNest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_cockroachNest.prop_cockroachNest_C
// 0x0008 (0x0360 - 0x0358)
class AProp_cockroachNest_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_cockroachNest_C;               // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_cockroachNest(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void GamemodeBeginPlay();
	void ReceiveBeginPlay();
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_cockroachNest_C">();
	}
	static class AProp_cockroachNest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_cockroachNest_C>();
	}
};
static_assert(alignof(AProp_cockroachNest_C) == 0x000008, "Wrong alignment on AProp_cockroachNest_C");
static_assert(sizeof(AProp_cockroachNest_C) == 0x000360, "Wrong size on AProp_cockroachNest_C");
static_assert(offsetof(AProp_cockroachNest_C, UberGraphFrame_Prop_cockroachNest_C) == 0x000358, "Member 'AProp_cockroachNest_C::UberGraphFrame_Prop_cockroachNest_C' has a wrong offset!");

}

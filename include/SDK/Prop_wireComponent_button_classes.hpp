#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_button

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_wireComponent_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_wireComponent_button.prop_wireComponent_button_C
// 0x0030 (0x0390 - 0x0360)
class AProp_wireComponent_button_C final : public AProp_wireComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_wireComponent_button_C;        // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AWire_C*                                Wire;                                              // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Wire_key;                                          // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Used;                                              // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_389[0x3];                                      // 0x0389(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         I;                                                 // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_wireComponent_button(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void Dest(class AActor* DestroyedActor);
	void WireConnected(class AWire_C* Wire_0, bool Side);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_wireComponent_button_C">();
	}
	static class AProp_wireComponent_button_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_wireComponent_button_C>();
	}
};
static_assert(alignof(AProp_wireComponent_button_C) == 0x000008, "Wrong alignment on AProp_wireComponent_button_C");
static_assert(sizeof(AProp_wireComponent_button_C) == 0x000390, "Wrong size on AProp_wireComponent_button_C");
static_assert(offsetof(AProp_wireComponent_button_C, UberGraphFrame_Prop_wireComponent_button_C) == 0x000360, "Member 'AProp_wireComponent_button_C::UberGraphFrame_Prop_wireComponent_button_C' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_button_C, Billboard) == 0x000368, "Member 'AProp_wireComponent_button_C::Billboard' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_button_C, Wire) == 0x000370, "Member 'AProp_wireComponent_button_C::Wire' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_button_C, Wire_key) == 0x000378, "Member 'AProp_wireComponent_button_C::Wire_key' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_button_C, Used) == 0x000388, "Member 'AProp_wireComponent_button_C::Used' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_button_C, I) == 0x00038C, "Member 'AProp_wireComponent_button_C::I' has a wrong offset!");

}

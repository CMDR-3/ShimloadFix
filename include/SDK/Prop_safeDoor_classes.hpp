#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_safeDoor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_swinger_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_safeDoor.prop_safeDoor_C
// 0x0028 (0x03A8 - 0x0380)
class AProp_safeDoor_C final : public AProp_swinger_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_safeDoor_C;                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AProp_safe_C*                           Safe;                                              // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Number;                                            // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Dir;                                               // 0x0394(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_395[0x3];                                      // 0x0395(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Pass;                                              // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void CheckNum();
	void AddNum(int32 Add);
	void CheckPass();
	void GetActionOptions(class AMainPlayer_C* Player_0, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number_0);
	void LookAt(class AMainPlayer_C* Player_0, const struct FHitResult& Hit_0, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number_0);
	void ReceiveBeginPlay();
	void ActionOptionIndex(class AMainPlayer_C* Player_0, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void ScrollDown();
	void ScrollUp();
	void UsedE(bool Pressed);
	void ExecuteUbergraph_prop_safeDoor(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_safeDoor_C">();
	}
	static class AProp_safeDoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_safeDoor_C>();
	}
};
static_assert(alignof(AProp_safeDoor_C) == 0x000008, "Wrong alignment on AProp_safeDoor_C");
static_assert(sizeof(AProp_safeDoor_C) == 0x0003A8, "Wrong size on AProp_safeDoor_C");
static_assert(offsetof(AProp_safeDoor_C, UberGraphFrame_Prop_safeDoor_C) == 0x000380, "Member 'AProp_safeDoor_C::UberGraphFrame_Prop_safeDoor_C' has a wrong offset!");
static_assert(offsetof(AProp_safeDoor_C, Safe) == 0x000388, "Member 'AProp_safeDoor_C::Safe' has a wrong offset!");
static_assert(offsetof(AProp_safeDoor_C, Number) == 0x000390, "Member 'AProp_safeDoor_C::Number' has a wrong offset!");
static_assert(offsetof(AProp_safeDoor_C, Dir) == 0x000394, "Member 'AProp_safeDoor_C::Dir' has a wrong offset!");
static_assert(offsetof(AProp_safeDoor_C, Pass) == 0x000398, "Member 'AProp_safeDoor_C::Pass' has a wrong offset!");

}

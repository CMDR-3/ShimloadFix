#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_batts

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_batts.prop_batts_C
// 0x0010 (0x0368 - 0x0358)
class AProp_batts_C : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_batts_C;                       // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Energy;                                            // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_batts(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void PlayerHandUse_LMB(class AMainPlayer_C* Player);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void Microwave();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void IsButtonUsed(bool* Failed);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);
	void GetPriceMultiplier(float* PriceMult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_batts_C">();
	}
	static class AProp_batts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_batts_C>();
	}
};
static_assert(alignof(AProp_batts_C) == 0x000008, "Wrong alignment on AProp_batts_C");
static_assert(sizeof(AProp_batts_C) == 0x000368, "Wrong size on AProp_batts_C");
static_assert(offsetof(AProp_batts_C, UberGraphFrame_Prop_batts_C) == 0x000358, "Member 'AProp_batts_C::UberGraphFrame_Prop_batts_C' has a wrong offset!");
static_assert(offsetof(AProp_batts_C, Energy) == 0x000360, "Member 'AProp_batts_C::Energy' has a wrong offset!");

}

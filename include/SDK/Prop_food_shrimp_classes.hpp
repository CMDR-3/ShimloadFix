#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food_shrimp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_food_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_food_shrimp.prop_food_shrimp_C
// 0x0018 (0x03C8 - 0x03B0)
class AProp_food_shrimp_C final : public AProp_food_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_food_shrimp_C;                 // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UInstancedStaticMeshComponent*          InstancedStaticMesh;                               // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Shrimps;                                           // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_food_shrimp(int32 EntryPoint);
	void Upd();
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_food_shrimp_C">();
	}
	static class AProp_food_shrimp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_food_shrimp_C>();
	}
};
static_assert(alignof(AProp_food_shrimp_C) == 0x000008, "Wrong alignment on AProp_food_shrimp_C");
static_assert(sizeof(AProp_food_shrimp_C) == 0x0003C8, "Wrong size on AProp_food_shrimp_C");
static_assert(offsetof(AProp_food_shrimp_C, UberGraphFrame_Prop_food_shrimp_C) == 0x0003B0, "Member 'AProp_food_shrimp_C::UberGraphFrame_Prop_food_shrimp_C' has a wrong offset!");
static_assert(offsetof(AProp_food_shrimp_C, InstancedStaticMesh) == 0x0003B8, "Member 'AProp_food_shrimp_C::InstancedStaticMesh' has a wrong offset!");
static_assert(offsetof(AProp_food_shrimp_C, Shrimps) == 0x0003C0, "Member 'AProp_food_shrimp_C::Shrimps' has a wrong offset!");

}

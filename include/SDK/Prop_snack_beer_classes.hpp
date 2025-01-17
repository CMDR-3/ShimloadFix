#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_snack_beer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Prop_snack_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_snack_beer.prop_snack_beer_C
// 0x0018 (0x0398 - 0x0380)
class AProp_snack_beer_C : public AProp_snack_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_snack_beer_C;                  // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Open;                                              // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_389[0x3];                                      // 0x0389(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Opened;                                            // 0x038C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_snack_beer(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void Eat(class AMainPlayer_C* P, bool bypassNoHunger);
	void OpenBottle();
	void GamemodeBeginPlay();
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void UserConstructionScript();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_snack_beer_C">();
	}
	static class AProp_snack_beer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_snack_beer_C>();
	}
};
static_assert(alignof(AProp_snack_beer_C) == 0x000008, "Wrong alignment on AProp_snack_beer_C");
static_assert(sizeof(AProp_snack_beer_C) == 0x000398, "Wrong size on AProp_snack_beer_C");
static_assert(offsetof(AProp_snack_beer_C, UberGraphFrame_Prop_snack_beer_C) == 0x000380, "Member 'AProp_snack_beer_C::UberGraphFrame_Prop_snack_beer_C' has a wrong offset!");
static_assert(offsetof(AProp_snack_beer_C, Open) == 0x000388, "Member 'AProp_snack_beer_C::Open' has a wrong offset!");
static_assert(offsetof(AProp_snack_beer_C, Opened) == 0x00038C, "Member 'AProp_snack_beer_C::Opened' has a wrong offset!");

}


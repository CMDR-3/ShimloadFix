#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewBlueprint19

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "UMG_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass NewBlueprint19.NewBlueprint19_C
// 0x0090 (0x0550 - 0x04C0)
class ANewBlueprint19_C final : public ACharacter
{
public:
	uint8                                         Pad_4B8[0x8];                                      // 0x04B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    b9;                                                // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    b8;                                                // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    b7;                                                // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    b6;                                                // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    b5;                                                // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    b4;                                                // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    b3;                                                // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    b2;                                                // 0x0500(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    b1;                                                // 0x0508(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UBillboardComponent*>            Array;                                             // 0x0510(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FVector>                        Target_Array;                                      // 0x0520(0x0010)(Edit, BlueprintVisible)
	class UblackScreen_C*                         Scr;                                               // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                W;                                                 // 0x0538(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewVar_0;                                          // 0x0544(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Condition;                                         // 0x0545(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_NewBlueprint19(int32 EntryPoint);
	void ReceiveDestroyed();
	void CustomEvent_0();
	void Weqewqeweqw();
	void Step();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnSuccess_FB07DBB64AA6B8F3866DF993011D6101(EPathFollowingResult MovementResult);
	void OnFail_FB07DBB64AA6B8F3866DF993011D6101(EPathFollowingResult MovementResult);
	void OnSuccess_46370EA64AEFB465337BD0BD712B1786(EPathFollowingResult MovementResult);
	void OnFail_46370EA64AEFB465337BD0BD712B1786(EPathFollowingResult MovementResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NewBlueprint19_C">();
	}
	static class ANewBlueprint19_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANewBlueprint19_C>();
	}
};
static_assert(alignof(ANewBlueprint19_C) == 0x000010, "Wrong alignment on ANewBlueprint19_C");
static_assert(sizeof(ANewBlueprint19_C) == 0x000550, "Wrong size on ANewBlueprint19_C");
static_assert(offsetof(ANewBlueprint19_C, UberGraphFrame) == 0x0004C0, "Member 'ANewBlueprint19_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ANewBlueprint19_C, b9) == 0x0004C8, "Member 'ANewBlueprint19_C::b9' has a wrong offset!");
static_assert(offsetof(ANewBlueprint19_C, b8) == 0x0004D0, "Member 'ANewBlueprint19_C::b8' has a wrong offset!");
static_assert(offsetof(ANewBlueprint19_C, b7) == 0x0004D8, "Member 'ANewBlueprint19_C::b7' has a wrong offset!");
static_assert(offsetof(ANewBlueprint19_C, b6) == 0x0004E0, "Member 'ANewBlueprint19_C::b6' has a wrong offset!");
static_assert(offsetof(ANewBlueprint19_C, b5) == 0x0004E8, "Member 'ANewBlueprint19_C::b5' has a wrong offset!");
static_assert(offsetof(ANewBlueprint19_C, b4) == 0x0004F0, "Member 'ANewBlueprint19_C::b4' has a wrong offset!");
static_assert(offsetof(ANewBlueprint19_C, b3) == 0x0004F8, "Member 'ANewBlueprint19_C::b3' has a wrong offset!");
static_assert(offsetof(ANewBlueprint19_C, b2) == 0x000500, "Member 'ANewBlueprint19_C::b2' has a wrong offset!");
static_assert(offsetof(ANewBlueprint19_C, b1) == 0x000508, "Member 'ANewBlueprint19_C::b1' has a wrong offset!");
static_assert(offsetof(ANewBlueprint19_C, Array) == 0x000510, "Member 'ANewBlueprint19_C::Array' has a wrong offset!");
static_assert(offsetof(ANewBlueprint19_C, Target_Array) == 0x000520, "Member 'ANewBlueprint19_C::Target_Array' has a wrong offset!");
static_assert(offsetof(ANewBlueprint19_C, Scr) == 0x000530, "Member 'ANewBlueprint19_C::Scr' has a wrong offset!");
static_assert(offsetof(ANewBlueprint19_C, W) == 0x000538, "Member 'ANewBlueprint19_C::W' has a wrong offset!");
static_assert(offsetof(ANewBlueprint19_C, NewVar_0) == 0x000544, "Member 'ANewBlueprint19_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(ANewBlueprint19_C, Condition) == 0x000545, "Member 'ANewBlueprint19_C::Condition' has a wrong offset!");

}


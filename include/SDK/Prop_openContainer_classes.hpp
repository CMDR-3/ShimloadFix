#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_openContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_openContainer.prop_openContainer_C
// 0x0028 (0x0380 - 0x0358)
class AProp_openContainer_C : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_openContainer_C;               // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         ItemsInside;                                       // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          SkipPhysics;                                       // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_openContainer(int32 EntryPoint);
	void DoStuff();
	void PropAwoken();
	void ReceiveTick(float DeltaSeconds);
	void GamemodeBeginPlay();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void LoadData(const struct FStruct_save& Data, bool* Return);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_openContainer_C">();
	}
	static class AProp_openContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_openContainer_C>();
	}
};
static_assert(alignof(AProp_openContainer_C) == 0x000008, "Wrong alignment on AProp_openContainer_C");
static_assert(sizeof(AProp_openContainer_C) == 0x000380, "Wrong size on AProp_openContainer_C");
static_assert(offsetof(AProp_openContainer_C, UberGraphFrame_Prop_openContainer_C) == 0x000358, "Member 'AProp_openContainer_C::UberGraphFrame_Prop_openContainer_C' has a wrong offset!");
static_assert(offsetof(AProp_openContainer_C, Box) == 0x000360, "Member 'AProp_openContainer_C::Box' has a wrong offset!");
static_assert(offsetof(AProp_openContainer_C, ItemsInside) == 0x000368, "Member 'AProp_openContainer_C::ItemsInside' has a wrong offset!");
static_assert(offsetof(AProp_openContainer_C, SkipPhysics) == 0x000378, "Member 'AProp_openContainer_C::SkipPhysics' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_hose

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_hose.prop_hose_C
// 0x0020 (0x0378 - 0x0358)
class AProp_hose_C : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_hose_C;                        // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USplineMeshComponent*                   End;                                               // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AGroundHose_C*                          GroundHose;                                        // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Placed;                                            // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Placing;                                           // 0x0371(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_hose(int32 EntryPoint);
	void ReceiveDestroyed();
	void PlayerHandUse_LMB(class AMainPlayer_C* Player);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_hose_C">();
	}
	static class AProp_hose_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_hose_C>();
	}
};
static_assert(alignof(AProp_hose_C) == 0x000008, "Wrong alignment on AProp_hose_C");
static_assert(sizeof(AProp_hose_C) == 0x000378, "Wrong size on AProp_hose_C");
static_assert(offsetof(AProp_hose_C, UberGraphFrame_Prop_hose_C) == 0x000358, "Member 'AProp_hose_C::UberGraphFrame_Prop_hose_C' has a wrong offset!");
static_assert(offsetof(AProp_hose_C, End) == 0x000360, "Member 'AProp_hose_C::End' has a wrong offset!");
static_assert(offsetof(AProp_hose_C, GroundHose) == 0x000368, "Member 'AProp_hose_C::GroundHose' has a wrong offset!");
static_assert(offsetof(AProp_hose_C, Placed) == 0x000370, "Member 'AProp_hose_C::Placed' has a wrong offset!");
static_assert(offsetof(AProp_hose_C, Placing) == 0x000371, "Member 'AProp_hose_C::Placing' has a wrong offset!");

}


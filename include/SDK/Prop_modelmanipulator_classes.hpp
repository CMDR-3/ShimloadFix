#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_modelmanipulator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_modelmanipulator.prop_modelmanipulator_C
// 0x0018 (0x0370 - 0x0358)
class AProp_modelmanipulator_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_modelmanipulator_C;            // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Prop;                                              // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Mesh;                                              // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_modelmanipulator(int32 EntryPoint);
	void PlayerHandUse_LMB(class AMainPlayer_C* Player);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_modelmanipulator_C">();
	}
	static class AProp_modelmanipulator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_modelmanipulator_C>();
	}
};
static_assert(alignof(AProp_modelmanipulator_C) == 0x000008, "Wrong alignment on AProp_modelmanipulator_C");
static_assert(sizeof(AProp_modelmanipulator_C) == 0x000370, "Wrong size on AProp_modelmanipulator_C");
static_assert(offsetof(AProp_modelmanipulator_C, UberGraphFrame_Prop_modelmanipulator_C) == 0x000358, "Member 'AProp_modelmanipulator_C::UberGraphFrame_Prop_modelmanipulator_C' has a wrong offset!");
static_assert(offsetof(AProp_modelmanipulator_C, Prop) == 0x000360, "Member 'AProp_modelmanipulator_C::Prop' has a wrong offset!");
static_assert(offsetof(AProp_modelmanipulator_C, Mesh) == 0x000368, "Member 'AProp_modelmanipulator_C::Mesh' has a wrong offset!");

}

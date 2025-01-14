#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_rug_c

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_rug_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_rug_c.prop_rug_c_C
// 0x0010 (0x0390 - 0x0380)
class AProp_rug_c_C final : public AProp_rug_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_rug_c_C;                       // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_rug_c(int32 EntryPoint);
	void SetSkin();
	void GamemodeBeginPlay();
	void ReceiveBeginPlay();
	void Player_use(class AMainPlayer_C* Player, const struct FHitResult& Hit_0);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_rug_c_C">();
	}
	static class AProp_rug_c_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_rug_c_C>();
	}
};
static_assert(alignof(AProp_rug_c_C) == 0x000008, "Wrong alignment on AProp_rug_c_C");
static_assert(sizeof(AProp_rug_c_C) == 0x000390, "Wrong size on AProp_rug_c_C");
static_assert(offsetof(AProp_rug_c_C, UberGraphFrame_Prop_rug_c_C) == 0x000380, "Member 'AProp_rug_c_C::UberGraphFrame_Prop_rug_c_C' has a wrong offset!");
static_assert(offsetof(AProp_rug_c_C, Dynmat) == 0x000388, "Member 'AProp_rug_c_C::Dynmat' has a wrong offset!");

}


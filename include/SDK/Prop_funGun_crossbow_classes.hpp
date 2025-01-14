#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_funGun_crossbow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_funGun_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_funGun_crossbow.prop_funGun_crossbow_C
// 0x0020 (0x0460 - 0x0440)
class AProp_funGun_crossbow_C final : public AProp_funGun_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_funGun_crossbow_C;             // 0x0440(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Nailmesh;                                          // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp;                                              // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_funGun_crossbow(int32 EntryPoint);
	void FireBulletPrimary();
	void Reloaded();
	void UpdateMag();
	void ReceiveBeginPlay();
	void Init();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_funGun_crossbow_C">();
	}
	static class AProp_funGun_crossbow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_funGun_crossbow_C>();
	}
};
static_assert(alignof(AProp_funGun_crossbow_C) == 0x000008, "Wrong alignment on AProp_funGun_crossbow_C");
static_assert(sizeof(AProp_funGun_crossbow_C) == 0x000460, "Wrong size on AProp_funGun_crossbow_C");
static_assert(offsetof(AProp_funGun_crossbow_C, UberGraphFrame_Prop_funGun_crossbow_C) == 0x000440, "Member 'AProp_funGun_crossbow_C::UberGraphFrame_Prop_funGun_crossbow_C' has a wrong offset!");
static_assert(offsetof(AProp_funGun_crossbow_C, Nailmesh) == 0x000448, "Member 'AProp_funGun_crossbow_C::Nailmesh' has a wrong offset!");
static_assert(offsetof(AProp_funGun_crossbow_C, Dynmat) == 0x000450, "Member 'AProp_funGun_crossbow_C::Dynmat' has a wrong offset!");
static_assert(offsetof(AProp_funGun_crossbow_C, Temp) == 0x000458, "Member 'AProp_funGun_crossbow_C::Temp' has a wrong offset!");

}


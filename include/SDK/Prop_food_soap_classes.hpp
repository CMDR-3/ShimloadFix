#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food_soap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_food_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_food_soap.prop_food_soap_C
// 0x0020 (0x03D0 - 0x03B0)
class AProp_food_soap_C final : public AProp_food_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_food_soap_C;                   // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Foam;                                              // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_food_soap(int32 EntryPoint);
	void Upd();
	void SteppedOn(class AMainPlayer_C* Player, const struct FHitResult& Hit_0);
	void Microwave();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_food_soap_C">();
	}
	static class AProp_food_soap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_food_soap_C>();
	}
};
static_assert(alignof(AProp_food_soap_C) == 0x000008, "Wrong alignment on AProp_food_soap_C");
static_assert(sizeof(AProp_food_soap_C) == 0x0003D0, "Wrong size on AProp_food_soap_C");
static_assert(offsetof(AProp_food_soap_C, UberGraphFrame_Prop_food_soap_C) == 0x0003B0, "Member 'AProp_food_soap_C::UberGraphFrame_Prop_food_soap_C' has a wrong offset!");
static_assert(offsetof(AProp_food_soap_C, Sphere) == 0x0003B8, "Member 'AProp_food_soap_C::Sphere' has a wrong offset!");
static_assert(offsetof(AProp_food_soap_C, StaticMesh1) == 0x0003C0, "Member 'AProp_food_soap_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(AProp_food_soap_C, Foam) == 0x0003C8, "Member 'AProp_food_soap_C::Foam' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_dodec

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_dodec.prop_dodec_C
// 0x0028 (0x0380 - 0x0358)
class AProp_dodec_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_dodec_C;                       // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Eff_doohickey;                                     // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Power;                                             // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Shoots;                                            // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsShooting;                                        // 0x0379(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Deactivate;                                        // 0x037A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37B[0x1];                                      // 0x037B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Anger;                                             // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_dodec(int32 EntryPoint);
	void StartFire();
	void Fire();
	void ReceiveTick(float DeltaSeconds);
	void Activate(bool IsActive_0);
	void FireDamage(float Damage);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_dodec_C">();
	}
	static class AProp_dodec_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_dodec_C>();
	}
};
static_assert(alignof(AProp_dodec_C) == 0x000008, "Wrong alignment on AProp_dodec_C");
static_assert(sizeof(AProp_dodec_C) == 0x000380, "Wrong size on AProp_dodec_C");
static_assert(offsetof(AProp_dodec_C, UberGraphFrame_Prop_dodec_C) == 0x000358, "Member 'AProp_dodec_C::UberGraphFrame_Prop_dodec_C' has a wrong offset!");
static_assert(offsetof(AProp_dodec_C, PointLight) == 0x000360, "Member 'AProp_dodec_C::PointLight' has a wrong offset!");
static_assert(offsetof(AProp_dodec_C, Eff_doohickey) == 0x000368, "Member 'AProp_dodec_C::Eff_doohickey' has a wrong offset!");
static_assert(offsetof(AProp_dodec_C, Power) == 0x000370, "Member 'AProp_dodec_C::Power' has a wrong offset!");
static_assert(offsetof(AProp_dodec_C, Shoots) == 0x000374, "Member 'AProp_dodec_C::Shoots' has a wrong offset!");
static_assert(offsetof(AProp_dodec_C, IsActive) == 0x000378, "Member 'AProp_dodec_C::IsActive' has a wrong offset!");
static_assert(offsetof(AProp_dodec_C, IsShooting) == 0x000379, "Member 'AProp_dodec_C::IsShooting' has a wrong offset!");
static_assert(offsetof(AProp_dodec_C, Deactivate) == 0x00037A, "Member 'AProp_dodec_C::Deactivate' has a wrong offset!");
static_assert(offsetof(AProp_dodec_C, Anger) == 0x00037C, "Member 'AProp_dodec_C::Anger' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_laserSensor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_wireComponent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_wireComponent_laserSensor.prop_wireComponent_laserSensor_C
// 0x0040 (0x03A0 - 0x0360)
class AProp_wireComponent_laserSensor_C final : public AProp_wireComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_wireComponent_laserSensor_C;   // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               beam;                                              // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AWire_C*>                        Wires;                                             // 0x0378(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         Length;                                            // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      Obj;                                               // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_prop_wireComponent_laserSensor(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void WirePass(class AWire_C* Wire);
	void WireDisconnected(class AWire_C* Wire, bool Side);
	void WireConnected(class AWire_C* Wire, bool Side);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_wireComponent_laserSensor_C">();
	}
	static class AProp_wireComponent_laserSensor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_wireComponent_laserSensor_C>();
	}
};
static_assert(alignof(AProp_wireComponent_laserSensor_C) == 0x000008, "Wrong alignment on AProp_wireComponent_laserSensor_C");
static_assert(sizeof(AProp_wireComponent_laserSensor_C) == 0x0003A0, "Wrong size on AProp_wireComponent_laserSensor_C");
static_assert(offsetof(AProp_wireComponent_laserSensor_C, UberGraphFrame_Prop_wireComponent_laserSensor_C) == 0x000360, "Member 'AProp_wireComponent_laserSensor_C::UberGraphFrame_Prop_wireComponent_laserSensor_C' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_laserSensor_C, beam) == 0x000368, "Member 'AProp_wireComponent_laserSensor_C::beam' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_laserSensor_C, Arrow) == 0x000370, "Member 'AProp_wireComponent_laserSensor_C::Arrow' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_laserSensor_C, Wires) == 0x000378, "Member 'AProp_wireComponent_laserSensor_C::Wires' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_laserSensor_C, Length) == 0x000388, "Member 'AProp_wireComponent_laserSensor_C::Length' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_laserSensor_C, Obj) == 0x000390, "Member 'AProp_wireComponent_laserSensor_C::Obj' has a wrong offset!");

}


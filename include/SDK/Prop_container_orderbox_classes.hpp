#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_container_orderbox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_container_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_container_orderbox.prop_container_orderbox_C
// 0x0008 (0x03E0 - 0x03D8)
class AProp_container_orderbox_C final : public AProp_container_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_container_orderbox_C;          // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_container_orderbox(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Player_use(class AMainPlayer_C* Player, const struct FHitResult& Hit_0);
	void broken();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_container_orderbox_C">();
	}
	static class AProp_container_orderbox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_container_orderbox_C>();
	}
};
static_assert(alignof(AProp_container_orderbox_C) == 0x000008, "Wrong alignment on AProp_container_orderbox_C");
static_assert(sizeof(AProp_container_orderbox_C) == 0x0003E0, "Wrong size on AProp_container_orderbox_C");
static_assert(offsetof(AProp_container_orderbox_C, UberGraphFrame_Prop_container_orderbox_C) == 0x0003D8, "Member 'AProp_container_orderbox_C::UberGraphFrame_Prop_container_orderbox_C' has a wrong offset!");

}


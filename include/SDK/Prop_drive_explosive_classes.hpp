#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_drive_explosive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_drive_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_drive_explosive.prop_drive_explosive_C
// 0x0008 (0x05C0 - 0x05B8)
class AProp_drive_explosive_C final : public AProp_drive_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_drive_explosive_C;             // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_drive_explosive(int32 EntryPoint);
	void Exported();
	void Imported();
	void broken();
	void PhysPreDestroyed();
	void PhysDestroyed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_drive_explosive_C">();
	}
	static class AProp_drive_explosive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_drive_explosive_C>();
	}
};
static_assert(alignof(AProp_drive_explosive_C) == 0x000008, "Wrong alignment on AProp_drive_explosive_C");
static_assert(sizeof(AProp_drive_explosive_C) == 0x0005C0, "Wrong size on AProp_drive_explosive_C");
static_assert(offsetof(AProp_drive_explosive_C, UberGraphFrame_Prop_drive_explosive_C) == 0x0005B8, "Member 'AProp_drive_explosive_C::UberGraphFrame_Prop_drive_explosive_C' has a wrong offset!");

}


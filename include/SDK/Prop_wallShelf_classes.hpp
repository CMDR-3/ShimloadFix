#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wallShelf

#include "Basic.hpp"

#include "Prop_wallAttachable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_wallShelf.prop_wallShelf_C
// 0x0000 (0x03F0 - 0x03F0)
class AProp_wallShelf_C final : public AProp_wallAttachable_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_wallShelf_C">();
	}
	static class AProp_wallShelf_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_wallShelf_C>();
	}
};
static_assert(alignof(AProp_wallShelf_C) == 0x000010, "Wrong alignment on AProp_wallShelf_C");
static_assert(sizeof(AProp_wallShelf_C) == 0x0003F0, "Wrong size on AProp_wallShelf_C");

}


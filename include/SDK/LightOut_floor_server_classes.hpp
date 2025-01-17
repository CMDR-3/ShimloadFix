#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LightOut_floor_server

#include "Basic.hpp"

#include "LightOut_floor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass lightOut_floor_server.lightOut_floor_server_C
// 0x0000 (0x02C8 - 0x02C8)
class ALightOut_floor_server_C final : public ALightOut_floor_C
{
public:
	void SetVis();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"lightOut_floor_server_C">();
	}
	static class ALightOut_floor_server_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALightOut_floor_server_C>();
	}
};
static_assert(alignof(ALightOut_floor_server_C) == 0x000008, "Wrong alignment on ALightOut_floor_server_C");
static_assert(sizeof(ALightOut_floor_server_C) == 0x0002C8, "Wrong size on ALightOut_floor_server_C");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_openContainer_scrapbox

#include "Basic.hpp"

#include "Prop_openContainer_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_openContainer_scrapbox.prop_openContainer_scrapbox_C
// 0x0040 (0x03C0 - 0x0380)
class AProp_openContainer_scrapbox_C final : public AProp_openContainer_C
{
public:
	class USphereComponent*                       Coll_wh4;                                          // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wh4;                                               // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Coll_wh3;                                          // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wh3;                                               // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Coll_wh2;                                          // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wh2;                                               // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Coll_wh1;                                          // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wh1;                                               // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_openContainer_scrapbox_C">();
	}
	static class AProp_openContainer_scrapbox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_openContainer_scrapbox_C>();
	}
};
static_assert(alignof(AProp_openContainer_scrapbox_C) == 0x000008, "Wrong alignment on AProp_openContainer_scrapbox_C");
static_assert(sizeof(AProp_openContainer_scrapbox_C) == 0x0003C0, "Wrong size on AProp_openContainer_scrapbox_C");
static_assert(offsetof(AProp_openContainer_scrapbox_C, Coll_wh4) == 0x000380, "Member 'AProp_openContainer_scrapbox_C::Coll_wh4' has a wrong offset!");
static_assert(offsetof(AProp_openContainer_scrapbox_C, Wh4) == 0x000388, "Member 'AProp_openContainer_scrapbox_C::Wh4' has a wrong offset!");
static_assert(offsetof(AProp_openContainer_scrapbox_C, Coll_wh3) == 0x000390, "Member 'AProp_openContainer_scrapbox_C::Coll_wh3' has a wrong offset!");
static_assert(offsetof(AProp_openContainer_scrapbox_C, Wh3) == 0x000398, "Member 'AProp_openContainer_scrapbox_C::Wh3' has a wrong offset!");
static_assert(offsetof(AProp_openContainer_scrapbox_C, Coll_wh2) == 0x0003A0, "Member 'AProp_openContainer_scrapbox_C::Coll_wh2' has a wrong offset!");
static_assert(offsetof(AProp_openContainer_scrapbox_C, Wh2) == 0x0003A8, "Member 'AProp_openContainer_scrapbox_C::Wh2' has a wrong offset!");
static_assert(offsetof(AProp_openContainer_scrapbox_C, Coll_wh1) == 0x0003B0, "Member 'AProp_openContainer_scrapbox_C::Coll_wh1' has a wrong offset!");
static_assert(offsetof(AProp_openContainer_scrapbox_C, Wh1) == 0x0003B8, "Member 'AProp_openContainer_scrapbox_C::Wh1' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_tv

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_tv.prop_tv_C.ExecuteUbergraph_prop_tv
// 0x00B8 (0x00B8 - 0x0000)
struct Prop_tv_C_ExecuteUbergraph_prop_tv final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUmg_tvInterface_C*                     CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0018(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player;              // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_setActiveInterface_return;                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_tv_C_ExecuteUbergraph_prop_tv) == 0x000008, "Wrong alignment on Prop_tv_C_ExecuteUbergraph_prop_tv");
static_assert(sizeof(Prop_tv_C_ExecuteUbergraph_prop_tv) == 0x0000B8, "Wrong size on Prop_tv_C_ExecuteUbergraph_prop_tv");
static_assert(offsetof(Prop_tv_C_ExecuteUbergraph_prop_tv, EntryPoint) == 0x000000, "Member 'Prop_tv_C_ExecuteUbergraph_prop_tv::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_tv_C_ExecuteUbergraph_prop_tv, CallFunc_Create_ReturnValue) == 0x000008, "Member 'Prop_tv_C_ExecuteUbergraph_prop_tv::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_tv_C_ExecuteUbergraph_prop_tv, K2Node_Event_player) == 0x000010, "Member 'Prop_tv_C_ExecuteUbergraph_prop_tv::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_tv_C_ExecuteUbergraph_prop_tv, K2Node_Event_hit) == 0x000018, "Member 'Prop_tv_C_ExecuteUbergraph_prop_tv::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_tv_C_ExecuteUbergraph_prop_tv, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0000A0, "Member 'Prop_tv_C_ExecuteUbergraph_prop_tv::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_tv_C_ExecuteUbergraph_prop_tv, CallFunc_getMainPlayer_AsMain_Player) == 0x0000A8, "Member 'Prop_tv_C_ExecuteUbergraph_prop_tv::CallFunc_getMainPlayer_AsMain_Player' has a wrong offset!");
static_assert(offsetof(Prop_tv_C_ExecuteUbergraph_prop_tv, CallFunc_setActiveInterface_return) == 0x0000B0, "Member 'Prop_tv_C_ExecuteUbergraph_prop_tv::CallFunc_setActiveInterface_return' has a wrong offset!");

// Function prop_tv.prop_tv_C.player_use
// 0x0090 (0x0090 - 0x0000)
struct Prop_tv_C_Player_use final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit_0;                                             // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_tv_C_Player_use) == 0x000008, "Wrong alignment on Prop_tv_C_Player_use");
static_assert(sizeof(Prop_tv_C_Player_use) == 0x000090, "Wrong size on Prop_tv_C_Player_use");
static_assert(offsetof(Prop_tv_C_Player_use, Player) == 0x000000, "Member 'Prop_tv_C_Player_use::Player' has a wrong offset!");
static_assert(offsetof(Prop_tv_C_Player_use, Hit_0) == 0x000008, "Member 'Prop_tv_C_Player_use::Hit_0' has a wrong offset!");

}

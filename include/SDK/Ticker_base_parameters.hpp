#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ticker_base

#include "Basic.hpp"


namespace SDK::Params
{

// Function ticker_base.ticker_base_C.ExecuteUbergraph_ticker_base
// 0x0010 (0x0010 - 0x0000)
struct Ticker_base_C_ExecuteUbergraph_ticker_base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ticker_base_C_ExecuteUbergraph_ticker_base) == 0x000008, "Wrong alignment on Ticker_base_C_ExecuteUbergraph_ticker_base");
static_assert(sizeof(Ticker_base_C_ExecuteUbergraph_ticker_base) == 0x000010, "Wrong size on Ticker_base_C_ExecuteUbergraph_ticker_base");
static_assert(offsetof(Ticker_base_C_ExecuteUbergraph_ticker_base, EntryPoint) == 0x000000, "Member 'Ticker_base_C_ExecuteUbergraph_ticker_base::EntryPoint' has a wrong offset!");
static_assert(offsetof(Ticker_base_C_ExecuteUbergraph_ticker_base, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000008, "Member 'Ticker_base_C_ExecuteUbergraph_ticker_base::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");

}


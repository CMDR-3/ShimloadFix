#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_poog

#include "Basic.hpp"

#include "Prop_poog_classes.hpp"
#include "Prop_poog_parameters.hpp"


namespace SDK
{

// Function prop_poog.prop_poog_C.ExecuteUbergraph_prop_poog
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_poog_C::ExecuteUbergraph_prop_poog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_poog_C", "ExecuteUbergraph_prop_poog");

	Params::Prop_poog_C_ExecuteUbergraph_prop_poog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_poog.prop_poog_C.playerHandUse_LMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_poog_C::PlayerHandUse_LMB(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_poog_C", "playerHandUse_LMB");

	Params::Prop_poog_C_PlayerHandUse_LMB Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_kitchenKnife

#include "Basic.hpp"

#include "Prop_kitchenKnife_classes.hpp"
#include "Prop_kitchenKnife_parameters.hpp"


namespace SDK
{

// Function prop_kitchenKnife.prop_kitchenKnife_C.ExecuteUbergraph_prop_kitchenKnife
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_kitchenKnife_C::ExecuteUbergraph_prop_kitchenKnife(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_kitchenKnife_C", "ExecuteUbergraph_prop_kitchenKnife");

	Params::Prop_kitchenKnife_C_ExecuteUbergraph_prop_kitchenKnife Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_kitchenKnife.prop_kitchenKnife_C.playerHandUse_LMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_kitchenKnife_C::PlayerHandUse_LMB(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_kitchenKnife_C", "playerHandUse_LMB");

	Params::Prop_kitchenKnife_C_PlayerHandUse_LMB Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_kitchenKnife.prop_kitchenKnife_C.playerHandUse_RMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_kitchenKnife_C::PlayerHandUse_RMB(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_kitchenKnife_C", "playerHandUse_RMB");

	Params::Prop_kitchenKnife_C_PlayerHandUse_RMB Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}

}

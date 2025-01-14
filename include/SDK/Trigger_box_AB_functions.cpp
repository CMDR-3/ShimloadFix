#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_box_AB

#include "Basic.hpp"

#include "Trigger_box_AB_classes.hpp"
#include "Trigger_box_AB_parameters.hpp"


namespace SDK
{

// Function trigger_box_AB.trigger_box_AB_C.checkForFriend
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ATrigger_box_AB_C::CheckForFriend()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_box_AB_C", "checkForFriend");

	Params::Trigger_box_AB_C_CheckForFriend Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


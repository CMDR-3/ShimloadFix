#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewBlueprint

#include "Basic.hpp"

#include "NewBlueprint_classes.hpp"


namespace SDK
{

// Function NewBlueprint.NewBlueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANewBlueprint_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}


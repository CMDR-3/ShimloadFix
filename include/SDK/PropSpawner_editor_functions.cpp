#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PropSpawner_editor

#include "Basic.hpp"

#include "PropSpawner_editor_classes.hpp"
#include "PropSpawner_editor_parameters.hpp"


namespace SDK
{

// Function propSpawner_editor.propSpawner_editor_C.ExecuteUbergraph_propSpawner_editor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APropSpawner_editor_C::ExecuteUbergraph_propSpawner_editor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("propSpawner_editor_C", "ExecuteUbergraph_propSpawner_editor");

	Params::PropSpawner_editor_C_ExecuteUbergraph_propSpawner_editor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function propSpawner_editor.propSpawner_editor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APropSpawner_editor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("propSpawner_editor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function propSpawner_editor.propSpawner_editor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APropSpawner_editor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("propSpawner_editor_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function propSpawner_editor.propSpawner_editor_C.Spawn
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OutputPin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APropSpawner_editor_C::Spawn(class AActor** OutputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("propSpawner_editor_C", "Spawn");

	Params::PropSpawner_editor_C_Spawn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = Parms.OutputPin;
}


// Function propSpawner_editor.propSpawner_editor_C.despawn
// (Public, BlueprintCallable, BlueprintEvent)

void APropSpawner_editor_C::Despawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("propSpawner_editor_C", "despawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function propSpawner_editor.propSpawner_editor_C.spawn_treehouse
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATreehouse_C*                     Treehouse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OutputPin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APropSpawner_editor_C::Spawn_treehouse(class ATreehouse_C* Treehouse, class AActor** OutputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("propSpawner_editor_C", "spawn_treehouse");

	Params::PropSpawner_editor_C_Spawn_treehouse Parms{};

	Parms.Treehouse = Treehouse;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = Parms.OutputPin;
}

}


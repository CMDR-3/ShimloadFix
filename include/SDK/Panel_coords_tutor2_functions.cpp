#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Panel_coords_tutor2

#include "Basic.hpp"

#include "Panel_coords_tutor2_classes.hpp"
#include "Panel_coords_tutor2_parameters.hpp"


namespace SDK
{

// Function panel_coords_tutor2.panel_coords_tutor2_C.ExecuteUbergraph_panel_coords_tutor2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APanel_coords_tutor2_C::ExecuteUbergraph_panel_coords_tutor2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("panel_coords_tutor2_C", "ExecuteUbergraph_panel_coords_tutor2");

	Params::Panel_coords_tutor2_C_ExecuteUbergraph_panel_coords_tutor2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function panel_coords_tutor2.panel_coords_tutor2_C.speak
// (BlueprintCallable, BlueprintEvent)

void APanel_coords_tutor2_C::Speak()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("panel_coords_tutor2_C", "speak");

	UObject::ProcessEvent(Func, nullptr);
}


// Function panel_coords_tutor2.panel_coords_tutor2_C.dishs
// (BlueprintCallable, BlueprintEvent)

void APanel_coords_tutor2_C::Dishs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("panel_coords_tutor2_C", "dishs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function panel_coords_tutor2.panel_coords_tutor2_C.gamemodeBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void APanel_coords_tutor2_C::GamemodeBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("panel_coords_tutor2_C", "gamemodeBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function panel_coords_tutor2.panel_coords_tutor2_C.pressedPanel
// (Public, BlueprintCallable, BlueprintEvent)

void APanel_coords_tutor2_C::PressedPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("panel_coords_tutor2_C", "pressedPanel");

	UObject::ProcessEvent(Func, nullptr);
}

}

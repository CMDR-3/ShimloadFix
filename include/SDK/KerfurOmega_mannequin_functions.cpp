#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KerfurOmega_mannequin

#include "Basic.hpp"

#include "KerfurOmega_mannequin_classes.hpp"
#include "KerfurOmega_mannequin_parameters.hpp"


namespace SDK
{

// Function kerfurOmega_mannequin.kerfurOmega_mannequin_C.SetStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Contrcut                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKerfurOmega_mannequin_C::SetStyle(bool Contrcut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("kerfurOmega_mannequin_C", "SetStyle");

	Params::KerfurOmega_mannequin_C_SetStyle Parms{};

	Parms.Contrcut = Contrcut;

	UObject::ProcessEvent(Func, &Parms);
}


// Function kerfurOmega_mannequin.kerfurOmega_mannequin_C.makeFace
// (Public, BlueprintCallable, BlueprintEvent)

void AKerfurOmega_mannequin_C::MakeFace()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("kerfurOmega_mannequin_C", "makeFace");

	UObject::ProcessEvent(Func, nullptr);
}

}


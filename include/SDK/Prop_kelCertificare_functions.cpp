#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_kelCertificare

#include "Basic.hpp"

#include "Prop_kelCertificare_classes.hpp"
#include "Prop_kelCertificare_parameters.hpp"


namespace SDK
{

// Function prop_kelCertificare.prop_kelCertificare_C.ExecuteUbergraph_prop_kelCertificare
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_kelCertificare_C::ExecuteUbergraph_prop_kelCertificare(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_kelCertificare_C", "ExecuteUbergraph_prop_kelCertificare");

	Params::Prop_kelCertificare_C_ExecuteUbergraph_prop_kelCertificare Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_kelCertificare.prop_kelCertificare_C.actionOptionIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// Enum_interactionActions                 Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_kelCertificare_C::ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_kelCertificare_C", "actionOptionIndex");

	Params::Prop_kelCertificare_C_ActionOptionIndex Parms{};

	Parms.Player = Player;
	Parms.Hit_0 = std::move(Hit_0);
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}

}

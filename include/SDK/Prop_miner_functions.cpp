#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_miner

#include "Basic.hpp"

#include "Prop_miner_classes.hpp"
#include "Prop_miner_parameters.hpp"


namespace SDK
{

// Function prop_miner.prop_miner_C.ExecuteUbergraph_prop_miner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_miner_C::ExecuteUbergraph_prop_miner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "ExecuteUbergraph_prop_miner");

	Params::Prop_miner_C_ExecuteUbergraph_prop_miner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_miner.prop_miner_C.cordUnplugged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACord_C*                          Cord_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACordSocket_C*                    Socket                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_miner_C::CordUnplugged(class ACord_C* Cord_0, class ACordSocket_C* Socket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "cordUnplugged");

	Params::Prop_miner_C_CordUnplugged Parms{};

	Parms.Cord_0 = Cord_0;
	Parms.Socket = Socket;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_miner.prop_miner_C.cordPlugged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACord_C*                          Cord_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACordSocket_C*                    Socket                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_miner_C::CordPlugged(class ACord_C* Cord_0, class ACordSocket_C* Socket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "cordPlugged");

	Params::Prop_miner_C_CordPlugged Parms{};

	Parms.Cord_0 = Cord_0;
	Parms.Socket = Socket;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_miner.prop_miner_C.actionOptionIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// Enum_interactionActions                 Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_miner_C::ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "actionOptionIndex");

	Params::Prop_miner_C_ActionOptionIndex Parms{};

	Parms.Player = Player;
	Parms.Hit_0 = std::move(Hit_0);
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_miner.prop_miner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_miner_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "ReceiveTick");

	Params::Prop_miner_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_miner.prop_miner_C.setActiveTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SentFrom                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_miner_C::SetActiveTrigger(class AActor* SentFrom, bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "setActiveTrigger");

	Params::Prop_miner_C_SetActiveTrigger Parms{};

	Parms.SentFrom = SentFrom;
	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_miner.prop_miner_C.set_ignoreSave_trigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_miner_C::Set_ignoreSave_trigger(bool NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "set_ignoreSave_trigger");

	Params::Prop_miner_C_Set_ignoreSave_trigger Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_miner.prop_miner_C.runTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Owner_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_miner_C::RunTrigger(class AActor* Owner_0, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "runTrigger");

	Params::Prop_miner_C_RunTrigger Parms{};

	Parms.Owner_0 = Owner_0;
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_miner.prop_miner_C.upd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProp_miner_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_miner.prop_miner_C.calc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_miner_C::Calc(float Delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "calc");

	Params::Prop_miner_C_Calc Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_miner.prop_miner_C.upgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Upgrade_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_miner_C::Upgrade(class FName Upgrade_0, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "upgrade");

	Params::Prop_miner_C_Upgrade Parms{};

	Parms.Upgrade_0 = Upgrade_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function prop_miner.prop_miner_C.plugged
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_miner_C::Plugged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "plugged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_miner.prop_miner_C.ignoreSave_trigger
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ignore                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_miner_C::IgnoreSave_trigger(bool* Ignore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "ignoreSave_trigger");

	Params::Prop_miner_C_IgnoreSave_trigger Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ignore != nullptr)
		*Ignore = Parms.Ignore;
}


// Function prop_miner.prop_miner_C.loadTriggerData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_triggerSave              Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_miner_C::LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "loadTriggerData");

	Params::Prop_miner_C_LoadTriggerData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function prop_miner.prop_miner_C.getTriggerData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_triggerSave              Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AProp_miner_C::GetTriggerData(struct FStruct_triggerSave* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "getTriggerData");

	Params::Prop_miner_C_GetTriggerData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function prop_miner.prop_miner_C.gatherDataFromKeyT
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Gather                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_miner_C::GatherDataFromKeyT(bool* Gather)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "gatherDataFromKeyT");

	Params::Prop_miner_C_GatherDataFromKeyT Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Gather != nullptr)
		*Gather = Parms.Gather;
}


// Function prop_miner.prop_miner_C.fireDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_miner_C::FireDamage(float Damage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "fireDamage");

	Params::Prop_miner_C_FireDamage Parms{};

	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_miner.prop_miner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_miner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_miner.prop_miner_C.broken
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_miner_C::broken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "broken");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_miner.prop_miner_C.playerUsedOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProp_miner_C::PlayerUsedOn(class AMainPlayer_C* Player, const struct FHitResult& Hit_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "playerUsedOn");

	Params::Prop_miner_C_PlayerUsedOn Parms{};

	Parms.Player = Player;
	Parms.Hit_0 = std::move(Hit_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_miner.prop_miner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_miner_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_miner.prop_miner_C.loadData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_miner_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "loadData");

	Params::Prop_miner_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function prop_miner.prop_miner_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AProp_miner_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "getData");

	Params::Prop_miner_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function prop_miner.prop_miner_C.lookAt
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Text                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              boundObjectReplace                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   Number                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_miner_C::LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "lookAt");

	Params::Prop_miner_C_LookAt Parms{};

	Parms.Player = Player;
	Parms.Hit_0 = std::move(Hit_0);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

	if (boundObjectReplace != nullptr)
		*boundObjectReplace = Parms.boundObjectReplace;

	if (Number != nullptr)
		*Number = Parms.Number;
}


// Function prop_miner.prop_miner_C.getActionOptions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   Options                                                (Parm, OutParm)
// TArray<Enum_interactionActions>         Options_enum                                           (Parm, OutParm)
// TArray<class FText>                     OptionsNamesOverlay                                    (Parm, OutParm)
// uint8                                   Number                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_miner_C::GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_miner_C", "getActionOptions");

	Params::Prop_miner_C_GetActionOptions Parms{};

	Parms.Player = Player;
	Parms.Component = Component;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (Options != nullptr)
		*Options = std::move(Parms.Options);

	if (Options_enum != nullptr)
		*Options_enum = std::move(Parms.Options_enum);

	if (OptionsNamesOverlay != nullptr)
		*OptionsNamesOverlay = std::move(Parms.OptionsNamesOverlay);

	if (Number != nullptr)
		*Number = Parms.Number;
}

}


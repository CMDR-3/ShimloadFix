#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PowerControl

#include "Basic.hpp"

#include "PowerControl_classes.hpp"
#include "PowerControl_parameters.hpp"


namespace SDK
{

// Function powerControl.powerControl_C.ExecuteUbergraph_powerControl
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APowerControl_C::ExecuteUbergraph_powerControl(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "ExecuteUbergraph_powerControl");

	Params::PowerControl_C_ExecuteUbergraph_powerControl Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function powerControl.powerControl_C.moveLevers
// (BlueprintCallable, BlueprintEvent)

void APowerControl_C::MoveLevers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "moveLevers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function powerControl.powerControl_C.actionOptionIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// Enum_interactionActions                 Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APowerControl_C::ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit, Enum_interactionActions Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "actionOptionIndex");

	Params::PowerControl_C_ActionOptionIndex Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function powerControl.powerControl_C.virus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Activate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APowerControl_C::Virus(bool Activate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "virus");

	Params::PowerControl_C_Virus Parms{};

	Parms.Activate = Activate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function powerControl.powerControl_C.virus_pb
// (BlueprintCallable, BlueprintEvent)

void APowerControl_C::Virus_pb()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "virus_pb");

	UObject::ProcessEvent(Func, nullptr);
}


// Function powerControl.powerControl_C.powerChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active_calc                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Active_downl                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Active_coords                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Active_play                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Active_light                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APowerControl_C::PowerChanged(bool Active_calc, bool Active_downl, bool Active_coords, bool Active_play, bool Active_light)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "powerChanged");

	Params::PowerControl_C_PowerChanged Parms{};

	Parms.Active_calc = Active_calc;
	Parms.Active_downl = Active_downl;
	Parms.Active_coords = Active_coords;
	Parms.Active_play = Active_play;
	Parms.Active_light = Active_light;

	UObject::ProcessEvent(Func, &Parms);
}


// Function powerControl.powerControl_C.gamemodeBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void APowerControl_C::GamemodeBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "gamemodeBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function powerControl.powerControl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APowerControl_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function powerControl.powerControl_C.playerR
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APowerControl_C::PlayerR(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "playerR");

	Params::PowerControl_C_PlayerR Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function powerControl.powerControl_C.playerHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APowerControl_C::PlayerHold(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "playerHold");

	Params::PowerControl_C_PlayerHold Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function powerControl.powerControl_C.playerUnequip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APowerControl_C::PlayerUnequip(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "playerUnequip");

	Params::PowerControl_C_PlayerUnequip Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function powerControl.powerControl_C.updateStrAgl
// (Public, BlueprintCallable, BlueprintEvent)

void APowerControl_C::UpdateStrAgl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "updateStrAgl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function powerControl.powerControl_C.damageByPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APowerControl_C::DamageByPlayer(class AMainPlayer_C* Player, const struct FHitResult& Hit, float Damage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "damageByPlayer");

	Params::PowerControl_C_DamageByPlayer Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);
	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function powerControl.powerControl_C.thrown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APowerControl_C::Thrown(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "thrown");

	Params::PowerControl_C_Thrown Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function powerControl.powerControl_C.broken_fire
// (Public, BlueprintCallable, BlueprintEvent)

void APowerControl_C::broken_fire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "broken_fire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function powerControl.powerControl_C.broken
// (Public, BlueprintCallable, BlueprintEvent)

void APowerControl_C::broken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "broken");

	UObject::ProcessEvent(Func, nullptr);
}


// Function powerControl.powerControl_C.sendName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Name_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APowerControl_C::SendName(class FName Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "sendName");

	Params::PowerControl_C_SendName Parms{};

	Parms.Name_0 = Name_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function powerControl.powerControl_C.kicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Kick                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APowerControl_C::Kicked(bool Kick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "kicked");

	Params::PowerControl_C_Kicked Parms{};

	Parms.Kick = Kick;

	UObject::ProcessEvent(Func, &Parms);
}


// Function powerControl.powerControl_C.player_use
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APowerControl_C::Player_use(class AMainPlayer_C* Player, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "player_use");

	Params::PowerControl_C_Player_use Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function powerControl.powerControl_C.driveDetached
// (Public, BlueprintCallable, BlueprintEvent)

void APowerControl_C::DriveDetached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "driveDetached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function powerControl.powerControl_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APowerControl_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function powerControl.powerControl_C.buttonsVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void APowerControl_C::buttonsVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "buttonsVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function powerControl.powerControl_C.playSND
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Activated                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APowerControl_C::PlaySND(bool Activated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "playSND");

	Params::PowerControl_C_PlaySND Parms{};

	Parms.Activated = Activated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function powerControl.powerControl_C.solar
// (Public, BlueprintCallable, BlueprintEvent)

void APowerControl_C::Solar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "solar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function powerControl.powerControl_C.dreamInv
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStruct_save>             Invv                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ADreamBase_C*                     Base                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APowerControl_C::DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "dreamInv");

	Params::PowerControl_C_DreamInv Parms{};

	Parms.Invv = std::move(Invv);

	UObject::ProcessEvent(Func, &Parms);

	Invv = std::move(Parms.Invv);

	if (Base != nullptr)
		*Base = Parms.Base;
}


// Function powerControl.powerControl_C.loadTriggerData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_triggerSave              Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APowerControl_C::LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "loadTriggerData");

	Params::PowerControl_C_LoadTriggerData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function powerControl.powerControl_C.getTriggerData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_triggerSave              Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void APowerControl_C::GetTriggerData(struct FStruct_triggerSave* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "getTriggerData");

	Params::PowerControl_C_GetTriggerData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function powerControl.powerControl_C.processKeys
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APowerControl_C::ProcessKeys(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "processKeys");

	Params::PowerControl_C_ProcessKeys Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function powerControl.powerControl_C.sendPower
// (Public, BlueprintCallable, BlueprintEvent)

void APowerControl_C::SendPower()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "sendPower");

	UObject::ProcessEvent(Func, nullptr);
}


// Function powerControl.powerControl_C.getActionOptions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   Options                                                (Parm, OutParm)
// TArray<Enum_interactionActions>         Options_enum                                           (Parm, OutParm)
// TArray<class FText>                     OptionsNamesOverlay                                    (Parm, OutParm)
// uint8                                   Number                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APowerControl_C::GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "getActionOptions");

	Params::PowerControl_C_GetActionOptions Parms{};

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


// Function powerControl.powerControl_C.isButtonUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Failed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APowerControl_C::IsButtonUsed(bool* Failed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "isButtonUsed");

	Params::PowerControl_C_IsButtonUsed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Failed != nullptr)
		*Failed = Parms.Failed;
}


// Function powerControl.powerControl_C.lookAt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Text                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              boundObjectReplace                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   Number                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APowerControl_C::LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "lookAt");

	Params::PowerControl_C_LookAt Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);

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


// Function powerControl.powerControl_C.noRespawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NoRespawn_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APowerControl_C::NoRespawn(bool NoRespawn_0, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "noRespawn");

	Params::PowerControl_C_NoRespawn Parms{};

	Parms.NoRespawn_0 = NoRespawn_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function powerControl.powerControl_C.canPickup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APowerControl_C::CanPickup(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "canPickup");

	Params::PowerControl_C_CanPickup Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function powerControl.powerControl_C.asProp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProp_C*                          Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APowerControl_C::AsProp(class AProp_C** Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "asProp");

	Params::PowerControl_C_AsProp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function powerControl.powerControl_C.canBePutInContainer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APowerControl_C::CanBePutInContainer(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "canBePutInContainer");

	Params::PowerControl_C_CanBePutInContainer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function powerControl.powerControl_C.landedOn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IgnoreFallDamage                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APowerControl_C::LandedOn(class AMainPlayer_C* Player, bool* IgnoreFallDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("powerControl_C", "landedOn");

	Params::PowerControl_C_LandedOn Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (IgnoreFallDamage != nullptr)
		*IgnoreFallDamage = Parms.IgnoreFallDamage;
}

}


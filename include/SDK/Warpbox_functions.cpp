#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Warpbox

#include "Basic.hpp"

#include "Warpbox_classes.hpp"
#include "Warpbox_parameters.hpp"


namespace SDK
{

// Function warpbox.warpbox_C.dreamInv
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStruct_save>             Invv                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ADreamBase_C*                     Base                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "dreamInv");

	Params::Warpbox_C_DreamInv Parms{};

	Parms.Invv = std::move(Invv);

	UObject::ProcessEvent(Func, &Parms);

	Invv = std::move(Parms.Invv);

	if (Base != nullptr)
		*Base = Parms.Base;
}


// Function warpbox.warpbox_C.landedOn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IgnoreFallDamage                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWarpbox_C::LandedOn(class AMainPlayer_C* Player, bool* IgnoreFallDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "landedOn");

	Params::Warpbox_C_LandedOn Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (IgnoreFallDamage != nullptr)
		*IgnoreFallDamage = Parms.IgnoreFallDamage;
}


// Function warpbox.warpbox_C.canBePutInContainer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWarpbox_C::CanBePutInContainer(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "canBePutInContainer");

	Params::Warpbox_C_CanBePutInContainer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function warpbox.warpbox_C.isButtonUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Failed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWarpbox_C::IsButtonUsed(bool* Failed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "isButtonUsed");

	Params::Warpbox_C_IsButtonUsed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Failed != nullptr)
		*Failed = Parms.Failed;
}


// Function warpbox.warpbox_C.lookAt
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Text                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              boundObjectReplace                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   Number                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "lookAt");

	Params::Warpbox_C_LookAt Parms{};

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


// Function warpbox.warpbox_C.noRespawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NoRespawn_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWarpbox_C::NoRespawn(bool NoRespawn_0, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "noRespawn");

	Params::Warpbox_C_NoRespawn Parms{};

	Parms.NoRespawn_0 = NoRespawn_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function warpbox.warpbox_C.canPickup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWarpbox_C::CanPickup(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "canPickup");

	Params::Warpbox_C_CanPickup Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function warpbox.warpbox_C.asProp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProp_C*                          Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::AsProp(class AProp_C** Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "asProp");

	Params::Warpbox_C_AsProp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function warpbox.warpbox_C.getActionOptions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   Options                                                (Parm, OutParm)
// TArray<Enum_interactionActions>         Options_enum                                           (Parm, OutParm)
// TArray<class FText>                     OptionsNamesOverlay                                    (Parm, OutParm)
// uint8                                   Number                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "getActionOptions");

	Params::Warpbox_C_GetActionOptions Parms{};

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


// Function warpbox.warpbox_C.form
// (Public, BlueprintCallable, BlueprintEvent)

void AWarpbox_C::Form()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "form");

	UObject::ProcessEvent(Func, nullptr);
}


// Function warpbox.warpbox_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AWarpbox_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "getData");

	Params::Warpbox_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function warpbox.warpbox_C.PlaySound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       NewSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::PlaySound(class USoundBase* NewSound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "PlaySound");

	Params::Warpbox_C_PlaySound Parms{};

	Parms.NewSound = NewSound;

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.loadData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWarpbox_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "loadData");

	Params::Warpbox_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function warpbox.warpbox_C.upd
// (Public, BlueprintCallable, BlueprintEvent)

void AWarpbox_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function warpbox.warpbox_C.getPortal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APortal_C*                        Portal_obj_0                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::GetPortal(class APortal_C** Portal_obj_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "getPortal");

	Params::Warpbox_C_GetPortal Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Portal_obj_0 != nullptr)
		*Portal_obj_0 = Parms.Portal_obj_0;
}


// Function warpbox.warpbox_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWarpbox_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function warpbox.warpbox_C.OnNotifyEnd_7D39BA3C4D76CB4B48378FA14DE88C03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::OnNotifyEnd_7D39BA3C4D76CB4B48378FA14DE88C03(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "OnNotifyEnd_7D39BA3C4D76CB4B48378FA14DE88C03");

	Params::Warpbox_C_OnNotifyEnd_7D39BA3C4D76CB4B48378FA14DE88C03 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.OnNotifyBegin_7D39BA3C4D76CB4B48378FA14DE88C03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::OnNotifyBegin_7D39BA3C4D76CB4B48378FA14DE88C03(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "OnNotifyBegin_7D39BA3C4D76CB4B48378FA14DE88C03");

	Params::Warpbox_C_OnNotifyBegin_7D39BA3C4D76CB4B48378FA14DE88C03 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.OnInterrupted_7D39BA3C4D76CB4B48378FA14DE88C03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::OnInterrupted_7D39BA3C4D76CB4B48378FA14DE88C03(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "OnInterrupted_7D39BA3C4D76CB4B48378FA14DE88C03");

	Params::Warpbox_C_OnInterrupted_7D39BA3C4D76CB4B48378FA14DE88C03 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.OnBlendOut_7D39BA3C4D76CB4B48378FA14DE88C03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::OnBlendOut_7D39BA3C4D76CB4B48378FA14DE88C03(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "OnBlendOut_7D39BA3C4D76CB4B48378FA14DE88C03");

	Params::Warpbox_C_OnBlendOut_7D39BA3C4D76CB4B48378FA14DE88C03 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.OnCompleted_7D39BA3C4D76CB4B48378FA14DE88C03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::OnCompleted_7D39BA3C4D76CB4B48378FA14DE88C03(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "OnCompleted_7D39BA3C4D76CB4B48378FA14DE88C03");

	Params::Warpbox_C_OnCompleted_7D39BA3C4D76CB4B48378FA14DE88C03 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.signalDeleted
// (Public, BlueprintCallable, BlueprintEvent)

void AWarpbox_C::SignalDeleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "signalDeleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function warpbox.warpbox_C.signalSaved
// (Public, BlueprintCallable, BlueprintEvent)

void AWarpbox_C::SignalSaved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "signalSaved");

	UObject::ProcessEvent(Func, nullptr);
}


// Function warpbox.warpbox_C.stuffUpgraded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainGamemode_C*                  GameMode_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::StuffUpgraded(class AMainGamemode_C* GameMode_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "stuffUpgraded");

	Params::Warpbox_C_StuffUpgraded Parms{};

	Parms.GameMode_0 = GameMode_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.unfoc
// (Public, BlueprintCallable, BlueprintEvent)

void AWarpbox_C::Unfoc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "unfoc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function warpbox.warpbox_C.unfocused
// (Public, BlueprintCallable, BlueprintEvent)

void AWarpbox_C::Unfocused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "unfocused");

	UObject::ProcessEvent(Func, nullptr);
}


// Function warpbox.warpbox_C.gamemodePreLoad
// (Public, BlueprintCallable, BlueprintEvent)

void AWarpbox_C::GamemodePreLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "gamemodePreLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function warpbox.warpbox_C.AnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Key_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Pressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWarpbox_C::AnyKey(const struct FKey& Key_0, bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "AnyKey");

	Params::Warpbox_C_AnyKey Parms{};

	Parms.Key_0 = std::move(Key_0);
	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.gamemodeMakeKeys
// (Public, BlueprintCallable, BlueprintEvent)

void AWarpbox_C::GamemodeMakeKeys()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "gamemodeMakeKeys");

	UObject::ProcessEvent(Func, nullptr);
}


// Function warpbox.warpbox_C.propRenderer_finishProps
// (Public, BlueprintCallable, BlueprintEvent)

void AWarpbox_C::PropRenderer_finishProps()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "propRenderer_finishProps");

	UObject::ProcessEvent(Func, nullptr);
}


// Function warpbox.warpbox_C.applyColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::ApplyColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "applyColor");

	Params::Warpbox_C_ApplyColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.texturePickerApply
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUmg_texturePicker_C*             Picker                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::TexturePickerApply(class UUmg_texturePicker_C* Picker, class UTexture2D* Texture, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "texturePickerApply");

	Params::Warpbox_C_TexturePickerApply Parms{};

	Parms.Picker = Picker;
	Parms.Texture = Texture;
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.NewFunction_2
// (Public, BlueprintCallable, BlueprintEvent)

void AWarpbox_C::NewFunction_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "NewFunction_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function warpbox.warpbox_C.NewFunction_3
// (Public, BlueprintCallable, BlueprintEvent)

void AWarpbox_C::NewFunction_3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "NewFunction_3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function warpbox.warpbox_C.gamemodePostKeys
// (Public, BlueprintCallable, BlueprintEvent)

void AWarpbox_C::GamemodePostKeys()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "gamemodePostKeys");

	UObject::ProcessEvent(Func, nullptr);
}


// Function warpbox.warpbox_C.driveDetached
// (Public, BlueprintCallable, BlueprintEvent)

void AWarpbox_C::DriveDetached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "driveDetached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function warpbox.warpbox_C.player_use
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AWarpbox_C::Player_use(class AMainPlayer_C* Player, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "player_use");

	Params::Warpbox_C_Player_use Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.kicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Kick                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWarpbox_C::Kicked(bool Kick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "kicked");

	Params::Warpbox_C_Kicked Parms{};

	Parms.Kick = Kick;

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.sendName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Name_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::SendName(class FName Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "sendName");

	Params::Warpbox_C_SendName Parms{};

	Parms.Name_0 = Name_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.broken
// (Public, BlueprintCallable, BlueprintEvent)

void AWarpbox_C::broken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "broken");

	UObject::ProcessEvent(Func, nullptr);
}


// Function warpbox.warpbox_C.broken_fire
// (Public, BlueprintCallable, BlueprintEvent)

void AWarpbox_C::broken_fire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "broken_fire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function warpbox.warpbox_C.thrown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::Thrown(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "thrown");

	Params::Warpbox_C_Thrown Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.damageByPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::DamageByPlayer(class AMainPlayer_C* Player, const struct FHitResult& Hit, float Damage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "damageByPlayer");

	Params::Warpbox_C_DamageByPlayer Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);
	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.updateStrAgl
// (Public, BlueprintCallable, BlueprintEvent)

void AWarpbox_C::UpdateStrAgl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "updateStrAgl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function warpbox.warpbox_C.playerUnequip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::PlayerUnequip(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "playerUnequip");

	Params::Warpbox_C_PlayerUnequip Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.playerHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::PlayerHold(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "playerHold");

	Params::Warpbox_C_PlayerHold Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.playerR
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::PlayerR(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "playerR");

	Params::Warpbox_C_PlayerR Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWarpbox_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function warpbox.warpbox_C.Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Opened_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWarpbox_C::Open(bool Opened_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "Open");

	Params::Warpbox_C_Open Parms{};

	Parms.Opened_0 = Opened_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.BndEvt__tilebox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AWarpbox_C::BndEvt__tilebox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "BndEvt__tilebox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Warpbox_C_BndEvt__tilebox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.gamemodeBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void AWarpbox_C::GamemodeBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "gamemodeBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function warpbox.warpbox_C.settingsApplied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_settings                 Settings                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AWarpbox_C::SettingsApplied(const struct FStruct_settings& Settings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "settingsApplied");

	Params::Warpbox_C_SettingsApplied Parms{};

	Parms.Settings = std::move(Settings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.actionOptionIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// Enum_interactionActions                 Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit, Enum_interactionActions Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "actionOptionIndex");

	Params::Warpbox_C_ActionOptionIndex Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function warpbox.warpbox_C.ExecuteUbergraph_warpbox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWarpbox_C::ExecuteUbergraph_warpbox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("warpbox_C", "ExecuteUbergraph_warpbox");

	Params::Warpbox_C_ExecuteUbergraph_warpbox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

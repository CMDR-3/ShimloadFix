#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DreamBase

#include "Basic.hpp"

#include "DreamBase_classes.hpp"
#include "DreamBase_parameters.hpp"


namespace SDK
{

// Function dreamBase.dreamBase_C.ExecuteUbergraph_dreamBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADreamBase_C::ExecuteUbergraph_dreamBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "ExecuteUbergraph_dreamBase");

	Params::DreamBase_C_ExecuteUbergraph_dreamBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function dreamBase.dreamBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADreamBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "ReceiveTick");

	Params::DreamBase_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function dreamBase.dreamBase_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ADreamBase_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dreamBase.dreamBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADreamBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dreamBase.dreamBase_C.gamemodePostKeys
// (Public, BlueprintCallable, BlueprintEvent)

void ADreamBase_C::GamemodePostKeys()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "gamemodePostKeys");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dreamBase.dreamBase_C.NewFunction_3
// (Public, BlueprintCallable, BlueprintEvent)

void ADreamBase_C::NewFunction_3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "NewFunction_3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dreamBase.dreamBase_C.NewFunction_2
// (Public, BlueprintCallable, BlueprintEvent)

void ADreamBase_C::NewFunction_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "NewFunction_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dreamBase.dreamBase_C.texturePickerApply
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUmg_texturePicker_C*             Picker                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADreamBase_C::TexturePickerApply(class UUmg_texturePicker_C* Picker, class UTexture2D* Texture, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "texturePickerApply");

	Params::DreamBase_C_TexturePickerApply Parms{};

	Parms.Picker = Picker;
	Parms.Texture = Texture;
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function dreamBase.dreamBase_C.applyColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADreamBase_C::ApplyColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "applyColor");

	Params::DreamBase_C_ApplyColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function dreamBase.dreamBase_C.propRenderer_finishProps
// (Public, BlueprintCallable, BlueprintEvent)

void ADreamBase_C::PropRenderer_finishProps()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "propRenderer_finishProps");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dreamBase.dreamBase_C.gamemodeMakeKeys
// (Public, BlueprintCallable, BlueprintEvent)

void ADreamBase_C::GamemodeMakeKeys()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "gamemodeMakeKeys");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dreamBase.dreamBase_C.AnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Pressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADreamBase_C::AnyKey(const struct FKey& Key, bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "AnyKey");

	Params::DreamBase_C_AnyKey Parms{};

	Parms.Key = std::move(Key);
	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function dreamBase.dreamBase_C.gamemodePreLoad
// (Public, BlueprintCallable, BlueprintEvent)

void ADreamBase_C::GamemodePreLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "gamemodePreLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dreamBase.dreamBase_C.unfocused
// (Public, BlueprintCallable, BlueprintEvent)

void ADreamBase_C::Unfocused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "unfocused");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dreamBase.dreamBase_C.settingsApplied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_settings                 Settings                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADreamBase_C::SettingsApplied(const struct FStruct_settings& Settings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "settingsApplied");

	Params::DreamBase_C_SettingsApplied Parms{};

	Parms.Settings = std::move(Settings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function dreamBase.dreamBase_C.unfoc
// (Public, BlueprintCallable, BlueprintEvent)

void ADreamBase_C::Unfoc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "unfoc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dreamBase.dreamBase_C.stuffUpgraded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainGamemode_C*                  GameMode_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADreamBase_C::StuffUpgraded(class AMainGamemode_C* GameMode_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "stuffUpgraded");

	Params::DreamBase_C_StuffUpgraded Parms{};

	Parms.GameMode_0 = GameMode_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function dreamBase.dreamBase_C.gamemodeBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void ADreamBase_C::GamemodeBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "gamemodeBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dreamBase.dreamBase_C.signalSaved
// (Public, BlueprintCallable, BlueprintEvent)

void ADreamBase_C::SignalSaved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "signalSaved");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dreamBase.dreamBase_C.signalDeleted
// (Public, BlueprintCallable, BlueprintEvent)

void ADreamBase_C::SignalDeleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "signalDeleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dreamBase.dreamBase_C.awoken
// (Public, BlueprintCallable, BlueprintEvent)

void ADreamBase_C::Awoken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "awoken");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dreamBase.dreamBase_C.naturalWakeup
// (Public, BlueprintCallable, BlueprintEvent)

void ADreamBase_C::NaturalWakeup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "naturalWakeup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dreamBase.dreamBase_C.dreamInv
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStruct_save>             Invv                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ADreamBase_C*                     Base                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADreamBase_C::DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dreamBase_C", "dreamInv");

	Params::DreamBase_C_DreamInv Parms{};

	Parms.Invv = std::move(Invv);

	UObject::ProcessEvent(Func, &Parms);

	Invv = std::move(Parms.Invv);

	if (Base != nullptr)
		*Base = Parms.Base;
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_playerInventory

#include "Basic.hpp"

#include "Umg_playerInventory_classes.hpp"
#include "Umg_playerInventory_parameters.hpp"


namespace SDK
{

// Function umg_playerInventory.umg_playerInventory_C.ExecuteUbergraph_umg_playerInventory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_playerInventory_C::ExecuteUbergraph_umg_playerInventory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "ExecuteUbergraph_umg_playerInventory");

	Params::Umg_playerInventory_C_ExecuteUbergraph_umg_playerInventory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_playerInventory.umg_playerInventory_C.BndEvt__umg_playerInventory_textbox_search_K2Node_ComponentBoundEvent_12_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUmg_playerInventory_C::BndEvt__umg_playerInventory_textbox_search_K2Node_ComponentBoundEvent_12_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "BndEvt__umg_playerInventory_textbox_search_K2Node_ComponentBoundEvent_12_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::Umg_playerInventory_C_BndEvt__umg_playerInventory_textbox_search_K2Node_ComponentBoundEvent_12_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_playerInventory.umg_playerInventory_C.BndEvt__umg_playerInventory_Button_a_recipes_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_playerInventory_C::BndEvt__umg_playerInventory_Button_a_recipes_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "BndEvt__umg_playerInventory_Button_a_recipes_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.BndEvt__umg_propInv_Button_a_disch_1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_playerInventory_C::BndEvt__umg_propInv_Button_a_disch_1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "BndEvt__umg_propInv_Button_a_disch_1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.BndEvt__umg_propInv_Button_a_disch_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_playerInventory_C::BndEvt__umg_propInv_Button_a_disch_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "BndEvt__umg_propInv_Button_a_disch_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_playerInventory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "Tick");

	Params::Umg_playerInventory_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_playerInventory.umg_playerInventory_C.nodelayExit
// (BlueprintCallable, BlueprintEvent)

void UUmg_playerInventory_C::NodelayExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "nodelayExit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.em_equip
// (BlueprintCallable, BlueprintEvent)

void UUmg_playerInventory_C::Em_equip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "em_equip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.BndEvt__Button_a_equip_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_playerInventory_C::BndEvt__Button_a_equip_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "BndEvt__Button_a_equip_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.em_hold
// (BlueprintCallable, BlueprintEvent)

void UUmg_playerInventory_C::Em_hold()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "em_hold");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.BndEvt__Button_a_hold_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_playerInventory_C::BndEvt__Button_a_hold_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "BndEvt__Button_a_hold_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.em_info
// (BlueprintCallable, BlueprintEvent)

void UUmg_playerInventory_C::Em_info()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "em_info");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.em_place
// (BlueprintCallable, BlueprintEvent)

void UUmg_playerInventory_C::Em_place()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "em_place");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.em_drop
// (BlueprintCallable, BlueprintEvent)

void UUmg_playerInventory_C::Em_drop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "em_drop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.em_take
// (BlueprintCallable, BlueprintEvent)

void UUmg_playerInventory_C::Em_take()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "em_take");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.BndEvt__Button_a+place_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_playerInventory_C::BndEvt__Button_aPlusplace_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "BndEvt__Button_a+place_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.BndEvt__Button_a_info_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_playerInventory_C::BndEvt__Button_a_info_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "BndEvt__Button_a_info_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.BndEvt__Button_a_drop_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_playerInventory_C::BndEvt__Button_a_drop_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "BndEvt__Button_a_drop_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUmg_playerInventory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.BndEvt__Button_a_drop_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_playerInventory_C::BndEvt__Button_a_drop_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "BndEvt__Button_a_drop_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.BndEvt__Button_b_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_playerInventory_C::BndEvt__Button_b_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "BndEvt__Button_b_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.delayExit
// (BlueprintCallable, BlueprintEvent)

void UUmg_playerInventory_C::DelayExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "delayExit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.BndEvt__Button_b_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_playerInventory_C::BndEvt__Button_b_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "BndEvt__Button_b_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.gen_player
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProp_container_C*                Enter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Double                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUmg_playerInventory_C::Gen_player(class AProp_container_C* Enter, bool Double)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "gen_player");

	Params::Umg_playerInventory_C_Gen_player Parms{};

	Parms.Enter = Enter;
	Parms.Double = Double;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_playerInventory.umg_playerInventory_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUmg_playerInventory_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "OnKeyDown");

	Params::Umg_playerInventory_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function umg_playerInventory.umg_playerInventory_C.Exit
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_playerInventory_C::Exit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "Exit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_playerInventory_C::Info(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "Info");

	Params::Umg_playerInventory_C_Info Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_playerInventory.umg_playerInventory_C.updSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUmg_playerInventory_C::UpdSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "updSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.gen
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_playerInventory_C::Gen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "gen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.upd_equipment
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_playerInventory_C::Upd_equipment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "upd_equipment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.setHovertext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UUmg_playerInventory_C::SetHovertext(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "setHovertext");

	Params::Umg_playerInventory_C_SetHovertext Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_playerInventory.umg_playerInventory_C.GetName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Struct_save                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class FString                           Name_0                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Tag                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FName                             OName                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_playerInventory_C::GetName(const struct FStruct_save& Struct_save, class FString* Name_0, class FString* Tag, class FName* OName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "GetName");

	Params::Umg_playerInventory_C_GetName Parms{};

	Parms.Struct_save = std::move(Struct_save);

	UObject::ProcessEvent(Func, &Parms);

	if (Name_0 != nullptr)
		*Name_0 = std::move(Parms.Name_0);

	if (Tag != nullptr)
		*Tag = std::move(Parms.Tag);

	if (OName != nullptr)
		*OName = Parms.OName;
}


// Function umg_playerInventory.umg_playerInventory_C.getInd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUmg_playerInventory_C::GetInd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "getInd");

	Params::Umg_playerInventory_C_GetInd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function umg_playerInventory.umg_playerInventory_C.genRecipe
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUmg_playerInventory_C::GenRecipe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "genRecipe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_playerInventory.umg_playerInventory_C.selectRecipeSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUmg_recipeItemSlot_C*            SelectedRecipeSlot_0                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_playerInventory_C::SelectRecipeSlot(class UUmg_recipeItemSlot_C* SelectedRecipeSlot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "selectRecipeSlot");

	Params::Umg_playerInventory_C_SelectRecipeSlot Parms{};

	Parms.SelectedRecipeSlot_0 = SelectedRecipeSlot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_playerInventory.umg_playerInventory_C.formRecipe
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_crafting                 Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUmg_playerInventory_C::FormRecipe(const struct FStruct_crafting& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "formRecipe");

	Params::Umg_playerInventory_C_FormRecipe Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_playerInventory.umg_playerInventory_C.searchRecipe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Name_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUmg_playerInventory_C::SearchRecipe(const class FString& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_playerInventory_C", "searchRecipe");

	Params::Umg_playerInventory_C_SearchRecipe Parms{};

	Parms.Name_0 = std::move(Name_0);

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Int_save1

#include "Basic.hpp"

#include "Int_save1_classes.hpp"
#include "Int_save1_parameters.hpp"


namespace SDK
{

// Function int_save1.int_save1_C.getData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void IInt_save1_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_save1_C", "getData");

	Params::Int_save1_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function int_save1.int_save1_C.loadData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInt_save1_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_save1_C", "loadData");

	Params::Int_save1_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function int_save1.int_save1_C.ignoreSave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IgnoreSave_0                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInt_save1_C::IgnoreSave(bool* IgnoreSave_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_save1_C", "ignoreSave");

	Params::Int_save1_C_IgnoreSave Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IgnoreSave_0 != nullptr)
		*IgnoreSave_0 = Parms.IgnoreSave_0;
}


// Function int_save1.int_save1_C.setIgnoreSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ignore                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInt_save1_C::SetIgnoreSave(bool Ignore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_save1_C", "setIgnoreSave");

	Params::Int_save1_C_SetIgnoreSave Parms{};

	Parms.Ignore = Ignore;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_save1.int_save1_C.skipPreDelete
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Skip                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInt_save1_C::SkipPreDelete(bool* Skip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_save1_C", "skipPreDelete");

	Params::Int_save1_C_SkipPreDelete Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Skip != nullptr)
		*Skip = Parms.Skip;
}


// Function int_save1.int_save1_C.gatherDataFromKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Gather                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInt_save1_C::GatherDataFromKey(bool* Gather)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_save1_C", "gatherDataFromKey");

	Params::Int_save1_C_GatherDataFromKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Gather != nullptr)
		*Gather = Parms.Gather;
}

}

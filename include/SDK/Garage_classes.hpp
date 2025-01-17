#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Garage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TriggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass garage.garage_C
// 0x0060 (0x02F0 - 0x0290)
class AGarage_C final : public ATriggerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Garage_C;                           // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNavModifierComponent*                  NavModifier;                                       // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        S2;                                                // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Cull;                                              // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        S;                                                 // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Ac;                                                // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Loop;                                              // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Move_a_F3BBC7684F1D01D6469E7BA3FE15A1E5;           // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Move__Direction_F3BBC7684F1D01D6469E7BA3FE15A1E5;  // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DD[0x3];                                      // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Move;                                              // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Open;                                              // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Mov;                                               // 0x02E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Set(float InputPin);
	void ToolboxFix(class AProp_toolbox_C* Toolbox, bool* Return);
	void CanBeUsedHold(bool* Return);
	void ProcessKeys(bool* Return);
	void GetOnlyKey(class FString* Key_0);
	void IgnoreSave_trigger(bool* Ignore);
	void LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return);
	void GetTriggerData(struct FStruct_triggerSave* Data);
	void Move__FinishedFunc();
	void Move__UpdateFunc();
	void OnNotifyEnd_C7785C254EBAB5F644FE8987D191DCBD(class FName NotifyName);
	void OnNotifyBegin_C7785C254EBAB5F644FE8987D191DCBD(class FName NotifyName);
	void OnInterrupted_C7785C254EBAB5F644FE8987D191DCBD(class FName NotifyName);
	void OnBlendOut_C7785C254EBAB5F644FE8987D191DCBD(class FName NotifyName);
	void OnCompleted_C7785C254EBAB5F644FE8987D191DCBD(class FName NotifyName);
	void OnNotifyEnd_A5D3EFEF417D2332A88BC68333B1D35A(class FName NotifyName);
	void OnNotifyBegin_A5D3EFEF417D2332A88BC68333B1D35A(class FName NotifyName);
	void OnInterrupted_A5D3EFEF417D2332A88BC68333B1D35A(class FName NotifyName);
	void OnBlendOut_A5D3EFEF417D2332A88BC68333B1D35A(class FName NotifyName);
	void OnCompleted_A5D3EFEF417D2332A88BC68333B1D35A(class FName NotifyName);
	void RunTrigger(class AActor* Owner_0, int32 Index_0);
	void Acivae();
	void Settime(bool Open_0);
	void ExecuteUbergraph_garage(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"garage_C">();
	}
	static class AGarage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGarage_C>();
	}
};
static_assert(alignof(AGarage_C) == 0x000008, "Wrong alignment on AGarage_C");
static_assert(sizeof(AGarage_C) == 0x0002F0, "Wrong size on AGarage_C");
static_assert(offsetof(AGarage_C, UberGraphFrame_Garage_C) == 0x000290, "Member 'AGarage_C::UberGraphFrame_Garage_C' has a wrong offset!");
static_assert(offsetof(AGarage_C, NavModifier) == 0x000298, "Member 'AGarage_C::NavModifier' has a wrong offset!");
static_assert(offsetof(AGarage_C, S2) == 0x0002A0, "Member 'AGarage_C::S2' has a wrong offset!");
static_assert(offsetof(AGarage_C, SkeletalMesh) == 0x0002A8, "Member 'AGarage_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(AGarage_C, Cull) == 0x0002B0, "Member 'AGarage_C::Cull' has a wrong offset!");
static_assert(offsetof(AGarage_C, S) == 0x0002B8, "Member 'AGarage_C::S' has a wrong offset!");
static_assert(offsetof(AGarage_C, Ac) == 0x0002C0, "Member 'AGarage_C::Ac' has a wrong offset!");
static_assert(offsetof(AGarage_C, Loop) == 0x0002C8, "Member 'AGarage_C::Loop' has a wrong offset!");
static_assert(offsetof(AGarage_C, Box) == 0x0002D0, "Member 'AGarage_C::Box' has a wrong offset!");
static_assert(offsetof(AGarage_C, Move_a_F3BBC7684F1D01D6469E7BA3FE15A1E5) == 0x0002D8, "Member 'AGarage_C::Move_a_F3BBC7684F1D01D6469E7BA3FE15A1E5' has a wrong offset!");
static_assert(offsetof(AGarage_C, Move__Direction_F3BBC7684F1D01D6469E7BA3FE15A1E5) == 0x0002DC, "Member 'AGarage_C::Move__Direction_F3BBC7684F1D01D6469E7BA3FE15A1E5' has a wrong offset!");
static_assert(offsetof(AGarage_C, Move) == 0x0002E0, "Member 'AGarage_C::Move' has a wrong offset!");
static_assert(offsetof(AGarage_C, Open) == 0x0002E8, "Member 'AGarage_C::Open' has a wrong offset!");
static_assert(offsetof(AGarage_C, Mov) == 0x0002E9, "Member 'AGarage_C::Mov' has a wrong offset!");

}


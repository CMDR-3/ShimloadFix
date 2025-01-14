#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_box

#include "Basic.hpp"

#include "Struct_signalDataDynamic_structs.hpp"
#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Prop_classes.hpp"
#include "Struct_signal_data1_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_box.prop_box_C
// 0x0080 (0x03D8 - 0x0358)
class AProp_box_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_box_C;                         // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Papr;                                              // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          PaperS;                                            // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          DrivesIn;                                          // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Copy;                                              // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_381[0x7];                                      // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FStruct_signal_data1>           Drives_copy;                                       // 0x0388(0x0010)(Edit, BlueprintVisible)
	TArray<struct FStruct_signalDataDynamic>      Drives;                                            // 0x0398(0x0010)(Edit, BlueprintVisible)
	TArray<bool>                                  Drives_in;                                         // 0x03A8(0x0010)(Edit, BlueprintVisible)
	bool                                          Opened;                                            // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NoOverlap;                                         // 0x03B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NoOverlap2;                                        // 0x03BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BB[0x5];                                      // 0x03BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PaperInfo;                                         // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Canoverlap;                                        // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_box(int32 EntryPoint);
	void ReturnCollision();
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void BndEvt__paperS_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__paperS_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Upd(const class FString& NewParam);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void IsButtonUsed(bool* Failed);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);
	void CanBeUsedHold(bool* Return);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_box_C">();
	}
	static class AProp_box_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_box_C>();
	}
};
static_assert(alignof(AProp_box_C) == 0x000008, "Wrong alignment on AProp_box_C");
static_assert(sizeof(AProp_box_C) == 0x0003D8, "Wrong size on AProp_box_C");
static_assert(offsetof(AProp_box_C, UberGraphFrame_Prop_box_C) == 0x000358, "Member 'AProp_box_C::UberGraphFrame_Prop_box_C' has a wrong offset!");
static_assert(offsetof(AProp_box_C, Papr) == 0x000360, "Member 'AProp_box_C::Papr' has a wrong offset!");
static_assert(offsetof(AProp_box_C, PaperS) == 0x000368, "Member 'AProp_box_C::PaperS' has a wrong offset!");
static_assert(offsetof(AProp_box_C, DrivesIn) == 0x000370, "Member 'AProp_box_C::DrivesIn' has a wrong offset!");
static_assert(offsetof(AProp_box_C, Box) == 0x000378, "Member 'AProp_box_C::Box' has a wrong offset!");
static_assert(offsetof(AProp_box_C, Copy) == 0x000380, "Member 'AProp_box_C::Copy' has a wrong offset!");
static_assert(offsetof(AProp_box_C, Drives_copy) == 0x000388, "Member 'AProp_box_C::Drives_copy' has a wrong offset!");
static_assert(offsetof(AProp_box_C, Drives) == 0x000398, "Member 'AProp_box_C::Drives' has a wrong offset!");
static_assert(offsetof(AProp_box_C, Drives_in) == 0x0003A8, "Member 'AProp_box_C::Drives_in' has a wrong offset!");
static_assert(offsetof(AProp_box_C, Opened) == 0x0003B8, "Member 'AProp_box_C::Opened' has a wrong offset!");
static_assert(offsetof(AProp_box_C, NoOverlap) == 0x0003B9, "Member 'AProp_box_C::NoOverlap' has a wrong offset!");
static_assert(offsetof(AProp_box_C, NoOverlap2) == 0x0003BA, "Member 'AProp_box_C::NoOverlap2' has a wrong offset!");
static_assert(offsetof(AProp_box_C, PaperInfo) == 0x0003C0, "Member 'AProp_box_C::PaperInfo' has a wrong offset!");
static_assert(offsetof(AProp_box_C, Canoverlap) == 0x0003D0, "Member 'AProp_box_C::Canoverlap' has a wrong offset!");

}


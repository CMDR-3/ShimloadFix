#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ErieRise

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Actor_save_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass erieRise.erieRise_C
// 0x0010 (0x0260 - 0x0250)
class AErieRise_C final : public AActor_save_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ErieRise_C;                         // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 EriePlushRise;                                     // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_erieRise(int32 EntryPoint);
	void ReceiveBeginPlay();
	void OnCompleted_7485A2DE4EC0D8B801273ABF7396B39B(class FName NotifyName);
	void OnBlendOut_7485A2DE4EC0D8B801273ABF7396B39B(class FName NotifyName);
	void OnInterrupted_7485A2DE4EC0D8B801273ABF7396B39B(class FName NotifyName);
	void OnNotifyBegin_7485A2DE4EC0D8B801273ABF7396B39B(class FName NotifyName);
	void OnNotifyEnd_7485A2DE4EC0D8B801273ABF7396B39B(class FName NotifyName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"erieRise_C">();
	}
	static class AErieRise_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AErieRise_C>();
	}
};
static_assert(alignof(AErieRise_C) == 0x000008, "Wrong alignment on AErieRise_C");
static_assert(sizeof(AErieRise_C) == 0x000260, "Wrong size on AErieRise_C");
static_assert(offsetof(AErieRise_C, UberGraphFrame_ErieRise_C) == 0x000250, "Member 'AErieRise_C::UberGraphFrame_ErieRise_C' has a wrong offset!");
static_assert(offsetof(AErieRise_C, EriePlushRise) == 0x000258, "Member 'AErieRise_C::EriePlushRise' has a wrong offset!");

}

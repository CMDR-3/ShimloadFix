#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_slab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_slab.prop_slab_C
// 0x0008 (0x0360 - 0x0358)
class AProp_slab_C : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_slab_C;                        // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_slab(int32 EntryPoint);
	void OnCompleted_F33B765A4B89B8480705839F48D37A17(class FName NotifyName);
	void OnBlendOut_F33B765A4B89B8480705839F48D37A17(class FName NotifyName);
	void OnInterrupted_F33B765A4B89B8480705839F48D37A17(class FName NotifyName);
	void OnNotifyBegin_F33B765A4B89B8480705839F48D37A17(class FName NotifyName);
	void OnNotifyEnd_F33B765A4B89B8480705839F48D37A17(class FName NotifyName);
	void OnCompleted_63133FA64B24BB03D6ACED9E97197268(class FName NotifyName);
	void OnBlendOut_63133FA64B24BB03D6ACED9E97197268(class FName NotifyName);
	void OnInterrupted_63133FA64B24BB03D6ACED9E97197268(class FName NotifyName);
	void OnNotifyBegin_63133FA64B24BB03D6ACED9E97197268(class FName NotifyName);
	void OnNotifyEnd_63133FA64B24BB03D6ACED9E97197268(class FName NotifyName);
	void PlayerHandRelease_RMB(class AMainPlayer_C* Player);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_slab_C">();
	}
	static class AProp_slab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_slab_C>();
	}
};
static_assert(alignof(AProp_slab_C) == 0x000008, "Wrong alignment on AProp_slab_C");
static_assert(sizeof(AProp_slab_C) == 0x000360, "Wrong size on AProp_slab_C");
static_assert(offsetof(AProp_slab_C, UberGraphFrame_Prop_slab_C) == 0x000358, "Member 'AProp_slab_C::UberGraphFrame_Prop_slab_C' has a wrong offset!");

}

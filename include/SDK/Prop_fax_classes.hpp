#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_fax

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_fax.prop_fax_C
// 0x0020 (0x0378 - 0x0358)
class AProp_fax_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_fax_C;                         // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   PrintOut;                                          // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Alpha;                                             // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PrintPhoto;                                        // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Printing;                                          // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_371[0x3];                                      // 0x0371(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Original_Index;                                    // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_fax(int32 EntryPoint);
	void Print(int32 PrintPhoto_0, int32 Original_Index_0);
	void SetPrintLoc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_fax_C">();
	}
	static class AProp_fax_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_fax_C>();
	}
};
static_assert(alignof(AProp_fax_C) == 0x000008, "Wrong alignment on AProp_fax_C");
static_assert(sizeof(AProp_fax_C) == 0x000378, "Wrong size on AProp_fax_C");
static_assert(offsetof(AProp_fax_C, UberGraphFrame_Prop_fax_C) == 0x000358, "Member 'AProp_fax_C::UberGraphFrame_Prop_fax_C' has a wrong offset!");
static_assert(offsetof(AProp_fax_C, PrintOut) == 0x000360, "Member 'AProp_fax_C::PrintOut' has a wrong offset!");
static_assert(offsetof(AProp_fax_C, Alpha) == 0x000368, "Member 'AProp_fax_C::Alpha' has a wrong offset!");
static_assert(offsetof(AProp_fax_C, PrintPhoto) == 0x00036C, "Member 'AProp_fax_C::PrintPhoto' has a wrong offset!");
static_assert(offsetof(AProp_fax_C, Printing) == 0x000370, "Member 'AProp_fax_C::Printing' has a wrong offset!");
static_assert(offsetof(AProp_fax_C, Original_Index) == 0x000374, "Member 'AProp_fax_C::Original_Index' has a wrong offset!");

}

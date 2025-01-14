#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cig_cigar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Cig_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass cig_cigar.cig_cigar_C
// 0x0008 (0x02A0 - 0x0298)
class ACig_cigar_C final : public ACig_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Cig_cigar_C;                        // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_cig_cigar(int32 EntryPoint);
	void Dropped();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"cig_cigar_C">();
	}
	static class ACig_cigar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACig_cigar_C>();
	}
};
static_assert(alignof(ACig_cigar_C) == 0x000008, "Wrong alignment on ACig_cigar_C");
static_assert(sizeof(ACig_cigar_C) == 0x0002A0, "Wrong size on ACig_cigar_C");
static_assert(offsetof(ACig_cigar_C, UberGraphFrame_Cig_cigar_C) == 0x000298, "Member 'ACig_cigar_C::UberGraphFrame_Cig_cigar_C' has a wrong offset!");

}


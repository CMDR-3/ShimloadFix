#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EggyWolfgang

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Actor_save_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass eggyWolfgang.eggyWolfgang_C
// 0x0010 (0x0260 - 0x0250)
class AEggyWolfgang_C final : public AActor_save_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_EggyWolfgang_C;                     // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         A;                                                 // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_eggyWolfgang(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"eggyWolfgang_C">();
	}
	static class AEggyWolfgang_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEggyWolfgang_C>();
	}
};
static_assert(alignof(AEggyWolfgang_C) == 0x000008, "Wrong alignment on AEggyWolfgang_C");
static_assert(sizeof(AEggyWolfgang_C) == 0x000260, "Wrong size on AEggyWolfgang_C");
static_assert(offsetof(AEggyWolfgang_C, UberGraphFrame_EggyWolfgang_C) == 0x000250, "Member 'AEggyWolfgang_C::UberGraphFrame_EggyWolfgang_C' has a wrong offset!");
static_assert(offsetof(AEggyWolfgang_C, A) == 0x000258, "Member 'AEggyWolfgang_C::A' has a wrong offset!");

}


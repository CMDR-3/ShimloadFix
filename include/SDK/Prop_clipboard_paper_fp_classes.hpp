#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_clipboard_paper_fp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_clipboard_paper_u_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_clipboard_paper_fp.prop_clipboard_paper_fp_C
// 0x0008 (0x0390 - 0x0388)
class AProp_clipboard_paper_fp_C final : public AProp_clipboard_paper_u_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_clipboard_paper_fp_C;          // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit_0, Enum_interactionActions Action);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void ExecuteUbergraph_prop_clipboard_paper_fp(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_clipboard_paper_fp_C">();
	}
	static class AProp_clipboard_paper_fp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_clipboard_paper_fp_C>();
	}
};
static_assert(alignof(AProp_clipboard_paper_fp_C) == 0x000008, "Wrong alignment on AProp_clipboard_paper_fp_C");
static_assert(sizeof(AProp_clipboard_paper_fp_C) == 0x000390, "Wrong size on AProp_clipboard_paper_fp_C");
static_assert(offsetof(AProp_clipboard_paper_fp_C, UberGraphFrame_Prop_clipboard_paper_fp_C) == 0x000388, "Member 'AProp_clipboard_paper_fp_C::UberGraphFrame_Prop_clipboard_paper_fp_C' has a wrong offset!");

}


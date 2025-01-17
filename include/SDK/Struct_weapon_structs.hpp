#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_weapon

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct struct_weapon.struct_weapon
// 0x0040 (0x0040 - 0x0000)
struct FStruct_weapon final
{
public:
	class UAnimMontage*                           Montage_9_4B16A04E4D5F5DF99428C190FE6D1295;        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Damage_2_2BBE09C54B6F4950DED4C3A51636F41B;         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Reload_4_5849B2654C00818A554F40BBBA77FC80;         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Length_6_BEECCE6348C913B1B87E1282F8CD6F4B;         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Force_12_D9A4F34E4676DD79D5E79C8B28F38D7C;         // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Attack_14_3E3BE6824AD2AF5DBAE1918A72260674;        // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPhysicalMaterial*>              MatEff_21_184D7DC9414F64A7AE914FBDB6ED92DC;        // 0x0020(0x0010)(Edit, BlueprintVisible)
	TArray<float>                                 MatEffDmg_24_AC0D37B0493EB271F2FFEA9469747A71;     // 0x0030(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FStruct_weapon) == 0x000008, "Wrong alignment on FStruct_weapon");
static_assert(sizeof(FStruct_weapon) == 0x000040, "Wrong size on FStruct_weapon");
static_assert(offsetof(FStruct_weapon, Montage_9_4B16A04E4D5F5DF99428C190FE6D1295) == 0x000000, "Member 'FStruct_weapon::Montage_9_4B16A04E4D5F5DF99428C190FE6D1295' has a wrong offset!");
static_assert(offsetof(FStruct_weapon, Damage_2_2BBE09C54B6F4950DED4C3A51636F41B) == 0x000008, "Member 'FStruct_weapon::Damage_2_2BBE09C54B6F4950DED4C3A51636F41B' has a wrong offset!");
static_assert(offsetof(FStruct_weapon, Reload_4_5849B2654C00818A554F40BBBA77FC80) == 0x00000C, "Member 'FStruct_weapon::Reload_4_5849B2654C00818A554F40BBBA77FC80' has a wrong offset!");
static_assert(offsetof(FStruct_weapon, Length_6_BEECCE6348C913B1B87E1282F8CD6F4B) == 0x000010, "Member 'FStruct_weapon::Length_6_BEECCE6348C913B1B87E1282F8CD6F4B' has a wrong offset!");
static_assert(offsetof(FStruct_weapon, Force_12_D9A4F34E4676DD79D5E79C8B28F38D7C) == 0x000014, "Member 'FStruct_weapon::Force_12_D9A4F34E4676DD79D5E79C8B28F38D7C' has a wrong offset!");
static_assert(offsetof(FStruct_weapon, Attack_14_3E3BE6824AD2AF5DBAE1918A72260674) == 0x000018, "Member 'FStruct_weapon::Attack_14_3E3BE6824AD2AF5DBAE1918A72260674' has a wrong offset!");
static_assert(offsetof(FStruct_weapon, MatEff_21_184D7DC9414F64A7AE914FBDB6ED92DC) == 0x000020, "Member 'FStruct_weapon::MatEff_21_184D7DC9414F64A7AE914FBDB6ED92DC' has a wrong offset!");
static_assert(offsetof(FStruct_weapon, MatEffDmg_24_AC0D37B0493EB271F2FFEA9469747A71) == 0x000030, "Member 'FStruct_weapon::MatEffDmg_24_AC0D37B0493EB271F2FFEA9469747A71' has a wrong offset!");

}


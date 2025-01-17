#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SaveSlot

#include "Basic.hpp"

#include "Struct_task_structs.hpp"
#include "Struct_achievement_structs.hpp"
#include "Struct_email_structs.hpp"
#include "Struct_upgrades_structs.hpp"
#include "Struct_signal_data1_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Struct_mObject_structs.hpp"
#include "Struct_storeOrder1_structs.hpp"
#include "Struct_save_structs.hpp"
#include "Engine_classes.hpp"
#include "Struct_equipment_structs.hpp"
#include "Struct_byteImage_structs.hpp"
#include "Struct_triggerSave_structs.hpp"
#include "Enum_objectType_structs.hpp"
#include "Struct_loan_structs.hpp"
#include "Struct_signal_spawn_structs.hpp"
#include "Struct_signalDataDynamic_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass saveSlot.saveSlot_C
// 0x0858 (0x0880 - 0x0028)
class USaveSlot_C final : public USaveGame
{
public:
	TArray<struct FStruct_signal_data1>           SavedSignals_obs;                                  // 0x0028(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, Deprecated)
	TArray<class FName>                           Specials;                                          // 0x0038(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStruct_upgrades                       Upgrades;                                          // 0x0048(0x0068)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Points;                                            // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CatchedSignals;                                    // 0x00B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStruct_signal_data1>           SavedSignals_comp_obs;                             // 0x00C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, Deprecated)
	struct FIntVector                             Savedtime;                                         // 0x00D8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           PassEvents;                                        // 0x00E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AMainGamemode_C*                        GameMode;                                          // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TotalTime;                                         // 0x0100(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Food;                                              // 0x0104(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Sleep;                                             // 0x0108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           AllEvents;                                         // 0x0110(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         battery;                                           // 0x0120(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           ForceObjects;                                      // 0x0128(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStruct_email>                  Emails;                                            // 0x0138(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStruct_task                           Task;                                              // 0x0148(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FStruct_mObject>                GObjStack;                                         // 0x01B8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<bool>                                  Musics;                                            // 0x01C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           AdvancementsNames;                                 // 0x01D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                  AdvancementsCompleted;                             // 0x01E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStruct_achievement>            Advancements;                                      // 0x01F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         CarFuel;                                           // 0x0208(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20C[0x4];                                      // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_storeOrder1                    DroneOrder;                                        // 0x0210(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                         Pad_228[0x8];                                      // 0x0228(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             PlayerTransform;                                   // 0x0230(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             Def;                                               // 0x0260(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             CarTransform;                                      // 0x0290(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             DefCar;                                            // 0x02C0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FStruct_email>                  EmailsDef;                                         // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStruct_save>                   InventoryData;                                     // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStruct_save>                   DishData;                                          // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStruct_save>                   ObjectsData;                                       // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStruct_save                           Drone;                                             // 0x0330(0x00C0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         CarHealth;                                         // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F4[0x4];                                      // 0x03F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Version;                                           // 0x03F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         Health;                                            // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40C[0x4];                                      // 0x040C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         SoldSignals;                                       // 0x0410(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStruct_equipment>              Equipment;                                         // 0x0420(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStruct_equipment>              Hold;                                              // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<uint8>                                 Preview;                                           // 0x0440(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDateTime                              LastDate;                                          // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CreationDate;                                      // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FStruct_byteImage>              Photos;                                            // 0x0460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStruct_storeOrder1>            Orders;                                            // 0x0470(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStruct_triggerSave>            Triggers;                                          // 0x0480(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStruct_equipment>              Hold_def;                                          // 0x0490(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStruct_equipment>              Equipment_def;                                     // 0x04A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         CoffeePower;                                       // 0x04B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B4[0x4];                                      // 0x04B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<Enum_objectType, int32>                  ObjectsCount;                                      // 0x04B8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStruct_loan                           Loan;                                              // 0x0508(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         LoanTime;                                          // 0x0528(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_signal_spawn                   DownloadPanelSignalSpawn;                          // 0x052C(0x002C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_signalDataDynamic              ProcessingPanelSignal;                             // 0x0558(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FStruct_signalDataDynamic              DownloadPanelSignal;                               // 0x05C8(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         P_health;                                          // 0x0638(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Day;                                               // 0x063C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 WindowShit;                                        // 0x0640(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FTransform>                     Roache;                                            // 0x0650(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStruct_signalDataDynamic>      SavedSignals_0;                                    // 0x0660(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStruct_signalDataDynamic>      SavedSignals_comp_0;                               // 0x0670(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStruct_save                           DroneItembox;                                      // 0x0680(0x00C0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<uint8>                                 WindowShitBytes;                                   // 0x0740(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStruct_byteImage>              Photos_phys;                                       // 0x0750(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         Food_consumed;                                     // 0x0760(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 Food_tolerance;                                    // 0x0770(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStruct_byteImage>              Drawings;                                          // 0x0780(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDateTime                              LastPlayed;                                        // 0x0790(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   Map;                                               // 0x0798(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsReset;                                           // 0x07A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A1[0x7];                                      // 0x07A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FStruct_save>                   GrimeData;                                         // 0x07A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStruct_save>                   TrashPilesData;                                    // 0x07B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   SubArea;                                           // 0x07C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ArirReputation;                                    // 0x07D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D4[0x4];                                      // 0x07D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           ArirPranks_mean;                                   // 0x07D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           ArirPranks_inconv;                                 // 0x07E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           ArirPranks_neutral;                                // 0x07F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           ArirPranks_good;                                   // 0x0808(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           ArirPranks_flirty;                                 // 0x0818(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Strength;                                          // 0x0828(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Agility;                                           // 0x082C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 FlashlightBattery;                                 // 0x0830(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasFailedWeek;                                     // 0x0838(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_839[0x3];                                      // 0x0839(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ServertimeBest;                                    // 0x083C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Completes;                                         // 0x0840(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MoonPhase;                                         // 0x0844(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInst_C*                            GameInst;                                          // 0x0848(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         I;                                                 // 0x0850(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxHealth;                                         // 0x0854(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           Crafts;                                            // 0x0858(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           beginEquipment;                                    // 0x0868(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Save();
	void Settime(const struct FIntVector& NewTime, struct FIntVector* Output_Get, bool* New_min, bool* New_hour, bool* New_day);
	void SetGamemode(class AMainGamemode_C* GameMode_0);
	int32 Conv(const struct FIntVector& IntVector);
	void PrAdvanc(const class FName& InputPin, bool DisablePopup, bool* Finished, class FName* Name_0);
	void Reset_days(int32 Day_0);
	void Reset_objects();
	void Reset_points();
	void Reset_levels();
	void Reset_player();
	void Reset_car();
	void GetSigObj(const Enum_objectType& Key, int32* Value);
	void Reset_garb();
	void Reset_grime();
	void MaxDay(int32* OutputPin);
	bool SaveToSlot();
	void Reset_printerObjects();
	void CleanGrime();
	void SetGameinst(class UGameInst_C* GameInst_0);
	void Regenerate(const class FString& InputName);
	void Duplicate(const class FString& Name_0);
	void SavePlayerOnly();
	void AddRecipe(const class FName& ItemToFind);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"saveSlot_C">();
	}
	static class USaveSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USaveSlot_C>();
	}
};
static_assert(alignof(USaveSlot_C) == 0x000010, "Wrong alignment on USaveSlot_C");
static_assert(sizeof(USaveSlot_C) == 0x000880, "Wrong size on USaveSlot_C");
static_assert(offsetof(USaveSlot_C, SavedSignals_obs) == 0x000028, "Member 'USaveSlot_C::SavedSignals_obs' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Specials) == 0x000038, "Member 'USaveSlot_C::Specials' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Upgrades) == 0x000048, "Member 'USaveSlot_C::Upgrades' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Points) == 0x0000B0, "Member 'USaveSlot_C::Points' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, CatchedSignals) == 0x0000B8, "Member 'USaveSlot_C::CatchedSignals' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, SavedSignals_comp_obs) == 0x0000C8, "Member 'USaveSlot_C::SavedSignals_comp_obs' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Savedtime) == 0x0000D8, "Member 'USaveSlot_C::Savedtime' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, PassEvents) == 0x0000E8, "Member 'USaveSlot_C::PassEvents' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, GameMode) == 0x0000F8, "Member 'USaveSlot_C::GameMode' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, TotalTime) == 0x000100, "Member 'USaveSlot_C::TotalTime' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Food) == 0x000104, "Member 'USaveSlot_C::Food' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Sleep) == 0x000108, "Member 'USaveSlot_C::Sleep' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, AllEvents) == 0x000110, "Member 'USaveSlot_C::AllEvents' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, battery) == 0x000120, "Member 'USaveSlot_C::battery' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, ForceObjects) == 0x000128, "Member 'USaveSlot_C::ForceObjects' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Emails) == 0x000138, "Member 'USaveSlot_C::Emails' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Task) == 0x000148, "Member 'USaveSlot_C::Task' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, GObjStack) == 0x0001B8, "Member 'USaveSlot_C::GObjStack' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Musics) == 0x0001C8, "Member 'USaveSlot_C::Musics' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, AdvancementsNames) == 0x0001D8, "Member 'USaveSlot_C::AdvancementsNames' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, AdvancementsCompleted) == 0x0001E8, "Member 'USaveSlot_C::AdvancementsCompleted' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Advancements) == 0x0001F8, "Member 'USaveSlot_C::Advancements' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, CarFuel) == 0x000208, "Member 'USaveSlot_C::CarFuel' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, DroneOrder) == 0x000210, "Member 'USaveSlot_C::DroneOrder' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, PlayerTransform) == 0x000230, "Member 'USaveSlot_C::PlayerTransform' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Def) == 0x000260, "Member 'USaveSlot_C::Def' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, CarTransform) == 0x000290, "Member 'USaveSlot_C::CarTransform' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, DefCar) == 0x0002C0, "Member 'USaveSlot_C::DefCar' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, EmailsDef) == 0x0002F0, "Member 'USaveSlot_C::EmailsDef' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, InventoryData) == 0x000300, "Member 'USaveSlot_C::InventoryData' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, DishData) == 0x000310, "Member 'USaveSlot_C::DishData' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, ObjectsData) == 0x000320, "Member 'USaveSlot_C::ObjectsData' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Drone) == 0x000330, "Member 'USaveSlot_C::Drone' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, CarHealth) == 0x0003F0, "Member 'USaveSlot_C::CarHealth' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Version) == 0x0003F8, "Member 'USaveSlot_C::Version' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Health) == 0x000408, "Member 'USaveSlot_C::Health' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, SoldSignals) == 0x000410, "Member 'USaveSlot_C::SoldSignals' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Equipment) == 0x000420, "Member 'USaveSlot_C::Equipment' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Hold) == 0x000430, "Member 'USaveSlot_C::Hold' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Preview) == 0x000440, "Member 'USaveSlot_C::Preview' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, LastDate) == 0x000450, "Member 'USaveSlot_C::LastDate' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, CreationDate) == 0x000458, "Member 'USaveSlot_C::CreationDate' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Photos) == 0x000460, "Member 'USaveSlot_C::Photos' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Orders) == 0x000470, "Member 'USaveSlot_C::Orders' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Triggers) == 0x000480, "Member 'USaveSlot_C::Triggers' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Hold_def) == 0x000490, "Member 'USaveSlot_C::Hold_def' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Equipment_def) == 0x0004A0, "Member 'USaveSlot_C::Equipment_def' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, CoffeePower) == 0x0004B0, "Member 'USaveSlot_C::CoffeePower' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, ObjectsCount) == 0x0004B8, "Member 'USaveSlot_C::ObjectsCount' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Loan) == 0x000508, "Member 'USaveSlot_C::Loan' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, LoanTime) == 0x000528, "Member 'USaveSlot_C::LoanTime' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, DownloadPanelSignalSpawn) == 0x00052C, "Member 'USaveSlot_C::DownloadPanelSignalSpawn' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, ProcessingPanelSignal) == 0x000558, "Member 'USaveSlot_C::ProcessingPanelSignal' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, DownloadPanelSignal) == 0x0005C8, "Member 'USaveSlot_C::DownloadPanelSignal' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, P_health) == 0x000638, "Member 'USaveSlot_C::P_health' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Day) == 0x00063C, "Member 'USaveSlot_C::Day' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, WindowShit) == 0x000640, "Member 'USaveSlot_C::WindowShit' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Roache) == 0x000650, "Member 'USaveSlot_C::Roache' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, SavedSignals_0) == 0x000660, "Member 'USaveSlot_C::SavedSignals_0' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, SavedSignals_comp_0) == 0x000670, "Member 'USaveSlot_C::SavedSignals_comp_0' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, DroneItembox) == 0x000680, "Member 'USaveSlot_C::DroneItembox' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, WindowShitBytes) == 0x000740, "Member 'USaveSlot_C::WindowShitBytes' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Photos_phys) == 0x000750, "Member 'USaveSlot_C::Photos_phys' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Food_consumed) == 0x000760, "Member 'USaveSlot_C::Food_consumed' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Food_tolerance) == 0x000770, "Member 'USaveSlot_C::Food_tolerance' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Drawings) == 0x000780, "Member 'USaveSlot_C::Drawings' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, LastPlayed) == 0x000790, "Member 'USaveSlot_C::LastPlayed' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Map) == 0x000798, "Member 'USaveSlot_C::Map' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, IsReset) == 0x0007A0, "Member 'USaveSlot_C::IsReset' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, GrimeData) == 0x0007A8, "Member 'USaveSlot_C::GrimeData' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, TrashPilesData) == 0x0007B8, "Member 'USaveSlot_C::TrashPilesData' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, SubArea) == 0x0007C8, "Member 'USaveSlot_C::SubArea' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, ArirReputation) == 0x0007D0, "Member 'USaveSlot_C::ArirReputation' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, ArirPranks_mean) == 0x0007D8, "Member 'USaveSlot_C::ArirPranks_mean' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, ArirPranks_inconv) == 0x0007E8, "Member 'USaveSlot_C::ArirPranks_inconv' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, ArirPranks_neutral) == 0x0007F8, "Member 'USaveSlot_C::ArirPranks_neutral' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, ArirPranks_good) == 0x000808, "Member 'USaveSlot_C::ArirPranks_good' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, ArirPranks_flirty) == 0x000818, "Member 'USaveSlot_C::ArirPranks_flirty' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Strength) == 0x000828, "Member 'USaveSlot_C::Strength' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Agility) == 0x00082C, "Member 'USaveSlot_C::Agility' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, FlashlightBattery) == 0x000830, "Member 'USaveSlot_C::FlashlightBattery' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, HasFailedWeek) == 0x000838, "Member 'USaveSlot_C::HasFailedWeek' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, ServertimeBest) == 0x00083C, "Member 'USaveSlot_C::ServertimeBest' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Completes) == 0x000840, "Member 'USaveSlot_C::Completes' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, MoonPhase) == 0x000844, "Member 'USaveSlot_C::MoonPhase' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, GameInst) == 0x000848, "Member 'USaveSlot_C::GameInst' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, I) == 0x000850, "Member 'USaveSlot_C::I' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, MaxHealth) == 0x000854, "Member 'USaveSlot_C::MaxHealth' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, Crafts) == 0x000858, "Member 'USaveSlot_C::Crafts' has a wrong offset!");
static_assert(offsetof(USaveSlot_C, beginEquipment) == 0x000868, "Member 'USaveSlot_C::beginEquipment' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_serverMinigame

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_serverMinigame.umg_serverMinigame_C
// 0x00C0 (0x0320 - 0x0260)
class UUmg_serverMinigame_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                button_Exit;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_293;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_lines;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_48;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_timer;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_timerBest;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_slots;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AMainPlayer_C*                          Ppl;                                               // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RtTarget;                                          // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvas*                                Canvas;                                            // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDrawToRenderTargetContext             CanvasContext;                                     // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FVector2D                              Lastloc;                                           // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUmg_serverMinigameSlott_C*>     Slots;                                             // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         I;                                                 // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EC[0x4];                                      // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Probs;                                             // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 Ins;                                               // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AServerBox_C*                           Server;                                            // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Finished;                                          // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsActive;                                          // 0x0319(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31A[0x2];                                      // 0x031A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Time;                                              // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_umg_serverMinigame(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void End(bool Correct);
	void BndEvt__button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Enter(class AMainPlayer_C* Player);
	void Exit();
	void Draw(const struct FVector2D& ScreenPositionB);
	void Compare();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	class FText CreateTime(float InputPin);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_serverMinigame_C">();
	}
	static class UUmg_serverMinigame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_serverMinigame_C>();
	}
};
static_assert(alignof(UUmg_serverMinigame_C) == 0x000008, "Wrong alignment on UUmg_serverMinigame_C");
static_assert(sizeof(UUmg_serverMinigame_C) == 0x000320, "Wrong size on UUmg_serverMinigame_C");
static_assert(offsetof(UUmg_serverMinigame_C, UberGraphFrame) == 0x000260, "Member 'UUmg_serverMinigame_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, button_Exit) == 0x000268, "Member 'UUmg_serverMinigame_C::button_Exit' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, Image_293) == 0x000270, "Member 'UUmg_serverMinigame_C::Image_293' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, Image_lines) == 0x000278, "Member 'UUmg_serverMinigame_C::Image_lines' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, RetainerBox_48) == 0x000280, "Member 'UUmg_serverMinigame_C::RetainerBox_48' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, Text_timer) == 0x000288, "Member 'UUmg_serverMinigame_C::Text_timer' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, Text_timerBest) == 0x000290, "Member 'UUmg_serverMinigame_C::Text_timerBest' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, VerticalBox_slots) == 0x000298, "Member 'UUmg_serverMinigame_C::VerticalBox_slots' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, Ppl) == 0x0002A0, "Member 'UUmg_serverMinigame_C::Ppl' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, RtTarget) == 0x0002A8, "Member 'UUmg_serverMinigame_C::RtTarget' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, Dynmat) == 0x0002B0, "Member 'UUmg_serverMinigame_C::Dynmat' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, Canvas) == 0x0002B8, "Member 'UUmg_serverMinigame_C::Canvas' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, CanvasContext) == 0x0002C0, "Member 'UUmg_serverMinigame_C::CanvasContext' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, Lastloc) == 0x0002D0, "Member 'UUmg_serverMinigame_C::Lastloc' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, Slots) == 0x0002D8, "Member 'UUmg_serverMinigame_C::Slots' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, I) == 0x0002E8, "Member 'UUmg_serverMinigame_C::I' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, Probs) == 0x0002F0, "Member 'UUmg_serverMinigame_C::Probs' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, Ins) == 0x000300, "Member 'UUmg_serverMinigame_C::Ins' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, Server) == 0x000310, "Member 'UUmg_serverMinigame_C::Server' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, Finished) == 0x000318, "Member 'UUmg_serverMinigame_C::Finished' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, IsActive) == 0x000319, "Member 'UUmg_serverMinigame_C::IsActive' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigame_C, Time) == 0x00031C, "Member 'UUmg_serverMinigame_C::Time' has a wrong offset!");

}


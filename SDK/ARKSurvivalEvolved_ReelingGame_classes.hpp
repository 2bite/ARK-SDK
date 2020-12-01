#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ReelingGame_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ReelingGame.ReelingGame_C
// 0x00A0 (0x05B0 - 0x0510)
class UReelingGame_C : public UPrimalUI
{
public:
	class UTextBlock*                                  EndGameTextBlock;                                         // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      GamePadBtnIcon;                                           // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  KeyTextBlock;                                             // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  RemainingTimeTextBlock;                                   // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FKey                                        CurrKey;                                                  // 0x0530(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FKey>                                GameKeys;                                                 // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrKeyIndex;                                             // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GameDuration;                                             // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Initialized;                                              // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0561(0x0007) MISSED OFFSET
	struct FKey                                        LastPassedKey;                                            // 0x0568(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AWeapFishingRod_C*                           FishingRod;                                               // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   KeySuccess;                                               // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   PassedGame;                                               // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGameEnded;                                               // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClosingGame;                                              // 0x0599(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x059A(0x0002) MISSED OFFSET
	float                                              GameStartTime;                                            // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FGamePadKeyName>                     GamepadKeysMappings;                                      // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReelingGame.ReelingGame_C");
		return ptr;
	}


	void HandleKeyPress(const struct FKey& Key, bool* retReply);
	struct FEventReply OnControllerButtonReleased(struct FGeometry* MyGeometry, struct FControllerEvent* ControllerEvent);
	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void CycleToNextKey();
	void UpdateRemainingTime();
	struct FEventReply STATIC_OnKeyUp(struct FGeometry* MyGeometry, struct FKeyboardEvent* InKeyboardEvent);
	void STATIC_CycleKeys(bool* FinishedGame);
	void EndGame(bool succeeded);
	void Init(float KeyDisplayDuration, class AWeapFishingRod_C* rod, TArray<struct FKey>* GameKeys);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_ReelingGame(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
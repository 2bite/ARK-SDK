#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MammothPassengerHUD_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MammothPassengerHUD.MammothPassengerHUD_C
// 0x002D (0x0545 - 0x0518)
class UMammothPassengerHUD_C : public UPrimalUI
{
public:
	class UWidgetAnimation*                            FadeOut;                                                  // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDrumsMinigameUI_C*                          DrumsMinigameWidget;                                      // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABuff_MammothDrummer_C*                      SpawnedByBuff;                                            // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0530(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_CustomEvent_NewLifespan;                           // 0x0540(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0544(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MammothPassengerHUD.MammothPassengerHUD_C");
		return ptr;
	}


	void Receive_Input();
	void Sync_Minigame_Widget(double NextTimeOut, float BeatWindow, float BeatTimeOut, float BeatExitWidth, class UTexture2D* BeatWidgetIcon, bool UseDebugMode);
	void Initialize_HUD_Widget(class ABuff_MammothDrummer_C* MammothDrummerBuff);
	void Reset_HUD_Widget();
	void StartClosingWidget(float NewLifespan);
	void DestroySkiffHudWidget();
	void ExecuteUbergraph_MammothPassengerHUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

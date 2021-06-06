#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StriderHacking_HUD_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass StriderHacking_HUD.StriderHacking_HUD_C
// 0x002C (0x0544 - 0x0518)
class UStriderHacking_HUD_C : public UPrimalUI
{
public:
	class UWidgetAnimation*                            FadeIn;                                                   // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            FadeOut;                                                  // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStriderHackingMinigameUI_C*                 StriderHackingMinigameUIParent_C_7;                       // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0530(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_CustomEvent_NewLifespan;                           // 0x0540(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StriderHacking_HUD.StriderHacking_HUD_C");
		return ptr;
	}


	void Try_Trigger_Win();
	void Receive_Input(bool Success);
	void Sync_Minigame_Widget(double NextTimeOut, float BeatWindow, float BeatTimeOut, int BeatsPerLoop, bool IsShuttingDown, struct FLinearColor* PostProcessInputColorParam);
	void Initialize_HUD_Widget();
	void Reset_HUD_Widget();
	void StartClosingWidget(float NewLifeSpan);
	void DestroyWidget();
	void ExecuteUbergraph_StriderHacking_HUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

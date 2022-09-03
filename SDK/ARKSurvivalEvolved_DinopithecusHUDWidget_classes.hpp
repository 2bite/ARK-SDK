#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinopithecusHUDWidget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DinopithecusHUDWidget.DinopithecusHUDWidget_C
// 0x008C (0x05A4 - 0x0518)
class UDinopithecusHUDWidget_C : public UPrimalUI
{
public:
	class UWidgetAnimation*                            FadeOut;                                                  // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            FadeIn;                                                   // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                MainPanel;                                                // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  ModeTextBlock;                                            // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                TextPanel;                                                // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      ModeString;                                               // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastModeSwitchTime;                                       // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ModeHUDColor_FadeIn;                                      // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ModeHUDColor_FadeOut;                                     // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnWidgetDestroyed;                                        // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              TextPanelPositionY;                                       // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TextFadeOutMultiplier;                                    // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0590(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_CustomEvent_NewLifespan;                           // 0x05A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DinopithecusHUDWidget.DinopithecusHUDWidget_C");
		return ptr;
	}


	void SetHUDText(const class FString& Text, float TimeToFade);
	void Initialize_HUD_Widget();
	void Reset_HUD_Widget();
	void DestroyWidget();
	void StartClosingWidget(float NewLifeSpan);
	void ExecuteUbergraph_DinopithecusHUDWidget(int EntryPoint);
	void OnWidgetDestroyed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DesmodusHUD_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DesmodusHUD.DesmodusHUD_C
// 0x00C0 (0x05D8 - 0x0518)
class UDesmodusHUD_C : public UPrimalUI
{
public:
	class UWidgetAnimation*                            FadeOut;                                                  // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            FadeIn;                                                   // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                MainPanel;                                                // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  TextBlock;                                                // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  TextBlock2;                                               // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                TextPanel;                                                // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      HUDString;                                                // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastSetHUDStringTime;                                     // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           ProgressMaterial;                                         // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ProgressMaterialInstanceDynamic;                          // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ModeHUDColor_FadeIn;                                      // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ModeHUDColor_FadeOut;                                     // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnWidgetDestroyed;                                        // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              UltimateMeterScale;                                       // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UltimateMeterOpacity;                                     // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PressAndHoldAmount;                                       // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TextPanelPositionY;                                       // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUsingGamepad;                                           // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05B1(0x0003) MISSED OFFSET
	float                                              CurrentOpacity;                                           // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentTextPriority;                                      // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetOpacity;                                            // 0x05BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsRed;                                                    // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05C1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x05C4(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_CustomEvent_NewLifespan;                           // 0x05D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DesmodusHUD.DesmodusHUD_C");
		return ptr;
	}


	void ClearString();
	void STATIC_FadeOutHUDString();
	void STATIC_SetHUDString(const class FString& HUDString, int Priority, float TargetOpacity, float CurrentOpacity, bool ColorRed);
	void Initialize_HUD_Widget();
	void Reset_HUD_Widget();
	void DestroyWidget();
	void StartClosingWidget(float NewLifeSpan);
	void ExecuteUbergraph_DesmodusHUD(int EntryPoint);
	void OnWidgetDestroyed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

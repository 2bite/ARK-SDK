#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExosuitHUD_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ExosuitHUD.ExosuitHUD_C
// 0x00F0 (0x0608 - 0x0518)
class UExosuitHUD_C : public UPrimalUI
{
public:
	class UWidgetAnimation*                            FadeOut;                                                  // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            FadeIn;                                                   // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHorizontalBox*                              GamepadToggleKeyBox;                                      // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_311;                                                // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_313;                                                // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  KeyboardToggleKeyTextBlock;                               // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                MainPanel;                                                // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      MaterialHostImage;                                        // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  ModeTextBlock;                                            // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalRichTextBlock*                        RepairRequirementsRichTextBlock;                          // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  RepairStatusTextBlock;                                    // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalRichTextBlock*                        StatusRichTextBlock;                                      // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                TextPanel;                                                // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                UltimateMeterPanel;                                       // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      ModeString;                                               // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastModeSwitchTime;                                       // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           ProgressMaterial;                                         // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ProgressMaterialInstanceDynamic;                          // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ModeHUDColor_FadeIn;                                      // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ModeHUDColor_FadeOut;                                     // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnWidgetDestroyed;                                        // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              UltimateMeterScale;                                       // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UltimateMeterOpacity;                                     // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PressAndHoldAmount;                                       // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TextPanelPositionY;                                       // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUsingGamepad;                                           // 0x05F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05F1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x05F4(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_CustomEvent_NewLifespan;                           // 0x0604(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ExosuitHUD.ExosuitHUD_C");
		return ptr;
	}


	void SetupDynamicMaterial();
	void STATIC_SyncHUDWidget(const class FString& ModeString, const class FString& RepairRequirementsString, float BeamAvailabilityPercent, float BeamPressAndHoldPercent, bool bUsesChestBeam, bool bCanUseChestBeam, int ChestBeamState, class APrimalStructure* LastAimedStructure, int CurrentMode, float HUDModeTextFadeOutTimeMultiplier);
	void Initialize_HUD_Widget();
	void Reset_HUD_Widget();
	void DestroyWidget();
	void StartClosingWidget(float NewLifeSpan);
	void ExecuteUbergraph_ExosuitHUD(int EntryPoint);
	void OnWidgetDestroyed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HoverSkiffHudWidget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HoverSkiffHudWidget.HoverSkiffHudWidget_C
// 0x02E0 (0x07F8 - 0x0518)
class UHoverSkiffHudWidget_C : public UPrimalUI
{
public:
	class UCanvasPanel*                                AllFuelGaugesPanel;                                       // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      AltFuelIcon;                                              // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     AltFuelPanel;                                             // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHorizontalBox*                              AltFuelValuePanel;                                        // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  AltFuelValueTextBlock;                                    // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  AltitudeLabelTextBlock;                                   // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     AltitudePanel;                                            // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  AltitudeValueTextBlock;                                   // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      CameraLockIcon;                                           // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Crosshair;                                                // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      FuelReserveGaugeImage;                                    // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UScaleBox*                                   FuelReserveGaugePanel;                                    // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  FuelReserveLabelTextBlock;                                // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      FuelReserveNeedleImage;                                   // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  FuelReserveValueTextBlock;                                // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      FuelTankGaugeImage;                                       // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UScaleBox*                                   FuelTankGaugePanel;                                       // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  FuelTankLabelTextBlock;                                   // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      FuelTankNeedleImage;                                      // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  FuelTankValueTextBlock;                                   // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      FuelUsageGaugeImage;                                      // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UScaleBox*                                   FuelUsageGaugePanel;                                      // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  FuelUsageLabelTextBlock;                                  // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      FuelUsageNeedleImage;                                     // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  FuelUsageValueTextBlock;                                  // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                GaugeLabelPanel;                                          // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     RepairPanel;                                              // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                RepairProgressBar_Center;                                 // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                RepairProgressBar_LeftDiagonal;                           // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                RepairProgressBar_LeftLarge;                              // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                RepairProgressBar_RightDiagonal;                          // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                RepairProgressBar_RightLarge;                             // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  RepairValueTextBlock;                                     // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     SkiffModePanel;                                           // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  SkiffModeSubStatusTextBlock;                              // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  SkiffModeValueTextBlock;                                  // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHorizontalBox*                              StatusPanel;                                              // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                TractorPanel;                                             // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                TractorProgressBar0;                                      // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                TractorProgressBar1;                                      // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                TractorProgressBar2;                                      // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ATekHoverSkiff_Character_BP_C*               SpawnedBySkiff;                                           // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GrabbedByBuff;                                            // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RetractingRenderAngle;                                    // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GaugeAlphaStandard;                                       // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GaugeAlphaOnHKeyPressed;                                  // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NeedleAlphaStandard;                                      // 0x067C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NeedleAlphaOnHKeyPressed;                                 // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IndicatorColor_Good;                                      // 0x0684(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IndicatorColor_Warning;                                   // 0x0694(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IndicatorColor_Bad;                                       // 0x06A4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FuelReserveAmount_ChangeToWarning;                        // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FuelReserveAmount_ChangeToCritical;                       // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FuelUsagePercent_ChangeToWarning;                         // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FuelUsagePercent_ChangeToCritical;                        // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FuelTankPercent_ChangeToWarning;                          // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FuelTankPercent_ChangeToCritical;                         // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowAltFuelValue;                                         // 0x06CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06CD(0x0003) MISSED OFFSET
	float                                              HideRepairProgressBarAtPercentThreshold;                  // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06D4(0x0004) MISSED OFFSET
	class FString                                      SkiffModeString_Landed;                                   // 0x06D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      SkiffModeString_Hover;                                    // 0x06E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      SkiffModeString_Fly;                                      // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      SkiffModeString_Freefall;                                 // 0x0708(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      SkiffModeString_Landing;                                  // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      SkiffModeString_Launching;                                // 0x0728(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      SkiffModeString_OutOfFuel;                                // 0x0738(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      SkiffModeString_RepairMode;                               // 0x0748(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MinNeedleRotation;                                        // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxNeedleRotation;                                        // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentAltitudeOrHoverHeight;                             // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NeedleRenderAngleInterpSpeed;                             // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                RepairPanelBrushColor_Default;                            // 0x0768(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                RepairPanelBrushColor_Disabled;                           // 0x0778(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                RepairPanelBrushColor_Cooldown;                           // 0x0788(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                RepairPanelBrushColor_RepairMode;                         // 0x0798(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x07A8(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_CustomEvent_NewLifespan;                           // 0x07B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x07BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07BD(0x0003) MISSED OFFSET
	struct FGeometry                                   K2Node_Event_MyGeometry;                                  // 0x07C0(0x0034) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_InDeltaTime;                                 // 0x07F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HoverSkiffHudWidget.HoverSkiffHudWidget_C");
		return ptr;
	}


	struct FLinearColor Get_RepairPanel_BrushColor_1();
	struct FText STATIC_Get_SkiffModeSubStatusTextBlock_Text_1();
	struct FText Get_RepairLabelTextBlock_Text_1();
	void WidgetBoolToVisibilty(class UObject* TargetWidget, bool IsVisible, bool UseHiddenInsteadOfCollapsed);
	void UpdateRepairProgressBarsPercentAndForegroundColor();
	void UpdateRepairPanelVisibility();
	void UpdateAllFuelGaugesPanelVisibility();
	struct FText Get_AltFuelLabelTextBlock_Text_1();
	void Update_Status_Visibilities();
	void UpdateNeedleRotation();
	void STATIC_Update_Tractor_Beam_Crosshair_Visuals();
	struct FLinearColor Get_FuelUsageNeedleImage_ColorAndOpacity_1();
	struct FLinearColor Get_FuelReserveNeedleImage_ColorAndOpacity_1();
	struct FLinearColor Get_FuelTankNeedleImage_ColorAndOpacity_1();
	struct FLinearColor Get_FuelTankGaugeImage_ColorAndOpacity_1();
	struct FLinearColor Get_FuelReserveGaugeImage_ColorAndOpacity_1();
	void IsExtendedInfoKeyPressed(bool* bShowExtendedInfoKey);
	struct FLinearColor Get_FuelUsageGaugeImage_ColorAndOpacity_1();
	void DimGaugesAndNeedlesOnBool(bool Bool);
	void OnShowExtendedInfoKeyPressed();
	struct FText STATIC_Get_RepairValueTextBlock_Text_1();
	struct FText STATIC_Get_AltFuelValueTextBlock_Text_1();
	struct FSlateBrush Get_AltFuelIcon_Brush_1();
	struct FText STATIC_Get_SkiffModeValueTextBlock_Text_1();
	struct FText STATIC_Get_AltitudeValueTextBlock_Text_1();
	struct FText STATIC_Get_AltitudeLabelTextBlock_Text_1();
	struct FText STATIC_Get_Debug_Text_0();
	struct FText Get_FuelReserveTextBlock_Text_1();
	void STATIC_Set_Progress_Bar_Fill_And_Background_Colors(class UProgressBar* ProgressBar, const struct FLinearColor& LinearColor, struct FProgressBarStyle* ProgressBarStyle);
	struct FText Get_CurrentElementValueTextBlock_Text_1();
	float Get_Tractor_Progress_Bar_Percent_();
	struct FLinearColor Get_Crosshair_ColorAndOpacity_1();
	struct FLinearColor Get_CameraLockIcon_ColorAndOpacity_1();
	struct FText Get_FuelConsumptionRateValueTextBlock_Text_1();
	struct FText STATIC_Get_ElementFuelValueTextBlock_Text_1();
	void InitFromSkiff(class ATekHoverSkiff_Character_BP_C* FromSkiff);
	void StartClosingWidget(float NewLifeSpan);
	void DestroySkiffHudWidget();
	void ResetSkiffHudWidget();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_HoverSkiffHudWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

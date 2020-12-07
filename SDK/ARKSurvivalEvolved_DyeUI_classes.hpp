#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DyeUI_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DyeUI.DyeUI_C
// 0x0190 (0x0920 - 0x0790)
class UDyeUI_C : public UUI_DyeItem
{
public:
	class UWidgetAnimation*                            Close;                                                    // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Open;                                                     // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      ArkPrimeIcon;                                             // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         CloseButton;                                              // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDyeRegionButton_C*                          Color0;                                                   // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDyeRegionButton_C*                          Color1;                                                   // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDyeRegionButton_C*                          Color2;                                                   // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDyeRegionButton_C*                          Color3;                                                   // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDyeRegionButton_C*                          Color4;                                                   // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDyeRegionButton_C*                          Color5;                                                   // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      CreatureBottomBorder;                                     // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      CreatureTopBorder;                                        // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      DrawCursorWidget;                                         // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                DurabilityBar;                                            // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         DyeButton;                                                // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      DyeIcon;                                                  // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         ErasePainting;                                            // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      ErasePaintingIcon;                                        // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGamepadButtonLegend_C*                      GamepadButtonLegend_C_1;                                  // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGamepadButtonLegend_C*                      GamepadButtonLegend_C_2;                                  // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_1;                                                  // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_1021;                                               // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_1044;                                               // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_1067;                                               // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_1068;                                               // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_121;                                                // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_152;                                                // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_1684;                                               // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_1685;                                               // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_180;                                                // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_217;                                                // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_265;                                                // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_291;                                                // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_292;                                                // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_293;                                                // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_319;                                                // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_338;                                                // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_347;                                                // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_368;                                                // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_500;                                                // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_899;                                                // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_900;                                                // 0x08D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_93;                                                 // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_956;                                                // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      ItemIcon;                                                 // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         LoadPaintings;                                            // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUI_PreviewWidget*                           MeshPreview;                                              // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         ResetCamera;                                              // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         SavePaintings;                                            // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      SavePaintingsIcon;                                        // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DyeUI.DyeUI_C");
		return ptr;
	}


	void ExecuteUbergraph_DyeUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

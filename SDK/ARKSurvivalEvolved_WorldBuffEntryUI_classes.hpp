#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldBuffEntryUI_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WorldBuffEntryUI.WorldBuffEntryUI_C
// 0x0078 (0x0378 - 0x0300)
class UWorldBuffEntryUI_C : public UWorldBuffEntryWidget
{
public:
	class UWidgetAnimation*                            FadeIn;                                                   // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            FadeOut;                                                  // 0x0308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  AlphaTextBlock;                                           // 0x0310(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  BetaTextBlock;                                            // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  DescriptionTextBlock;                                     // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHorizontalBox*                              DifficultyPanel;                                          // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USizeBox*                                    GammaIndicatorPanel;                                      // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  GammaTextBlock;                                           // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      IconBackgroundImage;                                      // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      IconImage;                                                // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_142;                                                // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_255;                                                // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_302;                                                // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     MainPanel;                                                // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  TitleTextBlock;                                           // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WorldBuffEntryUI.WorldBuffEntryUI_C");
		return ptr;
	}


	void ExecuteUbergraph_WorldBuffEntryUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

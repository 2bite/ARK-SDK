#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElementStatusBarWidget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ElementStatusBarWidget.ElementStatusBarWidget_C
// 0x0048 (0x0360 - 0x0318)
class UElementStatusBarWidget_C : public UHUDElementBarWidget
{
public:
	class UWidgetAnimation*                            FadeOut;                                                  // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            FadeIn2;                                                  // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      BoostIcon;                                                // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          BootsBar;                                                 // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          GlovesBar;                                                // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          HelmetBar;                                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          PantsBar;                                                 // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          ShirtBar;                                                 // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          ShoulderCannonBar;                                        // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ElementStatusBarWidget.ElementStatusBarWidget_C");
		return ptr;
	}


	void UpdateBoostIconVisibility();
	void ExecuteUbergraph_ElementStatusBarWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

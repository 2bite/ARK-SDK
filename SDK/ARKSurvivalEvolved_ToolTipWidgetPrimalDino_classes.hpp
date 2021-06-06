#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ToolTipWidgetPrimalDino_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ToolTipWidgetPrimalDino.ToolTipWidgetPrimalDino_C
// 0x00B0 (0x0550 - 0x04A0)
class UToolTipWidgetPrimalDino_C : public UPrimalDinoToolTipWidget
{
public:
	class UProgressBar*                                CraftingBar;                                              // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      DinoFoodTypeImage;                                        // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      DinoIcon;                                                 // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      DinoIconBG;                                               // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          FoodBar;                                                  // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          HealthBar;                                                // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_1;                                                  // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_22;                                                 // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_294;                                                // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_321;                                                // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_45;                                                 // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_53;                                                 // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_8;                                                  // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_99;                                                 // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      MainBG;                                                   // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      MaxInventoryImage;                                        // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      MutagenIcon;                                              // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          StaminaBar;                                               // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                TamingProgressBar;                                        // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                TorpidityProgressBar;                                     // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          WeightBar;                                                // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          XPBar;                                                    // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetPrimalDino.ToolTipWidgetPrimalDino_C");
		return ptr;
	}


	void ExecuteUbergraph_ToolTipWidgetPrimalDino(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

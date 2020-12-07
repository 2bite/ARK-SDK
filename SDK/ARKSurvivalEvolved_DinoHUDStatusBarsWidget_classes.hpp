#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoHUDStatusBarsWidget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DinoHUDStatusBarsWidget.DinoHUDStatusBarsWidget_C
// 0x0058 (0x0450 - 0x03F8)
class UDinoHUDStatusBarsWidget_C : public UPlayerHUDStatusBarsWidget_C
{
public:
	class UProgressBarWidget*                          BuffProgressBar;                                          // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          FoodBar;                                                  // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      HarvestIcon;                                              // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          HealthBar;                                                // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      IndoorsIcon;                                              // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          OxygenBar;                                                // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          StaminaBar;                                               // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          TorpBar;                                                  // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          WaterBar;                                                 // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          WeightBar;                                                // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          XPBar;                                                    // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DinoHUDStatusBarsWidget.DinoHUDStatusBarsWidget_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoHUDStatusBarsWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

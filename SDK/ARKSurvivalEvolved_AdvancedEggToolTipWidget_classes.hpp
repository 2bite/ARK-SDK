#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AdvancedEggToolTipWidget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass AdvancedEggToolTipWidget.AdvancedEggToolTipWidget_C
// 0x0060 (0x0570 - 0x0510)
class UAdvancedEggToolTipWidget_C : public UPrimalEggToolTipWidget
{
public:
	class UProgressBar*                                BoostProgressBar;                                         // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     ColdRect;                                                 // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                EggHealthProgressBar;                                     // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      EggIconImage;                                             // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                EggIncubationProgressBar;                                 // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      FatherIcon;                                               // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      GenderIconImage;                                          // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     HotRect;                                                  // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_235;                                                // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_2622;                                               // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      MotherIcon;                                               // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     TempRangePanel;                                           // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AdvancedEggToolTipWidget.AdvancedEggToolTipWidget_C");
		return ptr;
	}


	void ExecuteUbergraph_AdvancedEggToolTipWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

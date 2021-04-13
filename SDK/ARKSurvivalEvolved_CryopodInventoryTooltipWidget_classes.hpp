#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CryopodInventoryTooltipWidget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CryopodInventoryTooltipWidget.CryopodInventoryTooltipWidget_C
// 0x0028 (0x0450 - 0x0428)
class UCryopodInventoryTooltipWidget_C : public UPrimalCryopodTooltipWidget
{
public:
	class UImage*                                      DinoIcon;                                                 // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      FatherIcon;                                               // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      GenderIcon;                                               // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      MotherIcon;                                               // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UToolTipWidgetPrimalItem_Inventory_C*        TooltipEmptyCryopod;                                      // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CryopodInventoryTooltipWidget.CryopodInventoryTooltipWidget_C");
		return ptr;
	}


	void ExecuteUbergraph_CryopodInventoryTooltipWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

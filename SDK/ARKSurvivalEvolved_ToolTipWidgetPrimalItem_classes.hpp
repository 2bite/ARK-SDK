#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ToolTipWidgetPrimalItem_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ToolTipWidgetPrimalItem.ToolTipWidgetPrimalItem_C
// 0x0038 (0x0528 - 0x04F0)
class UToolTipWidgetPrimalItem_C : public UPrimalItemToolTipWidget
{
public:
	class UProgressBar*                                CraftingBar;                                              // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                DurabilityBar;                                            // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                ItemRatingBar;                                            // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      SpoilIcon;                                                // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      TheItemIcon;                                              // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      TheItemIconBG;                                            // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      TheItemIconQualityOverlay;                                // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetPrimalItem.ToolTipWidgetPrimalItem_C");
		return ptr;
	}


	void ExecuteUbergraph_ToolTipWidgetPrimalItem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

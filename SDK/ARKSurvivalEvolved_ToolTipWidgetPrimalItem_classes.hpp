#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x00B0 (0x05A8 - 0x04F8)
class UToolTipWidgetPrimalItem_C : public UPrimalItemToolTipWidget
{
public:
	class UProgressBar*                                CraftingBar;                                              // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                DurabilityBar;                                            // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_1;                                                  // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_2;                                                  // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_157;                                                // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_22;                                                 // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_259;                                                // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_294;                                                // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_299;                                                // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_321;                                                // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_45;                                                 // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_53;                                                 // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_8;                                                  // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_83;                                                 // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_99;                                                 // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      ItemQualityBG;                                            // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                ItemRatingBar;                                            // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      MainBG;                                                   // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      SpoilIcon;                                                // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      TheItemIcon;                                              // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      TheItemIconBG;                                            // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      TheItemIconQualityOverlay;                                // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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

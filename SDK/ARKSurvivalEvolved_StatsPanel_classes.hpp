#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StatsPanel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass StatsPanel.StatsPanel_C
// 0x0048 (0x0640 - 0x05F8)
class UStatsPanel_C : public UInventoryStatsPanel
{
public:
	class UImage*                                      Image_152;                                                // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_43;                                                 // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     PlayerStatsButton;                                        // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterStatsPanel_C*                      PlayerStatsPanel;                                         // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     RemoteStatsButton;                                        // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetSwitcher*                             StatsSwitcher;                                            // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetSwitcher*                             TabBgSwitcher;                                            // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      TabSplitImgPlayer;                                        // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      TabSplitImgRemote;                                        // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatsPanel.StatsPanel_C");
		return ptr;
	}


	void ExecuteUbergraph_StatsPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

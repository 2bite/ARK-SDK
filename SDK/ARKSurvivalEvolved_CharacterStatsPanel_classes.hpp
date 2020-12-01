#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CharacterStatsPanel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CharacterStatsPanel.CharacterStatsPanel_C
// 0x0100 (0x0940 - 0x0840)
class UCharacterStatsPanel_C : public UStatsPanelWidget_Character
{
public:
	class UStatWidget_C*                               CraftingSpeedStat;                                        // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_1;           // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_2;           // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_3;           // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_4;           // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_5;           // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_6;           // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_7;           // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_8;           // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_9;           // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                ExperienceBar;                                            // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Female;                                                   // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStatWidget_C*                               FoodStat;                                                 // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStatWidget_C*                               FortitudeStat;                                            // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetSwitcher*                             GenderSwitcher;                                           // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStatWidget_C*                               HealthStat;                                               // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_112;                                                // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_127;                                                // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_150;                                                // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_173;                                                // 0x08D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_7;                                                  // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_8;                                                  // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStructureStatWidget_C*                      ImprintingStat;                                           // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Male;                                                     // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStatWidget_C*                               MeleeDamageStat;                                          // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStatWidget_C*                               MovementSpeedStat;                                        // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStatWidget_C*                               OxygenStat;                                               // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         ShowAncestorsButton;                                      // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStatWidget_C*                               StaminaStat;                                              // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStatWidget_C*                               TorpidityStat;                                            // 0x0928(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStatWidget_C*                               WaterStat;                                                // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStatWidget_C*                               WeightStat;                                               // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CharacterStatsPanel.CharacterStatsPanel_C");
		return ptr;
	}


	void ExecuteUbergraph_CharacterStatsPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

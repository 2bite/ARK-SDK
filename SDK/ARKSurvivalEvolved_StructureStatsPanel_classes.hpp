#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureStatsPanel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass StructureStatsPanel.StructureStatsPanel_C
// 0x0088 (0x0900 - 0x0878)
class UStructureStatsPanel_C : public UStatsPanelWidget_Structure
{
public:
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_1;           // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_2;           // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_11;          // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_3;           // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_4;           // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_31;          // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_5;           // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_6;           // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_7;           // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_8;           // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_9;           // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStructureStatWidget_C*                      HealthStatWidget;                                         // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         MultiUseButton1;                                          // 0x08D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         MultiUseButton2;                                          // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         MultiUseButton3;                                          // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStructureStatWidget_C*                      StorageStatWidget;                                        // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStructureStatWidget_C*                      WeightStatWidget;                                         // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StructureStatsPanel.StructureStatsPanel_C");
		return ptr;
	}


	void ExecuteUbergraph_StructureStatsPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ObeliskStatsPanel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ObeliskStatsPanel.ObeliskStatsPanel_C
// 0x0030 (0x08A8 - 0x0878)
class UObeliskStatsPanel_C : public UStatsPanelWidget_Obelisk
{
public:
	class UStructureStatWidget_C*                      ArkDinoStat;                                              // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStructureStatWidget_C*                      ArkStorageStat;                                           // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         RefreshArkButton;                                         // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStructureStatWidget_C*                      StorageStat;                                              // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         TravelToAnotherServerButton;                              // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         UploadCharacterDataButton;                                // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ObeliskStatsPanel.ObeliskStatsPanel_C");
		return ptr;
	}


	void ExecuteUbergraph_ObeliskStatsPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x0030 (0x0618 - 0x05E8)
class UObeliskStatsPanel_C : public UStatsPanelWidget_Obelisk
{
public:
	class UStructureStatWidget_C*                      ArkDinoStat;                                              // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStructureStatWidget_C*                      ArkStorageStat;                                           // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         RefreshArkButton;                                         // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStructureStatWidget_C*                      StorageStat;                                              // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         TravelToAnotherServerButton;                              // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         UploadCharacterDataButton;                                // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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

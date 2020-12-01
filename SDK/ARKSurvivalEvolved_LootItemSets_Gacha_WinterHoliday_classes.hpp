#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSets_Gacha_WinterHoliday_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSets_Gacha_WinterHoliday.LootItemSets_Gacha_WinterHoliday_C
// 0x0000 (0x0038 - 0x0038)
class ULootItemSets_Gacha_WinterHoliday_C : public UPrimalSupplyCrateItemSets
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSets_Gacha_WinterHoliday.LootItemSets_Gacha_WinterHoliday_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSets_Gacha_WinterHoliday(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

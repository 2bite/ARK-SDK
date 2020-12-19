#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSets_SupplyDrop_Level03_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSets_SupplyDrop_Level03.LootItemSets_SupplyDrop_Level03_C
// 0x0000 (0x0038 - 0x0038)
class ULootItemSets_SupplyDrop_Level03_C : public UPrimalSupplyCrateItemSets
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSets_SupplyDrop_Level03.LootItemSets_SupplyDrop_Level03_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSets_SupplyDrop_Level03(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

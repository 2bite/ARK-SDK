#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSets_SupplyDrop_Level15_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSets_SupplyDrop_Level15.LootItemSets_SupplyDrop_Level15_C
// 0x0000 (0x0038 - 0x0038)
class ULootItemSets_SupplyDrop_Level15_C : public UPrimalSupplyCrateItemSets
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSets_SupplyDrop_Level15.LootItemSets_SupplyDrop_Level15_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSets_SupplyDrop_Level15(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

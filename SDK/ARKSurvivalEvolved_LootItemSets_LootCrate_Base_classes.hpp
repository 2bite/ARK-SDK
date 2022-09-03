#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSets_LootCrate_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSets_LootCrate_Base.LootItemSets_LootCrate_Base_C
// 0x0000 (0x0038 - 0x0038)
class ULootItemSets_LootCrate_Base_C : public UPrimalSupplyCrateItemSets
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSets_LootCrate_Base.LootItemSets_LootCrate_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSets_LootCrate_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

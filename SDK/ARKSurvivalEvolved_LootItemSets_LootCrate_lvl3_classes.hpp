#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSets_LootCrate_lvl3_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSets_LootCrate_lvl3.LootItemSets_LootCrate_lvl3_C
// 0x0000 (0x0038 - 0x0038)
class ULootItemSets_LootCrate_lvl3_C : public ULootItemSets_LootCrate_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSets_LootCrate_lvl3.LootItemSets_LootCrate_lvl3_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSets_LootCrate_lvl3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

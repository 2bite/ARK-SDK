#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSets_Gacha_Tamed_Premium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSets_Gacha_Tamed_Premium.LootItemSets_Gacha_Tamed_Premium_C
// 0x0000 (0x0038 - 0x0038)
class ULootItemSets_Gacha_Tamed_Premium_C : public UPrimalSupplyCrateItemSets
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSets_Gacha_Tamed_Premium.LootItemSets_Gacha_Tamed_Premium_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSets_Gacha_Tamed_Premium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_SupplyDrop_Level35_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSet_SupplyDrop_Level35.LootItemSet_SupplyDrop_Level35_C
// 0x0000 (0x0068 - 0x0068)
class ULootItemSet_SupplyDrop_Level35_C : public UPrimalSupplyCrateItemSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_SupplyDrop_Level35.LootItemSet_SupplyDrop_Level35_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSet_SupplyDrop_Level35(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

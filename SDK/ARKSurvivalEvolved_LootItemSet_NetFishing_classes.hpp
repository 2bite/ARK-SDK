#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_NetFishing_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSet_NetFishing.LootItemSet_NetFishing_C
// 0x0000 (0x0068 - 0x0068)
class ULootItemSet_NetFishing_C : public UPrimalSupplyCrateItemSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_NetFishing.LootItemSet_NetFishing_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSet_NetFishing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

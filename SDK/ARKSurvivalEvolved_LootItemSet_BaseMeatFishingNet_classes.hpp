#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_BaseMeatFishingNet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSet_BaseMeatFishingNet.LootItemSet_BaseMeatFishingNet_C
// 0x0000 (0x0068 - 0x0068)
class ULootItemSet_BaseMeatFishingNet_C : public UPrimalSupplyCrateItemSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_BaseMeatFishingNet.LootItemSet_BaseMeatFishingNet_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSet_BaseMeatFishingNet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

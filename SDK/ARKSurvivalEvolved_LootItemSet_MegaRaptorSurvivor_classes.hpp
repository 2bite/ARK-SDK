#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_MegaRaptorSurvivor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSet_MegaRaptorSurvivor.LootItemSet_MegaRaptorSurvivor_C
// 0x0000 (0x0068 - 0x0068)
class ULootItemSet_MegaRaptorSurvivor_C : public UPrimalSupplyCrateItemSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_MegaRaptorSurvivor.LootItemSet_MegaRaptorSurvivor_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSet_MegaRaptorSurvivor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

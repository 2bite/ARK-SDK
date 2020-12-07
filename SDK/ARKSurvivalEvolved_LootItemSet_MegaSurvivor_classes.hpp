#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_MegaSurvivor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSet_MegaSurvivor.LootItemSet_MegaSurvivor_C
// 0x0000 (0x0068 - 0x0068)
class ULootItemSet_MegaSurvivor_C : public UPrimalSupplyCrateItemSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_MegaSurvivor.LootItemSet_MegaSurvivor_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSet_MegaSurvivor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

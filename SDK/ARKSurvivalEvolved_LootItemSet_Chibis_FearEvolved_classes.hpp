#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_Chibis_FearEvolved_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSet_Chibis_FearEvolved.LootItemSet_Chibis_FearEvolved_C
// 0x0000 (0x0068 - 0x0068)
class ULootItemSet_Chibis_FearEvolved_C : public UPrimalSupplyCrateItemSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_Chibis_FearEvolved.LootItemSet_Chibis_FearEvolved_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSet_Chibis_FearEvolved(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

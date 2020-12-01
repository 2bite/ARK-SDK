#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_VolcanicCrystal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootItemSet_VolcanicCrystal.LootItemSet_VolcanicCrystal_C
// 0x0000 (0x0068 - 0x0068)
class ULootItemSet_VolcanicCrystal_C : public UPrimalSupplyCrateItemSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_VolcanicCrystal.LootItemSet_VolcanicCrystal_C");
		return ptr;
	}


	void ExecuteUbergraph_LootItemSet_VolcanicCrystal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_PlantSpeciesZ_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Seed_PlantSpeciesZ.PrimalItemConsumable_Seed_PlantSpeciesZ_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemConsumable_Seed_PlantSpeciesZ_C : public UPrimalItemConsumableSeed_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Seed_PlantSpeciesZ.PrimalItemConsumable_Seed_PlantSpeciesZ_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesZ(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
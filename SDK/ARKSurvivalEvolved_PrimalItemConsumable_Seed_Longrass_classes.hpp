#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_Longrass_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Seed_Longrass.PrimalItemConsumable_Seed_Longrass_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemConsumable_Seed_Longrass_C : public UPrimalItemConsumable_Seed_BaseVeggie_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Seed_Longrass.PrimalItemConsumable_Seed_Longrass_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Seed_Longrass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

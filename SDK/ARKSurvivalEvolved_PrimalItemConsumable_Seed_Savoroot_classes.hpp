#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_Savoroot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Seed_Savoroot.PrimalItemConsumable_Seed_Savoroot_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemConsumable_Seed_Savoroot_C : public UPrimalItemConsumable_Seed_BaseVeggie_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Seed_Savoroot.PrimalItemConsumable_Seed_Savoroot_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Seed_Savoroot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_Citronal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Seed_Citronal.PrimalItemConsumable_Seed_Citronal_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemConsumable_Seed_Citronal_C : public UPrimalItemConsumable_Seed_BaseVeggie_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Seed_Citronal.PrimalItemConsumable_Seed_Citronal_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Seed_Citronal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

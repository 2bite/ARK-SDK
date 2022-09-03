#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Allo_Fertilized_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Egg_Allo_Fertilized.PrimalItemConsumable_Egg_Allo_Fertilized_C
// 0x0000 (0x0B00 - 0x0B00)
class UPrimalItemConsumable_Egg_Allo_Fertilized_C : public UPrimalItemConsumable_Egg_Allo_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg_Allo_Fertilized.PrimalItemConsumable_Egg_Allo_Fertilized_C");
		return ptr;
	}


	void BPPreUseItem();
	void ExecuteUbergraph_PrimalItemConsumable_Egg_Allo_Fertilized(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

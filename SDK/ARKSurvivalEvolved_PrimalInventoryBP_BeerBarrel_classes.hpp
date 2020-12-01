#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_BeerBarrel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_BeerBarrel.PrimalInventoryBP_BeerBarrel_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventoryBP_BeerBarrel_C : public UPrimalInventoryBP_BaseFuelBurning_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_BeerBarrel.PrimalInventoryBP_BeerBarrel_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_BeerBarrel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

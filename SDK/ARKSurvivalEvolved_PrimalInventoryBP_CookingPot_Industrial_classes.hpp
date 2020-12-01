#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_CookingPot_Industrial_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_CookingPot_Industrial.PrimalInventoryBP_CookingPot_Industrial_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventoryBP_CookingPot_Industrial_C : public UPrimalInventoryBP_CookingPot_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_CookingPot_Industrial.PrimalInventoryBP_CookingPot_Industrial_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_CookingPot_Industrial(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

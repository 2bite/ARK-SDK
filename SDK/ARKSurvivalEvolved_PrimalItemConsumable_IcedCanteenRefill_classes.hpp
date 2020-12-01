#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_IcedCanteenRefill_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_IcedCanteenRefill.PrimalItemConsumable_IcedCanteenRefill_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemConsumable_IcedCanteenRefill_C : public UPrimalItemConsumable_IcedCanteen_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_IcedCanteenRefill.PrimalItemConsumable_IcedCanteenRefill_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_IcedCanteenRefill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

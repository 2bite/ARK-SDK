#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_CanteenRefill_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_CanteenRefill.PrimalItemConsumable_CanteenRefill_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemConsumable_CanteenRefill_C : public UPrimalItemConsumable_CanteenCraftable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_CanteenRefill.PrimalItemConsumable_CanteenRefill_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_CanteenRefill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

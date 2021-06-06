#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_TekCanteenRefill_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_TekCanteenRefill.PrimalItemConsumable_TekCanteenRefill_C
// 0x0000 (0x0B70 - 0x0B70)
class UPrimalItemConsumable_TekCanteenRefill_C : public UPrimalItemConsumable_TekCanteenCraftable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_TekCanteenRefill.PrimalItemConsumable_TekCanteenRefill_C");
		return ptr;
	}


	void BPCrafted();
	void ExecuteUbergraph_PrimalItemConsumable_TekCanteenRefill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

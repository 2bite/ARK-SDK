#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_IcedCanteen_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_IcedCanteen.PrimalItemConsumable_IcedCanteen_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_IcedCanteen_C : public UPrimalItemConsumable_CanteenCraftable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_IcedCanteen.PrimalItemConsumable_IcedCanteen_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_IcedCanteen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

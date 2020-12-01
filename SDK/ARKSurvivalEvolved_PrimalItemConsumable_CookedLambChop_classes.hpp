#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_CookedLambChop_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_CookedLambChop.PrimalItemConsumable_CookedLambChop_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_CookedLambChop_C : public UPrimalItemConsumable_CookedPrimeMeat_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_CookedLambChop.PrimalItemConsumable_CookedLambChop_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_CookedLambChop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

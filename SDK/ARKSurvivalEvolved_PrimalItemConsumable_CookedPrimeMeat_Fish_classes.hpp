#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_CookedPrimeMeat_Fish_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_CookedPrimeMeat_Fish.PrimalItemConsumable_CookedPrimeMeat_Fish_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_CookedPrimeMeat_Fish_C : public UPrimalItemConsumable_CookedPrimeMeat_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_CookedPrimeMeat_Fish.PrimalItemConsumable_CookedPrimeMeat_Fish_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_CookedPrimeMeat_Fish(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

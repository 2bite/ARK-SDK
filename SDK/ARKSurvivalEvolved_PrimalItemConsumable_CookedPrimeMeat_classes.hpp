#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_CookedPrimeMeat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_CookedPrimeMeat.PrimalItemConsumable_CookedPrimeMeat_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemConsumable_CookedPrimeMeat_C : public UPrimalItemConsumableEatable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_CookedPrimeMeat.PrimalItemConsumable_CookedPrimeMeat_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_CookedPrimeMeat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

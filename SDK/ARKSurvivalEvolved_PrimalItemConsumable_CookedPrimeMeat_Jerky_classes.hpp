#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_CookedPrimeMeat_Jerky_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_CookedPrimeMeat_Jerky.PrimalItemConsumable_CookedPrimeMeat_Jerky_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemConsumable_CookedPrimeMeat_Jerky_C : public UPrimalItemConsumable_CookedPrimeMeat_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_CookedPrimeMeat_Jerky.PrimalItemConsumable_CookedPrimeMeat_Jerky_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_CookedPrimeMeat_Jerky(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TekCaveTribute_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_TekCaveTribute.PrimalInventoryBP_TekCaveTribute_C
// 0x0000 (0x0590 - 0x0590)
class UPrimalInventoryBP_TekCaveTribute_C : public UPrimalInventoryComponent_Static
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TekCaveTribute.PrimalInventoryBP_TekCaveTribute_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_TekCaveTribute(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

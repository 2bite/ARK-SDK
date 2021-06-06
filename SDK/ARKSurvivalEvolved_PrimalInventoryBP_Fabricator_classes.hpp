#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_Fabricator_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_Fabricator.PrimalInventoryBP_Fabricator_C
// 0x0000 (0x0590 - 0x0590)
class UPrimalInventoryBP_Fabricator_C : public UPrimalInventoryBP_BaseGasolineBurning_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_Fabricator.PrimalInventoryBP_Fabricator_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_Fabricator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_BionicQuetzal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCostume_BionicQuetzal.PrimalItemCostume_BionicQuetzal_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemCostume_BionicQuetzal_C : public UPrimalItemCostumeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_BionicQuetzal.PrimalItemCostume_BionicQuetzal_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCostume_BionicQuetzal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

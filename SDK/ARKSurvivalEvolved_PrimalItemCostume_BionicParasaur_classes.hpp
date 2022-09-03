#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_BionicParasaur_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCostume_BionicParasaur.PrimalItemCostume_BionicParasaur_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemCostume_BionicParasaur_C : public UPrimalItemCostumeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_BionicParasaur.PrimalItemCostume_BionicParasaur_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCostume_BionicParasaur(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

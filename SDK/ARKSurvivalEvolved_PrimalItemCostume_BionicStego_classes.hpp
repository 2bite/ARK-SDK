#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_BionicStego_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCostume_BionicStego.PrimalItemCostume_BionicStego_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemCostume_BionicStego_C : public UPrimalItemCostumeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_BionicStego.PrimalItemCostume_BionicStego_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCostume_BionicStego(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

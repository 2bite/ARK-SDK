#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_BoneTrike_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCostume_BoneTrike.PrimalItemCostume_BoneTrike_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemCostume_BoneTrike_C : public UPrimalItemCostumeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_BoneTrike.PrimalItemCostume_BoneTrike_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCostume_BoneTrike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

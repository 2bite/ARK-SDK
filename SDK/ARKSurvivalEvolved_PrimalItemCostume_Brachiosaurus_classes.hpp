#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_Brachiosaurus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCostume_Brachiosaurus.PrimalItemCostume_Brachiosaurus_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemCostume_Brachiosaurus_C : public UPrimalItemCostumeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_Brachiosaurus.PrimalItemCostume_Brachiosaurus_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCostume_Brachiosaurus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

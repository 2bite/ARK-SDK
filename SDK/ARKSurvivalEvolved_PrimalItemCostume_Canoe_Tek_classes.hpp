#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_Canoe_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCostume_Canoe_Tek.PrimalItemCostume_Canoe_Tek_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemCostume_Canoe_Tek_C : public UPrimalItemCostumeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_Canoe_Tek.PrimalItemCostume_Canoe_Tek_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCostume_Canoe_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

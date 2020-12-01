#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_GasCollector_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_GasCollector.PrimalInventoryBP_GasCollector_C
// 0x0000 (0x0595 - 0x0595)
class UPrimalInventoryBP_GasCollector_C : public UPrimalInventoryBP_BaseAutoGenerateItems_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_GasCollector.PrimalInventoryBP_GasCollector_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_GasCollector(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_ChemBench_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_ChemBench.PrimalInventoryBP_ChemBench_C
// 0x0000 (0x0590 - 0x0590)
class UPrimalInventoryBP_ChemBench_C : public UPrimalInventoryBP_MortarAndPestle_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_ChemBench.PrimalInventoryBP_ChemBench_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_ChemBench(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

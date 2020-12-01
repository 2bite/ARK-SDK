#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_AnvilBench_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_AnvilBench.PrimalInventoryBP_AnvilBench_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventoryBP_AnvilBench_C : public UPrimalInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_AnvilBench.PrimalInventoryBP_AnvilBench_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_AnvilBench(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_CropPlot_Large_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_CropPlot_Large.PrimalInventoryBP_CropPlot_Large_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventoryBP_CropPlot_Large_C : public UPrimalInventoryBP_CropPlot_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_CropPlot_Large.PrimalInventoryBP_CropPlot_Large_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_CropPlot_Large(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

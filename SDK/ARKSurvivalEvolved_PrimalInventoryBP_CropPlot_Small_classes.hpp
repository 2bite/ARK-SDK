#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_CropPlot_Small_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_CropPlot_Small.PrimalInventoryBP_CropPlot_Small_C
// 0x0000 (0x0590 - 0x0590)
class UPrimalInventoryBP_CropPlot_Small_C : public UPrimalInventoryBP_CropPlot_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_CropPlot_Small.PrimalInventoryBP_CropPlot_Small_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_CropPlot_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

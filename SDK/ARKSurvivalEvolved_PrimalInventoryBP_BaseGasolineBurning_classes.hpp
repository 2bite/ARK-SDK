#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_BaseGasolineBurning_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_BaseGasolineBurning.PrimalInventoryBP_BaseGasolineBurning_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventoryBP_BaseGasolineBurning_C : public UPrimalInventoryBP_BaseFuelBurning_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_BaseGasolineBurning.PrimalInventoryBP_BaseGasolineBurning_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_BaseGasolineBurning(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

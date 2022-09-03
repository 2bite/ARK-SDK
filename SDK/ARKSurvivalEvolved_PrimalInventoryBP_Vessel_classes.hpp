#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_Vessel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_Vessel.PrimalInventoryBP_Vessel_C
// 0x0000 (0x0590 - 0x0590)
class UPrimalInventoryBP_Vessel_C : public UPrimalInventoryBP_PreservingBin_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_Vessel.PrimalInventoryBP_Vessel_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_Vessel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

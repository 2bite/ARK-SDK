#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_IndustrialForge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_IndustrialForge.PrimalInventoryBP_IndustrialForge_C
// 0x0000 (0x0590 - 0x0590)
class UPrimalInventoryBP_IndustrialForge_C : public UPrimalInventoryBP_BaseFuelBurning_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_IndustrialForge.PrimalInventoryBP_IndustrialForge_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_IndustrialForge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

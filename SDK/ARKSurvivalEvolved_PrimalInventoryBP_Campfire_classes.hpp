#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_Campfire_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_Campfire.PrimalInventoryBP_Campfire_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventoryBP_Campfire_C : public UPrimalInventoryBP_BaseFuelBurning_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_Campfire.PrimalInventoryBP_Campfire_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_Campfire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

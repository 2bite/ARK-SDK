#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_DeathItemCache_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_DeathItemCache.PrimalInventoryBP_DeathItemCache_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventoryBP_DeathItemCache_C : public UPrimalInventoryBP_StorageBox_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_DeathItemCache.PrimalInventoryBP_DeathItemCache_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_DeathItemCache(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_GhostReaper_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCostume_GhostReaper.PrimalItemCostume_GhostReaper_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemCostume_GhostReaper_C : public UPrimalItemCostume_Ghost_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_GhostReaper.PrimalItemCostume_GhostReaper_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCostume_GhostReaper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

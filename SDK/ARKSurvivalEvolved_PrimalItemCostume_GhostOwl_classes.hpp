#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_GhostOwl_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCostume_GhostOwl.PrimalItemCostume_GhostOwl_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemCostume_GhostOwl_C : public UPrimalItemCostume_Ghost_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_GhostOwl.PrimalItemCostume_GhostOwl_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCostume_GhostOwl(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

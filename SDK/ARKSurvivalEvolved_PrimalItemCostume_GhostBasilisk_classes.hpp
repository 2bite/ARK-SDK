#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_GhostBasilisk_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCostume_GhostBasilisk.PrimalItemCostume_GhostBasilisk_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemCostume_GhostBasilisk_C : public UPrimalItemCostume_Ghost_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_GhostBasilisk.PrimalItemCostume_GhostBasilisk_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCostume_GhostBasilisk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

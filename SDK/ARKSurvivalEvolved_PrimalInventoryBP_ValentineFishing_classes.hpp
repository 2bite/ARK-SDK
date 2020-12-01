#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_ValentineFishing_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_ValentineFishing.PrimalInventoryBP_ValentineFishing_C
// 0x0000 (0x0538 - 0x0538)
class UPrimalInventoryBP_ValentineFishing_C : public UPrimalInventoryBP_GenericFishing_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_ValentineFishing.PrimalInventoryBP_ValentineFishing_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_ValentineFishing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

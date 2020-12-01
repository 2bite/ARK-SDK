#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDye_Tangerine_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemDye_Tangerine.PrimalItemDye_Tangerine_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemDye_Tangerine_C : public UPrimalItemDyeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemDye_Tangerine.PrimalItemDye_Tangerine_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemDye_Tangerine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

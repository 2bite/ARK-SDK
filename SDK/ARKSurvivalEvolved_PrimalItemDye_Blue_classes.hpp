#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDye_Blue_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemDye_Blue.PrimalItemDye_Blue_C
// 0x0000 (0x0A08 - 0x0A08)
class UPrimalItemDye_Blue_C : public UPrimalItemDyeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemDye_Blue.PrimalItemDye_Blue_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemDye_Blue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

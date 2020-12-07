#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDyeGeneric_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemDyeGeneric.PrimalItemDyeGeneric_C
// 0x0000 (0x0A08 - 0x0A08)
class UPrimalItemDyeGeneric_C : public UPrimalItem_Dye
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemDyeGeneric.PrimalItemDyeGeneric_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemDyeGeneric(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

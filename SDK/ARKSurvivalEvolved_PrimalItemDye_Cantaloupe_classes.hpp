#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDye_Cantaloupe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemDye_Cantaloupe.PrimalItemDye_Cantaloupe_C
// 0x0000 (0x0A08 - 0x0A08)
class UPrimalItemDye_Cantaloupe_C : public UPrimalItemDyeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemDye_Cantaloupe.PrimalItemDye_Cantaloupe_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemDye_Cantaloupe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

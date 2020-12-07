#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_Tintoberry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Seed_Tintoberry.PrimalItemConsumable_Seed_Tintoberry_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemConsumable_Seed_Tintoberry_C : public UPrimalItemConsumable_Seed_BaseBerry_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Seed_Tintoberry.PrimalItemConsumable_Seed_Tintoberry_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Seed_Tintoberry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

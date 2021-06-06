#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_Mejoberry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Seed_Mejoberry.PrimalItemConsumable_Seed_Mejoberry_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemConsumable_Seed_Mejoberry_C : public UPrimalItemConsumable_Seed_BaseBerry_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Seed_Mejoberry.PrimalItemConsumable_Seed_Mejoberry_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Seed_Mejoberry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

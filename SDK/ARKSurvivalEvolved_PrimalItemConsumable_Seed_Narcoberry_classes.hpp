#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_Narcoberry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Seed_Narcoberry.PrimalItemConsumable_Seed_Narcoberry_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemConsumable_Seed_Narcoberry_C : public UPrimalItemConsumable_Seed_BaseBerry_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Seed_Narcoberry.PrimalItemConsumable_Seed_Narcoberry_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Seed_Narcoberry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

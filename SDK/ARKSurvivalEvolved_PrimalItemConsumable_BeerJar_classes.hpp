#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_BeerJar_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_BeerJar.PrimalItemConsumable_BeerJar_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_BeerJar_C : public UPrimalItemConsumableEatable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_BeerJar.PrimalItemConsumable_BeerJar_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_BeerJar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_DinoPoopMassive_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_DinoPoopMassive.PrimalItemConsumable_DinoPoopMassive_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemConsumable_DinoPoopMassive_C : public UPrimalItemConsumablePoop_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_DinoPoopMassive.PrimalItemConsumable_DinoPoopMassive_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_DinoPoopMassive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

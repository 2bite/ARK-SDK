#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Moschops_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Egg_Moschops.PrimalItemConsumable_Egg_Moschops_C
// 0x0000 (0x0B00 - 0x0B00)
class UPrimalItemConsumable_Egg_Moschops_C : public UPrimalItemConsumable_Egg_Large_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg_Moschops.PrimalItemConsumable_Egg_Moschops_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Egg_Moschops(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x0000 (0x09E8 - 0x09E8)
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

#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Special_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Egg_Special.PrimalItemConsumable_Egg_Special_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemConsumable_Egg_Special_C : public UPrimalItemConsumable_Egg_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg_Special.PrimalItemConsumable_Egg_Special_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Egg_Special(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

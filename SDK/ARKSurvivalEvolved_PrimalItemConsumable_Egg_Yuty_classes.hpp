#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Yuty_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Egg_Yuty.PrimalItemConsumable_Egg_Yuty_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_Egg_Yuty_C : public UPrimalItemConsumable_Egg_Special_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg_Yuty.PrimalItemConsumable_Egg_Yuty_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Egg_Yuty(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

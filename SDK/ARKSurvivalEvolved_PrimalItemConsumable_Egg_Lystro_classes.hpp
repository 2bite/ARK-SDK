#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Lystro_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Egg_Lystro.PrimalItemConsumable_Egg_Lystro_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_Egg_Lystro_C : public UPrimalItemConsumable_Egg_XSmall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg_Lystro.PrimalItemConsumable_Egg_Lystro_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Egg_Lystro(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

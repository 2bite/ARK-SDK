#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCustomDrinkRecipe_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCustomDrinkRecipe_Base.PrimalItemCustomDrinkRecipe_Base_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemCustomDrinkRecipe_Base_C : public UPrimalItemCustomFoodRecipe_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCustomDrinkRecipe_Base.PrimalItemCustomDrinkRecipe_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

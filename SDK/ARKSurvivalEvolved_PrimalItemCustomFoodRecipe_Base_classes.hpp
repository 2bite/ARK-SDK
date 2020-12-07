#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCustomFoodRecipe_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCustomFoodRecipe_Base.PrimalItemCustomFoodRecipe_Base_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemCustomFoodRecipe_Base_C : public UPrimalItemConsumableEatable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCustomFoodRecipe_Base.PrimalItemCustomFoodRecipe_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCustomFoodRecipe_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

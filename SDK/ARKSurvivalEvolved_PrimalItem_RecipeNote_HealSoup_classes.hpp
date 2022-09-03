#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_RecipeNote_HealSoup_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_RecipeNote_HealSoup.PrimalItem_RecipeNote_HealSoup_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItem_RecipeNote_HealSoup_C : public UPrimalItem_RecipeNote_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_RecipeNote_HealSoup.PrimalItem_RecipeNote_HealSoup_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_RecipeNote_HealSoup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

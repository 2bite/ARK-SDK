#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_RecipeNote_ShadowSteak_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_RecipeNote_ShadowSteak.PrimalItem_RecipeNote_ShadowSteak_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItem_RecipeNote_ShadowSteak_C : public UPrimalItem_RecipeNote_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_RecipeNote_ShadowSteak.PrimalItem_RecipeNote_ShadowSteak_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_RecipeNote_ShadowSteak(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

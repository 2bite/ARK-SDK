#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_RecipeNote_Kibble_Stegosaurus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_RecipeNote_Kibble_Stegosaurus.PrimalItem_RecipeNote_Kibble_Stegosaurus_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItem_RecipeNote_Kibble_Stegosaurus_C : public UPrimalItem_RecipeNote_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_RecipeNote_Kibble_Stegosaurus.PrimalItem_RecipeNote_Kibble_Stegosaurus_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Stegosaurus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
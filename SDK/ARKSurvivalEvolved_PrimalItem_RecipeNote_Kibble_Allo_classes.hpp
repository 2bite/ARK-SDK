#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_RecipeNote_Kibble_Allo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_RecipeNote_Kibble_Allo.PrimalItem_RecipeNote_Kibble_Allo_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItem_RecipeNote_Kibble_Allo_C : public UPrimalItem_RecipeNote_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_RecipeNote_Kibble_Allo.PrimalItem_RecipeNote_Kibble_Allo_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Allo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

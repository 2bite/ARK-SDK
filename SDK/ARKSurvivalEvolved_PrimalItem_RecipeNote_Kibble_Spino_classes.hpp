#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_RecipeNote_Kibble_Spino_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_RecipeNote_Kibble_Spino.PrimalItem_RecipeNote_Kibble_Spino_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItem_RecipeNote_Kibble_Spino_C : public UPrimalItem_RecipeNote_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_RecipeNote_Kibble_Spino.PrimalItem_RecipeNote_Kibble_Spino_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Spino(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TT_SwimShirt_Meat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_TT_SwimShirt_Meat.PrimalItemSkin_TT_SwimShirt_Meat_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemSkin_TT_SwimShirt_Meat_C : public UPrimalItemSkin_SummerSwimShirt_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_TT_SwimShirt_Meat.PrimalItemSkin_TT_SwimShirt_Meat_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_TT_SwimShirt_Meat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
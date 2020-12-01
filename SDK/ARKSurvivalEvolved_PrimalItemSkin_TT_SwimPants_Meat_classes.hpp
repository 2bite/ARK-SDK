#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TT_SwimPants_Meat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_TT_SwimPants_Meat.PrimalItemSkin_TT_SwimPants_Meat_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemSkin_TT_SwimPants_Meat_C : public UPrimalItemSkin_SummerSwimPants_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_TT_SwimPants_Meat.PrimalItemSkin_TT_SwimPants_Meat_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_TT_SwimPants_Meat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

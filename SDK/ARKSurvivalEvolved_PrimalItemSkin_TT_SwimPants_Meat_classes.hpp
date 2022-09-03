#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0000 (0x0AE8 - 0x0AE8)
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

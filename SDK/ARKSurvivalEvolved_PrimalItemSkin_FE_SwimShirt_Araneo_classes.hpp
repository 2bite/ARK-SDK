#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_FE_SwimShirt_Araneo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_FE_SwimShirt_Araneo.PrimalItemSkin_FE_SwimShirt_Araneo_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemSkin_FE_SwimShirt_Araneo_C : public UPrimalItemSkin_SummerSwimShirt_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_FE_SwimShirt_Araneo.PrimalItemSkin_FE_SwimShirt_Araneo_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_FE_SwimShirt_Araneo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

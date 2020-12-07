#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_SwimShirt_Dodo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_SwimShirt_Dodo.PrimalItemSkin_SwimShirt_Dodo_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemSkin_SwimShirt_Dodo_C : public UPrimalItemSkin_SummerSwimShirt_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_SwimShirt_Dodo.PrimalItemSkin_SwimShirt_Dodo_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_SwimShirt_Dodo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

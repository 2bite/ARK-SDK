#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_SwimPants_Dodo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_SwimPants_Dodo.PrimalItemSkin_SwimPants_Dodo_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemSkin_SwimPants_Dodo_C : public UPrimalItemSkin_SummerSwimPants_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_SwimPants_Dodo.PrimalItemSkin_SwimPants_Dodo_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_SwimPants_Dodo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

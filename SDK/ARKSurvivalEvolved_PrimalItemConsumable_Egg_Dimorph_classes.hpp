#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Dimorph_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Egg_Dimorph.PrimalItemConsumable_Egg_Dimorph_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemConsumable_Egg_Dimorph_C : public UPrimalItemConsumable_Egg_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg_Dimorph.PrimalItemConsumable_Egg_Dimorph_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Egg_Dimorph(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

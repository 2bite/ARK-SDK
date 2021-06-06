#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Kaprosuchus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Egg_Kaprosuchus.PrimalItemConsumable_Egg_Kaprosuchus_C
// 0x0000 (0x0AF8 - 0x0AF8)
class UPrimalItemConsumable_Egg_Kaprosuchus_C : public UPrimalItemConsumable_Egg_Medium_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg_Kaprosuchus.PrimalItemConsumable_Egg_Kaprosuchus_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Egg_Kaprosuchus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

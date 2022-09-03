#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Wyvern_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Egg_Wyvern.PrimalItemConsumable_Egg_Wyvern_C
// 0x0000 (0x0B00 - 0x0B00)
class UPrimalItemConsumable_Egg_Wyvern_C : public UPrimalItemConsumable_Egg_Special_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg_Wyvern.PrimalItemConsumable_Egg_Wyvern_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Egg_Wyvern(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

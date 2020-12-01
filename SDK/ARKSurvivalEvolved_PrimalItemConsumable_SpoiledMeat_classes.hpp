#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_SpoiledMeat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_SpoiledMeat.PrimalItemConsumable_SpoiledMeat_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemConsumable_SpoiledMeat_C : public UPrimalItemConsumableEatable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_SpoiledMeat.PrimalItemConsumable_SpoiledMeat_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_SpoiledMeat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_WaterskinCraftable_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_WaterskinCraftable.PrimalItemConsumable_WaterskinCraftable_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemConsumable_WaterskinCraftable_C : public UPrimalItemConsumableEatable_WaterContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_WaterskinCraftable.PrimalItemConsumable_WaterskinCraftable_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_WaterskinCraftable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

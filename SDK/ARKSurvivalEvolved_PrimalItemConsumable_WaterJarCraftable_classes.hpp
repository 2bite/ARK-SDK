#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_WaterJarCraftable_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_WaterJarCraftable.PrimalItemConsumable_WaterJarCraftable_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemConsumable_WaterJarCraftable_C : public UPrimalItemConsumableEatable_WaterContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_WaterJarCraftable.PrimalItemConsumable_WaterJarCraftable_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_WaterJarCraftable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

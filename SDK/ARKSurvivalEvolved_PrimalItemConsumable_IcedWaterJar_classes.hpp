#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_IcedWaterJar_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_IcedWaterJar.PrimalItemConsumable_IcedWaterJar_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_IcedWaterJar_C : public UPrimalItemConsumable_WaterJarCraftable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_IcedWaterJar.PrimalItemConsumable_IcedWaterJar_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_IcedWaterJar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_IcedWaterJarRefill_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_IcedWaterJarRefill.PrimalItemConsumable_IcedWaterJarRefill_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemConsumable_IcedWaterJarRefill_C : public UPrimalItemConsumable_IcedWaterJar_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_IcedWaterJarRefill.PrimalItemConsumable_IcedWaterJarRefill_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_IcedWaterJarRefill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Stego_Fertilized_Bionic_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Egg_Stego_Fertilized_Bionic.PrimalItemConsumable_Egg_Stego_Fertilized_Bionic_C
// 0x0000 (0x0B00 - 0x0B00)
class UPrimalItemConsumable_Egg_Stego_Fertilized_Bionic_C : public UPrimalItemConsumable_Egg_Stego_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg_Stego_Fertilized_Bionic.PrimalItemConsumable_Egg_Stego_Fertilized_Bionic_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Egg_Stego_Fertilized_Bionic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

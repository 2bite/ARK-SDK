#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Lootcrate_lvl1_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Lootcrate_lvl1.PrimalItemConsumable_Lootcrate_lvl1_C
// 0x0000 (0x0B20 - 0x0B20)
class UPrimalItemConsumable_Lootcrate_lvl1_C : public UPrimalItemConsumable_Lootcrate_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Lootcrate_lvl1.PrimalItemConsumable_Lootcrate_lvl1_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Lootcrate_lvl1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

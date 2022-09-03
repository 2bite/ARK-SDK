#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MushroomHarvestComponent_Poison_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MushroomHarvestComponent_Poison.MushroomHarvestComponent_Poison_C
// 0x0000 (0x0250 - 0x0250)
class UMushroomHarvestComponent_Poison_C : public UAttackHarvestComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MushroomHarvestComponent_Poison.MushroomHarvestComponent_Poison_C");
		return ptr;
	}


	void ExecuteUbergraph_MushroomHarvestComponent_Poison(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

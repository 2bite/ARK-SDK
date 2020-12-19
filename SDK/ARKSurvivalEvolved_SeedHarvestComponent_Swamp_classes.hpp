#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SeedHarvestComponent_Swamp_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SeedHarvestComponent_Swamp.SeedHarvestComponent_Swamp_C
// 0x0000 (0x0240 - 0x0240)
class USeedHarvestComponent_Swamp_C : public USeedHarvestComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SeedHarvestComponent_Swamp.SeedHarvestComponent_Swamp_C");
		return ptr;
	}


	void ExecuteUbergraph_SeedHarvestComponent_Swamp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

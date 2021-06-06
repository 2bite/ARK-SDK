#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_RockGolem_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_RockGolem.DinoDeathHarvestingComponent_RockGolem_C
// 0x0000 (0x0250 - 0x0250)
class UDinoDeathHarvestingComponent_RockGolem_C : public UDinoDeathHarvestingComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_RockGolem.DinoDeathHarvestingComponent_RockGolem_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_RockGolem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

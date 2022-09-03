#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Medium_Pelt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Medium_Pelt.DinoDeathHarvestingComponent_Medium_Pelt_C
// 0x0000 (0x0250 - 0x0250)
class UDinoDeathHarvestingComponent_Medium_Pelt_C : public UDinoDeathHarvestingComponent_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Medium_Pelt.DinoDeathHarvestingComponent_Medium_Pelt_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_Pelt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

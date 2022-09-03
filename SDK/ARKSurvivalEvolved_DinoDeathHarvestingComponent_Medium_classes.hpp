#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Medium.DinoDeathHarvestingComponent_Medium_C
// 0x0000 (0x0250 - 0x0250)
class UDinoDeathHarvestingComponent_Medium_C : public UDinoDeathHarvestingComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Medium.DinoDeathHarvestingComponent_Medium_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

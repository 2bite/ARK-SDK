#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Lamb_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Lamb.DinoDeathHarvestingComponent_Lamb_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_Lamb_C : public UDinoDeathHarvestingComponent_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Lamb.DinoDeathHarvestingComponent_Lamb_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_Lamb(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

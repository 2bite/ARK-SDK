#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Kaiju_Forest_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Kaiju_Forest.DinoDeathHarvestingComponent_Kaiju_Forest_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_Kaiju_Forest_C : public UDinoDeathHarvestingComponent_Kaiju_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Kaiju_Forest.DinoDeathHarvestingComponent_Kaiju_Forest_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_Kaiju_Forest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

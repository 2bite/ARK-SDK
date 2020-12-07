#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Kaiju_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Kaiju.DinoDeathHarvestingComponent_Kaiju_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_Kaiju_C : public UDinoDeathHarvestingComponent_Corrupted_Huge_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Kaiju.DinoDeathHarvestingComponent_Kaiju_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_Kaiju(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

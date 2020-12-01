#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Small_Silk_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Small_Silk.DinoDeathHarvestingComponent_Small_Silk_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_Small_Silk_C : public UDinoDeathHarvestingComponent_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Small_Silk.DinoDeathHarvestingComponent_Small_Silk_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_Small_Silk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Medium_Rhino_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Medium_Rhino.DinoDeathHarvestingComponent_Medium_Rhino_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_Medium_Rhino_C : public UDinoDeathHarvestingComponent_Medium_SomeKeratin_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Medium_Rhino.DinoDeathHarvestingComponent_Medium_Rhino_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_Rhino(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
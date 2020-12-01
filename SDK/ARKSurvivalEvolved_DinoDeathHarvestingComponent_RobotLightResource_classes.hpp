#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_RobotLightResource_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_RobotLightResource.DinoDeathHarvestingComponent_RobotLightResource_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_RobotLightResource_C : public UDinoDeathHarvestingComponent_Robot_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_RobotLightResource.DinoDeathHarvestingComponent_RobotLightResource_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_RobotLightResource(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

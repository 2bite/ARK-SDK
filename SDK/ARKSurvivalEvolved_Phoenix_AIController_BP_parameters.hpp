#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Phoenix_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Phoenix_AIController_BP.Phoenix_AIController_BP_C.BPGetTargetingDesire
struct APhoenix_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Phoenix_AIController_BP.Phoenix_AIController_BP_C.UserConstructionScript
struct APhoenix_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Phoenix_AIController_BP.Phoenix_AIController_BP_C.ExecuteUbergraph_Phoenix_AIController_BP
struct APhoenix_AIController_BP_C_ExecuteUbergraph_Phoenix_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

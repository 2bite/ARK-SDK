#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Baryonyx_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Baryonyx_AIController_BP.Baryonyx_AIController_BP_C.BPAggroDesirability
struct ABaryonyx_AIController_BP_C_BPAggroDesirability_Params
{
};

// Function Baryonyx_AIController_BP.Baryonyx_AIController_BP_C.BPGetTargetingDesire
struct ABaryonyx_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Baryonyx_AIController_BP.Baryonyx_AIController_BP_C.UserConstructionScript
struct ABaryonyx_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Baryonyx_AIController_BP.Baryonyx_AIController_BP_C.ExecuteUbergraph_Baryonyx_AIController_BP
struct ABaryonyx_AIController_BP_C_ExecuteUbergraph_Baryonyx_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

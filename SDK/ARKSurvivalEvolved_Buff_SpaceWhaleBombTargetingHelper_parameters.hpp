#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SpaceWhaleBombTargetingHelper_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.BPSetupForInstigator
struct ABuff_SpaceWhaleBombTargetingHelper_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.BuffTickClient
struct ABuff_SpaceWhaleBombTargetingHelper_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.AllowPostProcessEffect
struct ABuff_SpaceWhaleBombTargetingHelper_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.UserConstructionScript
struct ABuff_SpaceWhaleBombTargetingHelper_C_UserConstructionScript_Params
{
};

// Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.ExecuteUbergraph_Buff_SpaceWhaleBombTargetingHelper
struct ABuff_SpaceWhaleBombTargetingHelper_C_ExecuteUbergraph_Buff_SpaceWhaleBombTargetingHelper_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

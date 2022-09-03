#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Leech_AIController_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Leech_AIController.Leech_AIController_C.BPGetTargetingDesire
struct ALeech_AIController_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Leech_AIController.Leech_AIController_C.UserConstructionScript
struct ALeech_AIController_C_UserConstructionScript_Params
{
};

// Function Leech_AIController.Leech_AIController_C.ExecuteUbergraph_Leech_AIController
struct ALeech_AIController_C_ExecuteUbergraph_Leech_AIController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

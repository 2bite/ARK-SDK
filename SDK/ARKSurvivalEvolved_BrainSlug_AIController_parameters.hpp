#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BrainSlug_AIController_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BrainSlug_AIController.BrainSlug_AIController_C.ChangedAITarget
struct ABrainSlug_AIController_C_ChangedAITarget_Params
{
};

// Function BrainSlug_AIController.BrainSlug_AIController_C.BPGetTargetingDesire
struct ABrainSlug_AIController_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BrainSlug_AIController.BrainSlug_AIController_C.ReceiveDestroyed
struct ABrainSlug_AIController_C_ReceiveDestroyed_Params
{
};

// Function BrainSlug_AIController.BrainSlug_AIController_C.UserConstructionScript
struct ABrainSlug_AIController_C_UserConstructionScript_Params
{
};

// Function BrainSlug_AIController.BrainSlug_AIController_C.ExecuteUbergraph_BrainSlug_AIController
struct ABrainSlug_AIController_C_ExecuteUbergraph_BrainSlug_AIController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Hyaenodon_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPUpdateBestTarget
struct AHyaenodon_AIController_BP_C_BPUpdateBestTarget_Params
{
	class AActor**                                     bestTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              dontSetIn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dontSetOut;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPSetupFindTarget
struct AHyaenodon_AIController_BP_C_BPSetupFindTarget_Params
{
};

// Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.ChangedAITarget
struct AHyaenodon_AIController_BP_C_ChangedAITarget_Params
{
};

// Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.IsAThinkingHyaenodon
struct AHyaenodon_AIController_BP_C_IsAThinkingHyaenodon_Params
{
	bool                                               IsAThinker;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPNotifyTargetSet
struct AHyaenodon_AIController_BP_C_BPNotifyTargetSet_Params
{
};

// Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPGetTargetingDesire
struct AHyaenodon_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.UserConstructionScript
struct AHyaenodon_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.ReceiveBeginPlay
struct AHyaenodon_AIController_BP_C_ReceiveBeginPlay_Params
{
};

// Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.ExecuteUbergraph_Hyaenodon_AIController_BP
struct AHyaenodon_AIController_BP_C_ExecuteUbergraph_Hyaenodon_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

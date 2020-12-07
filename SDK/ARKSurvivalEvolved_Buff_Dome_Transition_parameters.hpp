#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Dome_Transition_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Dome_Transition.Buff_Dome_Transition_C.BPDeactivated
struct ABuff_Dome_Transition_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Dome_Transition.Buff_Dome_Transition_C.BuffTickClient
struct ABuff_Dome_Transition_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Dome_Transition.Buff_Dome_Transition_C.GetBuffPostprocessIntensity
struct ABuff_Dome_Transition_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Dome_Transition.Buff_Dome_Transition_C.ReceiveBeginPlay
struct ABuff_Dome_Transition_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Dome_Transition.Buff_Dome_Transition_C.UserConstructionScript
struct ABuff_Dome_Transition_C_UserConstructionScript_Params
{
};

// Function Buff_Dome_Transition.Buff_Dome_Transition_C.ExecuteUbergraph_Buff_Dome_Transition
struct ABuff_Dome_Transition_C_ExecuteUbergraph_Buff_Dome_Transition_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

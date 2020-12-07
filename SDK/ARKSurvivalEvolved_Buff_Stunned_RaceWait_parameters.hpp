#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Stunned_RaceWait_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.BuffTickServer
struct ABuff_Stunned_RaceWait_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.BPSetupForInstigator
struct ABuff_Stunned_RaceWait_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.BPDeactivated
struct ABuff_Stunned_RaceWait_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.UserConstructionScript
struct ABuff_Stunned_RaceWait_C_UserConstructionScript_Params
{
};

// Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.ExecuteUbergraph_Buff_Stunned_RaceWait
struct ABuff_Stunned_RaceWait_C_ExecuteUbergraph_Buff_Stunned_RaceWait_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

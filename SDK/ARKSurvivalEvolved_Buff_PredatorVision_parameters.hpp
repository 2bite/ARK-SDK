#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PredatorVision_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PredatorVision.Buff_PredatorVision_C.BuffTickServer
struct ABuff_PredatorVision_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PredatorVision.Buff_PredatorVision_C.ReceiveBeginPlay
struct ABuff_PredatorVision_C_ReceiveBeginPlay_Params
{
};

// Function Buff_PredatorVision.Buff_PredatorVision_C.BuffTickClient
struct ABuff_PredatorVision_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PredatorVision.Buff_PredatorVision_C.BPDeactivated
struct ABuff_PredatorVision_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PredatorVision.Buff_PredatorVision_C.BPActivated
struct ABuff_PredatorVision_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PredatorVision.Buff_PredatorVision_C.UserConstructionScript
struct ABuff_PredatorVision_C_UserConstructionScript_Params
{
};

// Function Buff_PredatorVision.Buff_PredatorVision_C.ExecuteUbergraph_Buff_PredatorVision
struct ABuff_PredatorVision_C_ExecuteUbergraph_Buff_PredatorVision_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

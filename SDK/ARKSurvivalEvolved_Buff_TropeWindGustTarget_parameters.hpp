#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TropeWindGustTarget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.GetBuffPostprocessIntensity
struct ABuff_TropeWindGustTarget_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.ReceiveBeginPlay
struct ABuff_TropeWindGustTarget_C_ReceiveBeginPlay_Params
{
};

// Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.AllowPostProcessEffect
struct ABuff_TropeWindGustTarget_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.BPDeactivated
struct ABuff_TropeWindGustTarget_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.BPSetupForInstigator
struct ABuff_TropeWindGustTarget_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.BuffTickServer
struct ABuff_TropeWindGustTarget_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.BPActivated
struct ABuff_TropeWindGustTarget_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.UserConstructionScript
struct ABuff_TropeWindGustTarget_C_UserConstructionScript_Params
{
};

// Function Buff_TropeWindGustTarget.Buff_TropeWindGustTarget_C.ExecuteUbergraph_Buff_TropeWindGustTarget
struct ABuff_TropeWindGustTarget_C_ExecuteUbergraph_Buff_TropeWindGustTarget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

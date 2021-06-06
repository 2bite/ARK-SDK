#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MinigunNearingOverheat_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.ReceiveBeginPlay
struct ABuff_MinigunNearingOverheat_C_ReceiveBeginPlay_Params
{
};

// Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.BuffTickClient
struct ABuff_MinigunNearingOverheat_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.GetBuffPostprocessIntensity
struct ABuff_MinigunNearingOverheat_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.AllowPostProcessEffect
struct ABuff_MinigunNearingOverheat_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.UserConstructionScript
struct ABuff_MinigunNearingOverheat_C_UserConstructionScript_Params
{
};

// Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.ExecuteUbergraph_Buff_MinigunNearingOverheat
struct ABuff_MinigunNearingOverheat_C_ExecuteUbergraph_Buff_MinigunNearingOverheat_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

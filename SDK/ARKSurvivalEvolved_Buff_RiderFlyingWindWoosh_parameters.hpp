#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RiderFlyingWindWoosh_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_RiderFlyingWindWoosh.Buff_RiderFlyingWindWoosh_C.AllowPostProcessEffect
struct ABuff_RiderFlyingWindWoosh_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh.Buff_RiderFlyingWindWoosh_C.GetBuffPostprocessIntensity
struct ABuff_RiderFlyingWindWoosh_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh.Buff_RiderFlyingWindWoosh_C.BPCustomAllowAddBuff
struct ABuff_RiderFlyingWindWoosh_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh.Buff_RiderFlyingWindWoosh_C.BuffTickClient
struct ABuff_RiderFlyingWindWoosh_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh.Buff_RiderFlyingWindWoosh_C.UserConstructionScript
struct ABuff_RiderFlyingWindWoosh_C_UserConstructionScript_Params
{
};

// Function Buff_RiderFlyingWindWoosh.Buff_RiderFlyingWindWoosh_C.ExecuteUbergraph_Buff_RiderFlyingWindWoosh
struct ABuff_RiderFlyingWindWoosh_C_ExecuteUbergraph_Buff_RiderFlyingWindWoosh_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

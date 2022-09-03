#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RiderFlyingWindWoosh_MilkGlider_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_RiderFlyingWindWoosh_MilkGlider.Buff_RiderFlyingWindWoosh_MilkGlider_C.AllowPostProcessEffect
struct ABuff_RiderFlyingWindWoosh_MilkGlider_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh_MilkGlider.Buff_RiderFlyingWindWoosh_MilkGlider_C.GetBuffPostprocessIntensity
struct ABuff_RiderFlyingWindWoosh_MilkGlider_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh_MilkGlider.Buff_RiderFlyingWindWoosh_MilkGlider_C.BPCustomAllowAddBuff
struct ABuff_RiderFlyingWindWoosh_MilkGlider_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh_MilkGlider.Buff_RiderFlyingWindWoosh_MilkGlider_C.BuffTickClient
struct ABuff_RiderFlyingWindWoosh_MilkGlider_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh_MilkGlider.Buff_RiderFlyingWindWoosh_MilkGlider_C.UserConstructionScript
struct ABuff_RiderFlyingWindWoosh_MilkGlider_C_UserConstructionScript_Params
{
};

// Function Buff_RiderFlyingWindWoosh_MilkGlider.Buff_RiderFlyingWindWoosh_MilkGlider_C.ExecuteUbergraph_Buff_RiderFlyingWindWoosh_MilkGlider
struct ABuff_RiderFlyingWindWoosh_MilkGlider_C_ExecuteUbergraph_Buff_RiderFlyingWindWoosh_MilkGlider_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

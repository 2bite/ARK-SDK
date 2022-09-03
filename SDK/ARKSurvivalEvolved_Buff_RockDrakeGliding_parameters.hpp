#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RockDrakeGliding_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_RockDrakeGliding.Buff_RockDrakeGliding_C.AllowPostProcessEffect
struct ABuff_RockDrakeGliding_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RockDrakeGliding.Buff_RockDrakeGliding_C.GetBuffPostprocessIntensity
struct ABuff_RockDrakeGliding_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RockDrakeGliding.Buff_RockDrakeGliding_C.BPCustomAllowAddBuff
struct ABuff_RockDrakeGliding_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RockDrakeGliding.Buff_RockDrakeGliding_C.BuffTickClient
struct ABuff_RockDrakeGliding_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RockDrakeGliding.Buff_RockDrakeGliding_C.UserConstructionScript
struct ABuff_RockDrakeGliding_C_UserConstructionScript_Params
{
};

// Function Buff_RockDrakeGliding.Buff_RockDrakeGliding_C.ExecuteUbergraph_Buff_RockDrakeGliding
struct ABuff_RockDrakeGliding_C_ExecuteUbergraph_Buff_RockDrakeGliding_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

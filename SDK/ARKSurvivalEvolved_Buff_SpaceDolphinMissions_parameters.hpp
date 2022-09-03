#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SpaceDolphinMissions_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.BuffTickClient
struct ABuff_SpaceDolphinMissions_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.HitCollisionStarFoxMode
struct ABuff_SpaceDolphinMissions_C_HitCollisionStarFoxMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.AllowPostProcessEffect
struct ABuff_SpaceDolphinMissions_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.GetBuffPostprocessIntensity
struct ABuff_SpaceDolphinMissions_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.UserConstructionScript
struct ABuff_SpaceDolphinMissions_C_UserConstructionScript_Params
{
};

// Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.ExecuteUbergraph_Buff_SpaceDolphinMissions
struct ABuff_SpaceDolphinMissions_C_ExecuteUbergraph_Buff_SpaceDolphinMissions_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

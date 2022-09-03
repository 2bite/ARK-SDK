#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RockDrakeCamo_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.BuffTickClient
struct ABuff_RockDrakeCamo_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.BuffTickServer
struct ABuff_RockDrakeCamo_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.PreventActorTargeting
struct ABuff_RockDrakeCamo_C_PreventActorTargeting_Params
{
	class AActor**                                     ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.UserConstructionScript
struct ABuff_RockDrakeCamo_C_UserConstructionScript_Params
{
};

// Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.ExecuteUbergraph_Buff_RockDrakeCamo
struct ABuff_RockDrakeCamo_C_ExecuteUbergraph_Buff_RockDrakeCamo_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

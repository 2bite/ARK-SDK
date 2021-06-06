#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RocketSurfers_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_RocketSurfers.Buff_RocketSurfers_C.BPCheckPreventInput
struct ABuff_RocketSurfers_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RocketSurfers.Buff_RocketSurfers_C.BuffTickClient
struct ABuff_RocketSurfers_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RocketSurfers.Buff_RocketSurfers_C.BuffTickServer
struct ABuff_RocketSurfers_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RocketSurfers.Buff_RocketSurfers_C.UserConstructionScript
struct ABuff_RocketSurfers_C_UserConstructionScript_Params
{
};

// Function Buff_RocketSurfers.Buff_RocketSurfers_C.ExecuteUbergraph_Buff_RocketSurfers
struct ABuff_RocketSurfers_C_ExecuteUbergraph_Buff_RocketSurfers_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

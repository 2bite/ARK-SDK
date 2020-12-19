#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoPackLeader_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.BuffTickServer
struct ABuff_DinoPackLeader_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.UserConstructionScript
struct ABuff_DinoPackLeader_C_UserConstructionScript_Params
{
};

// Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.ReceiveTick
struct ABuff_DinoPackLeader_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.ReceiveBeginPlay
struct ABuff_DinoPackLeader_C_ReceiveBeginPlay_Params
{
};

// Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.ExecuteUbergraph_Buff_DinoPackLeader
struct ABuff_DinoPackLeader_C_ExecuteUbergraph_Buff_DinoPackLeader_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

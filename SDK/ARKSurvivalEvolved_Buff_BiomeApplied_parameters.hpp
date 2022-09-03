#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BiomeApplied_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_BiomeApplied.Buff_BiomeApplied_C.UserConstructionScript
struct ABuff_BiomeApplied_C_UserConstructionScript_Params
{
};

// Function Buff_BiomeApplied.Buff_BiomeApplied_C.ReceiveTick
struct ABuff_BiomeApplied_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BiomeApplied.Buff_BiomeApplied_C.DoDeactivate
struct ABuff_BiomeApplied_C_DoDeactivate_Params
{
};

// Function Buff_BiomeApplied.Buff_BiomeApplied_C.ExecuteUbergraph_Buff_BiomeApplied
struct ABuff_BiomeApplied_C_ExecuteUbergraph_Buff_BiomeApplied_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

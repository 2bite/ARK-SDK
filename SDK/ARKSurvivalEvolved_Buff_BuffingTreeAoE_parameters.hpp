#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BuffingTreeAoE_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.GetGrowthScale
struct ABuff_BuffingTreeAoE_C_GetGrowthScale_Params
{
	struct FVector                                     Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.UserConstructionScript
struct ABuff_BuffingTreeAoE_C_UserConstructionScript_Params
{
};

// Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.ReceiveBeginPlay
struct ABuff_BuffingTreeAoE_C_ReceiveBeginPlay_Params
{
};

// Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.ReceiveTick
struct ABuff_BuffingTreeAoE_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.Multi-SetScale
struct ABuff_BuffingTreeAoE_C_Multi_SetScale_Params
{
	struct FVector                                     Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.ExecuteUbergraph_Buff_BuffingTreeAoE
struct ABuff_BuffingTreeAoE_C_ExecuteUbergraph_Buff_BuffingTreeAoE_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

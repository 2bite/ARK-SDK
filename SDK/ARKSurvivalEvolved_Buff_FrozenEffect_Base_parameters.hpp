#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FrozenEffect_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.Set Frozen Value Instant
struct ABuff_FrozenEffect_Base_C_Set_Frozen_Value_Instant_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.GetFrozenValue
struct ABuff_FrozenEffect_Base_C_GetFrozenValue_Params
{
	float                                              amount;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.SetFrozenValue
struct ABuff_FrozenEffect_Base_C_SetFrozenValue_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.ReceiveDestroyed
struct ABuff_FrozenEffect_Base_C_ReceiveDestroyed_Params
{
};

// Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.BPSetupForInstigator
struct ABuff_FrozenEffect_Base_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.BuffTickClient
struct ABuff_FrozenEffect_Base_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.BPDeactivated
struct ABuff_FrozenEffect_Base_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.UserConstructionScript
struct ABuff_FrozenEffect_Base_C_UserConstructionScript_Params
{
};

// Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.ExecuteUbergraph_Buff_FrozenEffect_Base
struct ABuff_FrozenEffect_Base_C_ExecuteUbergraph_Buff_FrozenEffect_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

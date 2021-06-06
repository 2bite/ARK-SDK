#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MutatingEffect_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MutatingEffect.Buff_MutatingEffect_C.BPDeactivated
struct ABuff_MutatingEffect_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MutatingEffect.Buff_MutatingEffect_C.ReceiveDestroyed
struct ABuff_MutatingEffect_C_ReceiveDestroyed_Params
{
};

// Function Buff_MutatingEffect.Buff_MutatingEffect_C.BuffTickClient
struct ABuff_MutatingEffect_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MutatingEffect.Buff_MutatingEffect_C.BPSetupForInstigator
struct ABuff_MutatingEffect_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MutatingEffect.Buff_MutatingEffect_C.UserConstructionScript
struct ABuff_MutatingEffect_C_UserConstructionScript_Params
{
};

// Function Buff_MutatingEffect.Buff_MutatingEffect_C.HideMesh
struct ABuff_MutatingEffect_C_HideMesh_Params
{
	bool                                               Hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MutatingEffect.Buff_MutatingEffect_C.ExecuteUbergraph_Buff_MutatingEffect
struct ABuff_MutatingEffect_C_ExecuteUbergraph_Buff_MutatingEffect_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

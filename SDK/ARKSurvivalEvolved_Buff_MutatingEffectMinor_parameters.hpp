#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MutatingEffectMinor_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.BPDeactivated
struct ABuff_MutatingEffectMinor_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.ReceiveDestroyed
struct ABuff_MutatingEffectMinor_C_ReceiveDestroyed_Params
{
};

// Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.BuffTickClient
struct ABuff_MutatingEffectMinor_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.BPSetupForInstigator
struct ABuff_MutatingEffectMinor_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.UserConstructionScript
struct ABuff_MutatingEffectMinor_C_UserConstructionScript_Params
{
};

// Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.HideMesh
struct ABuff_MutatingEffectMinor_C_HideMesh_Params
{
	bool                                               Hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.ExecuteUbergraph_Buff_MutatingEffectMinor
struct ABuff_MutatingEffectMinor_C_ExecuteUbergraph_Buff_MutatingEffectMinor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

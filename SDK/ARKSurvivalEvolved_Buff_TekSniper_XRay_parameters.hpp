#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekSniper_XRay_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.GetFriendOrFoe
struct ABuff_TekSniper_XRay_C_GetFriendOrFoe_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.BPDeactivated
struct ABuff_TekSniper_XRay_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.BuffTickClient
struct ABuff_TekSniper_XRay_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.GetBuffPostprocessIntensity
struct ABuff_TekSniper_XRay_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.Smooth Overheating Amount
struct ABuff_TekSniper_XRay_C_Smooth_Overheating_Amount_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.Set Overheating Amount
struct ABuff_TekSniper_XRay_C_Set_Overheating_Amount_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.BPActivated
struct ABuff_TekSniper_XRay_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.ReceiveBeginPlay
struct ABuff_TekSniper_XRay_C_ReceiveBeginPlay_Params
{
};

// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.UserConstructionScript
struct ABuff_TekSniper_XRay_C_UserConstructionScript_Params
{
};

// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.ExecuteUbergraph_Buff_TekSniper_XRay
struct ABuff_TekSniper_XRay_C_ExecuteUbergraph_Buff_TekSniper_XRay_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

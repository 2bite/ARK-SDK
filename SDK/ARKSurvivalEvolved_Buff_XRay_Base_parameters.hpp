#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_XRay_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_XRay_Base.Buff_XRay_Base_C.ReceiveDestroyed
struct ABuff_XRay_Base_C_ReceiveDestroyed_Params
{
};

// Function Buff_XRay_Base.Buff_XRay_Base_C.ResetCharBounds
struct ABuff_XRay_Base_C_ResetCharBounds_Params
{
};

// Function Buff_XRay_Base.Buff_XRay_Base_C.BuffTickClient
struct ABuff_XRay_Base_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_XRay_Base.Buff_XRay_Base_C.BPDeactivated
struct ABuff_XRay_Base_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_XRay_Base.Buff_XRay_Base_C.UserConstructionScript
struct ABuff_XRay_Base_C_UserConstructionScript_Params
{
};

// Function Buff_XRay_Base.Buff_XRay_Base_C.ExecuteUbergraph_Buff_XRay_Base
struct ABuff_XRay_Base_C_ExecuteUbergraph_Buff_XRay_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

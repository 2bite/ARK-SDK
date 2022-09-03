#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EcholocationDetect_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.Set Custom Depth Stencil ValueForActor
struct ABuff_EcholocationDetect_C_Set_Custom_Depth_Stencil_ValueForActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Stencil_Value;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasCustomDepth;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.BuffTickClient
struct ABuff_EcholocationDetect_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.BPDeactivated
struct ABuff_EcholocationDetect_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.ReceiveBeginPlay
struct ABuff_EcholocationDetect_C_ReceiveBeginPlay_Params
{
};

// Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.UserConstructionScript
struct ABuff_EcholocationDetect_C_UserConstructionScript_Params
{
};

// Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.ExecuteUbergraph_Buff_EcholocationDetect
struct ABuff_EcholocationDetect_C_ExecuteUbergraph_Buff_EcholocationDetect_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

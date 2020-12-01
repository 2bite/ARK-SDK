#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BiglyPostProccess_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.GetBuffPostprocessIntensity
struct ABuff_BiglyPostProccess_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.AllowPostProcessEffect
struct ABuff_BiglyPostProccess_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.Is Valid PounceTarget
struct ABuff_BiglyPostProccess_C_Is_Valid_PounceTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.BPGetHUDElements
struct ABuff_BiglyPostProccess_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.IsAnotherDinoAlreadyAttached
struct ABuff_BiglyPostProccess_C_IsAnotherDinoAlreadyAttached_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.Can Ignore Traced Actor
struct ABuff_BiglyPostProccess_C_Can_Ignore_Traced_Actor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeIgnored;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.BuffTickClient
struct ABuff_BiglyPostProccess_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.UserConstructionScript
struct ABuff_BiglyPostProccess_C_UserConstructionScript_Params
{
};

// Function Buff_BiglyPostProccess.Buff_BiglyPostProccess_C.ExecuteUbergraph_Buff_BiglyPostProccess
struct ABuff_BiglyPostProccess_C_ExecuteUbergraph_Buff_BiglyPostProccess_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

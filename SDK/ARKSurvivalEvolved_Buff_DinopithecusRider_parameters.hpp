#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinopithecusRider_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.BuffAdjustDamage
struct ABuff_DinopithecusRider_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.GetBuffPostprocessIntensity
struct ABuff_DinopithecusRider_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.AllowPostProcessEffect
struct ABuff_DinopithecusRider_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.Is Valid PounceTarget
struct ABuff_DinopithecusRider_C_Is_Valid_PounceTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.BPGetHUDElements
struct ABuff_DinopithecusRider_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.IsAnotherDinoAlreadyAttached
struct ABuff_DinopithecusRider_C_IsAnotherDinoAlreadyAttached_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.Can Ignore Traced Actor
struct ABuff_DinopithecusRider_C_Can_Ignore_Traced_Actor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeIgnored;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.BuffTickClient
struct ABuff_DinopithecusRider_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.UserConstructionScript
struct ABuff_DinopithecusRider_C_UserConstructionScript_Params
{
};

// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.ExecuteUbergraph_Buff_DinopithecusRider
struct ABuff_DinopithecusRider_C_ExecuteUbergraph_Buff_DinopithecusRider_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

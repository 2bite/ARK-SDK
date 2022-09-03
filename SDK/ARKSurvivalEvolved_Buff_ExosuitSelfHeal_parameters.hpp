#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ExosuitSelfHeal_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.InitBuff
struct ABuff_ExosuitSelfHeal_C_InitBuff_Params
{
};

// Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.BPActivated
struct ABuff_ExosuitSelfHeal_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.BuffPostAdjustDamage
struct ABuff_ExosuitSelfHeal_C_BuffPostAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.BuffTickServer
struct ABuff_ExosuitSelfHeal_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.UserConstructionScript
struct ABuff_ExosuitSelfHeal_C_UserConstructionScript_Params
{
};

// Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.ExecuteUbergraph_Buff_ExosuitSelfHeal
struct ABuff_ExosuitSelfHeal_C_ExecuteUbergraph_Buff_ExosuitSelfHeal_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EndBossSpawningMinions_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.UpdateNumToSpawn
struct ABuff_EndBossSpawningMinions_C_UpdateNumToSpawn_Params
{
	class AEndBoss_Character_C*                        InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.BuffAdjustDamage
struct ABuff_EndBossSpawningMinions_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.ReceiveDestroyed
struct ABuff_EndBossSpawningMinions_C_ReceiveDestroyed_Params
{
};

// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.GetOwningBoss
struct ABuff_EndBossSpawningMinions_C_GetOwningBoss_Params
{
	class AEndBoss_Character_C*                        EndBoss;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.UserConstructionScript
struct ABuff_EndBossSpawningMinions_C_UserConstructionScript_Params
{
};

// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.BPActivated
struct ABuff_EndBossSpawningMinions_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.BPDeactivated
struct ABuff_EndBossSpawningMinions_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.ReceiveBeginPlay
struct ABuff_EndBossSpawningMinions_C_ReceiveBeginPlay_Params
{
};

// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.UpdateRemainingTime
struct ABuff_EndBossSpawningMinions_C_UpdateRemainingTime_Params
{
};

// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.SpawnMinions
struct ABuff_EndBossSpawningMinions_C_SpawnMinions_Params
{
};

// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.ReceiveTick
struct ABuff_EndBossSpawningMinions_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.IncrementNumMinionsSpawned
struct ABuff_EndBossSpawningMinions_C_IncrementNumMinionsSpawned_Params
{
	bool                                               IsDrone;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.ExecuteUbergraph_Buff_EndBossSpawningMinions
struct ABuff_EndBossSpawningMinions_C_ExecuteUbergraph_Buff_EndBossSpawningMinions_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

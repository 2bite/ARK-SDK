#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FKaijuAttackBoost_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.BPDeactivated
struct ABuff_FKaijuAttackBoost_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.BuffTickServer
struct ABuff_FKaijuAttackBoost_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.BuffAdjustDamage
struct ABuff_FKaijuAttackBoost_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.BuffPostAdjustDamage
struct ABuff_FKaijuAttackBoost_C_BuffPostAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.UserConstructionScript
struct ABuff_FKaijuAttackBoost_C_UserConstructionScript_Params
{
};

// Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.Multi_RefreshDeactivationTime
struct ABuff_FKaijuAttackBoost_C_Multi_RefreshDeactivationTime_Params
{
};

// Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.ExecuteUbergraph_Buff_FKaijuAttackBoost
struct ABuff_FKaijuAttackBoost_C_ExecuteUbergraph_Buff_FKaijuAttackBoost_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

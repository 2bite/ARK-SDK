#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekPistol_Heal_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekPistol_Heal.Buff_TekPistol_Heal_C.BuffPostAdjustDamage
struct ABuff_TekPistol_Heal_C_BuffPostAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistol_Heal.Buff_TekPistol_Heal_C.BuffAdjustDamage
struct ABuff_TekPistol_Heal_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekPistol_Heal.Buff_TekPistol_Heal_C.AddHealer
struct ABuff_TekPistol_Heal_C_AddHealer_Params
{
	class AActor*                                      Damager;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistol_Heal.Buff_TekPistol_Heal_C.UserConstructionScript
struct ABuff_TekPistol_Heal_C_UserConstructionScript_Params
{
};

// Function Buff_TekPistol_Heal.Buff_TekPistol_Heal_C.ExecuteUbergraph_Buff_TekPistol_Heal
struct ABuff_TekPistol_Heal_C_ExecuteUbergraph_Buff_TekPistol_Heal_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekSelfHeal_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.GetMekFuelLevel
struct ABuff_MekSelfHeal_C_GetMekFuelLevel_Params
{
	float                                              FuelLevel;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.BPActivated
struct ABuff_MekSelfHeal_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.BuffPostAdjustDamage
struct ABuff_MekSelfHeal_C_BuffPostAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.BuffTickServer
struct ABuff_MekSelfHeal_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.UserConstructionScript
struct ABuff_MekSelfHeal_C_UserConstructionScript_Params
{
};

// Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.ExecuteUbergraph_Buff_MekSelfHeal
struct ABuff_MekSelfHeal_C_ExecuteUbergraph_Buff_MekSelfHeal_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

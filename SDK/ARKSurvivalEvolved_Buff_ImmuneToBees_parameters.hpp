#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ImmuneToBees_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ImmuneToBees.Buff_ImmuneToBees_C.BuffAdjustDamage
struct ABuff_ImmuneToBees_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ImmuneToBees.Buff_ImmuneToBees_C.BuffTickServer
struct ABuff_ImmuneToBees_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ImmuneToBees.Buff_ImmuneToBees_C.UserConstructionScript
struct ABuff_ImmuneToBees_C_UserConstructionScript_Params
{
};

// Function Buff_ImmuneToBees.Buff_ImmuneToBees_C.ExecuteUbergraph_Buff_ImmuneToBees
struct ABuff_ImmuneToBees_C_ExecuteUbergraph_Buff_ImmuneToBees_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

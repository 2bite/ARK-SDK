#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventDamageAndTargeting_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PreventDamageAndTargeting.Buff_PreventDamageAndTargeting_C.BuffAdjustDamage
struct ABuff_PreventDamageAndTargeting_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PreventDamageAndTargeting.Buff_PreventDamageAndTargeting_C.PreventActorTargeting
struct ABuff_PreventDamageAndTargeting_C_PreventActorTargeting_Params
{
	class AActor**                                     ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PreventDamageAndTargeting.Buff_PreventDamageAndTargeting_C.UserConstructionScript
struct ABuff_PreventDamageAndTargeting_C_UserConstructionScript_Params
{
};

// Function Buff_PreventDamageAndTargeting.Buff_PreventDamageAndTargeting_C.ExecuteUbergraph_Buff_PreventDamageAndTargeting
struct ABuff_PreventDamageAndTargeting_C_ExecuteUbergraph_Buff_PreventDamageAndTargeting_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

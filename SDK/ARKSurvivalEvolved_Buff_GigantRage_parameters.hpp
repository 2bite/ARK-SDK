#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_GigantRage_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_GigantRage.Buff_GigantRage_C.BuffAdjustDamage
struct ABuff_GigantRage_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_GigantRage.Buff_GigantRage_C.EnterRage
struct ABuff_GigantRage_C_EnterRage_Params
{
};

// Function Buff_GigantRage.Buff_GigantRage_C.GetHUDProgressBarPercent
struct ABuff_GigantRage_C_GetHUDProgressBarPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_GigantRage.Buff_GigantRage_C.UserConstructionScript
struct ABuff_GigantRage_C_UserConstructionScript_Params
{
};

// Function Buff_GigantRage.Buff_GigantRage_C.ReceiveTick
struct ABuff_GigantRage_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GigantRage.Buff_GigantRage_C.ExecuteUbergraph_Buff_GigantRage
struct ABuff_GigantRage_C_ExecuteUbergraph_Buff_GigantRage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

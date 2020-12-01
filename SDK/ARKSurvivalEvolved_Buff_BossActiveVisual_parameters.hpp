#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BossActiveVisual_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_BossActiveVisual.Buff_BossActiveVisual_C.BuffAdjustDamage
struct ABuff_BossActiveVisual_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BossActiveVisual.Buff_BossActiveVisual_C.UserConstructionScript
struct ABuff_BossActiveVisual_C_UserConstructionScript_Params
{
};

// Function Buff_BossActiveVisual.Buff_BossActiveVisual_C.ReceiveBeginPlay
struct ABuff_BossActiveVisual_C_ReceiveBeginPlay_Params
{
};

// Function Buff_BossActiveVisual.Buff_BossActiveVisual_C.MultiSetDamageEffect
struct ABuff_BossActiveVisual_C_MultiSetDamageEffect_Params
{
	class AActor*                                      BossChar;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BossActiveVisual.Buff_BossActiveVisual_C.ExecuteUbergraph_Buff_BossActiveVisual
struct ABuff_BossActiveVisual_C_ExecuteUbergraph_Buff_BossActiveVisual_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekClaw_Owner_Blocking_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BuffTickServer
struct ABuff_TekClaw_Owner_Blocking_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BPSetupForInstigator
struct ABuff_TekClaw_Owner_Blocking_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BPAdjustDamage_Ex
struct ABuff_TekClaw_Owner_Blocking_C_BPAdjustDamage_Ex_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ImpulseDir;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     InDamageCauser;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BPAdjustImpulseFromDamage
struct ABuff_TekClaw_Owner_Blocking_C_BPAdjustImpulseFromDamage_Params
{
	struct FVector*                                    DesiredImpulse;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class APawn**                                      PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.UserConstructionScript
struct ABuff_TekClaw_Owner_Blocking_C_UserConstructionScript_Params
{
};

// Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.ExecuteUbergraph_Buff_TekClaw_Owner_Blocking
struct ABuff_TekClaw_Owner_Blocking_C_ExecuteUbergraph_Buff_TekClaw_Owner_Blocking_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

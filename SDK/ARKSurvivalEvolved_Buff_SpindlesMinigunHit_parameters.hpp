#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SpindlesMinigunHit_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BPGetDebugInfoString
struct ABuff_SpindlesMinigunHit_C_BPGetDebugInfoString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.OnRep_CurrentPreventHurtAnim
struct ABuff_SpindlesMinigunHit_C_OnRep_CurrentPreventHurtAnim_Params
{
};

// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BuffAdjustDamage
struct ABuff_SpindlesMinigunHit_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.ReceiveEndPlay
struct ABuff_SpindlesMinigunHit_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BPPreventflight
struct ABuff_SpindlesMinigunHit_C_BPPreventflight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.ReceiveBeginPlay
struct ABuff_SpindlesMinigunHit_C_ReceiveBeginPlay_Params
{
};

// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BuffTickServer
struct ABuff_SpindlesMinigunHit_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BPResetBuffStart
struct ABuff_SpindlesMinigunHit_C_BPResetBuffStart_Params
{
};

// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.UserConstructionScript
struct ABuff_SpindlesMinigunHit_C_UserConstructionScript_Params
{
};

// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.ExecuteUbergraph_Buff_SpindlesMinigunHit
struct ABuff_SpindlesMinigunHit_C_ExecuteUbergraph_Buff_SpindlesMinigunHit_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

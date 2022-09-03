#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EchoRevealed_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_EchoRevealed.Buff_EchoRevealed_C.DeactiveParticle
struct ABuff_EchoRevealed_C_DeactiveParticle_Params
{
};

// Function Buff_EchoRevealed.Buff_EchoRevealed_C.BPSetupForInstigator
struct ABuff_EchoRevealed_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EchoRevealed.Buff_EchoRevealed_C.BuffAdjustDamage
struct ABuff_EchoRevealed_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_EchoRevealed.Buff_EchoRevealed_C.BPCustomIsRelevantForClient
struct ABuff_EchoRevealed_C_BPCustomIsRelevantForClient_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_EchoRevealed.Buff_EchoRevealed_C.UserConstructionScript
struct ABuff_EchoRevealed_C_UserConstructionScript_Params
{
};

// Function Buff_EchoRevealed.Buff_EchoRevealed_C.ExecuteUbergraph_Buff_EchoRevealed
struct ABuff_EchoRevealed_C_ExecuteUbergraph_Buff_EchoRevealed_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

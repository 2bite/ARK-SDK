#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bee_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Bee_Character_BP.Bee_Character_BP_C.BlueprintPlayDying
struct ABee_Character_BP_C_BlueprintPlayDying_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bee_Character_BP.Bee_Character_BP_C.BPCanCryo
struct ABee_Character_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bee_Character_BP.Bee_Character_BP_C.BlueprintCanAttack
struct ABee_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bee_Character_BP.Bee_Character_BP_C.BPTimerServer
struct ABee_Character_BP_C_BPTimerServer_Params
{
};

// Function Bee_Character_BP.Bee_Character_BP_C.UpdateTimeSinceHadAValidTarget
struct ABee_Character_BP_C_UpdateTimeSinceHadAValidTarget_Params
{
	bool                                               KilledSelf;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bee_Character_BP.Bee_Character_BP_C.BPUnstasis
struct ABee_Character_BP_C_BPUnstasis_Params
{
};

// Function Bee_Character_BP.Bee_Character_BP_C.UserConstructionScript
struct ABee_Character_BP_C_UserConstructionScript_Params
{
};

// Function Bee_Character_BP.Bee_Character_BP_C.ReceiveBeginPlay
struct ABee_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Bee_Character_BP.Bee_Character_BP_C.ExecuteUbergraph_Bee_Character_BP
struct ABee_Character_BP_C_ExecuteUbergraph_Bee_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

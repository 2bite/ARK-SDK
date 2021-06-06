#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deathworm_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPIsHidden
struct ADeathworm_Character_BP_C_BPIsHidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPAdjustDamage
struct ADeathworm_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPTimerNonDedicated
struct ADeathworm_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPTimerServer
struct ADeathworm_Character_BP_C_BPTimerServer_Params
{
};

// Function Deathworm_Character_BP.Deathworm_Character_BP_C.Set Death Worm CollisionState
struct ADeathworm_Character_BP_C_Set_Death_Worm_CollisionState_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deathworm_Character_BP.Deathworm_Character_BP_C.UpdateDeathwormTrail
struct ADeathworm_Character_BP_C_UpdateDeathwormTrail_Params
{
};

// Function Deathworm_Character_BP.Deathworm_Character_BP_C.RefreshDeathwormState
struct ADeathworm_Character_BP_C_RefreshDeathwormState_Params
{
};

// Function Deathworm_Character_BP.Deathworm_Character_BP_C.OnRep_isUnderground
struct ADeathworm_Character_BP_C_OnRep_isUnderground_Params
{
};

// Function Deathworm_Character_BP.Deathworm_Character_BP_C.CheckTime
struct ADeathworm_Character_BP_C_CheckTime_Params
{
	double                                             Last_Time;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Time_Has_Passed;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deathworm_Character_BP.Deathworm_Character_BP_C.Pop Up
struct ADeathworm_Character_BP_C_Pop_Up_Params
{
};

// Function Deathworm_Character_BP.Deathworm_Character_BP_C.DiveIn
struct ADeathworm_Character_BP_C_DiveIn_Params
{
};

// Function Deathworm_Character_BP.Deathworm_Character_BP_C.BlueprintCanAttack
struct ADeathworm_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deathworm_Character_BP.Deathworm_Character_BP_C.UserConstructionScript
struct ADeathworm_Character_BP_C_UserConstructionScript_Params
{
};

// Function Deathworm_Character_BP.Deathworm_Character_BP_C.ReceiveBeginPlay
struct ADeathworm_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Deathworm_Character_BP.Deathworm_Character_BP_C.PlayDeathwormVFX
struct ADeathworm_Character_BP_C_PlayDeathwormVFX_Params
{
	bool                                               orientToGround;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleSystem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetFromRoot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deathworm_Character_BP.Deathworm_Character_BP_C.EnableUndergroundMovement
struct ADeathworm_Character_BP_C_EnableUndergroundMovement_Params
{
};

// Function Deathworm_Character_BP.Deathworm_Character_BP_C.ExecuteUbergraph_Deathworm_Character_BP
struct ADeathworm_Character_BP_C_ExecuteUbergraph_Deathworm_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

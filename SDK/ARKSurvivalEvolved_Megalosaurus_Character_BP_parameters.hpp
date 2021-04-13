#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megalosaurus_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
struct AMegalosaurus_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.UpdateSeverTimerLimits
struct AMegalosaurus_Character_BP_C_UpdateSeverTimerLimits_Params
{
	float                                              newMin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              newMAX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.InitNocturnalDino
struct AMegalosaurus_Character_BP_C_InitNocturnalDino_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.SetupRefs
struct AMegalosaurus_Character_BP_C_SetupRefs_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPUnstasis
struct AMegalosaurus_Character_BP_C_BPUnstasis_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPNotifyStructurePlacedNearby
struct AMegalosaurus_Character_BP_C_BPNotifyStructurePlacedNearby_Params
{
	class APrimalStructure**                           NewStructure;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPTimerServer
struct AMegalosaurus_Character_BP_C_BPTimerServer_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPGetMultiUseEntries
struct AMegalosaurus_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPTryMultiUse
struct AMegalosaurus_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnWakeUp
struct AMegalosaurus_Character_BP_C_OnWakeUp_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnRep_bIsDaytime
struct AMegalosaurus_Character_BP_C_OnRep_bIsDaytime_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnFallAsleep
struct AMegalosaurus_Character_BP_C_OnFallAsleep_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.Howl
struct AMegalosaurus_Character_BP_C_Howl_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.UpdateAppearance
struct AMegalosaurus_Character_BP_C_UpdateAppearance_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnRep_bIsNaturallySleeping
struct AMegalosaurus_Character_BP_C_OnRep_bIsNaturallySleeping_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CheckPrey
struct AMegalosaurus_Character_BP_C_CheckPrey_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CanSleep
struct AMegalosaurus_Character_BP_C_CanSleep_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CanWake
struct AMegalosaurus_Character_BP_C_CanWake_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CheckForSleep
struct AMegalosaurus_Character_BP_C_CheckForSleep_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CheckForWake
struct AMegalosaurus_Character_BP_C_CheckForWake_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.RemoveCarryBuffFromPrey
struct AMegalosaurus_Character_BP_C_RemoveCarryBuffFromPrey_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.ReceiveAnyDamage
struct AMegalosaurus_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.IsSleepDeprived
struct AMegalosaurus_Character_BP_C_IsSleepDeprived_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.DropPrey
struct AMegalosaurus_Character_BP_C_DropPrey_Params
{
	bool                                               PlayAnim;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.FoodTriesToEscape
struct AMegalosaurus_Character_BP_C_FoodTriesToEscape_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BlueprintCanRiderAttack
struct AMegalosaurus_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.IsCarryingValidLivingCharacter
struct AMegalosaurus_Character_BP_C_IsCarryingValidLivingCharacter_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.TryShakePreyAttack
struct AMegalosaurus_Character_BP_C_TryShakePreyAttack_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BlueprintCanAttack
struct AMegalosaurus_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.UserConstructionScript
struct AMegalosaurus_Character_BP_C_UserConstructionScript_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.AnimNotify_DamagePrey
struct AMegalosaurus_Character_BP_C_AnimNotify_DamagePrey_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.AnimNotify_ThrowPrey
struct AMegalosaurus_Character_BP_C_AnimNotify_ThrowPrey_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.AnimNotify_CheckForPrey
struct AMegalosaurus_Character_BP_C_AnimNotify_CheckForPrey_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnCarriedCharacterDeath
struct AMegalosaurus_Character_BP_C_OnCarriedCharacterDeath_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnIsDaytime
struct AMegalosaurus_Character_BP_C_OnIsDaytime_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnIsNighttime
struct AMegalosaurus_Character_BP_C_OnIsNighttime_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.ReceiveBeginPlay
struct AMegalosaurus_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.FirstHowl
struct AMegalosaurus_Character_BP_C_FirstHowl_Params
{
};

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.ExecuteUbergraph_Megalosaurus_Character_BP
struct AMegalosaurus_Character_BP_C_ExecuteUbergraph_Megalosaurus_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_Nocturnal_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPBecomeAdult
struct ADino_Character_BP_Nocturnal_C_BPBecomeAdult_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPBecomeBaby
struct ADino_Character_BP_Nocturnal_C_BPBecomeBaby_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.AllowNocturnalLogic
struct ADino_Character_BP_Nocturnal_C_AllowNocturnalLogic_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsDinoInShallowWater
struct ADino_Character_BP_Nocturnal_C_IsDinoInShallowWater_Params
{
	bool                                               shallowWaters;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.Is Target Attacking Ally
struct ADino_Character_BP_Nocturnal_C_Is_Target_Attacking_Ally_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsPossibleToSleep
struct ADino_Character_BP_Nocturnal_C_IsPossibleToSleep_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPPreventRiding
struct ADino_Character_BP_Nocturnal_C_BPPreventRiding_Params
{
	class AShooterCharacter**                          ByPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDontCheckDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.SetupRefs
struct ADino_Character_BP_Nocturnal_C_SetupRefs_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsDaytime
struct ADino_Character_BP_Nocturnal_C_IsDaytime_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.Check Time Of Day
struct ADino_Character_BP_Nocturnal_C_Check_Time_Of_Day_Params
{
	bool                                               ForceUpdate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsTamedFollowing
struct ADino_Character_BP_Nocturnal_C_IsTamedFollowing_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPGetMultiUseEntries
struct ADino_Character_BP_Nocturnal_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPTryMultiUse
struct ADino_Character_BP_Nocturnal_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPTimerServer
struct ADino_Character_BP_Nocturnal_C_BPTimerServer_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.PrintStringWithAuth
struct ADino_Character_BP_Nocturnal_C_PrintStringWithAuth_Params
{
	class FString                                      String;                                                   // (Parm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPUnstasis
struct ADino_Character_BP_Nocturnal_C_BPUnstasis_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnRep_bIsDaytime
struct ADino_Character_BP_Nocturnal_C_OnRep_bIsDaytime_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.InitNocturnalDino
struct ADino_Character_BP_Nocturnal_C_InitNocturnalDino_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BlueprintDrawFloatingHUD
struct ADino_Character_BP_Nocturnal_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPNotifyStructurePlacedNearby
struct ADino_Character_BP_Nocturnal_C_BPNotifyStructurePlacedNearby_Params
{
	class APrimalStructure**                           NewStructure;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.SetTorpidity
struct ADino_Character_BP_Nocturnal_C_SetTorpidity_Params
{
	float                                              newTorpidity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnRep_bIsNaturallySleeping
struct ADino_Character_BP_Nocturnal_C_OnRep_bIsNaturallySleeping_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.PlayNaturalSleepingAnims
struct ADino_Character_BP_Nocturnal_C_PlayNaturalSleepingAnims_Params
{
	bool                                               isFallingAsleep;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isAlerted;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.GetIsFullyAwake
struct ADino_Character_BP_Nocturnal_C_GetIsFullyAwake_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.DinoNeedsToSleep
struct ADino_Character_BP_Nocturnal_C_DinoNeedsToSleep_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.HasSleepDebt
struct ADino_Character_BP_Nocturnal_C_HasSleepDebt_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.HasValidTarget
struct ADino_Character_BP_Nocturnal_C_HasValidTarget_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPCharacterSleeped
struct ADino_Character_BP_Nocturnal_C_BPCharacterSleeped_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPCharacterUnsleeped
struct ADino_Character_BP_Nocturnal_C_BPCharacterUnsleeped_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.GetSleepDebtToDeprivedRatio
struct ADino_Character_BP_Nocturnal_C_GetSleepDebtToDeprivedRatio_Params
{
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.UpdateSleepDebt
struct ADino_Character_BP_Nocturnal_C_UpdateSleepDebt_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsDinoGrounded
struct ADino_Character_BP_Nocturnal_C_IsDinoGrounded_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.ReceiveAnyDamage
struct ADino_Character_BP_Nocturnal_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.UpdateSleepRelatedActions
struct ADino_Character_BP_Nocturnal_C_UpdateSleepRelatedActions_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.CanWake
struct ADino_Character_BP_Nocturnal_C_CanWake_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.CanSleep
struct ADino_Character_BP_Nocturnal_C_CanSleep_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.Net_Set Natural Sleep State
struct ADino_Character_BP_Nocturnal_C_Net_Set_Natural_Sleep_State_Params
{
	bool                                               isAsleep;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.CheckForWake
struct ADino_Character_BP_Nocturnal_C_CheckForWake_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.CheckForSleep
struct ADino_Character_BP_Nocturnal_C_CheckForSleep_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnFallAsleep
struct ADino_Character_BP_Nocturnal_C_OnFallAsleep_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnWakeUp
struct ADino_Character_BP_Nocturnal_C_OnWakeUp_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.WakeUp
struct ADino_Character_BP_Nocturnal_C_WakeUp_Params
{
	bool                                               forceSuccess;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.FallAsleep
struct ADino_Character_BP_Nocturnal_C_FallAsleep_Params
{
	bool                                               forceSuccess;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ignoreIsPossible;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.UserConstructionScript
struct ADino_Character_BP_Nocturnal_C_UserConstructionScript_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnIsDaytime
struct ADino_Character_BP_Nocturnal_C_OnIsDaytime_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnIsNighttime
struct ADino_Character_BP_Nocturnal_C_OnIsNighttime_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.EnableMovementAfterDelay
struct ADino_Character_BP_Nocturnal_C_EnableMovementAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.DisableMovementAfterDelay
struct ADino_Character_BP_Nocturnal_C_DisableMovementAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.ReceiveBeginPlay
struct ADino_Character_BP_Nocturnal_C_ReceiveBeginPlay_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature
struct ADino_Character_BP_Nocturnal_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.ReInitializeNocturnalDino
struct ADino_Character_BP_Nocturnal_C_ReInitializeNocturnalDino_Params
{
};

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.ExecuteUbergraph_Dino_Character_BP_Nocturnal
struct ADino_Character_BP_Nocturnal_C_ExecuteUbergraph_Dino_Character_BP_Nocturnal_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Hyaenodon_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPOnAnimPlayedNotify
struct AHyaenodon_Character_BP_C_BPOnAnimPlayedNotify_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      StartSectionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicateToOwner;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseAndServerUpdateMesh;                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseOnServer;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Has Conflict with AI
struct AHyaenodon_Character_BP_C_Has_Conflict_with_AI_Params
{
	bool                                               NewParam1;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ShouldStandUp
struct AHyaenodon_Character_BP_C_ShouldStandUp_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.CanStandUp
struct AHyaenodon_Character_BP_C_CanStandUp_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Can SitDown
struct AHyaenodon_Character_BP_C_Can_SitDown_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPNotifyBumpedPawn
struct AHyaenodon_Character_BP_C_BPNotifyBumpedPawn_Params
{
	class APrimalCharacter**                           BumpedPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPOnMovementModeChangedNotify
struct AHyaenodon_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnJumped
struct AHyaenodon_Character_BP_C_OnJumped_Params
{
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPShouldCancelDoAttack
struct AHyaenodon_Character_BP_C_BPShouldCancelDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnSaddleUnequipped
struct AHyaenodon_Character_BP_C_OnSaddleUnequipped_Params
{
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnSaddleEquipped
struct AHyaenodon_Character_BP_C_OnSaddleEquipped_Params
{
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Reset Taming
struct AHyaenodon_Character_BP_C_Reset_Taming_Params
{
	bool                                               ForceReset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.AttemptToFleeFromActor
struct AHyaenodon_Character_BP_C_AttemptToFleeFromActor_Params
{
	class AActor*                                      ActorToCheck;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCurrentTargetDangerous;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DidFlee;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.IsActorLowOnResources
struct AHyaenodon_Character_BP_C_IsActorLowOnResources_Params
{
	class AActor*                                      ActorToCheck;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.CanFleeFromTarget
struct AHyaenodon_Character_BP_C_CanFleeFromTarget_Params
{
	class AActor*                                      TargetToFleeFrom;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DangerousMultiplier;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CurrentTargetIsDangerous;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanFlee;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPUnstasis
struct AHyaenodon_Character_BP_C_BPUnstasis_Params
{
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPAdjustDamage
struct AHyaenodon_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.GatherPack
struct AHyaenodon_Character_BP_C_GatherPack_Params
{
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPCanTargetCorpse
struct AHyaenodon_Character_BP_C_BPCanTargetCorpse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Get Threat Multiplier for Target
struct AHyaenodon_Character_BP_C_Get_Threat_Multiplier_for_Target_Params
{
	class AActor*                                      TargetToDetermine;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.TimeSinceLastTookDamageFromPlayer
struct AHyaenodon_Character_BP_C_TimeSinceLastTookDamageFromPlayer_Params
{
	bool                                               IsStillAggrod;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPSetupTamed
struct AHyaenodon_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ReceiveAnyDamage
struct AHyaenodon_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BlueprintCanAttack
struct AHyaenodon_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Is Actor Dangerous
struct AHyaenodon_Character_BP_C_Is_Actor_Dangerous_Params
{
	class AActor*                                      Actor_To_Check;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Skip_Ignore_Actor_List;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Dangerous;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DangerMultiplier;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPTimerServer
struct AHyaenodon_Character_BP_C_BPTimerServer_Params
{
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Pack Flee for Duration
struct AHyaenodon_Character_BP_C_Pack_Flee_for_Duration_Params
{
	float                                              DurationOfFlee;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetToFleeFrom;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HavePackFlee;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Flee For Duration
struct AHyaenodon_Character_BP_C_Flee_For_Duration_Params
{
	float                                              DurationOfFlee;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetToFleeFrom;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnWildPet
struct AHyaenodon_Character_BP_C_OnWildPet_Params
{
	class APlayerController*                           petterPC;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPShouldForceFlee
struct AHyaenodon_Character_BP_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.IsInTamingFriendlyState
struct AHyaenodon_Character_BP_C_IsInTamingFriendlyState_Params
{
	bool                                               tamingCanOccur;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               leaderIsNearby;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPGetMultiUseEntries
struct AHyaenodon_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPTryMultiUse
struct AHyaenodon_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnEatFood
struct AHyaenodon_Character_BP_C_OnEatFood_Params
{
	class UPrimalItem*                                 foodItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPTamedConsumeFoodItem
struct AHyaenodon_Character_BP_C_BPTamedConsumeFoodItem_Params
{
	class UPrimalItem**                                foodItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPUntamedConsumeFoodItem
struct AHyaenodon_Character_BP_C_BPUntamedConsumeFoodItem_Params
{
	class UPrimalItem**                                foodItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.UserConstructionScript
struct AHyaenodon_Character_BP_C_UserConstructionScript_Params
{
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ReceiveBeginPlay
struct AHyaenodon_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnDied_Event
struct AHyaenodon_Character_BP_C_OnDied_Event_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.IncreaseWeight_Multicast
struct AHyaenodon_Character_BP_C_IncreaseWeight_Multicast_Params
{
	float                                              newWeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ResetWeight_Multicast
struct AHyaenodon_Character_BP_C_ResetWeight_Multicast_Params
{
	float                                              newWeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.RestoreStartledAfterDelay
struct AHyaenodon_Character_BP_C_RestoreStartledAfterDelay_Params
{
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.DropAfterDelay
struct AHyaenodon_Character_BP_C_DropAfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.SetIsJumpingAfterDelay
struct AHyaenodon_Character_BP_C_SetIsJumpingAfterDelay_Params
{
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.SitDown
struct AHyaenodon_Character_BP_C_SitDown_Params
{
	bool                                               PlayAnim;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.TryStandUp
struct AHyaenodon_Character_BP_C_TryStandUp_Params
{
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.TrySitDown
struct AHyaenodon_Character_BP_C_TrySitDown_Params
{
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.standUp
struct AHyaenodon_Character_BP_C_standUp_Params
{
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.QuickSitDown
struct AHyaenodon_Character_BP_C_QuickSitDown_Params
{
};

// Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ExecuteUbergraph_Hyaenodon_Character_BP
struct AHyaenodon_Character_BP_C_ExecuteUbergraph_Hyaenodon_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

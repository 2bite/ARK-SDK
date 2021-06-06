#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Hesperornis_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UpdateSwimOffsetLocal
struct AHesperornis_Character_BP_C_UpdateSwimOffsetLocal_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.TryToLerpToZ
struct AHesperornis_Character_BP_C_TryToLerpToZ_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Setup Z Lerping
struct AHesperornis_Character_BP_C_Setup_Z_Lerping_Params
{
	float                                              TargetZ;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Init
struct AHesperornis_Character_BP_C_Init_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPOnClearMountedDino
struct AHesperornis_Character_BP_C_BPOnClearMountedDino_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPOnSetMountedDino
struct AHesperornis_Character_BP_C_BPOnSetMountedDino_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MoveFwd
struct AHesperornis_Character_BP_C_MoveFwd_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DinoShoulderMountedLaunch
struct AHesperornis_Character_BP_C_DinoShoulderMountedLaunch_Params
{
	struct FVector*                                    launchDir;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          throwingCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPUnstasis
struct AHesperornis_Character_BP_C_BPUnstasis_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.OverrideFinalWanderLocation
struct AHesperornis_Character_BP_C_OverrideFinalWanderLocation_Params
{
	struct FVector                                     outVec;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.OverrideRandomWanderLocation
struct AHesperornis_Character_BP_C_OverrideRandomWanderLocation_Params
{
	struct FVector                                     originalDestination;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     inVec;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.IsTargetAFish
struct AHesperornis_Character_BP_C_IsTargetAFish_Params
{
	class AActor*                                      targetedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPCanAutodrag
struct AHesperornis_Character_BP_C_BPCanAutodrag_Params
{
	class APrimalCharacter**                           characterToDrag;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPCanDragCharacter
struct AHesperornis_Character_BP_C_BPCanDragCharacter_Params
{
	class APrimalCharacter**                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.FishHasVit
struct AHesperornis_Character_BP_C_FishHasVit_Params
{
	class APrimalCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.IsCarriedFishValid
struct AHesperornis_Character_BP_C_IsCarriedFishValid_Params
{
	class APrimalCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Eat Players Carried Food
struct AHesperornis_Character_BP_C_Eat_Players_Carried_Food_Params
{
	class APrimalCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPClientDoMultiUse
struct AHesperornis_Character_BP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPGetMultiUseEntries
struct AHesperornis_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPTryMultiUse
struct AHesperornis_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.TryToLayEgg
struct AHesperornis_Character_BP_C_TryToLayEgg_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.WantsToLayEggs
struct AHesperornis_Character_BP_C_WantsToLayEggs_Params
{
	bool                                               WantsTo;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Regular;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Rare;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.IsDivingAvailable
struct AHesperornis_Character_BP_C_IsDivingAvailable_Params
{
	bool                                               IsAvailable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Harvested Valid Fish
struct AHesperornis_Character_BP_C_Harvested_Valid_Fish_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Check if Fish Is Valid for Egging
struct AHesperornis_Character_BP_C_Check_if_Fish_Is_Valid_for_Egging_Params
{
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               IsValidTarget;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UseAimOffsets
struct AHesperornis_Character_BP_C_UseAimOffsets_Params
{
	bool                                               SetActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ReceiveAnyDamage
struct AHesperornis_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPTimerNonDedicated
struct AHesperornis_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DivingUp
struct AHesperornis_Character_BP_C_DivingUp_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.OnRep_IsDivingUp
struct AHesperornis_Character_BP_C_OnRep_IsDivingUp_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPTimerServer
struct AHesperornis_Character_BP_C_BPTimerServer_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPGetGravityZScale
struct AHesperornis_Character_BP_C_BPGetGravityZScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPOnMovementModeChangedNotify
struct AHesperornis_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.EndDive
struct AHesperornis_Character_BP_C_EndDive_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BlueprintCanAttack
struct AHesperornis_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UserConstructionScript
struct AHesperornis_Character_BP_C_UserConstructionScript_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveTimeLine__FinishedFunc
struct AHesperornis_Character_BP_C_DiveTimeLine__FinishedFunc_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveTimeLine__UpdateFunc
struct AHesperornis_Character_BP_C_DiveTimeLine__UpdateFunc_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveEvent
struct AHesperornis_Character_BP_C_DiveEvent_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiEndDive
struct AHesperornis_Character_BP_C_MultiEndDive_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPDoAttack
struct AHesperornis_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ReceiveBeginPlay
struct AHesperornis_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.SlowlyRotateZTo
struct AHesperornis_Character_BP_C_SlowlyRotateZTo_Params
{
	struct FRotator                                    TargetRotation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    initialRotation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiUnsetPitch
struct AHesperornis_Character_BP_C_MultiUnsetPitch_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ReceiveTick
struct AHesperornis_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveAttack
struct AHesperornis_Character_BP_C_DiveAttack_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UpdateZHeight
struct AHesperornis_Character_BP_C_UpdateZHeight_Params
{
	float                                              ZHeight;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiCastBoolToSetZ
struct AHesperornis_Character_BP_C_MultiCastBoolToSetZ_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.AnimNotify_DiveAttackSound
struct AHesperornis_Character_BP_C_AnimNotify_DiveAttackSound_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiStartRotatingUp
struct AHesperornis_Character_BP_C_MultiStartRotatingUp_Params
{
};

// Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ExecuteUbergraph_Hesperornis_Character_BP
struct AHesperornis_Character_BP_C_ExecuteUbergraph_Hesperornis_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

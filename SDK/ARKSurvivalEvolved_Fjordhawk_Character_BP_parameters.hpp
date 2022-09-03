#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Fjordhawk_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateLootTarget
struct AFjordhawk_Character_BP_C_UpdateLootTarget_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.SetDestination
struct AFjordhawk_Character_BP_C_SetDestination_Params
{
	struct FVector                                     NewDestination;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnSetFlight
struct AFjordhawk_Character_BP_C_BPOnSetFlight_Params
{
	bool*                                              bFly;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.PreventShowingDinoTooltip
struct AFjordhawk_Character_BP_C_PreventShowingDinoTooltip_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPreventOrderAllowed
struct AFjordhawk_Character_BP_C_BPPreventOrderAllowed_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.MulticastShieldBreakSound
struct AFjordhawk_Character_BP_C_MulticastShieldBreakSound_Params
{
	bool                                               Break;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BreakShield
struct AFjordhawk_Character_BP_C_BreakShield_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BuffClassIsStun
struct AFjordhawk_Character_BP_C_BuffClassIsStun_Params
{
	class UClass*                                      BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsStun;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BP_ForceAllowAddBuff
struct AFjordhawk_Character_BP_C_BP_ForceAllowAddBuff_Params
{
	class UClass**                                     BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPostLoadedFromSaveGame
struct AFjordhawk_Character_BP_C_BPPostLoadedFromSaveGame_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BP_PreventCarryingByCharacter
struct AFjordhawk_Character_BP_C_BP_PreventCarryingByCharacter_Params
{
	class APrimalCharacter**                           ByCarrier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.CanEatCharacter
struct AFjordhawk_Character_BP_C_CanEatCharacter_Params
{
	class APrimalCharacter*                            InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FinishEating
struct AFjordhawk_Character_BP_C_FinishEating_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OnPlayerDied
struct AFjordhawk_Character_BP_C_OnPlayerDied_Params
{
	class APrimalCharacter*                            NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.StopWaitingForPlayer
struct AFjordhawk_Character_BP_C_StopWaitingForPlayer_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.GetApproachPoint
struct AFjordhawk_Character_BP_C_GetApproachPoint_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InAir;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnDinoCheat
struct AFjordhawk_Character_BP_C_BPOnDinoCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ClientUpdate
struct AFjordhawk_Character_BP_C_ClientUpdate_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ServerUpdate
struct AFjordhawk_Character_BP_C_ServerUpdate_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPreventStasis
struct AFjordhawk_Character_BP_C_BPPreventStasis_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnMassTeleportEvent
struct AFjordhawk_Character_BP_C_BPOnMassTeleportEvent_Params
{
	TEnumAsByte<EMassTeleportState>*                   EventState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter**                           TeleportInitiatedByChar;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RetrievePlayerInventory
struct AFjordhawk_Character_BP_C_RetrievePlayerInventory_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FinishedTame
struct AFjordhawk_Character_BP_C_FinishedTame_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.WildLookForCorpses
struct AFjordhawk_Character_BP_C_WildLookForCorpses_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ClientHideDino
struct AFjordhawk_Character_BP_C_ClientHideDino_Params
{
	bool                                               Hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPUnstasis
struct AFjordhawk_Character_BP_C_BPUnstasis_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.CheckForLootDrop
struct AFjordhawk_Character_BP_C_CheckForLootDrop_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReacquirePlayer
struct AFjordhawk_Character_BP_C_ReacquirePlayer_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPIsBlockedByShield
struct AFjordhawk_Character_BP_C_BPIsBlockedByShield_Params
{
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ShotDirection;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bBlockAllPointDamage;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateLoot
struct AFjordhawk_Character_BP_C_UpdateLoot_Params
{
	bool                                               Loot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      PlayerId;                                                 // (Parm, ZeroConstructor)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.TogglePreyDetection
struct AFjordhawk_Character_BP_C_TogglePreyDetection_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.PostLaunchUpdate
struct AFjordhawk_Character_BP_C_PostLaunchUpdate_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.VerifyLaunchVectors
struct AFjordhawk_Character_BP_C_VerifyLaunchVectors_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPrepareForLaunchFromShoulder
struct AFjordhawk_Character_BP_C_BPPrepareForLaunchFromShoulder_Params
{
	struct FVector                                     viewLoc;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     viewDir;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPGetTargetingDesirability
struct AFjordhawk_Character_BP_C_BPGetTargetingDesirability_Params
{
	class AActor**                                     Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.CheckForPlayerDeath
struct AFjordhawk_Character_BP_C_CheckForPlayerDeath_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPPlayDying
struct AFjordhawk_Character_BP_C_BPPlayDying_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateForcedTickSetting
struct AFjordhawk_Character_BP_C_UpdateForcedTickSetting_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.GetEatTarget
struct AFjordhawk_Character_BP_C_GetEatTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Net Show Bag
struct AFjordhawk_Character_BP_C_Net_Show_Bag_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.DinoShoulderMountedLaunch
struct AFjordhawk_Character_BP_C_DinoShoulderMountedLaunch_Params
{
	struct FVector*                                    launchDir;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          throwingCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.VerifyLootTarget
struct AFjordhawk_Character_BP_C_VerifyLootTarget_Params
{
	class APrimalCharacter*                            InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPShouldForceFlee
struct AFjordhawk_Character_BP_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.PickUpLoot
struct AFjordhawk_Character_BP_C_PickUpLoot_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPSetupTamed
struct AFjordhawk_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.LookForLoot
struct AFjordhawk_Character_BP_C_LookForLoot_Params
{
	float                                              SearchRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LookForBetterLoot;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.LootCache
struct AFjordhawk_Character_BP_C_LootCache_Params
{
	class APrimalStructureItemContainer*               StructureToLoot;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReceiveDestroyed
struct AFjordhawk_Character_BP_C_ReceiveDestroyed_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.DropLoot
struct AFjordhawk_Character_BP_C_DropLoot_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPDinoPostBeginPlay
struct AFjordhawk_Character_BP_C_BPDinoPostBeginPlay_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FindAimedTarget
struct AFjordhawk_Character_BP_C_FindAimedTarget_Params
{
	struct FVector                                     AimLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AimDir;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OnLaunched
struct AFjordhawk_Character_BP_C_OnLaunched_Params
{
	struct FVector*                                    LaunchVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bXYOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bZOverride;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnClearMountedDino
struct AFjordhawk_Character_BP_C_BPOnClearMountedDino_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnSetMountedDino
struct AFjordhawk_Character_BP_C_BPOnSetMountedDino_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OverrideRandomWanderLocation
struct AFjordhawk_Character_BP_C_OverrideRandomWanderLocation_Params
{
	struct FVector                                     originalDestination;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     inVec;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.FindWanderAroundActor
struct AFjordhawk_Character_BP_C_FindWanderAroundActor_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Eat  Corpse
struct AFjordhawk_Character_BP_C_Eat__Corpse_Params
{
	class APrimalCharacter*                            DinoToEat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AFjordhawk_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BlueprintCanAttack
struct AFjordhawk_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RestoreShield
struct AFjordhawk_Character_BP_C_RestoreShield_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.OnRep_HasShield
struct AFjordhawk_Character_BP_C_OnRep_HasShield_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPAdjustDamage
struct AFjordhawk_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReceiveTick
struct AFjordhawk_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Disable Landing
struct AFjordhawk_Character_BP_C_Disable_Landing_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.AllowLanding
struct AFjordhawk_Character_BP_C_AllowLanding_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.BPOnTamedProcessOrder
struct AFjordhawk_Character_BP_C_BPOnTamedProcessOrder_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ReceiveAnyDamage
struct AFjordhawk_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Rotate Z To Point
struct AFjordhawk_Character_BP_C_Rotate_Z_To_Point_Params
{
	struct FVector                                     offsetFromCurrentLocation;                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.Rotate Z to Target
struct AFjordhawk_Character_BP_C_Rotate_Z_to_Target_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UserConstructionScript
struct AFjordhawk_Character_BP_C_UserConstructionScript_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RotationToTarget__FinishedFunc
struct AFjordhawk_Character_BP_C_RotationToTarget__FinishedFunc_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.RotationToTarget__UpdateFunc
struct AFjordhawk_Character_BP_C_RotationToTarget__UpdateFunc_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.SlowlyRotateZTo
struct AFjordhawk_Character_BP_C_SlowlyRotateZTo_Params
{
	struct FRotator                                    TargetRotation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    initialRotation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.HideDino
struct AFjordhawk_Character_BP_C_HideDino_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ShowDino
struct AFjordhawk_Character_BP_C_ShowDino_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ClientSetHidden
struct AFjordhawk_Character_BP_C_ClientSetHidden_Params
{
	bool                                               NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.UpdateVisibilityAfterUnstasis
struct AFjordhawk_Character_BP_C_UpdateVisibilityAfterUnstasis_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.VerifyEscape
struct AFjordhawk_Character_BP_C_VerifyEscape_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.TryLanding
struct AFjordhawk_Character_BP_C_TryLanding_Params
{
};

// Function Fjordhawk_Character_BP.Fjordhawk_Character_BP_C.ExecuteUbergraph_Fjordhawk_Character_BP
struct AFjordhawk_Character_BP_C_ExecuteUbergraph_Fjordhawk_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

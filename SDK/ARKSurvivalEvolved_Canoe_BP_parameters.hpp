#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Canoe_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Canoe_BP.Canoe_BP_C.OnCanoeAtRestStateChanged
struct ACanoe_BP_C_OnCanoeAtRestStateChanged_Params
{
};

// Function Canoe_BP.Canoe_BP_C.UpdateCanoeAtRest
struct ACanoe_BP_C_UpdateCanoeAtRest_Params
{
};

// Function Canoe_BP.Canoe_BP_C.GetCanoeVelocity_External
struct ACanoe_BP_C_GetCanoeVelocity_External_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.GetCanoeVelocity
struct ACanoe_BP_C_GetCanoeVelocity_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.BPAllowMovementSound
struct ACanoe_BP_C_BPAllowMovementSound_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.CanModifyCanoeDesiredRotation
struct ACanoe_BP_C_CanModifyCanoeDesiredRotation_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.GetCanoeNumPassengers
struct ACanoe_BP_C_GetCanoeNumPassengers_Params
{
	int                                                NumPassengers;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.DoesCanoeHaveAnyPassengers
struct ACanoe_BP_C_DoesCanoeHaveAnyPassengers_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.IsPlayerCanoePassenger
struct ACanoe_BP_C_IsPlayerCanoePassenger_Params
{
	class AShooterCharacter*                           CheckPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.UpdateCanoeHudTextOverlay
struct ACanoe_BP_C_UpdateCanoeHudTextOverlay_Params
{
};

// Function Canoe_BP.Canoe_BP_C.RemoveCanoeHudTextOverlayFromPassenger
struct ACanoe_BP_C_RemoveCanoeHudTextOverlayFromPassenger_Params
{
	class AShooterCharacter*                           FromPassenger;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.AddCanoeHudTextOverlayToPassenger
struct ACanoe_BP_C_AddCanoeHudTextOverlayToPassenger_Params
{
	class AShooterCharacter*                           ToPassenger;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.BPRemovedAttachmentsForItem
struct ACanoe_BP_C_BPRemovedAttachmentsForItem_Params
{
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.BP_OnPaintingComponentInitialized
struct ACanoe_BP_C_BP_OnPaintingComponentInitialized_Params
{
	class UStructurePaintingComponent**                PaintingComp;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.CanUsePassengerReplicatedInputQueue
struct ACanoe_BP_C_CanUsePassengerReplicatedInputQueue_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.OnRep_bPreventCanoeExitingWater
struct ACanoe_BP_C_OnRep_bPreventCanoeExitingWater_Params
{
};

// Function Canoe_BP.Canoe_BP_C.CanDynamicalyPreventExitingWater
struct ACanoe_BP_C_CanDynamicalyPreventExitingWater_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.UpdateBeachInputHUD
struct ACanoe_BP_C_UpdateBeachInputHUD_Params
{
};

// Function Canoe_BP.Canoe_BP_C.OnUpdateCanoePreventExitingWater
struct ACanoe_BP_C_OnUpdateCanoePreventExitingWater_Params
{
	bool                                               bNewVal;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.UpdateCanoeWantsToBeach
struct ACanoe_BP_C_UpdateCanoeWantsToBeach_Params
{
};

// Function Canoe_BP.Canoe_BP_C.BP_PreventMovementMode
struct ACanoe_BP_C_BP_PreventMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.UpdatePreventCanoeFromExitingWater
struct ACanoe_BP_C_UpdatePreventCanoeFromExitingWater_Params
{
};

// Function Canoe_BP.Canoe_BP_C.PackInputAxesIntoVector2D
struct ACanoe_BP_C_PackInputAxesIntoVector2D_Params
{
	float                                              Forward;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.ProcessReceivedPassengerInputsQueue_Right
struct ACanoe_BP_C_ProcessReceivedPassengerInputsQueue_Right_Params
{
};

// Function Canoe_BP.Canoe_BP_C.ProcessReceivedPassengerInputsQueue_Forward
struct ACanoe_BP_C_ProcessReceivedPassengerInputsQueue_Forward_Params
{
};

// Function Canoe_BP.Canoe_BP_C.ConvertServerReceivedPassengerInputsIntoVector2Ds
struct ACanoe_BP_C_ConvertServerReceivedPassengerInputsIntoVector2Ds_Params
{
	TArray<struct FVector2D>                           Inputs;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function Canoe_BP.Canoe_BP_C.BP_OverrideSwimmingAcceleration
struct ACanoe_BP_C_BP_OverrideSwimmingAcceleration_Params
{
	struct FVector                                     ModifyAcceleration;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.ReceivedSavedPassengerInputStruct
struct ACanoe_BP_C_ReceivedSavedPassengerInputStruct_Params
{
	struct FCanoePassengerClientInputAxes              ClientSavedInputs;                                        // (Parm)
	class AShooterCharacter*                           ForPassengerPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.BPOverridePassengerAdditiveAnim
struct ACanoe_BP_C_BPOverridePassengerAdditiveAnim_Params
{
	class APrimalCharacter**                           ForPassenger;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.IsCanoeAdvancedSimProxy
struct ACanoe_BP_C_IsCanoeAdvancedSimProxy_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.CleanUpAllOarWeapons
struct ACanoe_BP_C_CleanUpAllOarWeapons_Params
{
};

// Function Canoe_BP.Canoe_BP_C.BP_OnSetDeath
struct ACanoe_BP_C_BP_OnSetDeath_Params
{
};

// Function Canoe_BP.Canoe_BP_C.SetPlayerUseOarWeapon
struct ACanoe_BP_C_SetPlayerUseOarWeapon_Params
{
	class AShooterCharacter*                           ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewUse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.BPAddedAttachmentsForItem
struct ACanoe_BP_C_BPAddedAttachmentsForItem_Params
{
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.BPOnRefreshColorization
struct ACanoe_BP_C_BPOnRefreshColorization_Params
{
	TArray<struct FLinearColor>                        Colors;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Canoe_BP.Canoe_BP_C.DebugPrintReplicatedInputs
struct ACanoe_BP_C_DebugPrintReplicatedInputs_Params
{
};

// Function Canoe_BP.Canoe_BP_C.DebugCanoeMovementVars
struct ACanoe_BP_C_DebugCanoeMovementVars_Params
{
};

// Function Canoe_BP.Canoe_BP_C.BPOverrideSwimmingVelocity
struct ACanoe_BP_C_BPOverrideSwimmingVelocity_Params
{
	struct FVector*                                    InitialVelocity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Gravity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FluidFriction;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NetBuoyancy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.TryRow
struct ACanoe_BP_C_TryRow_Params
{
	double                                             WithGameTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.FetchLocallyControlledPassengerInputs
struct ACanoe_BP_C_FetchLocallyControlledPassengerInputs_Params
{
};

// Function Canoe_BP.Canoe_BP_C.ForceClearPassengerInputs
struct ACanoe_BP_C_ForceClearPassengerInputs_Params
{
};

// Function Canoe_BP.Canoe_BP_C.SetUseAdvancedCanoeSimMovement
struct ACanoe_BP_C_SetUseAdvancedCanoeSimMovement_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.ResetSimCanoeVars
struct ACanoe_BP_C_ResetSimCanoeVars_Params
{
};

// Function Canoe_BP.Canoe_BP_C.BPOnMovementModeChangedNotify
struct ACanoe_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.ShouldUseAdvancedSimMovement
struct ACanoe_BP_C_ShouldUseAdvancedSimMovement_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.BP_OnBasedPawnRemovedNotify
struct ACanoe_BP_C_BP_OnBasedPawnRemovedNotify_Params
{
	class AActor**                                     RemovedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.BP_OnBasedPawnAddedNotify
struct ACanoe_BP_C_BP_OnBasedPawnAddedNotify_Params
{
	class AActor**                                     AddedActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.DebugPerPassengerMovementVars
struct ACanoe_BP_C_DebugPerPassengerMovementVars_Params
{
};

// Function Canoe_BP.Canoe_BP_C.UpdateCurrentPassengerInputs
struct ACanoe_BP_C_UpdateCurrentPassengerInputs_Params
{
	bool                                               bAnyActive;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.OnRep_ReplicatedPassengerInputs
struct ACanoe_BP_C_OnRep_ReplicatedPassengerInputs_Params
{
};

// Function Canoe_BP.Canoe_BP_C.UnpackReplicatedPassengerInputs
struct ACanoe_BP_C_UnpackReplicatedPassengerInputs_Params
{
};

// Function Canoe_BP.Canoe_BP_C.PackReplicatedPassengerInputs
struct ACanoe_BP_C_PackReplicatedPassengerInputs_Params
{
};

// Function Canoe_BP.Canoe_BP_C.PerformSimCanoeMovement
struct ACanoe_BP_C_PerformSimCanoeMovement_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.BPTimerNonDedicated
struct ACanoe_BP_C_BPTimerNonDedicated_Params
{
};

// Function Canoe_BP.Canoe_BP_C.BPTimerServer
struct ACanoe_BP_C_BPTimerServer_Params
{
};

// Function Canoe_BP.Canoe_BP_C.BP_OverrideCameraTargetOriginLocation
struct ACanoe_BP_C_BP_OverrideCameraTargetOriginLocation_Params
{
	struct FVector                                     OutOverrideOrigin;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName*                                      WithCameraStyle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.ReceiveHit
struct ACanoe_BP_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Canoe_BP.Canoe_BP_C.BPCanTakePassenger
struct ACanoe_BP_C_BPCanTakePassenger_Params
{
	class APrimalCharacter**                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PassengerSeatIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForcePassenger;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllowFlyersAndWaterDinos;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.GetPlayerSpawnLocation
struct ACanoe_BP_C_GetPlayerSpawnLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.BPServerHandleNetExecCommand
struct ACanoe_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.BPDinoPostBeginPlay
struct ACanoe_BP_C_BPDinoPostBeginPlay_Params
{
};

// Function Canoe_BP.Canoe_BP_C.BP_ForceAllowAddBuff
struct ACanoe_BP_C_BP_ForceAllowAddBuff_Params
{
	class UClass**                                     BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.HandleFX
struct ACanoe_BP_C_HandleFX_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.SortSeatsByDistance
struct ACanoe_BP_C_SortSeatsByDistance_Params
{
	struct FVector                                     ToLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSaddlePassengerSeatDefinition>      SortedSeatDefinitons;                                     // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        Sortedindices;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Canoe_BP.Canoe_BP_C.BPCameraBaseOrientation
struct ACanoe_BP_C_BPCameraBaseOrientation_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.BPLimitPlayerRotation
struct ACanoe_BP_C_BPLimitPlayerRotation_Params
{
	class APrimalCharacter**                           viewingCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   InViewRotation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.BPModifyDesiredRotation
struct ACanoe_BP_C_BPModifyDesiredRotation_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InDesiredRotation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    OutDesiredRotation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.PassengerWeaponChanged
struct ACanoe_BP_C_PassengerWeaponChanged_Params
{
	class AShooterWeapon*                              newWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.OnSpawnedForItem
struct ACanoe_BP_C_OnSpawnedForItem_Params
{
	class UPrimalItem**                                ForItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.BP_ForceAllowMountedWeapon
struct ACanoe_BP_C_BP_ForceAllowMountedWeapon_Params
{
	class UClass**                                     WeaponTemplate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.GetCurrentPassengerAxisInputs
struct ACanoe_BP_C_GetCurrentPassengerAxisInputs_Params
{
	bool                                               bDebug;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAnyActiveInputs;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector2D>                           PerPassengerInputs;                                       // (Parm, OutParm, ZeroConstructor)
	float                                              AvgForward;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AvgRight;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumActiveForward;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumActiveRight;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.BPNotifyClearPassenger
struct ACanoe_BP_C_BPNotifyClearPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.BPNotifyAddPassenger
struct ACanoe_BP_C_BPNotifyAddPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.PickupCanoe
struct ACanoe_BP_C_PickupCanoe_Params
{
	class AShooterCharacter*                           forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.BPTryMultiUse
struct ACanoe_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.BPGetMultiUseEntries
struct ACanoe_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Canoe_BP.Canoe_BP_C.BPCanBeBaseForCharacter
struct ACanoe_BP_C_BPCanBeBaseForCharacter_Params
{
	class APawn**                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.BPCanCryo
struct ACanoe_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.ReceiveAnyDamage
struct ACanoe_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.UserConstructionScript
struct ACanoe_BP_C_UserConstructionScript_Params
{
};

// Function Canoe_BP.Canoe_BP_C.DoPlayKnockAnimation
struct ACanoe_BP_C_DoPlayKnockAnimation_Params
{
	int                                                KnockDirectionIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canoe_BP.Canoe_BP_C.Multicast_RefreshColors
struct ACanoe_BP_C_Multicast_RefreshColors_Params
{
};

// Function Canoe_BP.Canoe_BP_C.ExecuteUbergraph_Canoe_BP
struct ACanoe_BP_C_ExecuteUbergraph_Canoe_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

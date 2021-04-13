#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekHoverSkiff_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.safely release carried character
struct ATekHoverSkiff_Character_BP_C_safely_release_carried_character_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Closest Beam Location Not Blocked
struct ATekHoverSkiff_Character_BP_C_Get_Closest_Beam_Location_Not_Blocked_Params
{
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ModifySkiffHorizontalInputs
struct ATekHoverSkiff_Character_BP_C_ModifySkiffHorizontalInputs_Params
{
	struct FVector                                     Input;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewInput;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCurrentHoverFloorZ
struct ATekHoverSkiff_Character_BP_C_GetCurrentHoverFloorZ_Params
{
	bool                                               bUseAverage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValidFloor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FloorZ;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetHoverSlopeDeltaRatio_PURE
struct ATekHoverSkiff_Character_BP_C_GetHoverSlopeDeltaRatio_PURE_Params
{
	bool                                               bAdjustWithMax;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetHoverSlopeDeltaRatio
struct ATekHoverSkiff_Character_BP_C_GetHoverSlopeDeltaRatio_Params
{
	bool                                               bAdjustWithMax;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoHoverSlopeCheck
struct ATekHoverSkiff_Character_BP_C_DoHoverSlopeCheck_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPCanCryo
struct ATekHoverSkiff_Character_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffRepairModeCooldownActive
struct ATekHoverSkiff_Character_BP_C_IsSkiffRepairModeCooldownActive_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPost;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffRepairDisabledFromDamage
struct ATekHoverSkiff_Character_BP_C_IsSkiffRepairDisabledFromDamage_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPAcknowledgeServerCorrection
struct ATekHoverSkiff_Character_BP_C_BPAcknowledgeServerCorrection_Params
{
	float*                                             TimeStamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewVel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        NewBase;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnStopJump
struct ATekHoverSkiff_Character_BP_C_BPOnStopJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnStartJump
struct ATekHoverSkiff_Character_BP_C_BPOnStartJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifyToggleHUD
struct ATekHoverSkiff_Character_BP_C_BPNotifyToggleHUD_Params
{
	bool*                                              bHUDHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CalculateTotalAlternateFuel
struct ATekHoverSkiff_Character_BP_C_CalculateTotalAlternateFuel_Params
{
	float                                              TotalAltFuel;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetRepairModeHudMessage
struct ATekHoverSkiff_Character_BP_C_GetRepairModeHudMessage_Params
{
	class FString                                      Message;                                                  // (Parm, OutParm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageDamageFX
struct ATekHoverSkiff_Character_BP_C_Tick_ManageDamageFX_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetCachedLandedRootRotationOffset
struct ATekHoverSkiff_Character_BP_C_NetSetCachedLandedRootRotationOffset_Params
{
	struct FRotator                                    NewOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnBasedPawnRemovedNotify
struct ATekHoverSkiff_Character_BP_C_BP_OnBasedPawnRemovedNotify_Params
{
	class AActor**                                     RemovedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnBasedPawnAddedNotify
struct ATekHoverSkiff_Character_BP_C_BP_OnBasedPawnAddedNotify_Params
{
	class AActor**                                     AddedActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetFuelConversionRateForClass
struct ATekHoverSkiff_Character_BP_C_GetFuelConversionRateForClass_Params
{
	class UClass*                                      ForClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffRepairModeStateChanged
struct ATekHoverSkiff_Character_BP_C_OnSkiffRepairModeStateChanged_Params
{
	bool                                               bNewState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetSkiffRepairModeActive
struct ATekHoverSkiff_Character_BP_C_NetSetSkiffRepairModeActive_Params
{
	bool                                               bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanSkiffUseRepairMode
struct ATekHoverSkiff_Character_BP_C_CanSkiffUseRepairMode_Params
{
	bool                                               bForStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPTryMultiUse
struct ATekHoverSkiff_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Repair Mode Hud Message_PURE
struct ATekHoverSkiff_Character_BP_C_Get_Repair_Mode_Hud_Message_PURE_Params
{
	class FString                                      Message;                                                  // (Parm, OutParm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BlueprintDrawFloatingHUD
struct ATekHoverSkiff_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetMultiUseEntries
struct ATekHoverSkiff_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageAutoRepair
struct ATekHoverSkiff_Character_BP_C_Tick_ManageAutoRepair_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_ForceAllowAddBuff
struct ATekHoverSkiff_Character_BP_C_BP_ForceAllowAddBuff_Params
{
	class UClass**                                     BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BlueprintPlayDying
struct ATekHoverSkiff_Character_BP_C_BlueprintPlayDying_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsCharAttachedToSkiffMesh
struct ATekHoverSkiff_Character_BP_C_IsCharAttachedToSkiffMesh_Params
{
	class APrimalCharacter*                            forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OverrideCarriedCharacterTransform
struct ATekHoverSkiff_Character_BP_C_BP_OverrideCarriedCharacterTransform_Params
{
	class APrimalCharacter**                           ForCarriedChar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DestroySkiffHudWidget
struct ATekHoverSkiff_Character_BP_C_DestroySkiffHudWidget_Params
{
	bool                                               bDestroyNow;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPServerHandleNetExecCommand
struct ATekHoverSkiff_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamCameraCeilingZ
struct ATekHoverSkiff_Character_BP_C_GetBeamCameraCeilingZ_Params
{
	float                                              CeilingZ;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanFireBeam
struct ATekHoverSkiff_Character_BP_C_CanFireBeam_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ConsumeFuel
struct ATekHoverSkiff_Character_BP_C_ConsumeFuel_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MulticastFuel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.HasEnoughFuel
struct ATekHoverSkiff_Character_BP_C_HasEnoughFuel_Params
{
	float                                              RequiredFuel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TryRefillCurrentFuelUnit
struct ATekHoverSkiff_Character_BP_C_TryRefillCurrentFuelUnit_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.HasAnyFuel
struct ATekHoverSkiff_Character_BP_C_HasAnyFuel_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentFuel;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPInventoryItemDropped
struct ATekHoverSkiff_Character_BP_C_BPInventoryItemDropped_Params
{
	class UObject**                                    InventoryItemObject;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifyInventoryItemChange
struct ATekHoverSkiff_Character_BP_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffInventoryUpdated
struct ATekHoverSkiff_Character_BP_C_OnSkiffInventoryUpdated_Params
{
	class UPrimalItem*                                 UpdatedItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPSetupTamed
struct ATekHoverSkiff_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DisableLevelUps
struct ATekHoverSkiff_Character_BP_C_DisableLevelUps_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BSetupDinoTameable
struct ATekHoverSkiff_Character_BP_C_BSetupDinoTameable_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ShowDropDinoIndicator
struct ATekHoverSkiff_Character_BP_C_Tick_ShowDropDinoIndicator_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetupSkiffThrusters
struct ATekHoverSkiff_Character_BP_C_SetupSkiffThrusters_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetSkiffAcceleration
struct ATekHoverSkiff_Character_BP_C_GetSkiffAcceleration_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateSkiffThruster
struct ATekHoverSkiff_Character_BP_C_Tick_UpdateSkiffThruster_Params
{
	struct FStruct_HoverSkiffThrusterData              WithThrusterData;                                         // (Parm, OutParm, ReferenceParm)
	int                                                DataIntex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateBeamSFX
struct ATekHoverSkiff_Character_BP_C_Tick_UpdateBeamSFX_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsValidHoverTraceHit
struct ATekHoverSkiff_Character_BP_C_IsValidHoverTraceHit_Params
{
	struct FHitResult                                  ForHit;                                                   // (Parm, OutParm, ReferenceParm)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffRunning
struct ATekHoverSkiff_Character_BP_C_IsSkiffRunning_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoesSkiffWantToRun
struct ATekHoverSkiff_Character_BP_C_DoesSkiffWantToRun_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnSetRunning
struct ATekHoverSkiff_Character_BP_C_BP_OnSetRunning_Params
{
	bool*                                              bNewIsRunning;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCurrentBeamChar_
struct ATekHoverSkiff_Character_BP_C_GetCurrentBeamChar__Params
{
	class APrimalCharacter*                            Char;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnTriedBeamGrab
struct ATekHoverSkiff_Character_BP_C_OnTriedBeamGrab_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.AttachCharToBeam
struct ATekHoverSkiff_Character_BP_C_AttachCharToBeam_Params
{
	class APrimalCharacter*                            CharToAttach;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TryBeamGrab
struct ATekHoverSkiff_Character_BP_C_TryBeamGrab_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ResetBeam
struct ATekHoverSkiff_Character_BP_C_ResetBeam_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanActivateBeamCamera
struct ATekHoverSkiff_Character_BP_C_CanActivateBeamCamera_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnReceiveSkiff2dMovementInput
struct ATekHoverSkiff_Character_BP_C_OnReceiveSkiff2dMovementInput_Params
{
	float                                              InputAxisVal;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bright;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldIntercept;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanUseHeadlights
struct ATekHoverSkiff_Character_BP_C_CanUseHeadlights_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPCanBeBaseForCharacter
struct ATekHoverSkiff_Character_BP_C_BPCanBeBaseForCharacter_Params
{
	class APawn**                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetRiderUnboardDirection
struct ATekHoverSkiff_Character_BP_C_BPGetRiderUnboardDirection_Params
{
	class APrimalCharacter**                           RidingCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetRiderUnboardLocation
struct ATekHoverSkiff_Character_BP_C_BPGetRiderUnboardLocation_Params
{
	class APrimalCharacter**                           RidingCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanHover
struct ATekHoverSkiff_Character_BP_C_CanHover_Params
{
	bool                                               bForStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnTamedOrderReceived
struct ATekHoverSkiff_Character_BP_C_BP_OnTamedOrderReceived_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.WantsToFlyUp
struct ATekHoverSkiff_Character_BP_C_WantsToFlyUp_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_ShouldDisableBasedCharactersCameraInterpolation
struct ATekHoverSkiff_Character_BP_C_BP_ShouldDisableBasedCharactersCameraInterpolation_Params
{
	class APrimalCharacter**                           ForBasedChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateBeamCharManipulation
struct ATekHoverSkiff_Character_BP_C_UpdateBeamCharManipulation_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_CheckSkiffInputs
struct ATekHoverSkiff_Character_BP_C_Tick_CheckSkiffInputs_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateSyncedFuelAmount
struct ATekHoverSkiff_Character_BP_C_UpdateSyncedFuelAmount_Params
{
	bool                                               bWasChanged;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetSkiffBlockersTraceIgnoreActors
struct ATekHoverSkiff_Character_BP_C_GetSkiffBlockersTraceIgnoreActors_Params
{
	TArray<class AActor*>                              IgnoreActors;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageSkiffCamera
struct ATekHoverSkiff_Character_BP_C_Tick_ManageSkiffCamera_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OverrideBasedCharactersCameraInterpSpeed
struct ATekHoverSkiff_Character_BP_C_BP_OverrideBasedCharactersCameraInterpSpeed_Params
{
	class APrimalCharacter**                           ForBasedChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DefaultTPVCameraSpeedInterpMultiplier;                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DefaultTPVOffsetInterpSpeed;                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TPVCameraSpeedInterpMultiplier;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TPVOffsetInterpSpeed;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsPhysicsVolumeLava
struct ATekHoverSkiff_Character_BP_C_IsPhysicsVolumeLava_Params
{
	class APhysicsVolume*                              CheckVolume;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLava;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanSkiffTryToTrulyLand
struct ATekHoverSkiff_Character_BP_C_CanSkiffTryToTrulyLand_Params
{
	struct FVector                                     WithFlyingVelocity;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnStartLandFailed
struct ATekHoverSkiff_Character_BP_C_BP_OnStartLandFailed_Params
{
	int*                                               ReasonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ResetSkiffInputs
struct ATekHoverSkiff_Character_BP_C_ResetSkiffInputs_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.InitHeadlights
struct ATekHoverSkiff_Character_BP_C_InitHeadlights_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ActivateSkiffBeamVfxByState
struct ATekHoverSkiff_Character_BP_C_ActivateSkiffBeamVfxByState_Params
{
	TEnumAsByte<E_HoverSkiffBeamState>                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageBeamFX
struct ATekHoverSkiff_Character_BP_C_Tick_ManageBeamFX_Params
{
	bool                                               bForceClearAll;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCurrentBeamChar_Pure
struct ATekHoverSkiff_Character_BP_C_GetCurrentBeamChar_Pure_Params
{
	class APrimalCharacter*                            Char;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetEnvironmentalParticleTraceDistance
struct ATekHoverSkiff_Character_BP_C_GetEnvironmentalParticleTraceDistance_Params
{
	struct FName                                       ForSocketName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              traceDist;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveDestroyed
struct ATekHoverSkiff_Character_BP_C_ReceiveDestroyed_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageHoverGroundFX
struct ATekHoverSkiff_Character_BP_C_Tick_ManageHoverGroundFX_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateHeadlights
struct ATekHoverSkiff_Character_BP_C_Tick_UpdateHeadlights_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetHeadlightsOn
struct ATekHoverSkiff_Character_BP_C_SetHeadlightsOn_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ToggleHeadlights
struct ATekHoverSkiff_Character_BP_C_ToggleHeadlights_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffFailedTakeoff
struct ATekHoverSkiff_Character_BP_C_OnSkiffFailedTakeoff_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.AllowSkiffBeamInputs
struct ATekHoverSkiff_Character_BP_C_AllowSkiffBeamInputs_Params
{
	bool                                               bAllow;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetTargetHoverHeight
struct ATekHoverSkiff_Character_BP_C_SetTargetHoverHeight_Params
{
	float                                              NewHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateSkiffHoverState
struct ATekHoverSkiff_Character_BP_C_UpdateSkiffHoverState_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffHoverStateChanged
struct ATekHoverSkiff_Character_BP_C_OnSkiffHoverStateChanged_Params
{
	TEnumAsByte<E_HoverSkiffHoverState>                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffHoverState>                PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetSkiffHoverState
struct ATekHoverSkiff_Character_BP_C_NetSetSkiffHoverState_Params
{
	TEnumAsByte<E_HoverSkiffHoverState>                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_GetCustomModifier_MaxSpeed
struct ATekHoverSkiff_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TraceForBeamCharBlockers
struct ATekHoverSkiff_Character_BP_C_TraceForBeamCharBlockers_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetMinHoverHeight
struct ATekHoverSkiff_Character_BP_C_GetMinHoverHeight_Params
{
	float                                              MinHeight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffChangingHoverHeight
struct ATekHoverSkiff_Character_BP_C_IsSkiffChangingHoverHeight_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamCharGrabOffsetZ
struct ATekHoverSkiff_Character_BP_C_GetBeamCharGrabOffsetZ_Params
{
	float                                              OffsetZ;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartedGrabbingChar
struct ATekHoverSkiff_Character_BP_C_OnBeamStartedGrabbingChar_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_CanFly
struct ATekHoverSkiff_Character_BP_C_BP_CanFly_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateBeamEndPoint
struct ATekHoverSkiff_Character_BP_C_UpdateBeamEndPoint_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateBeam
struct ATekHoverSkiff_Character_BP_C_Tick_UpdateBeam_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageFuel
struct ATekHoverSkiff_Character_BP_C_Tick_ManageFuel_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetHUDElements
struct ATekHoverSkiff_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamCharStruggle
struct ATekHoverSkiff_Character_BP_C_OnBeamCharStruggle_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamCharBreakFree
struct ATekHoverSkiff_Character_BP_C_OnBeamCharBreakFree_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveAnyDamage
struct ATekHoverSkiff_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OverrideTerminalVelocity
struct ATekHoverSkiff_Character_BP_C_BP_OverrideTerminalVelocity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoThrusterEngineBurst
struct ATekHoverSkiff_Character_BP_C_DoThrusterEngineBurst_Params
{
	TArray<class UParticleSystemComponent*>            ForThrusterParticles;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UParticleSystem*                             OverrideBurstParticle;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventAutoScaling;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   OverrideBurstSound;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OverrideVolumeAndPitch;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.KillSkiff
struct ATekHoverSkiff_Character_BP_C_KillSkiff_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffCrash
struct ATekHoverSkiff_Character_BP_C_OnSkiffCrash_Params
{
	bool                                               bFromImpact;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_PreventMovementMode
struct ATekHoverSkiff_Character_BP_C_BP_PreventMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_Crashing
struct ATekHoverSkiff_Character_BP_C_Tick_Crashing_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffStartedCrashing
struct ATekHoverSkiff_Character_BP_C_OnSkiffStartedCrashing_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPAdjustDamage
struct ATekHoverSkiff_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifySetRider
struct ATekHoverSkiff_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetBeamCameraActive
struct ATekHoverSkiff_Character_BP_C_SetBeamCameraActive_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartMoving
struct ATekHoverSkiff_Character_BP_C_OnBeamStartMoving_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartRetracting
struct ATekHoverSkiff_Character_BP_C_OnBeamStartRetracting_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamTurretOpened
struct ATekHoverSkiff_Character_BP_C_OnBeamTurretOpened_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnStartOpeningBeam
struct ATekHoverSkiff_Character_BP_C_OnStartOpeningBeam_Params
{
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateOwningClientReplicatedInputs
struct ATekHoverSkiff_Character_BP_C_UpdateOwningClientReplicatedInputs_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetSkiffMovementInputAxisValue
struct ATekHoverSkiff_Character_BP_C_SetSkiffMovementInputAxisValue_Params
{
	int                                                Axis;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              newVal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamLocked
struct ATekHoverSkiff_Character_BP_C_OnBeamLocked_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamEndPointRelative
struct ATekHoverSkiff_Character_BP_C_GetBeamEndPointRelative_Params
{
	struct FVector                                     LaserEndPoint;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamStartPointRelative
struct ATekHoverSkiff_Character_BP_C_GetBeamStartPointRelative_Params
{
	bool                                               bAdjustForCarriedChar;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LaserStartPoint;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamGrabbedChar
struct ATekHoverSkiff_Character_BP_C_OnBeamGrabbedChar_Params
{
	struct FVector                                     GrabbedCharLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPAllowCarryCharacter
struct ATekHoverSkiff_Character_BP_C_BPAllowCarryCharacter_Params
{
	class APrimalCharacter**                           checkCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPDidClearCarriedCharacter
struct ATekHoverSkiff_Character_BP_C_BPDidClearCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPDidSetCarriedCharacter
struct ATekHoverSkiff_Character_BP_C_BPDidSetCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamBeingManipulated
struct ATekHoverSkiff_Character_BP_C_IsBeamBeingManipulated_Params
{
	bool                                               IsBeamMoving;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_InterceptMoveRight
struct ATekHoverSkiff_Character_BP_C_BP_InterceptMoveRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_InterceptMoveForward
struct ATekHoverSkiff_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsMovingAllyWithBeam
struct ATekHoverSkiff_Character_BP_C_IsMovingAllyWithBeam_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPModifyRightDirectionInput
struct ATekHoverSkiff_Character_BP_C_BPModifyRightDirectionInput_Params
{
	struct FVector                                     directionInput;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPShouldLimitRightDirection
struct ATekHoverSkiff_Character_BP_C_BPShouldLimitRightDirection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_AllowWalkableSlopeOverride
struct ATekHoverSkiff_Character_BP_C_BP_AllowWalkableSlopeOverride_Params
{
	class UPrimitiveComponent**                        ForComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnMovementModeChangedNotify
struct ATekHoverSkiff_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageThrusterFX
struct ATekHoverSkiff_Character_BP_C_Tick_ManageThrusterFX_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetThrustersActive
struct ATekHoverSkiff_Character_BP_C_SetThrustersActive_Params
{
	bool                                               bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffSetFlight
struct ATekHoverSkiff_Character_BP_C_OnSkiffSetFlight_Params
{
	bool                                               bFly;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnSetFlight
struct ATekHoverSkiff_Character_BP_C_BPOnSetFlight_Params
{
	bool*                                              bFly;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveHit
struct ATekHoverSkiff_Character_BP_C_ReceiveHit_Params
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

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoSkiffHoverTraces
struct ATekHoverSkiff_Character_BP_C_DoSkiffHoverTraces_Params
{
	bool                                               bForceTraces;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnLanded
struct ATekHoverSkiff_Character_BP_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffLandingStageChanged
struct ATekHoverSkiff_Character_BP_C_OnSkiffLandingStageChanged_Params
{
	bool                                               bLanding;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnStartLandingNotify
struct ATekHoverSkiff_Character_BP_C_BP_OnStartLandingNotify_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsCharBeamFriendly
struct ATekHoverSkiff_Character_BP_C_IsCharBeamFriendly_Params
{
	class APrimalCharacter*                            forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnStartClosingBeamTurret
struct ATekHoverSkiff_Character_BP_C_OnStartClosingBeamTurret_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanSendInputRPC
struct ATekHoverSkiff_Character_BP_C_CanSendInputRPC_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffBeamStateChanged
struct ATekHoverSkiff_Character_BP_C_OnSkiffBeamStateChanged_Params
{
	TEnumAsByte<E_HoverSkiffBeamState>                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffBeamState>                 PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetSkiffBeamState
struct ATekHoverSkiff_Character_BP_C_NetSetSkiffBeamState_Params
{
	TEnumAsByte<E_HoverSkiffBeamState>                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOverrideCameraViewTarget
struct ATekHoverSkiff_Character_BP_C_BPOverrideCameraViewTarget_Params
{
	struct FName*                                      CurrentCameraMode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DesiredCameraLocation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   DesiredCameraRotation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DesiredFOV;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCameraLocation;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCameraRotation;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCameraFOV;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CameraFOV;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsRetractBeamPressed
struct ATekHoverSkiff_Character_BP_C_IsRetractBeamPressed_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsShootBeamPressed
struct ATekHoverSkiff_Character_BP_C_IsShootBeamPressed_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetOverrideCameraInterpSpeed
struct ATekHoverSkiff_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
{
	float*                                             DefaultTPVCameraSpeedInterpolationMultiplier;             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DefaultTPVOffsetInterpSpeed;                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TPVCameraSpeedInterpolationMultiplier;                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TPVOffsetInterpSpeed;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_GetCustomModifier_RotationRate
struct ATekHoverSkiff_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOverrideFlyingVelocity
struct ATekHoverSkiff_Character_BP_C_BPOverrideFlyingVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetCrosshairColor
struct ATekHoverSkiff_Character_BP_C_BPGetCrosshairColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamTurretOpening
struct ATekHoverSkiff_Character_BP_C_IsBeamTurretOpening_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamActive
struct ATekHoverSkiff_Character_BP_C_IsBeamActive_Params
{
	bool                                               bIncludeActivating;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Is Beam Moving
struct ATekHoverSkiff_Character_BP_C_Is_Beam_Moving_Params
{
	bool                                               IsBeamMoving;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamRetracting
struct ATekHoverSkiff_Character_BP_C_IsBeamRetracting_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanBeamLock
struct ATekHoverSkiff_Character_BP_C_CanBeamLock_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_BeamSearch
struct ATekHoverSkiff_Character_BP_C_Tick_BeamSearch_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Can Instantly Grab Character
struct ATekHoverSkiff_Character_BP_C_Can_Instantly_Grab_Character_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanInstantlyGrab;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanMoveBeam
struct ATekHoverSkiff_Character_BP_C_CanMoveBeam_Params
{
	bool                                               bForStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Beam StartPointExternal
struct ATekHoverSkiff_Character_BP_C_Get_Beam_StartPointExternal_Params
{
	bool                                               bAdjustForCarriedChar;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BeamStartPoint;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamEndPoint_External
struct ATekHoverSkiff_Character_BP_C_GetBeamEndPoint_External_Params
{
	struct FVector                                     BeamEndPoint;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Update Beam Visuals
struct ATekHoverSkiff_Character_BP_C_Update_Beam_Visuals_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanLookForTargets
struct ATekHoverSkiff_Character_BP_C_CanLookForTargets_Params
{
	bool                                               canLook;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanUseBeam
struct ATekHoverSkiff_Character_BP_C_CanUseBeam_Params
{
	bool                                               bForStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanUse;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPModifyDesiredRotation
struct ATekHoverSkiff_Character_BP_C_BPModifyDesiredRotation_Params
{
	struct FRotator                                    InDesiredRotation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    OutDesiredRotation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCharacterAttachedToBeam
struct ATekHoverSkiff_Character_BP_C_GetCharacterAttachedToBeam_Params
{
	class APrimalCharacter*                            theChar;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasCharAttached;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetForceSkiffDescend
struct ATekHoverSkiff_Character_BP_C_SetForceSkiffDescend_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetBeamCharLocation
struct ATekHoverSkiff_Character_BP_C_SetBeamCharLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TraceForBeamEndPoint
struct ATekHoverSkiff_Character_BP_C_TraceForBeamEndPoint_Params
{
	struct FVector                                     NewBeamEnd;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHitObstacle;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManipulateBeam
struct ATekHoverSkiff_Character_BP_C_Tick_ManipulateBeam_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get BeamEndPoint
struct ATekHoverSkiff_Character_BP_C_Get_BeamEndPoint_Params
{
	struct FVector                                     LaserEndPoint;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Update Beam Particles End Point
struct ATekHoverSkiff_Character_BP_C_Update_Beam_Particles_End_Point_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Find BeamTarget
struct ATekHoverSkiff_Character_BP_C_Find_BeamTarget_Params
{
	class APrimalCharacter*                            foundPawn;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.StopHovering
struct ATekHoverSkiff_Character_BP_C_StopHovering_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetTimerIntervals
struct ATekHoverSkiff_Character_BP_C_SetTimerIntervals_Params
{
	bool                                               fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPShouldLimitForwardDirection
struct ATekHoverSkiff_Character_BP_C_BPShouldLimitForwardDirection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPModifyForwardDirectionInput
struct ATekHoverSkiff_Character_BP_C_BPModifyForwardDirectionInput_Params
{
	struct FVector                                     directionInput;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifyClearRider
struct ATekHoverSkiff_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Update Beam BoneRotation
struct ATekHoverSkiff_Character_BP_C_Update_Beam_BoneRotation_Params
{
	struct FVector                                     NewEndPoint;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ResetRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Beam Start Point
struct ATekHoverSkiff_Character_BP_C_Get_Beam_Start_Point_Params
{
	bool                                               bAdjustForCarriedChar;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LaserStartPoint;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartSearching
struct ATekHoverSkiff_Character_BP_C_OnBeamStartSearching_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CalculateBeamViewTracePoints
struct ATekHoverSkiff_Character_BP_C_CalculateBeamViewTracePoints_Params
{
	bool                                               bUseCurrentBeamLength;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ViewStart;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ViewEnd;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ClearAllBeamChars
struct ATekHoverSkiff_Character_BP_C_ClearAllBeamChars_Params
{
	bool                                               bOnlyClearBeamingChar;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanBeamGrabCharacter
struct ATekHoverSkiff_Character_BP_C_CanBeamGrabCharacter_Params
{
	class APrimalCharacter*                            forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventTraces;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPTimerServer
struct ATekHoverSkiff_Character_BP_C_BPTimerServer_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPTimerNonDedicated
struct ATekHoverSkiff_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnStartActivatingBeam
struct ATekHoverSkiff_Character_BP_C_OnStartActivatingBeam_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnCloseBeamTurret
struct ATekHoverSkiff_Character_BP_C_OnCloseBeamTurret_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UserConstructionScript
struct ATekHoverSkiff_Character_BP_C_UserConstructionScript_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
struct ATekHoverSkiff_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.InterceptInputEvent
struct ATekHoverSkiff_Character_BP_C_InterceptInputEvent_Params
{
	class FString*                                     InputName;                                                // (Parm, ZeroConstructor)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_RequestBraking
struct ATekHoverSkiff_Character_BP_C_Server_RequestBraking_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveBeginPlay
struct ATekHoverSkiff_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPUnstasis
struct ATekHoverSkiff_Character_BP_C_BPUnstasis_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffBeamStateChanged
struct ATekHoverSkiff_Character_BP_C_Multi_OnSkiffBeamStateChanged_Params
{
	TEnumAsByte<E_HoverSkiffBeamState>                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffBeamState>                 PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetSkiffBeamState
struct ATekHoverSkiff_Character_BP_C_Server_SetSkiffBeamState_Params
{
	TEnumAsByte<E_HoverSkiffBeamState>                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Timer_DoActivateBeam
struct ATekHoverSkiff_Character_BP_C_Timer_DoActivateBeam_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Timer_DoDeactivateBeam
struct ATekHoverSkiff_Character_BP_C_Timer_DoDeactivateBeam_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnStartSkiffLanding
struct ATekHoverSkiff_Character_BP_C_Multi_OnStartSkiffLanding_Params
{
	bool                                               bLanding;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffSetFlight
struct ATekHoverSkiff_Character_BP_C_Multi_OnSkiffSetFlight_Params
{
	bool                                               bFly;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SyncMovementInputs
struct ATekHoverSkiff_Character_BP_C_Server_SyncMovementInputs_Params
{
	struct FVector                                     MoveInputs;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetBeamCameraLockState
struct ATekHoverSkiff_Character_BP_C_Server_SetBeamCameraLockState_Params
{
	bool                                               bLocked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnBeamGrabCharacter
struct ATekHoverSkiff_Character_BP_C_Multi_OnBeamGrabCharacter_Params
{
	struct FVector                                     GrabRelativeLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Timer_DoOpenBeam
struct ATekHoverSkiff_Character_BP_C_Timer_DoOpenBeam_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_ToggleCameraLocked
struct ATekHoverSkiff_Character_BP_C_Multi_ToggleCameraLocked_Params
{
	bool                                               IsCameraLocked;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_OnFireInputPressed
struct ATekHoverSkiff_Character_BP_C_Server_OnFireInputPressed_Params
{
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_OnTargetingInputPressed
struct ATekHoverSkiff_Character_BP_C_Server_OnTargetingInputPressed_Params
{
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffStartedCrashing
struct ATekHoverSkiff_Character_BP_C_Multi_OnSkiffStartedCrashing_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffCrash
struct ATekHoverSkiff_Character_BP_C_Multi_OnSkiffCrash_Params
{
	bool                                               bFromImpact;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DestroySkiff
struct ATekHoverSkiff_Character_BP_C_DestroySkiff_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CrashTimeout
struct ATekHoverSkiff_Character_BP_C_CrashTimeout_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnBeamStartGrabbingChar
struct ATekHoverSkiff_Character_BP_C_Multi_OnBeamStartGrabbingChar_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_SetBeamCharLocation
struct ATekHoverSkiff_Character_BP_C_Multi_SetBeamCharLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffHoverStateChanged
struct ATekHoverSkiff_Character_BP_C_Multi_OnSkiffHoverStateChanged_Params
{
	TEnumAsByte<E_HoverSkiffHoverState>                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffHoverState>                PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetSkiffHoverState
struct ATekHoverSkiff_Character_BP_C_Server_SetSkiffHoverState_Params
{
	TEnumAsByte<E_HoverSkiffHoverState>                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffFailedTakeoff
struct ATekHoverSkiff_Character_BP_C_Multi_OnSkiffFailedTakeoff_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_ToggleHeadlights
struct ATekHoverSkiff_Character_BP_C_Server_ToggleHeadlights_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_ToggleHeadlights
struct ATekHoverSkiff_Character_BP_C_Multi_ToggleHeadlights_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_TryBeamGrab
struct ATekHoverSkiff_Character_BP_C_Server_TryBeamGrab_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnTriedBeamGrab
struct ATekHoverSkiff_Character_BP_C_Multi_OnTriedBeamGrab_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.FlashBeam
struct ATekHoverSkiff_Character_BP_C_FlashBeam_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_OnTriedBeamGrab
struct ATekHoverSkiff_Character_BP_C_Server_OnTriedBeamGrab_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffRepairModeStateChanged
struct ATekHoverSkiff_Character_BP_C_Multi_OnSkiffRepairModeStateChanged_Params
{
	bool                                               bNewState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_SyncFuelPercent
struct ATekHoverSkiff_Character_BP_C_Multi_SyncFuelPercent_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetSkiffFlight
struct ATekHoverSkiff_Character_BP_C_Server_SetSkiffFlight_Params
{
	bool                                               NewFlight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_StartSkiffLanding
struct ATekHoverSkiff_Character_BP_C_Server_StartSkiffLanding_Params
{
};

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ExecuteUbergraph_TekHoverSkiff_Character_BP
struct ATekHoverSkiff_Character_BP_C_ExecuteUbergraph_TekHoverSkiff_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

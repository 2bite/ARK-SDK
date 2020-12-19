#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GiantTurtle_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPCanBaseOnCharacter
struct AGiantTurtle_Character_BP_C_BPCanBaseOnCharacter_Params
{
	class APrimalCharacter**                           BaseCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPBecomeAdult
struct AGiantTurtle_Character_BP_C_BPBecomeAdult_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPBecomeBaby
struct AGiantTurtle_Character_BP_C_BPBecomeBaby_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPUnstasis
struct AGiantTurtle_Character_BP_C_BPUnstasis_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPOnDinoCheat
struct AGiantTurtle_Character_BP_C_BPOnDinoCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyToggleHUD
struct AGiantTurtle_Character_BP_C_BPNotifyToggleHUD_Params
{
	bool*                                              bHUDHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.OnRep_bAllowMating
struct AGiantTurtle_Character_BP_C_OnRep_bAllowMating_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ReceiveBeginPlay
struct AGiantTurtle_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetAllowMating
struct AGiantTurtle_Character_BP_C_GetAllowMating_Params
{
	bool                                               Allow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BlueprintDrawFloatingHUD
struct AGiantTurtle_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateAllowMating
struct AGiantTurtle_Character_BP_C_UpdateAllowMating_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPTimerServer
struct AGiantTurtle_Character_BP_C_BPTimerServer_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ReceiveDestroyed
struct AGiantTurtle_Character_BP_C_ReceiveDestroyed_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.DestroyHudWidget
struct AGiantTurtle_Character_BP_C_DestroyHudWidget_Params
{
	bool                                               DestroyNow;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyClearRider
struct AGiantTurtle_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifySetRider
struct AGiantTurtle_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyLevelUp
struct AGiantTurtle_Character_BP_C_BPNotifyLevelUp_Params
{
	int*                                               ExtraCharacterLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.AllowPlayMontage
struct AGiantTurtle_Character_BP_C_AllowPlayMontage_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BP_InterceptMoveForward
struct AGiantTurtle_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckRaftMode
struct AGiantTurtle_Character_BP_C_CheckRaftMode_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPPostLoadedFromSaveGame
struct AGiantTurtle_Character_BP_C_BPPostLoadedFromSaveGame_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ClearPreventHurtAnim
struct AGiantTurtle_Character_BP_C_ClearPreventHurtAnim_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.AnimBpSetBreathing
struct AGiantTurtle_Character_BP_C_AnimBpSetBreathing_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.DestroySaddle
struct AGiantTurtle_Character_BP_C_DestroySaddle_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPPlayDying
struct AGiantTurtle_Character_BP_C_BPPlayDying_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickWake
struct AGiantTurtle_Character_BP_C_TickWake_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateMaterial
struct AGiantTurtle_Character_BP_C_UpdateMaterial_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BubbleAttackToggle
struct AGiantTurtle_Character_BP_C_BubbleAttackToggle_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AGiantTurtle_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPOverrideHurtAnim
struct AGiantTurtle_Character_BP_C_BPOverrideHurtAnim_Params
{
	float*                                             DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsLocalPath;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    PointDamageLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    PointDamageHitNormal;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckCave
struct AGiantTurtle_Character_BP_C_CheckCave_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TurnOffFlock
struct AGiantTurtle_Character_BP_C_TurnOffFlock_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPAdjustDamage
struct AGiantTurtle_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Setup Flock
struct AGiantTurtle_Character_BP_C_Setup_Flock_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckTurtleTargetForFollowers
struct AGiantTurtle_Character_BP_C_CheckTurtleTargetForFollowers_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickTaming
struct AGiantTurtle_Character_BP_C_TickTaming_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckFullyInWater
struct AGiantTurtle_Character_BP_C_CheckFullyInWater_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickBirdsFlock
struct AGiantTurtle_Character_BP_C_TickBirdsFlock_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.PushBackPawnNotInWater
struct AGiantTurtle_Character_BP_C_PushBackPawnNotInWater_Params
{
	class APrimalCharacter*                            Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickBubbleCooldown
struct AGiantTurtle_Character_BP_C_TickBubbleCooldown_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPGetHUDElements
struct AGiantTurtle_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateBreath Rotation
struct AGiantTurtle_Character_BP_C_UpdateBreath_Rotation_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Tick Breathing
struct AGiantTurtle_Character_BP_C_Tick_Breathing_Params
{
	float                                              DeltSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPGetCrosshairAlpha
struct AGiantTurtle_Character_BP_C_BPGetCrosshairAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPHandleControllerInitiatedAttack
struct AGiantTurtle_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPHandleOnStopTargeting
struct AGiantTurtle_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetPlayersOnSeats
struct AGiantTurtle_Character_BP_C_GetPlayersOnSeats_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.K2_OnMovementModeChanged
struct AGiantTurtle_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BlueprintCanRiderAttack
struct AGiantTurtle_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.SpawnBubble
struct AGiantTurtle_Character_BP_C_SpawnBubble_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BP_GetCustomModifier_RotationRate
struct AGiantTurtle_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Setup New Crop DataStruct
struct AGiantTurtle_Character_BP_C_Setup_New_Crop_DataStruct_Params
{
	int                                                LocationIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItemConsumableSeed_C*                 SeedItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Check Inventory for Seed Items
struct AGiantTurtle_Character_BP_C_Check_Inventory_for_Seed_Items_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetCropGrowLocation
struct AGiantTurtle_Character_BP_C_GetCropGrowLocation_Params
{
	int                                                LocationIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.SpawnOxygenVFX
struct AGiantTurtle_Character_BP_C_SpawnOxygenVFX_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Update CropsVisuals
struct AGiantTurtle_Character_BP_C_Update_CropsVisuals_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateFlowerAndMushroom
struct AGiantTurtle_Character_BP_C_UpdateFlowerAndMushroom_Params
{
	float                                              DeltaSecond;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateCropStructs
struct AGiantTurtle_Character_BP_C_UpdateCropStructs_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.AddOxygenBuff
struct AGiantTurtle_Character_BP_C_AddOxygenBuff_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyInventoryItemChange
struct AGiantTurtle_Character_BP_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetMovementMontage
struct AGiantTurtle_Character_BP_C_GetMovementMontage_Params
{
	TEnumAsByte<ERootMotionMovementMode>               Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPGetRiderUnboardLocation
struct AGiantTurtle_Character_BP_C_BPGetRiderUnboardLocation_Params
{
	class APrimalCharacter**                           RidingCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UserConstructionScript
struct AGiantTurtle_Character_BP_C_UserConstructionScript_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ReceiveTick
struct AGiantTurtle_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.SpawnBubbles
struct AGiantTurtle_Character_BP_C_SpawnBubbles_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_SetIsBreathing
struct AGiantTurtle_Character_BP_C_Server_SetIsBreathing_Params
{
	bool                                               bIsBreathing;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_SetBreathDirection
struct AGiantTurtle_Character_BP_C_Server_SetBreathDirection_Params
{
	struct FVector                                     BreathViewStartLocation;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BreathDirection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_TryBubbleAttack
struct AGiantTurtle_Character_BP_C_Server_TryBubbleAttack_Params
{
	class AShooterPlayerController*                    OwnerContoler;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_StopBubbleAttack
struct AGiantTurtle_Character_BP_C_Server_StopBubbleAttack_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Multi_StopCurrentMontage
struct AGiantTurtle_Character_BP_C_Multi_StopCurrentMontage_Params
{
};

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ExecuteUbergraph_GiantTurtle_Character_BP
struct AGiantTurtle_Character_BP_C_ExecuteUbergraph_GiantTurtle_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

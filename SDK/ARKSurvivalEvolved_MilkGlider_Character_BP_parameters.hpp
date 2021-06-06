#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MilkGlider_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ReceivePossessed
struct AMilkGlider_Character_BP_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InterceptInputEvent
struct AMilkGlider_Character_BP_C_InterceptInputEvent_Params
{
	class FString*                                     InputName;                                                // (Parm, ZeroConstructor)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.PickUpBabies
struct AMilkGlider_Character_BP_C_PickUpBabies_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetPassengerDinoAdditionalOffset
struct AMilkGlider_Character_BP_C_BPGetPassengerDinoAdditionalOffset_Params
{
	class APrimalDinoCharacter**                       Passenger;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AMilkGlider_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OverrideRandomWanderLocation
struct AMilkGlider_Character_BP_C_OverrideRandomWanderLocation_Params
{
	struct FVector                                     originalDestination;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     inVec;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateNursingFx
struct AMilkGlider_Character_BP_C_UpdateNursingFx_Params
{
	bool                                               bUseOverrideIsNursing;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNursing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanNurseDino
struct AMilkGlider_Character_BP_C_CanNurseDino_Params
{
	class APrimalDinoCharacter**                       OtherDino;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPApplyCharacterSnapshot
struct AMilkGlider_Character_BP_C_BPApplyCharacterSnapshot_Params
{
	class UPrimalItem**                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     To;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxExtent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Pose;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCollisionOn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.TryToPlayBabyPassengerCuddleAnim
struct AMilkGlider_Character_BP_C_TryToPlayBabyPassengerCuddleAnim_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateClientCameraShake
struct AMilkGlider_Character_BP_C_UpdateClientCameraShake_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPAdjustAttackIndex
struct AMilkGlider_Character_BP_C_BPAdjustAttackIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetAIGlideDirection
struct AMilkGlider_Character_BP_C_GetAIGlideDirection_Params
{
	struct FVector                                     MoveDirection;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPShouldForceFlee
struct AMilkGlider_Character_BP_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OverrideFinalWanderLocation
struct AMilkGlider_Character_BP_C_OverrideFinalWanderLocation_Params
{
	struct FVector                                     outVec;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.NotifyTribesOfBabyStolen
struct AMilkGlider_Character_BP_C_NotifyTribesOfBabyStolen_Params
{
	class APrimalDinoCharacter*                        StolenBaby;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    TheifSC;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetBonesToHideOnAllocation
struct AMilkGlider_Character_BP_C_BPGetBonesToHideOnAllocation_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Tick Til Pass Hide Seats
struct AMilkGlider_Character_BP_C_Tick_Til_Pass_Hide_Seats_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UnhidePassengerSeats
struct AMilkGlider_Character_BP_C_UnhidePassengerSeats_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerGlideClearFoilage
struct AMilkGlider_Character_BP_C_ServerGlideClearFoilage_Params
{
	bool                                               bIgnoreGlideCheck;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_ForceAllowAddBuff
struct AMilkGlider_Character_BP_C_BP_ForceAllowAddBuff_Params
{
	class UClass**                                     BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.HasGeyserBuff
struct AMilkGlider_Character_BP_C_HasGeyserBuff_Params
{
	bool                                               bHasBuff;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintAdjustOutputDamage
struct AMilkGlider_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyClearPassenger
struct AMilkGlider_Character_BP_C_BPNotifyClearPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyAddPassenger
struct AMilkGlider_Character_BP_C_BPNotifyAddPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPCarriedDinoBabyRescaled
struct AMilkGlider_Character_BP_C_BPCarriedDinoBabyRescaled_Params
{
	class APrimalDinoCharacter**                       AgingCarriedDino;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewAge;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ScaleBabyDino
struct AMilkGlider_Character_BP_C_ScaleBabyDino_Params
{
	class APrimalDinoCharacter*                        BabyToScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Can Parachute
struct AMilkGlider_Character_BP_C_Can_Parachute_Params
{
	bool                                               ToStart;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowedToParachute;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.RotateToZeroPitch
struct AMilkGlider_Character_BP_C_RotateToZeroPitch_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnRep_bWantsToParachute
struct AMilkGlider_Character_BP_C_OnRep_bWantsToParachute_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.SetParachuteState
struct AMilkGlider_Character_BP_C_SetParachuteState_Params
{
	bool                                               bStartParachute;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCD;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOverrideCharacterNewFallVelocity
struct AMilkGlider_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanStartAutoGlide
struct AMilkGlider_Character_BP_C_CanStartAutoGlide_Params
{
	bool                                               bStartGlide;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateSlidingState
struct AMilkGlider_Character_BP_C_UpdateSlidingState_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetGravityZScale
struct AMilkGlider_Character_BP_C_BPGetGravityZScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyCarriedDinoBabyAgeIncrement
struct AMilkGlider_Character_BP_C_BPNotifyCarriedDinoBabyAgeIncrement_Params
{
	class APrimalDinoCharacter**                       AgingCarriedDino;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PreviousAge;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewAge;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetNextValidEmptySeat
struct AMilkGlider_Character_BP_C_GetNextValidEmptySeat_Params
{
	int                                                SeatNum;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPServerHandleNetExecCommand
struct AMilkGlider_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPClientDoMultiUse
struct AMilkGlider_Character_BP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Is Valid Baby Dino for Passenger
struct AMilkGlider_Character_BP_C_Is_Valid_Baby_Dino_for_Passenger_Params
{
	class APrimalDinoCharacter*                        DinoToCheck;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipAllyCheck;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipDistanceCheck;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValidPassenger;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPCanTakePassenger
struct AMilkGlider_Character_BP_C_BPCanTakePassenger_Params
{
	class APrimalCharacter**                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PassengerSeatIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForcePassenger;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllowFlyersAndWaterDinos;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintDrawFloatingHUD
struct AMilkGlider_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetDivingRatio
struct AMilkGlider_Character_BP_C_GetDivingRatio_Params
{
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPModifyFOVInterpSpeed
struct AMilkGlider_Character_BP_C_BPModifyFOVInterpSpeed_Params
{
	float*                                             FOVInterpSpeedIn;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetFOVRatio
struct AMilkGlider_Character_BP_C_GetFOVRatio_Params
{
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPModifyFOV
struct AMilkGlider_Character_BP_C_BPModifyFOV_Params
{
	float*                                             FOVIn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.IsDiving
struct AMilkGlider_Character_BP_C_IsDiving_Params
{
	bool                                               bIsDiving;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanDiveBomb
struct AMilkGlider_Character_BP_C_CanDiveBomb_Params
{
	bool                                               bFromGlide;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanAttack;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPDoAttack
struct AMilkGlider_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOnStartJump
struct AMilkGlider_Character_BP_C_BPOnStartJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanDive
struct AMilkGlider_Character_BP_C_CanDive_Params
{
	bool                                               bCanDive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetGlidingPitch
struct AMilkGlider_Character_BP_C_GetGlidingPitch_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentPitch;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewPitch;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyLevelUp
struct AMilkGlider_Character_BP_C_BPNotifyLevelUp_Params
{
	int*                                               ExtraCharacterLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ClearGliding
struct AMilkGlider_Character_BP_C_ClearGliding_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DisableNursing
struct AMilkGlider_Character_BP_C_DisableNursing_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.EnableNursing
struct AMilkGlider_Character_BP_C_EnableNursing_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetMultiUseEntries
struct AMilkGlider_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPTryMultiUse
struct AMilkGlider_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPShouldLimitRightDirection
struct AMilkGlider_Character_BP_C_BPShouldLimitRightDirection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_InterceptMoveRight
struct AMilkGlider_Character_BP_C_BP_InterceptMoveRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPModifyRightDirectionInput
struct AMilkGlider_Character_BP_C_BPModifyRightDirectionInput_Params
{
	struct FVector                                     directionInput;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintOverrideWantsToRun
struct AMilkGlider_Character_BP_C_BlueprintOverrideWantsToRun_Params
{
	bool*                                              bInputWantsToRun;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BlueprintCanRiderAttack
struct AMilkGlider_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPHandleOnStopTargeting
struct AMilkGlider_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.LookDirectionForJumpRefactor
struct AMilkGlider_Character_BP_C_LookDirectionForJumpRefactor_Params
{
	struct FVector                                     OutDir;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_InterceptMoveForward
struct AMilkGlider_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Is Sliding
struct AMilkGlider_Character_BP_C_Is_Sliding_Params
{
	bool                                               bIsSliding;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetSlideDecayMultiplierFromSlope
struct AMilkGlider_Character_BP_C_GetSlideDecayMultiplierFromSlope_Params
{
	float                                              Multi_Ratio_Direction;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CharSlideAngle;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Client Tick Sliding
struct AMilkGlider_Character_BP_C_Client_Tick_Sliding_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server Tick Sliding
struct AMilkGlider_Character_BP_C_Server_Tick_Sliding_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Clear Sliding
struct AMilkGlider_Character_BP_C_Clear_Sliding_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.StartSliding
struct AMilkGlider_Character_BP_C_StartSliding_Params
{
	bool                                               bFromGlide;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bJustDiveBombed;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanSlide
struct AMilkGlider_Character_BP_C_CanSlide_Params
{
	bool                                               bCanSlide;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanChargeJump
struct AMilkGlider_Character_BP_C_CanChargeJump_Params
{
	bool                                               bCanJump;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOverrideFlyingVelocity
struct AMilkGlider_Character_BP_C_BPOverrideFlyingVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_GetCustomModifier_MaxSpeed
struct AMilkGlider_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Get Gliding Rotation Rate
struct AMilkGlider_Character_BP_C_Get_Gliding_Rotation_Rate_Params
{
	float                                              Rate;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_GetCustomModifier_RotationRate
struct AMilkGlider_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetGlidingSpeedRatio
struct AMilkGlider_Character_BP_C_GetGlidingSpeedRatio_Params
{
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Client Tick Gliding
struct AMilkGlider_Character_BP_C_Client_Tick_Gliding_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnRep_CurrentExtraState
struct AMilkGlider_Character_BP_C_OnRep_CurrentExtraState_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InputRunReleased
struct AMilkGlider_Character_BP_C_InputRunReleased_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InputRunPressed
struct AMilkGlider_Character_BP_C_InputRunPressed_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPTimerServer
struct AMilkGlider_Character_BP_C_BPTimerServer_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.IsGliding
struct AMilkGlider_Character_BP_C_IsGliding_Params
{
	bool                                               bIsGliding;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Tick Force ForwardInput
struct AMilkGlider_Character_BP_C_Tick_Force_ForwardInput_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.CanGlide
struct AMilkGlider_Character_BP_C_CanGlide_Params
{
	bool                                               ToStart;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowedToGlide;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.StartGlide
struct AMilkGlider_Character_BP_C_StartGlide_Params
{
	bool                                               bFromSlide;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerTickGliding
struct AMilkGlider_Character_BP_C_ServerTickGliding_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPGetHUDElements
struct AMilkGlider_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPTimerNonDedicated
struct AMilkGlider_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifySetRider
struct AMilkGlider_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPCharacterSleeped
struct AMilkGlider_Character_BP_C_BPCharacterSleeped_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPNotifyClearRider
struct AMilkGlider_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerStopJump
struct AMilkGlider_Character_BP_C_ServerStopJump_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPOnMovementModeChangedNotify
struct AMilkGlider_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetLaunchDirection
struct AMilkGlider_Character_BP_C_GetLaunchDirection_Params
{
	class AActor*                                      CalcActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.LaunchAtTracePoint
struct AMilkGlider_Character_BP_C_LaunchAtTracePoint_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ExecuteJump
struct AMilkGlider_Character_BP_C_ExecuteJump_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Prep Jump
struct AMilkGlider_Character_BP_C_Prep_Jump_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ShouldStopJumpRotation
struct AMilkGlider_Character_BP_C_ShouldStopJumpRotation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.GetClampedLookDir
struct AMilkGlider_Character_BP_C_GetClampedLookDir_Params
{
	bool                                               LimitLowerPitch;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClamp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.JumpingTrace
struct AMilkGlider_Character_BP_C_JumpingTrace_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ShortestAngleDistance
struct AMilkGlider_Character_BP_C_ShortestAngleDistance_Params
{
	float                                              AngleCurrent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Difference;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Find Leap Dir
struct AMilkGlider_Character_BP_C_Find_Leap_Dir_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UserConstructionScript
struct AMilkGlider_Character_BP_C_UserConstructionScript_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InpActEvt_RunToggle_K2Node_InputActionEvent_316
struct AMilkGlider_Character_BP_C_InpActEvt_RunToggle_K2Node_InputActionEvent_316_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InpActEvt_Run_K2Node_InputActionEvent_315
struct AMilkGlider_Character_BP_C_InpActEvt_Run_K2Node_InputActionEvent_315_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.InpActEvt_Run_K2Node_InputActionEvent_314
struct AMilkGlider_Character_BP_C_InpActEvt_Run_K2Node_InputActionEvent_314_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_OnJumpPressed
struct AMilkGlider_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BP_OnJumpReleased
struct AMilkGlider_Character_BP_C_BP_OnJumpReleased_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DelayedPress
struct AMilkGlider_Character_BP_C_DelayedPress_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Request Jump Response
struct AMilkGlider_Character_BP_C_Request_Jump_Response_Params
{
	bool                                               isHoldingJump;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ChargeTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_SetPreventMovement
struct AMilkGlider_Character_BP_C_Multi_SetPreventMovement_Params
{
	bool                                               NewPreventMovement;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DelayedClearJumping
struct AMilkGlider_Character_BP_C_DelayedClearJumping_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_TraceTargetDir
struct AMilkGlider_Character_BP_C_Server_TraceTargetDir_Params
{
	struct FVector                                     AimLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AimHit;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               JumpInstant;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.StartJumpIdle
struct AMilkGlider_Character_BP_C_StartJumpIdle_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ClearJump
struct AMilkGlider_Character_BP_C_ClearJump_Params
{
	bool                                               ForceImmediateClear;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_TraceTargetDir
struct AMilkGlider_Character_BP_C_Multi_TraceTargetDir_Params
{
	struct FVector                                     AimLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AimHit;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateAllJumpRotation
struct AMilkGlider_Character_BP_C_UpdateAllJumpRotation_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.UpdateJumpRotation
struct AMilkGlider_Character_BP_C_UpdateJumpRotation_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.RequestJumpReady
struct AMilkGlider_Character_BP_C_RequestJumpReady_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_JumpStart
struct AMilkGlider_Character_BP_C_Event_JumpStart_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_StartGlide
struct AMilkGlider_Character_BP_C_Multi_StartGlide_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewSpeedMultiplier;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_RunInputPressed
struct AMilkGlider_Character_BP_C_Server_RunInputPressed_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_RunInputReleased
struct AMilkGlider_Character_BP_C_Server_RunInputReleased_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ReceiveBeginPlay
struct AMilkGlider_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_TargetInput
struct AMilkGlider_Character_BP_C_Server_TargetInput_Params
{
	bool                                               IsPressed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BPUnstasis
struct AMilkGlider_Character_BP_C_BPUnstasis_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DiveBomb
struct AMilkGlider_Character_BP_C_DiveBomb_Params
{
	bool                                               bFromDive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OwningClientDiveBombCameraShake
struct AMilkGlider_Character_BP_C_OwningClientDiveBombCameraShake_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromDiveBomb;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnJumpPressedReroute
struct AMilkGlider_Character_BP_C_OnJumpPressedReroute_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.WaterJump
struct AMilkGlider_Character_BP_C_WaterJump_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.OnDied_Event
struct AMilkGlider_Character_BP_C_OnDied_Event_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Server_SetParachuteInput
struct AMilkGlider_Character_BP_C_Server_SetParachuteInput_Params
{
	struct FVector                                     Parachute_Input_Vector;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.SetToStoredVelocity
struct AMilkGlider_Character_BP_C_SetToStoredVelocity_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_Init
struct AMilkGlider_Character_BP_C_Event_Init_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_StealBaby
struct AMilkGlider_Character_BP_C_Multi_StealBaby_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.AIJump
struct AMilkGlider_Character_BP_C_AIJump_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.EventStopPara
struct AMilkGlider_Character_BP_C_EventStopPara_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.BellyFlopJump
struct AMilkGlider_Character_BP_C_BellyFlopJump_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Multi_UpdateNursingFX
struct AMilkGlider_Character_BP_C_Multi_UpdateNursingFX_Params
{
	bool                                               bNewIsNursing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.DropAllBabes
struct AMilkGlider_Character_BP_C_DropAllBabes_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerDropBabes
struct AMilkGlider_Character_BP_C_ServerDropBabes_Params
{
	class AShooterPlayerController*                    Shooter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ServerPickUpBabes
struct AMilkGlider_Character_BP_C_ServerPickUpBabes_Params
{
	class AShooterPlayerController*                    Shooter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_StopSlideSound
struct AMilkGlider_Character_BP_C_Event_StopSlideSound_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_StopGlideSound
struct AMilkGlider_Character_BP_C_Event_StopGlideSound_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.Event_StopParaSound
struct AMilkGlider_Character_BP_C_Event_StopParaSound_Params
{
};

// Function MilkGlider_Character_BP.MilkGlider_Character_BP_C.ExecuteUbergraph_MilkGlider_Character_BP
struct AMilkGlider_Character_BP_C_ExecuteUbergraph_MilkGlider_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tropeognathus_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetHudData
struct ATropeognathus_Character_BP_C_GetHudData_Params
{
	bool                                               HasSaddle;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryComponent*                   InventoryComponent;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SaddleFuelItem;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FlakCannonAmmoItem;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingSuperFlight;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingSuperFlightBoost;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FuelPercent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CannonCooldownPercent;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedPercent;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetHUDElements
struct ATropeognathus_Character_BP_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ReceiveBeginPlay
struct ATropeognathus_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingWindGust
struct ATropeognathus_Character_BP_C_IsUsingWindGust_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             StartTime;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingForwardInput
struct ATropeognathus_Character_BP_C_IsUsingForwardInput_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPUnsetupDinoTameable
struct ATropeognathus_Character_BP_C_BPUnsetupDinoTameable_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BSetupDinoTameable
struct ATropeognathus_Character_BP_C_BSetupDinoTameable_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateRiderSocket
struct ATropeognathus_Character_BP_C_UpdateRiderSocket_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetOverrideSocket
struct ATropeognathus_Character_BP_C_GetOverrideSocket_Params
{
	struct FName*                                      From;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AllowWakingTame
struct ATropeognathus_Character_BP_C_AllowWakingTame_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OwningClientTryFlakCannonFire
struct ATropeognathus_Character_BP_C_OwningClientTryFlakCannonFire_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InterceptInputEvent
struct ATropeognathus_Character_BP_C_InterceptInputEvent_Params
{
	class FString*                                     InputName;                                                // (Parm, ZeroConstructor)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AllowPlayMontage
struct ATropeognathus_Character_BP_C_AllowPlayMontage_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetDinoLevelUpAnimation
struct ATropeognathus_Character_BP_C_GetDinoLevelUpAnimation_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateTaming
struct ATropeognathus_Character_BP_C_UpdateTaming_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPShowTamingPanel
struct ATropeognathus_Character_BP_C_BPShowTamingPanel_Params
{
	bool*                                              currentVisibility;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetTamingBuff
struct ATropeognathus_Character_BP_C_GetTamingBuff_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff*                                 Buff;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideTamingDescriptionLabel
struct ATropeognathus_Character_BP_C_BPOverrideTamingDescriptionLabel_Params
{
	struct FSlateColor                                 TextColor;                                                // (Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BlueprintCanAttack
struct ATropeognathus_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPAdjustDamage
struct ATropeognathus_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Get Replicated Control Rotation Public
struct ATropeognathus_Character_BP_C_Get_Replicated_Control_Rotation_Public_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsPlayingBlockingAnim
struct ATropeognathus_Character_BP_C_IsPlayingBlockingAnim_Params
{
	bool                                               ReturnVal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Using Drafting Public
struct ATropeognathus_Character_BP_C_Is_Using_Drafting_Public_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	bool                                               DraftAcked;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingDrafting
struct ATropeognathus_Character_BP_C_IsUsingDrafting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	bool                                               DraftAcked;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetRiderSocket
struct ATropeognathus_Character_BP_C_BPGetRiderSocket_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsJumpHeld
struct ATropeognathus_Character_BP_C_IsJumpHeld_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOnDinoCheat
struct ATropeognathus_Character_BP_C_BPOnDinoCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetReplicatedControlRotation
struct ATropeognathus_Character_BP_C_GetReplicatedControlRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ReceiveTick
struct ATropeognathus_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPDoAttack
struct ATropeognathus_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetCrosshairAlpha
struct ATropeognathus_Character_BP_C_BPGetCrosshairAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsFlakCannonOnCooldown
struct ATropeognathus_Character_BP_C_IsFlakCannonOnCooldown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetCrosshairLocation
struct ATropeognathus_Character_BP_C_BPGetCrosshairLocation_Params
{
	float*                                             CanvasClipX;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CanvasClipY;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutX;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutY;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ConsumeItem
struct ATropeognathus_Character_BP_C_ConsumeItem_Params
{
	class UClass*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.HasAmmo
struct ATropeognathus_Character_BP_C_HasAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOnStopJump
struct ATropeognathus_Character_BP_C_BPOnStopJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Fire Flak Cannon
struct ATropeognathus_Character_BP_C_Fire_Flak_Cannon_Params
{
	struct FVector                                     Dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Has Saddle Public
struct ATropeognathus_Character_BP_C_Has_Saddle_Public_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               RetIsSuperSaddle;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnInventoryItemGrind
struct ATropeognathus_Character_BP_C_OnInventoryItemGrind_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateWindGustCooldownVFX
struct ATropeognathus_Character_BP_C_UpdateWindGustCooldownVFX_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct ATropeognathus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.TryInterruptLanding
struct ATropeognathus_Character_BP_C_TryInterruptLanding_Params
{
	TEnumAsByte<EMovementMode>                         Selection;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnRep_SuperFlight
struct ATropeognathus_Character_BP_C_OnRep_SuperFlight_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.SetSuperFlight
struct ATropeognathus_Character_BP_C_SetSuperFlight_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerVFX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Get Current Percent Of Max Fly Speed Public
struct ATropeognathus_Character_BP_C_Get_Current_Percent_Of_Max_Fly_Speed_Public_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Using Super Flight Public
struct ATropeognathus_Character_BP_C_Is_Using_Super_Flight_Public_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             StartedEndingTime;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingSuperFlight
struct ATropeognathus_Character_BP_C_IsUsingSuperFlight_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             StartedEndingTime;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSuperFlightBoost
struct ATropeognathus_Character_BP_C_UpdateSuperFlightBoost_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Using Super Flight Boost Public
struct ATropeognathus_Character_BP_C_Is_Using_Super_Flight_Boost_Public_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingSuperFlightBoost
struct ATropeognathus_Character_BP_C_IsUsingSuperFlightBoost_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	double                                             StartTime;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetDragSocketName
struct ATropeognathus_Character_BP_C_BPGetDragSocketName_Params
{
	class APrimalCharacter**                           DraggingChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnCarriedStruggle
struct ATropeognathus_Character_BP_C_OnCarriedStruggle_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingWingGust
struct ATropeognathus_Character_BP_C_IsUsingWingGust_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Update Jet FX
struct ATropeognathus_Character_BP_C_Update_Jet_FX_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.HasFuel
struct ATropeognathus_Character_BP_C_HasFuel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateFuel
struct ATropeognathus_Character_BP_C_UpdateFuel_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPDidSetCarriedCharacter
struct ATropeognathus_Character_BP_C_BPDidSetCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.HasSaddle
struct ATropeognathus_Character_BP_C_HasSaddle_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               RetIsSuperSaddle;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateDrafting
struct ATropeognathus_Character_BP_C_UpdateDrafting_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetDragSocketDinoName
struct ATropeognathus_Character_BP_C_BPGetDragSocketDinoName_Params
{
	class APrimalDinoCharacter**                       aGrabbedDino;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSuperFlightStateData
struct ATropeognathus_Character_BP_C_UpdateSuperFlightStateData_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateAcceleration
struct ATropeognathus_Character_BP_C_UpdateAcceleration_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateRotationRate
struct ATropeognathus_Character_BP_C_UpdateRotationRate_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateAllyAOE
struct ATropeognathus_Character_BP_C_UpdateAllyAOE_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetWindGustEpicenter
struct ATropeognathus_Character_BP_C_GetWindGustEpicenter_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DoWing GustAOE
struct ATropeognathus_Character_BP_C_DoWing_GustAOE_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Diving Public
struct ATropeognathus_Character_BP_C_Is_Diving_Public_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             TimeDiveStart;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPNotifySetRider
struct ATropeognathus_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateTPVOffset
struct ATropeognathus_Character_BP_C_UpdateTPVOffset_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateCheckQuickTurn
struct ATropeognathus_Character_BP_C_UpdateCheckQuickTurn_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSpeed
struct ATropeognathus_Character_BP_C_UpdateSpeed_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateDiving
struct ATropeognathus_Character_BP_C_UpdateDiving_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsDiving
struct ATropeognathus_Character_BP_C_IsDiving_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             TimeDiveStart;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             TimeStoppedDiving;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetAnimBP
struct ATropeognathus_Character_BP_C_GetAnimBP_Params
{
	class UTropeognathus_AnimBP_C*                     Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetCurrentPercentOfMaxFlySpeed
struct ATropeognathus_Character_BP_C_GetCurrentPercentOfMaxFlySpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetCDO
struct ATropeognathus_Character_BP_C_GetCDO_Params
{
	class ATropeognathus_Character_BP_C*               AsTropeognathus_Character_BP_C;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Quick Turning
struct ATropeognathus_Character_BP_C_Is_Quick_Turning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.EndQuickTurn
struct ATropeognathus_Character_BP_C_EndQuickTurn_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.StartSuperFlightQuickTurn
struct ATropeognathus_Character_BP_C_StartSuperFlightQuickTurn_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnRep_LastSuperFlightQuickTurn
struct ATropeognathus_Character_BP_C_OnRep_LastSuperFlightQuickTurn_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSuperFlightRoll
struct ATropeognathus_Character_BP_C_UpdateSuperFlightRoll_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_InterceptMoveRight
struct ATropeognathus_Character_BP_C_BP_InterceptMoveRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateTrails
struct ATropeognathus_Character_BP_C_UpdateTrails_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ActivateTrails
struct ATropeognathus_Character_BP_C_ActivateTrails_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DeactivateTrails
struct ATropeognathus_Character_BP_C_DeactivateTrails_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.RidingTick
struct ATropeognathus_Character_BP_C_RidingTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_OnStartLandingNotify
struct ATropeognathus_Character_BP_C_BP_OnStartLandingNotify_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideFlyingVelocity
struct ATropeognathus_Character_BP_C_BPOverrideFlyingVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.K2_OnMovementModeChanged
struct ATropeognathus_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_InterceptMoveForward
struct ATropeognathus_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideCameraViewTarget
struct ATropeognathus_Character_BP_C_BPOverrideCameraViewTarget_Params
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

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_OnSetRunning
struct ATropeognathus_Character_BP_C_BP_OnSetRunning_Params
{
	bool*                                              bNewIsRunning;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPNotifyClearRider
struct ATropeognathus_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPHandleOnStopTargeting
struct ATropeognathus_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPHandleControllerInitiatedAttack
struct ATropeognathus_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPModifyDesiredRotation
struct ATropeognathus_Character_BP_C_BPModifyDesiredRotation_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InDesiredRotation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    OutDesiredRotation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPSetupTamed
struct ATropeognathus_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOnStartJump
struct ATropeognathus_Character_BP_C_BPOnStartJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPHandleUseButtonPress
struct ATropeognathus_Character_BP_C_BPHandleUseButtonPress_Params
{
	class AShooterPlayerController**                   RiderController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DisableCameraInterpolation
struct ATropeognathus_Character_BP_C_DisableCameraInterpolation_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnRep_LatchingSurfaceNormal
struct ATropeognathus_Character_BP_C_OnRep_LatchingSurfaceNormal_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateLatchedDinoCamera
struct ATropeognathus_Character_BP_C_UpdateLatchedDinoCamera_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Controller Follow ActorRotation
struct ATropeognathus_Character_BP_C_Controller_Follow_ActorRotation_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ReferenceLatchingObjects
struct ATropeognathus_Character_BP_C_ReferenceLatchingObjects_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LineTrace
struct ATropeognathus_Character_BP_C_LineTrace_Params
{
	class UMeshComponent*                              Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BackwardLatching;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Hit_Somthing;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Hit_Actor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InterruptLatching
struct ATropeognathus_Character_BP_C_InterruptLatching_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ProcessLatching
struct ATropeognathus_Character_BP_C_ProcessLatching_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.TryLatch
struct ATropeognathus_Character_BP_C_TryLatch_Params
{
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               backwardsLatching;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UserConstructionScript
struct ATropeognathus_Character_BP_C_UserConstructionScript_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_339
struct ATropeognathus_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_339_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_338
struct ATropeognathus_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_338_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_337
struct ATropeognathus_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_337_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_336
struct ATropeognathus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_336_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_335
struct ATropeognathus_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_335_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_72
struct ATropeognathus_Character_BP_C_InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_72_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_334
struct ATropeognathus_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_334_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_333
struct ATropeognathus_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_333_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_71
struct ATropeognathus_Character_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_71_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_70
struct ATropeognathus_Character_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_70_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Latch
struct ATropeognathus_Character_BP_C_Latch_Params
{
	bool                                               backwardsLatching;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LatchStartAnimation
struct ATropeognathus_Character_BP_C_LatchStartAnimation_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UnLatch
struct ATropeognathus_Character_BP_C_UnLatch_Params
{
	bool                                               LatchingInterrupted;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UnLatchStartAnimation
struct ATropeognathus_Character_BP_C_UnLatchStartAnimation_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ATropeognathus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MoveToUsingDirection
struct ATropeognathus_Character_BP_C_MoveToUsingDirection_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UnLatchMoveAndRotate
struct ATropeognathus_Character_BP_C_UnLatchMoveAndRotate_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LatchingStartEvent
struct ATropeognathus_Character_BP_C_LatchingStartEvent_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LatchingEndEvent
struct ATropeognathus_Character_BP_C_LatchingEndEvent_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.StopMovement
struct ATropeognathus_Character_BP_C_StopMovement_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DisableFaceLatchingObjectRotation
struct ATropeognathus_Character_BP_C_DisableFaceLatchingObjectRotation_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.SetPassengersSurfaceCamera
struct ATropeognathus_Character_BP_C_SetPassengersSurfaceCamera_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LocalFaceLatchingObject
struct ATropeognathus_Character_BP_C_LocalFaceLatchingObject_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.StartedJump
struct ATropeognathus_Character_BP_C_StartedJump_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerToggleSuperFlight
struct ATropeognathus_Character_BP_C_ServerToggleSuperFlight_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerSuperFightRightInput
struct ATropeognathus_Character_BP_C_ServerSuperFightRightInput_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestSuperFlightQuickTurn
struct ATropeognathus_Character_BP_C_ServerRequestSuperFlightQuickTurn_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateQuickTurn
struct ATropeognathus_Character_BP_C_UpdateQuickTurn_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestWindGust
struct ATropeognathus_Character_BP_C_ServerRequestWindGust_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGust
struct ATropeognathus_Character_BP_C_AnimNotify_WindGust_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ClientWindGust
struct ATropeognathus_Character_BP_C_ClientWindGust_Params
{
	struct FVector                                     Epicenter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGustVFX
struct ATropeognathus_Character_BP_C_AnimNotify_WindGustVFX_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestFireFlakCannon
struct ATropeognathus_Character_BP_C_ServerRequestFireFlakCannon_Params
{
	struct FVector                                     Dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
struct ATropeognathus_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerUpdateLastForwardInputTime
struct ATropeognathus_Character_BP_C_ServerUpdateLastForwardInputTime_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DelayedSuperFlightEnd
struct ATropeognathus_Character_BP_C_DelayedSuperFlightEnd_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiSuperFlightEnd
struct ATropeognathus_Character_BP_C_MultiSuperFlightEnd_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ClientTagDraftee
struct ATropeognathus_Character_BP_C_ClientTagDraftee_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.WindGust180End
struct ATropeognathus_Character_BP_C_WindGust180End_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.WindGust180Tick
struct ATropeognathus_Character_BP_C_WindGust180Tick_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGustCheckFor180
struct ATropeognathus_Character_BP_C_AnimNotify_WindGustCheckFor180_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGustBoost
struct ATropeognathus_Character_BP_C_AnimNotify_WindGustBoost_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequest180
struct ATropeognathus_Character_BP_C_ServerRequest180_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GamepadRightStickPressed
struct ATropeognathus_Character_BP_C_GamepadRightStickPressed_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerSetLastTimePressedJump
struct ATropeognathus_Character_BP_C_ServerSetLastTimePressedJump_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerSetLastTimeReleasedJump
struct ATropeognathus_Character_BP_C_ServerSetLastTimeReleasedJump_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.QueueLanding
struct ATropeognathus_Character_BP_C_QueueLanding_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestLanding
struct ATropeognathus_Character_BP_C_ServerRequestLanding_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnBola
struct ATropeognathus_Character_BP_C_OnBola_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerUpdateRunningStartTime
struct ATropeognathus_Character_BP_C_ServerUpdateRunningStartTime_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerUpdateRunningStopTime
struct ATropeognathus_Character_BP_C_ServerUpdateRunningStopTime_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiOnRunStarted
struct ATropeognathus_Character_BP_C_MultiOnRunStarted_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiOnRunStopped
struct ATropeognathus_Character_BP_C_MultiOnRunStopped_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiOnSuperFlightStart
struct ATropeognathus_Character_BP_C_MultiOnSuperFlightStart_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.QueueGrabAttack
struct ATropeognathus_Character_BP_C_QueueGrabAttack_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiThrusterVFXBoost
struct ATropeognathus_Character_BP_C_MultiThrusterVFXBoost_Params
{
};

// Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ExecuteUbergraph_Tropeognathus_Character_BP
struct ATropeognathus_Character_BP_C_ExecuteUbergraph_Tropeognathus_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

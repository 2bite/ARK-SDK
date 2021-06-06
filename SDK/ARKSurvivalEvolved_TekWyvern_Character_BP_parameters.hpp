#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekWyvern_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPGetRiderSocket
struct ATekWyvern_Character_BP_C_BPGetRiderSocket_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPPreventRiding
struct ATekWyvern_Character_BP_C_BPPreventRiding_Params
{
	class AShooterCharacter**                          ByPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDontCheckDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.DoneRolling
struct ATekWyvern_Character_BP_C_DoneRolling_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.DoTamingRandomAttack
struct ATekWyvern_Character_BP_C_DoTamingRandomAttack_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BlueprintAdjustOutputDamage
struct ATekWyvern_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.IsInSpaceBiome
struct ATekWyvern_Character_BP_C_IsInSpaceBiome_Params
{
	bool                                               InSpaceBiome;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.OnRep_DismountTimesDuringTaming
struct ATekWyvern_Character_BP_C_OnRep_DismountTimesDuringTaming_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ClearLastTamingProcess
struct ATekWyvern_Character_BP_C_ClearLastTamingProcess_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Get Extra Taming EffectivenessModifier
struct ATekWyvern_Character_BP_C_Get_Extra_Taming_EffectivenessModifier_Params
{
	float                                              ExtraTameEffectivenessModifier;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ToggleAllowTameRiding
struct ATekWyvern_Character_BP_C_ToggleAllowTameRiding_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BadTimingFeed
struct ATekWyvern_Character_BP_C_BadTimingFeed_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct ATekWyvern_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.CheckDoneRoar
struct ATekWyvern_Character_BP_C_CheckDoneRoar_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TickStaminaCost
struct ATekWyvern_Character_BP_C_TickStaminaCost_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBreath;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TickLowHealthStopMoving
struct ATekWyvern_Character_BP_C_TickLowHealthStopMoving_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.OverrideFinalWanderLocation
struct ATekWyvern_Character_BP_C_OverrideFinalWanderLocation_Params
{
	struct FVector                                     outVec;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPGetMultiUseEntries
struct ATekWyvern_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.UpdateTamingTextOverlay
struct ATekWyvern_Character_BP_C_UpdateTamingTextOverlay_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPNotifyClearRider
struct ATekWyvern_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TryAddAffinityAfter Rolling
struct ATekWyvern_Character_BP_C_TryAddAffinityAfter_Rolling_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TickBeam
struct ATekWyvern_Character_BP_C_TickBeam_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.OnRep_bBeamActivated
struct ATekWyvern_Character_BP_C_OnRep_bBeamActivated_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BlueprintCanAttack
struct ATekWyvern_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPHandleOnStopTargeting
struct ATekWyvern_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPHandleControllerInitiatedAttack
struct ATekWyvern_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPSetupTamed
struct ATekWyvern_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Check Random Destination
struct ATekWyvern_Character_BP_C_Check_Random_Destination_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Increase Taming Affinity
struct ATekWyvern_Character_BP_C_Increase_Taming_Affinity_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Consume FoodItem
struct ATekWyvern_Character_BP_C_Consume_FoodItem_Params
{
	bool                                               DidConsumeFood;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              EffectivenessMultiplier;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPDoAttack
struct ATekWyvern_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.CheckDoneLanding
struct ATekWyvern_Character_BP_C_CheckDoneLanding_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.StartTame
struct ATekWyvern_Character_BP_C_StartTame_Params
{
	class AShooterCharacter*                           TamerPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPAdjustDamage
struct ATekWyvern_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPPreventInputType
struct ATekWyvern_Character_BP_C_BPPreventInputType_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPUntamedConsumeFoodItem
struct ATekWyvern_Character_BP_C_BPUntamedConsumeFoodItem_Params
{
	class UPrimalItem**                                foodItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPNotifySetRider
struct ATekWyvern_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ATekWyvern_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.UserConstructionScript
struct ATekWyvern_Character_BP_C_UserConstructionScript_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Rolling__FinishedFunc
struct ATekWyvern_Character_BP_C_Rolling__FinishedFunc_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Rolling__UpdateFunc
struct ATekWyvern_Character_BP_C_Rolling__UpdateFunc_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ReceiveBeginPlay
struct ATekWyvern_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.RidingTick
struct ATekWyvern_Character_BP_C_RidingTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.SetAllowRiding
struct ATekWyvern_Character_BP_C_SetAllowRiding_Params
{
	bool                                               Allow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.StartRolling
struct ATekWyvern_Character_BP_C_StartRolling_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Multi_TryStartBreathAttack
struct ATekWyvern_Character_BP_C_Multi_TryStartBreathAttack_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Server_StopBreathAttack
struct ATekWyvern_Character_BP_C_Server_StopBreathAttack_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Multi_StopBreathAttack
struct ATekWyvern_Character_BP_C_Multi_StopBreathAttack_Params
{
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ReceiveTick
struct ATekWyvern_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ExecuteUbergraph_TekWyvern_Character_BP
struct ATekWyvern_Character_BP_C_ExecuteUbergraph_TekWyvern_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

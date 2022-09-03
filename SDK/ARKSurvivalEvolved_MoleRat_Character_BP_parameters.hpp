#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MoleRat_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.ChargeEndedAlterRotation
struct AMoleRat_Character_BP_C_ChargeEndedAlterRotation_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPAdjustDamage
struct AMoleRat_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.ResetTaming
struct AMoleRat_Character_BP_C_ResetTaming_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPHandleOnStopTargeting
struct AMoleRat_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BP_InterceptMoveForward
struct AMoleRat_Character_BP_C_BP_InterceptMoveForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BP_InterceptMoveRight
struct AMoleRat_Character_BP_C_BP_InterceptMoveRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPOnEndCharging
struct AMoleRat_Character_BP_C_BPOnEndCharging_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.GiveAffinity
struct AMoleRat_Character_BP_C_GiveAffinity_Params
{
	class APrimalCharacter*                            tamer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               wasTamed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.SlidingUpdate
struct AMoleRat_Character_BP_C_SlidingUpdate_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BlueprintCanRiderAttack
struct AMoleRat_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPNotifyDroppedItemPickedUp
struct AMoleRat_Character_BP_C_BPNotifyDroppedItemPickedUp_Params
{
	class ADroppedItem**                               itemPickedUp;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter**                           PickedUpBy;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.CanDamageActor
struct AMoleRat_Character_BP_C_CanDamageActor_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TargetCanBeDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.Handle Hit Pawns
struct AMoleRat_Character_BP_C_Handle_Hit_Pawns_Params
{
	TArray<struct FHitResult>                          HitTargets;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.HandleHitStatic
struct AMoleRat_Character_BP_C_HandleHitStatic_Params
{
	TArray<struct FHitResult>                          HitTargets;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.HandleChargingCollisions
struct AMoleRat_Character_BP_C_HandleChargingCollisions_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPNotifyClearRider
struct AMoleRat_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPNotifyClearPassenger
struct AMoleRat_Character_BP_C_BPNotifyClearPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.NotifyPassengersIsCharging
struct AMoleRat_Character_BP_C_NotifyPassengersIsCharging_Params
{
	bool                                               isCharging;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.CanUseGemAttack
struct AMoleRat_Character_BP_C_CanUseGemAttack_Params
{
	bool                                               CanUseGemAttack;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.GetChargeValueScaled
struct AMoleRat_Character_BP_C_GetChargeValueScaled_Params
{
	float                                              CurrentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              velocityAlpha;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              scaledValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AMoleRat_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.OnJumped
struct AMoleRat_Character_BP_C_OnJumped_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.CanJumpInternal
struct AMoleRat_Character_BP_C_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.DebugFunction
struct AMoleRat_Character_BP_C_DebugFunction_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.SpeedGainFormula
struct AMoleRat_Character_BP_C_SpeedGainFormula_Params
{
	float                                              alphaInput;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              alphaOutput;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.OnChargingTimer
struct AMoleRat_Character_BP_C_OnChargingTimer_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPTimerServer
struct AMoleRat_Character_BP_C_BPTimerServer_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPOnRepIsCharging
struct AMoleRat_Character_BP_C_BPOnRepIsCharging_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.OnStopCharging
struct AMoleRat_Character_BP_C_OnStopCharging_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.Scale All Charge Values
struct AMoleRat_Character_BP_C_Scale_All_Charge_Values_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.On StartCharging
struct AMoleRat_Character_BP_C_On_StartCharging_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPChargingModifyInputAcceleration
struct AMoleRat_Character_BP_C_BPChargingModifyInputAcceleration_Params
{
	struct FVector*                                    inputAcceleration;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.IsPassengerInFirstPersonMode
struct AMoleRat_Character_BP_C_IsPassengerInFirstPersonMode_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.ReceiveBeginPlay
struct AMoleRat_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.ResetFPVSocket
struct AMoleRat_Character_BP_C_ResetFPVSocket_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.UpdateFPVSocketOnCharge
struct AMoleRat_Character_BP_C_UpdateFPVSocketOnCharge_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.UserConstructionScript
struct AMoleRat_Character_BP_C_UserConstructionScript_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.EndChargeRotation__FinishedFunc
struct AMoleRat_Character_BP_C_EndChargeRotation__FinishedFunc_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.EndChargeRotation__UpdateFunc
struct AMoleRat_Character_BP_C_EndChargeRotation__UpdateFunc_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.SetTPVOffsetForRoll
struct AMoleRat_Character_BP_C_SetTPVOffsetForRoll_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.SetNormalTPVOffset
struct AMoleRat_Character_BP_C_SetNormalTPVOffset_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.StartCameraOffsetMovement
struct AMoleRat_Character_BP_C_StartCameraOffsetMovement_Params
{
	bool                                               rollOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.DebugSphere
struct AMoleRat_Character_BP_C_DebugSphere_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.SwitchToRollingAnims
struct AMoleRat_Character_BP_C_SwitchToRollingAnims_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.UpdateForwardValue_Server
struct AMoleRat_Character_BP_C_UpdateForwardValue_Server_Params
{
	float                                              newForwardValue;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.ChargeActions
struct AMoleRat_Character_BP_C_ChargeActions_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.RequestStopCharging_Server
struct AMoleRat_Character_BP_C_RequestStopCharging_Server_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.AnimNotify_SpawnDebris
struct AMoleRat_Character_BP_C_AnimNotify_SpawnDebris_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.AnimNotify_TrySpawnGem
struct AMoleRat_Character_BP_C_AnimNotify_TrySpawnGem_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.EnableIKAfterDelay
struct AMoleRat_Character_BP_C_EnableIKAfterDelay_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.MulticastResetPassengerPos
struct AMoleRat_Character_BP_C_MulticastResetPassengerPos_Params
{
	class APrimalCharacter*                            Passenger;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.MulticastSetPassengerInsideCenter
struct AMoleRat_Character_BP_C_MulticastSetPassengerInsideCenter_Params
{
	class APrimalCharacter*                            Passenger;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.MultiSpawnHoneyConsumedParticle
struct AMoleRat_Character_BP_C_MultiSpawnHoneyConsumedParticle_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.AnimNotify_LookForTameDrops
struct AMoleRat_Character_BP_C_AnimNotify_LookForTameDrops_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.MultiSimulateVelocitySliding
struct AMoleRat_Character_BP_C_MultiSimulateVelocitySliding_Params
{
	struct FVector                                     VelocityToMaintain;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.RequestServer_EndCharging
struct AMoleRat_Character_BP_C_RequestServer_EndCharging_Params
{
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.MultiRotateTo
struct AMoleRat_Character_BP_C_MultiRotateTo_Params
{
	struct FRotator                                    TargetRotation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    StartingRotation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoleRat_Character_BP.MoleRat_Character_BP_C.ExecuteUbergraph_MoleRat_Character_BP
struct AMoleRat_Character_BP_C_ExecuteUbergraph_MoleRat_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

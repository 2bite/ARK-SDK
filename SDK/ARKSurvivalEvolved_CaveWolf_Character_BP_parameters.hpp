#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ValidateZipLineTransform
struct ACaveWolf_Character_BP_C_ValidateZipLineTransform_Params
{
	struct UObject_FTransform                          InTransform;                                              // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPOnTamedProcessOrder
struct ACaveWolf_Character_BP_C_BPOnTamedProcessOrder_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintOverrideWantsToRun
struct ACaveWolf_Character_BP_C_BlueprintOverrideWantsToRun_Params
{
	bool*                                              bInputWantsToRun;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPOverrideMoveToOrder
struct ACaveWolf_Character_BP_C_BPOverrideMoveToOrder_Params
{
	struct FVector*                                    MoveToLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          OrderingPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPGetAddForwardVelocityOnJump
struct ACaveWolf_Character_BP_C_BPGetAddForwardVelocityOnJump_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.IsTargetZiplineBlocked
struct ACaveWolf_Character_BP_C_IsTargetZiplineBlocked_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AZipline_Anchor_C*                           Anchor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm)
	bool                                               HitReturn;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintCanAttack
struct ACaveWolf_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetClosestLocationToPointFromArray
struct ACaveWolf_Character_BP_C_GetClosestLocationToPointFromArray_Params
{
	TArray<struct FVector>                             LocationsToTest;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Point;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClosestLocation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.UpdateTPVViewOffset
struct ACaveWolf_Character_BP_C_UpdateTPVViewOffset_Params
{
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.Set Server Timer Tick Every Frame
struct ACaveWolf_Character_BP_C_Set_Server_Timer_Tick_Every_Frame_Params
{
	bool                                               tickEveryFrame;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPTimerServer
struct ACaveWolf_Character_BP_C_BPTimerServer_Params
{
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetTargetMeshRelativeTransform_Pure
struct ACaveWolf_Character_BP_C_GetTargetMeshRelativeTransform_Pure_Params
{
	struct UObject_FTransform                          Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.SetNonDediTimer_TickEveryFrame
struct ACaveWolf_Character_BP_C_SetNonDediTimer_TickEveryFrame_Params
{
	bool                                               tickEveryFrame;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetTargetMeshRelativeTransform
struct ACaveWolf_Character_BP_C_GetTargetMeshRelativeTransform_Params
{
	struct UObject_FTransform                          Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.DebugDrawRotationAxes
struct ACaveWolf_Character_BP_C_DebugDrawRotationAxes_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              lineLength;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              lineDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LineThickness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.SoftSetCaveWolfTransform
struct ACaveWolf_Character_BP_C_SoftSetCaveWolfTransform_Params
{
	struct UObject_FTransform                          NewTransform;                                             // (Parm, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.InterpCaveWolfMeshRelativeTransform
struct ACaveWolf_Character_BP_C_InterpCaveWolfMeshRelativeTransform_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintAdjustOutputDamage
struct ACaveWolf_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPOnStartJump
struct ACaveWolf_Character_BP_C_BPOnStartJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPTimerNonDedicated
struct ACaveWolf_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetZiplineDirectionFromAnchor
struct ACaveWolf_Character_BP_C_GetZiplineDirectionFromAnchor_Params
{
	class AZipline_Anchor_C*                           Anchor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DownDirection;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetClosestPointOnLine
struct ACaveWolf_Character_BP_C_GetClosestPointOnLine_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     closestPoint;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetZiplineBuff
struct ACaveWolf_Character_BP_C_GetZiplineBuff_Params
{
	class ABuff_Zipline_CaveWolf_C*                    ZiplineBuff;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetTargetedZipline
struct ACaveWolf_Character_BP_C_GetTargetedZipline_Params
{
	class AZipline_Anchor_C*                           targetedZipline;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPNotifySetRider
struct ACaveWolf_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPNotifyClearRider
struct ACaveWolf_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.IsRotation Nearly Equal
struct ACaveWolf_Character_BP_C_IsRotation_Nearly_Equal_Params
{
	struct FRotator                                    A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.IsVectorNearlyEqual
struct ACaveWolf_Character_BP_C_IsVectorNearlyEqual_Params
{
	struct FVector                                     inVec;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InVec2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintCanRiderAttack
struct ACaveWolf_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.TryAttachingToZipline
struct ACaveWolf_Character_BP_C_TryAttachingToZipline_Params
{
	class AZipline_Anchor_C*                           overrideAnchor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     overrideStartLocation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              overrideFindLocationDistance;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideFindLocationDirection;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DontUseLineOfSightCheck;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPModifyHarvestingQuantity
struct ACaveWolf_Character_BP_C_BPModifyHarvestingQuantity_Params
{
	float*                                             originalQuantity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     resourceSelected;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.UserConstructionScript
struct ACaveWolf_Character_BP_C_UserConstructionScript_Params
{
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.TryAttachToZipline_RunOnServer
struct ACaveWolf_Character_BP_C_TryAttachToZipline_RunOnServer_Params
{
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ACaveWolf_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.DoZiplineTurn
struct ACaveWolf_Character_BP_C_DoZiplineTurn_Params
{
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.PreZiplineTurn_Multicast
struct ACaveWolf_Character_BP_C_PreZiplineTurn_Multicast_Params
{
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ZiplineTargetingTimer
struct ACaveWolf_Character_BP_C_ZiplineTargetingTimer_Params
{
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.AttachToZipline_RunOnServer
struct ACaveWolf_Character_BP_C_AttachToZipline_RunOnServer_Params
{
	class AZipline_Anchor_C*                           ZiplineAnchor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.AttachToZipline_Multicast
struct ACaveWolf_Character_BP_C_AttachToZipline_Multicast_Params
{
	class AZipline_Anchor_C*                           ZiplineAnchor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.StartZiplineJumping
struct ACaveWolf_Character_BP_C_StartZiplineJumping_Params
{
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.CreateZiplineBuffAndStartRiding
struct ACaveWolf_Character_BP_C_CreateZiplineBuffAndStartRiding_Params
{
	class AZipline_Anchor_C*                           Anchor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.Multi_SoftSetCaveWolfTransform
struct ACaveWolf_Character_BP_C_Multi_SoftSetCaveWolfTransform_Params
{
	struct UObject_FTransform                          NewTransform;                                             // (Parm, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.SetInitialVelocity_Multicast
struct ACaveWolf_Character_BP_C_SetInitialVelocity_Multicast_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ResetZiplineJumping_RunOnServer
struct ACaveWolf_Character_BP_C_ResetZiplineJumping_RunOnServer_Params
{
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ResetZiplineJumping_Multicast
struct ACaveWolf_Character_BP_C_ResetZiplineJumping_Multicast_Params
{
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ResetForcePerFrameTicking
struct ACaveWolf_Character_BP_C_ResetForcePerFrameTicking_Params
{
};

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ExecuteUbergraph_CaveWolf_Character_BP
struct ACaveWolf_Character_BP_C_ExecuteUbergraph_CaveWolf_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

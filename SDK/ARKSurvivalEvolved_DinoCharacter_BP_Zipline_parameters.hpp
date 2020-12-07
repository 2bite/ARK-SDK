#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacter_BP_Zipline_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Get Zipline Buff
struct ADinoCharacter_BP_Zipline_C_Get_Zipline_Buff_Params
{
	class ABuff_Zipline_DinoBase_C*                    ZiplineBuff;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.OnOrderedMoveToOrFollow
struct ADinoCharacter_BP_Zipline_C_OnOrderedMoveToOrFollow_Params
{
	bool                                               moveTo;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPOnTamedProcessOrder
struct ADinoCharacter_BP_Zipline_C_BPOnTamedProcessOrder_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BlueprintOverrideWantsToRun
struct ADinoCharacter_BP_Zipline_C_BlueprintOverrideWantsToRun_Params
{
	bool*                                              bInputWantsToRun;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPOverrideMoveToOrder
struct ADinoCharacter_BP_Zipline_C_BPOverrideMoveToOrder_Params
{
	struct FVector*                                    MoveToLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          OrderingPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UpdateNonDediActive
struct ADinoCharacter_BP_Zipline_C_UpdateNonDediActive_Params
{
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Update Non Dedi Limits
struct ADinoCharacter_BP_Zipline_C_Update_Non_Dedi_Limits_Params
{
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UpdateCrosshair
struct ADinoCharacter_BP_Zipline_C_UpdateCrosshair_Params
{
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPNotifySetRider
struct ADinoCharacter_BP_Zipline_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPTimerServer
struct ADinoCharacter_BP_Zipline_C_BPTimerServer_Params
{
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SoftSetTransform
struct ADinoCharacter_BP_Zipline_C_SoftSetTransform_Params
{
	struct UObject_FTransform                          NewTransform;                                             // (Parm, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UpdateTPViewOffset
struct ADinoCharacter_BP_Zipline_C_UpdateTPViewOffset_Params
{
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetTargetMeshRelativeTransformPure
struct ADinoCharacter_BP_Zipline_C_GetTargetMeshRelativeTransformPure_Params
{
	struct UObject_FTransform                          Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.InterpMeshRelativeTransform
struct ADinoCharacter_BP_Zipline_C_InterpMeshRelativeTransform_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetTargetedZipline
struct ADinoCharacter_BP_Zipline_C_GetTargetedZipline_Params
{
	class AZipline_Anchor_C*                           targetedZipline;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ZiplineNonDediLogic
struct ADinoCharacter_BP_Zipline_C_ZiplineNonDediLogic_Params
{
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SetNonDediTimerTickEveryFrame
struct ADinoCharacter_BP_Zipline_C_SetNonDediTimerTickEveryFrame_Params
{
	bool                                               tickEveryFrame;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetClosestLocationToPointFromArray
struct ADinoCharacter_BP_Zipline_C_GetClosestLocationToPointFromArray_Params
{
	TArray<struct FVector>                             LocationsToTest;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Point;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClosestLocation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SetServerTimerTickEveryFrame
struct ADinoCharacter_BP_Zipline_C_SetServerTimerTickEveryFrame_Params
{
	bool                                               tickEveryFrame;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.CreateZiplineBuffAndStartRiding
struct ADinoCharacter_BP_Zipline_C_CreateZiplineBuffAndStartRiding_Params
{
	class AZipline_Anchor_C*                           Anchor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.IsTargetZiplineBlocked
struct ADinoCharacter_BP_Zipline_C_IsTargetZiplineBlocked_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AZipline_Anchor_C*                           Anchor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm)
	bool                                               HitReturn;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetClosestPointOnLine
struct ADinoCharacter_BP_Zipline_C_GetClosestPointOnLine_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     closestPoint;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.TryAttachingToZipline
struct ADinoCharacter_BP_Zipline_C_TryAttachingToZipline_Params
{
	class AZipline_Anchor_C*                           overrideAnchor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideStartLocation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideFindLocationDistance;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideFindLocationDirection;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPOnStartJump
struct ADinoCharacter_BP_Zipline_C_BPOnStartJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPNotifyClearRider
struct ADinoCharacter_BP_Zipline_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPTimerNonDedicated
struct ADinoCharacter_BP_Zipline_C_BPTimerNonDedicated_Params
{
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Is Dino Submerged
struct ADinoCharacter_BP_Zipline_C_Is_Dino_Submerged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UserConstructionScript
struct ADinoCharacter_BP_Zipline_C_UserConstructionScript_Params
{
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BlueprintAnimNotifyCustomEvent
struct ADinoCharacter_BP_Zipline_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.TryAttachToZipline_RunOnServer
struct ADinoCharacter_BP_Zipline_C_TryAttachToZipline_RunOnServer_Params
{
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.StartZiplineJumping
struct ADinoCharacter_BP_Zipline_C_StartZiplineJumping_Params
{
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.AttachToZipline_RunOnServer
struct ADinoCharacter_BP_Zipline_C_AttachToZipline_RunOnServer_Params
{
	class AZipline_Anchor_C*                           ZiplineAnchor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.AttachToZipline_Multicast
struct ADinoCharacter_BP_Zipline_C_AttachToZipline_Multicast_Params
{
	class AZipline_Anchor_C*                           ZiplineAnchor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ResetZiplineJumping_RunOnServer
struct ADinoCharacter_BP_Zipline_C_ResetZiplineJumping_RunOnServer_Params
{
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ResetZiplineJumping_Multicast
struct ADinoCharacter_BP_Zipline_C_ResetZiplineJumping_Multicast_Params
{
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ZiplineTargetingTimer
struct ADinoCharacter_BP_Zipline_C_ZiplineTargetingTimer_Params
{
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SetInitialVelocity_Multicast
struct ADinoCharacter_BP_Zipline_C_SetInitialVelocity_Multicast_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Multi_SoftSetTransform
struct ADinoCharacter_BP_Zipline_C_Multi_SoftSetTransform_Params
{
	struct UObject_FTransform                          NewTransform;                                             // (Parm, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.DoZiplineTurn
struct ADinoCharacter_BP_Zipline_C_DoZiplineTurn_Params
{
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.PreZiplineTurn_Multicast
struct ADinoCharacter_BP_Zipline_C_PreZiplineTurn_Multicast_Params
{
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.DebugSphere_Multicast
struct ADinoCharacter_BP_Zipline_C_DebugSphere_Multicast_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.DebugArrow_Multicast
struct ADinoCharacter_BP_Zipline_C_DebugArrow_Multicast_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewParam1;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewParam3;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ExecuteUbergraph_DinoCharacter_BP_Zipline
struct ADinoCharacter_BP_Zipline_C_ExecuteUbergraph_DinoCharacter_BP_Zipline_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

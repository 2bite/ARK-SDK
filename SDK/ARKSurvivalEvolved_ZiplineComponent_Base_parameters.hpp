#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ZiplineComponent_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetFinishedAttach_InterfaceCall
struct UZiplineComponent_Base_C_GetFinishedAttach_InterfaceCall_Params
{
	bool                                               bOutAttached;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetActiveTargetedZipline
struct UZiplineComponent_Base_C_GetActiveTargetedZipline_Params
{
	class APrimalStructure*                            Zipline;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Process Move to Order_InterfaceCall
struct UZiplineComponent_Base_C_Get_Process_Move_to_Order_InterfaceCall_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Current Move to Order Location_InterfaceCall
struct UZiplineComponent_Base_C_Get_Current_Move_to_Order_Location_InterfaceCall_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetClosestLocationToPointFromArray_InterfaceCall
struct UZiplineComponent_Base_C_GetClosestLocationToPointFromArray_InterfaceCall_Params
{
	struct FVector                                     InPoint;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             InArray;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     OutClosestPoint;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Zipline Buff_Interface Call
struct UZiplineComponent_Base_C_Get_Zipline_Buff_Interface_Call_Params
{
	class APrimalBuff*                                 Buff;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetKeepHanging_InterfaceCall
struct UZiplineComponent_Base_C_GetKeepHanging_InterfaceCall_Params
{
	bool                                               bKeepHanging;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Try Attaching to Zipline_InterfaceCall
struct UZiplineComponent_Base_C_Try_Attaching_to_Zipline_InterfaceCall_Params
{
	class APrimalStructure*                            overrideAnchor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideStartLocation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideFindLocationDistance;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     overrideFindLocationDirection;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDontUseLineOfSightCheck;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Is Hanging_InterfaceCall
struct UZiplineComponent_Base_C_Get_Is_Hanging_InterfaceCall_Params
{
	bool                                               bIsHanging;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Attach from Below_InterfaceCall
struct UZiplineComponent_Base_C_Get_Attach_from_Below_InterfaceCall_Params
{
	bool                                               bAttachFromBelow;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Zipline New Target Location_InterfaceCall
struct UZiplineComponent_Base_C_Get_Zipline_New_Target_Location_InterfaceCall_Params
{
	struct FVector                                     NewTargetLocation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Is Zipline Jumping_InterfaceCall
struct UZiplineComponent_Base_C_Get_Is_Zipline_Jumping_InterfaceCall_Params
{
	bool                                               bZiplineJumping;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Sliding_InterfaceCall
struct UZiplineComponent_Base_C_Get_Sliding_InterfaceCall_Params
{
	bool                                               bSliding;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Current Targeted Zipline_InterfaceCall
struct UZiplineComponent_Base_C_Get_Current_Targeted_Zipline_InterfaceCall_Params
{
	class APrimalStructure*                            Anchor;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Using Zipline_InterfaceCall
struct UZiplineComponent_Base_C_Get_Using_Zipline_InterfaceCall_Params
{
	bool                                               bUsingZipline;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Allow Zipline Jumping_InterfaceCall
struct UZiplineComponent_Base_C_Get_Allow_Zipline_Jumping_InterfaceCall_Params
{
	bool                                               bAllowZiplineJumping;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.FinishedAttaching
struct UZiplineComponent_Base_C_FinishedAttaching_Params
{
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.SoftSetTransform
struct UZiplineComponent_Base_C_SoftSetTransform_Params
{
	struct UObject_FTransform                          NewTransform;                                             // (Parm, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.AnimNotifyCustomEvent
struct UZiplineComponent_Base_C_AnimNotifyCustomEvent_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.OverrideMoveToOrder
struct UZiplineComponent_Base_C_OverrideMoveToOrder_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.TryAttachingToZipline
struct UZiplineComponent_Base_C_TryAttachingToZipline_Params
{
	class AZipline_Anchor_C*                           overrideAnchor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideStartLocation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideFindLocationDistance;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     overrideFindLocationDirection;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Create Zipline Buff and Start Riding
struct UZiplineComponent_Base_C_Create_Zipline_Buff_and_Start_Riding_Params
{
	class AZipline_Anchor_C*                           Anchor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.IsTargetZiplineBlocked
struct UZiplineComponent_Base_C_IsTargetZiplineBlocked_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AZipline_Anchor_C*                           Anchor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideFindLocationDistance;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm)
	bool                                               HitReturn;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.OnStartJump
struct UZiplineComponent_Base_C_OnStartJump_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.NotifyClearRider
struct UZiplineComponent_Base_C_NotifyClearRider_Params
{
	class AShooterCharacter*                           RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.NotifyRider
struct UZiplineComponent_Base_C_NotifyRider_Params
{
	class AShooterCharacter*                           Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetServerTickEveryFrame
struct UZiplineComponent_Base_C_SetServerTickEveryFrame_Params
{
	bool                                               TickEveryFrame;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.TimerServer
struct UZiplineComponent_Base_C_TimerServer_Params
{
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.TimerNonDedicated
struct UZiplineComponent_Base_C_TimerNonDedicated_Params
{
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Target Mesh Relative Transform Pure
struct UZiplineComponent_Base_C_Get_Target_Mesh_Relative_Transform_Pure_Params
{
	struct UObject_FTransform                          Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Update TPView Offset
struct UZiplineComponent_Base_C_Update_TPView_Offset_Params
{
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Update Non Dedi Active
struct UZiplineComponent_Base_C_Update_Non_Dedi_Active_Params
{
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Closest Point on Line
struct UZiplineComponent_Base_C_Get_Closest_Point_on_Line_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     closestPoint;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Update Crosshair
struct UZiplineComponent_Base_C_Update_Crosshair_Params
{
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetClosestLocationToPointFromArray
struct UZiplineComponent_Base_C_GetClosestLocationToPointFromArray_Params
{
	TArray<struct FVector>                             LocationsToTest;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Point;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClosestLocation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetZiplineBuff
struct UZiplineComponent_Base_C_GetZiplineBuff_Params
{
	class ABuff_Zipline_DinoBase_C*                    ZiplineBuff;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetTargetedZipline
struct UZiplineComponent_Base_C_GetTargetedZipline_Params
{
	class AZipline_Anchor_C*                           TargetedZipline;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.UpdateNonDediLimits
struct UZiplineComponent_Base_C_UpdateNonDediLimits_Params
{
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetNonDediTimerTickEveryFrame
struct UZiplineComponent_Base_C_SetNonDediTimerTickEveryFrame_Params
{
	bool                                               TickEveryFrame;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.InterpMeshRelativeTransform
struct UZiplineComponent_Base_C_InterpMeshRelativeTransform_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.BPOnComponentCreated
struct UZiplineComponent_Base_C_BPOnComponentCreated_Params
{
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.ZiplineNonDediLogic
struct UZiplineComponent_Base_C_ZiplineNonDediLogic_Params
{
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Multi Soft Set Transform_InterfaceCall
struct UZiplineComponent_Base_C_Multi_Soft_Set_Transform_InterfaceCall_Params
{
	struct UObject_FTransform                          NewTransform;                                             // (Parm, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Initial Velocity Multicast_InterfaceCall
struct UZiplineComponent_Base_C_Set_Initial_Velocity_Multicast_InterfaceCall_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Is Hanging_InterfaceCall
struct UZiplineComponent_Base_C_Set_Is_Hanging_InterfaceCall_Params
{
	bool                                               bNewIsHanging;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Non Dedi Tick Every Frame_InterfaceCall
struct UZiplineComponent_Base_C_Set_Non_Dedi_Tick_Every_Frame_InterfaceCall_Params
{
	bool                                               bNewTickEveryFrame;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Sliding_InterfaceCall
struct UZiplineComponent_Base_C_Set_Sliding_InterfaceCall_Params
{
	bool                                               bNewSliding;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Zipline Jump Off Direction AI_InterfaceCall
struct UZiplineComponent_Base_C_Set_Zipline_Jump_Off_Direction_AI_InterfaceCall_Params
{
	struct FVector                                     NewZiplineJumpOffDirectionAI;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Zipline New Target Location_InterfaceCall
struct UZiplineComponent_Base_C_Set_Zipline_New_Target_Location_InterfaceCall_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Start Zipline Jumping_InterfaceCall
struct UZiplineComponent_Base_C_Start_Zipline_Jumping_InterfaceCall_Params
{
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetKeepHanging_InterfaceCall
struct UZiplineComponent_Base_C_SetKeepHanging_InterfaceCall_Params
{
	bool                                               bNewKeepHanging;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetUsingZipline_InterfaceCall
struct UZiplineComponent_Base_C_SetUsingZipline_InterfaceCall_Params
{
	bool                                               bUsingZipline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Zipline Jump Off Impulse AI_InterfaceCall
struct UZiplineComponent_Base_C_Set_Zipline_Jump_Off_Impulse_AI_InterfaceCall_Params
{
	struct FVector                                     NewZiplineJumpOffImpulseAI;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Finished Attach_Interface Call
struct UZiplineComponent_Base_C_Set_Finished_Attach_Interface_Call_Params
{
	bool                                               bNewFinishedAttach;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetProcessMoveToOrder_InterfaceCall
struct UZiplineComponent_Base_C_SetProcessMoveToOrder_InterfaceCall_Params
{
	bool                                               NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Current Move To Order Location Interface Call
struct UZiplineComponent_Base_C_Set_Current_Move_To_Order_Location_Interface_Call_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.ZiplineTargetingTimer
struct UZiplineComponent_Base_C_ZiplineTargetingTimer_Params
{
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.ResetZiplineJumping_RunOnServer
struct UZiplineComponent_Base_C_ResetZiplineJumping_RunOnServer_Params
{
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.ResetZiplineJumping_Multicast
struct UZiplineComponent_Base_C_ResetZiplineJumping_Multicast_Params
{
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.StartZiplineJumping
struct UZiplineComponent_Base_C_StartZiplineJumping_Params
{
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.AttachToZipline_RunOnServer
struct UZiplineComponent_Base_C_AttachToZipline_RunOnServer_Params
{
	class AZipline_Anchor_C*                           ZiplineAnchor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.AttachToZipline_Multicast
struct UZiplineComponent_Base_C_AttachToZipline_Multicast_Params
{
	class AZipline_Anchor_C*                           ZiplineAnchor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.TryAttachToZipline_RunOnServer
struct UZiplineComponent_Base_C_TryAttachToZipline_RunOnServer_Params
{
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.DoZiplineTurn
struct UZiplineComponent_Base_C_DoZiplineTurn_Params
{
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.PreZiplineTurn_Multicast
struct UZiplineComponent_Base_C_PreZiplineTurn_Multicast_Params
{
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetInitialVelocity_Multicast
struct UZiplineComponent_Base_C_SetInitialVelocity_Multicast_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Multi_SoftSetTransform
struct UZiplineComponent_Base_C_Multi_SoftSetTransform_Params
{
	struct UObject_FTransform                          NewTransform;                                             // (Parm, IsPlainOldData)
};

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.ExecuteUbergraph_ZiplineComponent_Base
struct UZiplineComponent_Base_C_ExecuteUbergraph_ZiplineComponent_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

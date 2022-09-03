#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Interface_Zipline_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Interface_Zipline.Interface_Zipline_C.GetFinishedAttach_InterfaceCall
struct UInterface_Zipline_C_GetFinishedAttach_InterfaceCall_Params
{
	bool                                               bOutAttached;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.GetActiveTargetedZipline
struct UInterface_Zipline_C_GetActiveTargetedZipline_Params
{
	class APrimalStructure*                            Zipline;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.SetProcessMoveToOrder_InterfaceCall
struct UInterface_Zipline_C_SetProcessMoveToOrder_InterfaceCall_Params
{
	bool                                               NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Set Current Move To Order Location Interface Call
struct UInterface_Zipline_C_Set_Current_Move_To_Order_Location_Interface_Call_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Get Current Move to Order Location_InterfaceCall
struct UInterface_Zipline_C_Get_Current_Move_to_Order_Location_InterfaceCall_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Get Process Move to Order_InterfaceCall
struct UInterface_Zipline_C_Get_Process_Move_to_Order_InterfaceCall_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.GetClosestLocationToPointFromArray_InterfaceCall
struct UInterface_Zipline_C_GetClosestLocationToPointFromArray_InterfaceCall_Params
{
	struct FVector                                     InPoint;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             InArray;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     OutClosestPoint;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Set Zipline Jump Off Impulse AI_InterfaceCall
struct UInterface_Zipline_C_Set_Zipline_Jump_Off_Impulse_AI_InterfaceCall_Params
{
	struct FVector                                     NewZiplineJumpOffImpulseAI;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Get Zipline Buff_Interface Call
struct UInterface_Zipline_C_Get_Zipline_Buff_Interface_Call_Params
{
	class APrimalBuff*                                 Buff;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Set Finished Attach_Interface Call
struct UInterface_Zipline_C_Set_Finished_Attach_Interface_Call_Params
{
	bool                                               bNewFinishedAttach;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.SetKeepHanging_InterfaceCall
struct UInterface_Zipline_C_SetKeepHanging_InterfaceCall_Params
{
	bool                                               bNewKeepHanging;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.GetKeepHanging_InterfaceCall
struct UInterface_Zipline_C_GetKeepHanging_InterfaceCall_Params
{
	bool                                               bKeepHanging;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.SetUsingZipline_InterfaceCall
struct UInterface_Zipline_C_SetUsingZipline_InterfaceCall_Params
{
	bool                                               bUsingZipline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Get Allow Zipline Jumping_InterfaceCall
struct UInterface_Zipline_C_Get_Allow_Zipline_Jumping_InterfaceCall_Params
{
	bool                                               bAllowZiplineJumping;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Get Using Zipline_InterfaceCall
struct UInterface_Zipline_C_Get_Using_Zipline_InterfaceCall_Params
{
	bool                                               bUsingZipline;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Get Current Targeted Zipline_InterfaceCall
struct UInterface_Zipline_C_Get_Current_Targeted_Zipline_InterfaceCall_Params
{
	class APrimalStructure*                            Anchor;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Start Zipline Jumping_InterfaceCall
struct UInterface_Zipline_C_Start_Zipline_Jumping_InterfaceCall_Params
{
};

// Function Interface_Zipline.Interface_Zipline_C.Multi Soft Set Transform_InterfaceCall
struct UInterface_Zipline_C_Multi_Soft_Set_Transform_InterfaceCall_Params
{
	struct UObject_FTransform                          NewTransform;                                             // (Parm, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Get Sliding_InterfaceCall
struct UInterface_Zipline_C_Get_Sliding_InterfaceCall_Params
{
	bool                                               bSliding;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Set Sliding_InterfaceCall
struct UInterface_Zipline_C_Set_Sliding_InterfaceCall_Params
{
	bool                                               bNewSliding;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Set Zipline Jump Off Direction AI_InterfaceCall
struct UInterface_Zipline_C_Set_Zipline_Jump_Off_Direction_AI_InterfaceCall_Params
{
	struct FVector                                     NewZiplineJumpOffDirectionAI;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Get Is Zipline Jumping_InterfaceCall
struct UInterface_Zipline_C_Get_Is_Zipline_Jumping_InterfaceCall_Params
{
	bool                                               bZiplineJumping;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Set Initial Velocity Multicast_InterfaceCall
struct UInterface_Zipline_C_Set_Initial_Velocity_Multicast_InterfaceCall_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Set Zipline New Target Location_InterfaceCall
struct UInterface_Zipline_C_Set_Zipline_New_Target_Location_InterfaceCall_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Get Zipline New Target Location_InterfaceCall
struct UInterface_Zipline_C_Get_Zipline_New_Target_Location_InterfaceCall_Params
{
	struct FVector                                     NewTargetLocation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Get Attach from Below_InterfaceCall
struct UInterface_Zipline_C_Get_Attach_from_Below_InterfaceCall_Params
{
	bool                                               bAttachFromBelow;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Set Is Hanging_InterfaceCall
struct UInterface_Zipline_C_Set_Is_Hanging_InterfaceCall_Params
{
	bool                                               bNewIsHanging;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Get Is Hanging_InterfaceCall
struct UInterface_Zipline_C_Get_Is_Hanging_InterfaceCall_Params
{
	bool                                               bIsHanging;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Set Non Dedi Tick Every Frame_InterfaceCall
struct UInterface_Zipline_C_Set_Non_Dedi_Tick_Every_Frame_InterfaceCall_Params
{
	bool                                               bNewTickEveryFrame;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Zipline.Interface_Zipline_C.Try Attaching to Zipline_InterfaceCall
struct UInterface_Zipline_C_Try_Attaching_to_Zipline_InterfaceCall_Params
{
	class APrimalStructure*                            overrideAnchor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideStartLocation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideFindLocationDistance;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     overrideFindLocationDirection;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDontUseLineOfSightCheck;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Interface_Zipline_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interface_Zipline.Interface_Zipline_C.GetFinishedAttach_InterfaceCall
// ()
// Parameters:
// bool                           bOutAttached                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::GetFinishedAttach_InterfaceCall(bool* bOutAttached)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.GetFinishedAttach_InterfaceCall");

	UInterface_Zipline_C_GetFinishedAttach_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutAttached != nullptr)
		*bOutAttached = params.bOutAttached;
}


// Function Interface_Zipline.Interface_Zipline_C.GetActiveTargetedZipline
// ()
// Parameters:
// class APrimalStructure*        Zipline                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::GetActiveTargetedZipline(class APrimalStructure** Zipline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.GetActiveTargetedZipline");

	UInterface_Zipline_C_GetActiveTargetedZipline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Zipline != nullptr)
		*Zipline = params.Zipline;
}


// Function Interface_Zipline.Interface_Zipline_C.SetProcessMoveToOrder_InterfaceCall
// ()
// Parameters:
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::SetProcessMoveToOrder_InterfaceCall(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.SetProcessMoveToOrder_InterfaceCall");

	UInterface_Zipline_C_SetProcessMoveToOrder_InterfaceCall_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Zipline.Interface_Zipline_C.Set Current Move To Order Location Interface Call
// ()
// Parameters:
// struct FVector                 NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Set_Current_Move_To_Order_Location_Interface_Call(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Set Current Move To Order Location Interface Call");

	UInterface_Zipline_C_Set_Current_Move_To_Order_Location_Interface_Call_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Zipline.Interface_Zipline_C.Get Current Move to Order Location_InterfaceCall
// ()
// Parameters:
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Get_Current_Move_to_Order_Location_InterfaceCall(struct FVector* OutLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Current Move to Order Location_InterfaceCall");

	UInterface_Zipline_C_Get_Current_Move_to_Order_Location_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
}


// Function Interface_Zipline.Interface_Zipline_C.Get Process Move to Order_InterfaceCall
// ()
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Get_Process_Move_to_Order_InterfaceCall(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Process Move to Order_InterfaceCall");

	UInterface_Zipline_C_Get_Process_Move_to_Order_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Interface_Zipline.Interface_Zipline_C.GetClosestLocationToPointFromArray_InterfaceCall
// ()
// Parameters:
// struct FVector                 InPoint                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         InArray                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 OutClosestPoint                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::GetClosestLocationToPointFromArray_InterfaceCall(const struct FVector& InPoint, TArray<struct FVector>* InArray, struct FVector* OutClosestPoint, int* OutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.GetClosestLocationToPointFromArray_InterfaceCall");

	UInterface_Zipline_C_GetClosestLocationToPointFromArray_InterfaceCall_Params params;
	params.InPoint = InPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InArray != nullptr)
		*InArray = params.InArray;
	if (OutClosestPoint != nullptr)
		*OutClosestPoint = params.OutClosestPoint;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;
}


// Function Interface_Zipline.Interface_Zipline_C.Set Zipline Jump Off Impulse AI_InterfaceCall
// ()
// Parameters:
// struct FVector                 NewZiplineJumpOffImpulseAI     (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Set_Zipline_Jump_Off_Impulse_AI_InterfaceCall(const struct FVector& NewZiplineJumpOffImpulseAI)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Set Zipline Jump Off Impulse AI_InterfaceCall");

	UInterface_Zipline_C_Set_Zipline_Jump_Off_Impulse_AI_InterfaceCall_Params params;
	params.NewZiplineJumpOffImpulseAI = NewZiplineJumpOffImpulseAI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Zipline.Interface_Zipline_C.Get Zipline Buff_Interface Call
// ()
// Parameters:
// class APrimalBuff*             Buff                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Get_Zipline_Buff_Interface_Call(class APrimalBuff** Buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Zipline Buff_Interface Call");

	UInterface_Zipline_C_Get_Zipline_Buff_Interface_Call_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Buff != nullptr)
		*Buff = params.Buff;
}


// Function Interface_Zipline.Interface_Zipline_C.Set Finished Attach_Interface Call
// ()
// Parameters:
// bool                           bNewFinishedAttach             (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Set_Finished_Attach_Interface_Call(bool bNewFinishedAttach)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Set Finished Attach_Interface Call");

	UInterface_Zipline_C_Set_Finished_Attach_Interface_Call_Params params;
	params.bNewFinishedAttach = bNewFinishedAttach;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Zipline.Interface_Zipline_C.SetKeepHanging_InterfaceCall
// ()
// Parameters:
// bool                           bNewKeepHanging                (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::SetKeepHanging_InterfaceCall(bool bNewKeepHanging)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.SetKeepHanging_InterfaceCall");

	UInterface_Zipline_C_SetKeepHanging_InterfaceCall_Params params;
	params.bNewKeepHanging = bNewKeepHanging;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Zipline.Interface_Zipline_C.GetKeepHanging_InterfaceCall
// ()
// Parameters:
// bool                           bKeepHanging                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::GetKeepHanging_InterfaceCall(bool* bKeepHanging)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.GetKeepHanging_InterfaceCall");

	UInterface_Zipline_C_GetKeepHanging_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bKeepHanging != nullptr)
		*bKeepHanging = params.bKeepHanging;
}


// Function Interface_Zipline.Interface_Zipline_C.SetUsingZipline_InterfaceCall
// ()
// Parameters:
// bool                           bUsingZipline                  (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::SetUsingZipline_InterfaceCall(bool bUsingZipline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.SetUsingZipline_InterfaceCall");

	UInterface_Zipline_C_SetUsingZipline_InterfaceCall_Params params;
	params.bUsingZipline = bUsingZipline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Zipline.Interface_Zipline_C.Get Allow Zipline Jumping_InterfaceCall
// ()
// Parameters:
// bool                           bAllowZiplineJumping           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Get_Allow_Zipline_Jumping_InterfaceCall(bool* bAllowZiplineJumping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Allow Zipline Jumping_InterfaceCall");

	UInterface_Zipline_C_Get_Allow_Zipline_Jumping_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAllowZiplineJumping != nullptr)
		*bAllowZiplineJumping = params.bAllowZiplineJumping;
}


// Function Interface_Zipline.Interface_Zipline_C.Get Using Zipline_InterfaceCall
// ()
// Parameters:
// bool                           bUsingZipline                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Get_Using_Zipline_InterfaceCall(bool* bUsingZipline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Using Zipline_InterfaceCall");

	UInterface_Zipline_C_Get_Using_Zipline_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUsingZipline != nullptr)
		*bUsingZipline = params.bUsingZipline;
}


// Function Interface_Zipline.Interface_Zipline_C.Get Current Targeted Zipline_InterfaceCall
// ()
// Parameters:
// class APrimalStructure*        Anchor                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Get_Current_Targeted_Zipline_InterfaceCall(class APrimalStructure** Anchor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Current Targeted Zipline_InterfaceCall");

	UInterface_Zipline_C_Get_Current_Targeted_Zipline_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Anchor != nullptr)
		*Anchor = params.Anchor;
}


// Function Interface_Zipline.Interface_Zipline_C.Start Zipline Jumping_InterfaceCall
// ()

void UInterface_Zipline_C::Start_Zipline_Jumping_InterfaceCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Start Zipline Jumping_InterfaceCall");

	UInterface_Zipline_C_Start_Zipline_Jumping_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Zipline.Interface_Zipline_C.Multi Soft Set Transform_InterfaceCall
// ()
// Parameters:
// struct UObject_FTransform      NewTransform                   (Parm, IsPlainOldData)

void UInterface_Zipline_C::Multi_Soft_Set_Transform_InterfaceCall(const struct UObject_FTransform& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Multi Soft Set Transform_InterfaceCall");

	UInterface_Zipline_C_Multi_Soft_Set_Transform_InterfaceCall_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Zipline.Interface_Zipline_C.Get Sliding_InterfaceCall
// ()
// Parameters:
// bool                           bSliding                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Get_Sliding_InterfaceCall(bool* bSliding)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Sliding_InterfaceCall");

	UInterface_Zipline_C_Get_Sliding_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSliding != nullptr)
		*bSliding = params.bSliding;
}


// Function Interface_Zipline.Interface_Zipline_C.Set Sliding_InterfaceCall
// ()
// Parameters:
// bool                           bNewSliding                    (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Set_Sliding_InterfaceCall(bool bNewSliding)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Set Sliding_InterfaceCall");

	UInterface_Zipline_C_Set_Sliding_InterfaceCall_Params params;
	params.bNewSliding = bNewSliding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Zipline.Interface_Zipline_C.Set Zipline Jump Off Direction AI_InterfaceCall
// ()
// Parameters:
// struct FVector                 NewZiplineJumpOffDirectionAI   (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Set_Zipline_Jump_Off_Direction_AI_InterfaceCall(const struct FVector& NewZiplineJumpOffDirectionAI)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Set Zipline Jump Off Direction AI_InterfaceCall");

	UInterface_Zipline_C_Set_Zipline_Jump_Off_Direction_AI_InterfaceCall_Params params;
	params.NewZiplineJumpOffDirectionAI = NewZiplineJumpOffDirectionAI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Zipline.Interface_Zipline_C.Get Is Zipline Jumping_InterfaceCall
// ()
// Parameters:
// bool                           bZiplineJumping                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Get_Is_Zipline_Jumping_InterfaceCall(bool* bZiplineJumping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Is Zipline Jumping_InterfaceCall");

	UInterface_Zipline_C_Get_Is_Zipline_Jumping_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bZiplineJumping != nullptr)
		*bZiplineJumping = params.bZiplineJumping;
}


// Function Interface_Zipline.Interface_Zipline_C.Set Initial Velocity Multicast_InterfaceCall
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Set_Initial_Velocity_Multicast_InterfaceCall(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Set Initial Velocity Multicast_InterfaceCall");

	UInterface_Zipline_C_Set_Initial_Velocity_Multicast_InterfaceCall_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Zipline.Interface_Zipline_C.Set Zipline New Target Location_InterfaceCall
// ()
// Parameters:
// struct FVector                 NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Set_Zipline_New_Target_Location_InterfaceCall(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Set Zipline New Target Location_InterfaceCall");

	UInterface_Zipline_C_Set_Zipline_New_Target_Location_InterfaceCall_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Zipline.Interface_Zipline_C.Get Zipline New Target Location_InterfaceCall
// ()
// Parameters:
// struct FVector                 NewTargetLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Get_Zipline_New_Target_Location_InterfaceCall(struct FVector* NewTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Zipline New Target Location_InterfaceCall");

	UInterface_Zipline_C_Get_Zipline_New_Target_Location_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewTargetLocation != nullptr)
		*NewTargetLocation = params.NewTargetLocation;
}


// Function Interface_Zipline.Interface_Zipline_C.Get Attach from Below_InterfaceCall
// ()
// Parameters:
// bool                           bAttachFromBelow               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Get_Attach_from_Below_InterfaceCall(bool* bAttachFromBelow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Attach from Below_InterfaceCall");

	UInterface_Zipline_C_Get_Attach_from_Below_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAttachFromBelow != nullptr)
		*bAttachFromBelow = params.bAttachFromBelow;
}


// Function Interface_Zipline.Interface_Zipline_C.Set Is Hanging_InterfaceCall
// ()
// Parameters:
// bool                           bNewIsHanging                  (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Set_Is_Hanging_InterfaceCall(bool bNewIsHanging)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Set Is Hanging_InterfaceCall");

	UInterface_Zipline_C_Set_Is_Hanging_InterfaceCall_Params params;
	params.bNewIsHanging = bNewIsHanging;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Zipline.Interface_Zipline_C.Get Is Hanging_InterfaceCall
// ()
// Parameters:
// bool                           bIsHanging                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Get_Is_Hanging_InterfaceCall(bool* bIsHanging)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Get Is Hanging_InterfaceCall");

	UInterface_Zipline_C_Get_Is_Hanging_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsHanging != nullptr)
		*bIsHanging = params.bIsHanging;
}


// Function Interface_Zipline.Interface_Zipline_C.Set Non Dedi Tick Every Frame_InterfaceCall
// ()
// Parameters:
// bool                           bNewTickEveryFrame             (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Set_Non_Dedi_Tick_Every_Frame_InterfaceCall(bool bNewTickEveryFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Set Non Dedi Tick Every Frame_InterfaceCall");

	UInterface_Zipline_C_Set_Non_Dedi_Tick_Every_Frame_InterfaceCall_Params params;
	params.bNewTickEveryFrame = bNewTickEveryFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Zipline.Interface_Zipline_C.Try Attaching to Zipline_InterfaceCall
// ()
// Parameters:
// class APrimalStructure*        overrideAnchor                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OverrideStartLocation          (Parm, ZeroConstructor, IsPlainOldData)
// float                          OverrideFindLocationDistance   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 overrideFindLocationDirection  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDontUseLineOfSightCheck       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Zipline_C::Try_Attaching_to_Zipline_InterfaceCall(class APrimalStructure* overrideAnchor, const struct FVector& OverrideStartLocation, float OverrideFindLocationDistance, const struct FVector& overrideFindLocationDirection, bool bDontUseLineOfSightCheck, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Zipline.Interface_Zipline_C.Try Attaching to Zipline_InterfaceCall");

	UInterface_Zipline_C_Try_Attaching_to_Zipline_InterfaceCall_Params params;
	params.overrideAnchor = overrideAnchor;
	params.OverrideStartLocation = OverrideStartLocation;
	params.OverrideFindLocationDistance = OverrideFindLocationDistance;
	params.overrideFindLocationDirection = overrideFindLocationDirection;
	params.bDontUseLineOfSightCheck = bDontUseLineOfSightCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

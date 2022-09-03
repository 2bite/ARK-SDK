// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ZiplineComponent_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetFinishedAttach_InterfaceCall
// ()
// Parameters:
// bool                           bOutAttached                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::GetFinishedAttach_InterfaceCall(bool* bOutAttached)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetFinishedAttach_InterfaceCall");

	UZiplineComponent_Base_C_GetFinishedAttach_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutAttached != nullptr)
		*bOutAttached = params.bOutAttached;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetActiveTargetedZipline
// ()
// Parameters:
// class APrimalStructure*        Zipline                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::GetActiveTargetedZipline(class APrimalStructure** Zipline)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetActiveTargetedZipline");

	UZiplineComponent_Base_C_GetActiveTargetedZipline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Zipline != nullptr)
		*Zipline = params.Zipline;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Process Move to Order_InterfaceCall
// ()
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Get_Process_Move_to_Order_InterfaceCall(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Process Move to Order_InterfaceCall");

	UZiplineComponent_Base_C_Get_Process_Move_to_Order_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Current Move to Order Location_InterfaceCall
// ()
// Parameters:
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Get_Current_Move_to_Order_Location_InterfaceCall(struct FVector* OutLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Current Move to Order Location_InterfaceCall");

	UZiplineComponent_Base_C_Get_Current_Move_to_Order_Location_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetClosestLocationToPointFromArray_InterfaceCall
// ()
// Parameters:
// struct FVector                 InPoint                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         InArray                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 OutClosestPoint                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::GetClosestLocationToPointFromArray_InterfaceCall(const struct FVector& InPoint, TArray<struct FVector>* InArray, struct FVector* OutClosestPoint, int* OutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetClosestLocationToPointFromArray_InterfaceCall");

	UZiplineComponent_Base_C_GetClosestLocationToPointFromArray_InterfaceCall_Params params;
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


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Zipline Buff_Interface Call
// ()
// Parameters:
// class APrimalBuff*             Buff                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Get_Zipline_Buff_Interface_Call(class APrimalBuff** Buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Zipline Buff_Interface Call");

	UZiplineComponent_Base_C_Get_Zipline_Buff_Interface_Call_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Buff != nullptr)
		*Buff = params.Buff;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetKeepHanging_InterfaceCall
// ()
// Parameters:
// bool                           bKeepHanging                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::GetKeepHanging_InterfaceCall(bool* bKeepHanging)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetKeepHanging_InterfaceCall");

	UZiplineComponent_Base_C_GetKeepHanging_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bKeepHanging != nullptr)
		*bKeepHanging = params.bKeepHanging;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Try Attaching to Zipline_InterfaceCall
// ()
// Parameters:
// class APrimalStructure*        overrideAnchor                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OverrideStartLocation          (Parm, ZeroConstructor, IsPlainOldData)
// float                          OverrideFindLocationDistance   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 overrideFindLocationDirection  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDontUseLineOfSightCheck       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Try_Attaching_to_Zipline_InterfaceCall(class APrimalStructure* overrideAnchor, const struct FVector& OverrideStartLocation, float OverrideFindLocationDistance, const struct FVector& overrideFindLocationDirection, bool bDontUseLineOfSightCheck, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Try Attaching to Zipline_InterfaceCall");

	UZiplineComponent_Base_C_Try_Attaching_to_Zipline_InterfaceCall_Params params;
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


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Is Hanging_InterfaceCall
// ()
// Parameters:
// bool                           bIsHanging                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Get_Is_Hanging_InterfaceCall(bool* bIsHanging)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Is Hanging_InterfaceCall");

	UZiplineComponent_Base_C_Get_Is_Hanging_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsHanging != nullptr)
		*bIsHanging = params.bIsHanging;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Attach from Below_InterfaceCall
// ()
// Parameters:
// bool                           bAttachFromBelow               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Get_Attach_from_Below_InterfaceCall(bool* bAttachFromBelow)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Attach from Below_InterfaceCall");

	UZiplineComponent_Base_C_Get_Attach_from_Below_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAttachFromBelow != nullptr)
		*bAttachFromBelow = params.bAttachFromBelow;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Zipline New Target Location_InterfaceCall
// ()
// Parameters:
// struct FVector                 NewTargetLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Get_Zipline_New_Target_Location_InterfaceCall(struct FVector* NewTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Zipline New Target Location_InterfaceCall");

	UZiplineComponent_Base_C_Get_Zipline_New_Target_Location_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewTargetLocation != nullptr)
		*NewTargetLocation = params.NewTargetLocation;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Is Zipline Jumping_InterfaceCall
// ()
// Parameters:
// bool                           bZiplineJumping                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Get_Is_Zipline_Jumping_InterfaceCall(bool* bZiplineJumping)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Is Zipline Jumping_InterfaceCall");

	UZiplineComponent_Base_C_Get_Is_Zipline_Jumping_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bZiplineJumping != nullptr)
		*bZiplineJumping = params.bZiplineJumping;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Sliding_InterfaceCall
// ()
// Parameters:
// bool                           bSliding                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Get_Sliding_InterfaceCall(bool* bSliding)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Sliding_InterfaceCall");

	UZiplineComponent_Base_C_Get_Sliding_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSliding != nullptr)
		*bSliding = params.bSliding;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Current Targeted Zipline_InterfaceCall
// ()
// Parameters:
// class APrimalStructure*        Anchor                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Get_Current_Targeted_Zipline_InterfaceCall(class APrimalStructure** Anchor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Current Targeted Zipline_InterfaceCall");

	UZiplineComponent_Base_C_Get_Current_Targeted_Zipline_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Anchor != nullptr)
		*Anchor = params.Anchor;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Using Zipline_InterfaceCall
// ()
// Parameters:
// bool                           bUsingZipline                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Get_Using_Zipline_InterfaceCall(bool* bUsingZipline)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Using Zipline_InterfaceCall");

	UZiplineComponent_Base_C_Get_Using_Zipline_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUsingZipline != nullptr)
		*bUsingZipline = params.bUsingZipline;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Allow Zipline Jumping_InterfaceCall
// ()
// Parameters:
// bool                           bAllowZiplineJumping           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Get_Allow_Zipline_Jumping_InterfaceCall(bool* bAllowZiplineJumping)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Allow Zipline Jumping_InterfaceCall");

	UZiplineComponent_Base_C_Get_Allow_Zipline_Jumping_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAllowZiplineJumping != nullptr)
		*bAllowZiplineJumping = params.bAllowZiplineJumping;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.FinishedAttaching
// ()

void UZiplineComponent_Base_C::FinishedAttaching()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.FinishedAttaching");

	UZiplineComponent_Base_C_FinishedAttaching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.SoftSetTransform
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct UObject_FTransform      NewTransform                   (Parm, IsPlainOldData)

void UZiplineComponent_Base_C::STATIC_SoftSetTransform(const struct UObject_FTransform& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.SoftSetTransform");

	UZiplineComponent_Base_C_SoftSetTransform_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.AnimNotifyCustomEvent
// (Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::STATIC_AnimNotifyCustomEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.AnimNotifyCustomEvent");

	UZiplineComponent_Base_C_AnimNotifyCustomEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.OverrideMoveToOrder
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverride                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::OverrideMoveToOrder(const struct FVector& Location, bool* bOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.OverrideMoveToOrder");

	UZiplineComponent_Base_C_OverrideMoveToOrder_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOverride != nullptr)
		*bOverride = params.bOverride;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.TryAttachingToZipline
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZipline_Anchor_C*       overrideAnchor                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OverrideStartLocation          (Parm, ZeroConstructor, IsPlainOldData)
// float                          OverrideFindLocationDistance   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 overrideFindLocationDirection  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::STATIC_TryAttachingToZipline(class AZipline_Anchor_C* overrideAnchor, const struct FVector& OverrideStartLocation, float OverrideFindLocationDistance, const struct FVector& overrideFindLocationDirection, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.TryAttachingToZipline");

	UZiplineComponent_Base_C_TryAttachingToZipline_Params params;
	params.overrideAnchor = overrideAnchor;
	params.OverrideStartLocation = OverrideStartLocation;
	params.OverrideFindLocationDistance = OverrideFindLocationDistance;
	params.overrideFindLocationDirection = overrideFindLocationDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Create Zipline Buff and Start Riding
// ()
// Parameters:
// class AZipline_Anchor_C*       Anchor                         (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Create_Zipline_Buff_and_Start_Riding(class AZipline_Anchor_C* Anchor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Create Zipline Buff and Start Riding");

	UZiplineComponent_Base_C_Create_Zipline_Buff_and_Start_Riding_Params params;
	params.Anchor = Anchor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.IsTargetZiplineBlocked
// (NetReliable, Native, Static, MulticastDelegate, Private, Protected, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// class AZipline_Anchor_C*       Anchor                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          OverrideFindLocationDistance   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm)
// bool                           HitReturn                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::STATIC_IsTargetZiplineBlocked(const struct FVector& Location, class AZipline_Anchor_C* Anchor, float OverrideFindLocationDistance, struct FHitResult* HitResult, bool* HitReturn, struct FVector* StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.IsTargetZiplineBlocked");

	UZiplineComponent_Base_C_IsTargetZiplineBlocked_Params params;
	params.Location = Location;
	params.Anchor = Anchor;
	params.OverrideFindLocationDistance = OverrideFindLocationDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;
	if (HitReturn != nullptr)
		*HitReturn = params.HitReturn;
	if (StartLocation != nullptr)
		*StartLocation = params.StartLocation;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.OnStartJump
// ()
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::OnStartJump(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.OnStartJump");

	UZiplineComponent_Base_C_OnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.NotifyClearRider
// ()
// Parameters:
// class AShooterCharacter*       RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::NotifyClearRider(class AShooterCharacter* RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.NotifyClearRider");

	UZiplineComponent_Base_C_NotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.NotifyRider
// ()
// Parameters:
// class AShooterCharacter*       Rider                          (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::NotifyRider(class AShooterCharacter* Rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.NotifyRider");

	UZiplineComponent_Base_C_NotifyRider_Params params;
	params.Rider = Rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetServerTickEveryFrame
// ()
// Parameters:
// bool                           TickEveryFrame                 (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::SetServerTickEveryFrame(bool TickEveryFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetServerTickEveryFrame");

	UZiplineComponent_Base_C_SetServerTickEveryFrame_Params params;
	params.TickEveryFrame = TickEveryFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.TimerServer
// ()

void UZiplineComponent_Base_C::TimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.TimerServer");

	UZiplineComponent_Base_C_TimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.TimerNonDedicated
// ()

void UZiplineComponent_Base_C::TimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.TimerNonDedicated");

	UZiplineComponent_Base_C_TimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Target Mesh Relative Transform Pure
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct UObject_FTransform      Result                         (Parm, OutParm, IsPlainOldData)

void UZiplineComponent_Base_C::STATIC_Get_Target_Mesh_Relative_Transform_Pure(struct UObject_FTransform* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Target Mesh Relative Transform Pure");

	UZiplineComponent_Base_C_Get_Target_Mesh_Relative_Transform_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Update TPView Offset
// ()

void UZiplineComponent_Base_C::Update_TPView_Offset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Update TPView Offset");

	UZiplineComponent_Base_C_Update_TPView_Offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Update Non Dedi Active
// ()

void UZiplineComponent_Base_C::Update_Non_Dedi_Active()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Update Non Dedi Active");

	UZiplineComponent_Base_C_Update_Non_Dedi_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Closest Point on Line
// ()
// Parameters:
// struct FVector                 A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 B                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 closestPoint                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Get_Closest_Point_on_Line(const struct FVector& A, const struct FVector& B, const struct FVector& Point, struct FVector* closestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Get Closest Point on Line");

	UZiplineComponent_Base_C_Get_Closest_Point_on_Line_Params params;
	params.A = A;
	params.B = B;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (closestPoint != nullptr)
		*closestPoint = params.closestPoint;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Update Crosshair
// ()

void UZiplineComponent_Base_C::Update_Crosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Update Crosshair");

	UZiplineComponent_Base_C_Update_Crosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetClosestLocationToPointFromArray
// ()
// Parameters:
// TArray<struct FVector>         LocationsToTest                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Point                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ClosestLocation                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ArrayIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::GetClosestLocationToPointFromArray(const struct FVector& Point, TArray<struct FVector>* LocationsToTest, struct FVector* ClosestLocation, int* ArrayIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetClosestLocationToPointFromArray");

	UZiplineComponent_Base_C_GetClosestLocationToPointFromArray_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationsToTest != nullptr)
		*LocationsToTest = params.LocationsToTest;
	if (ClosestLocation != nullptr)
		*ClosestLocation = params.ClosestLocation;
	if (ArrayIndex != nullptr)
		*ArrayIndex = params.ArrayIndex;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetZiplineBuff
// ()
// Parameters:
// class ABuff_Zipline_DinoBase_C* ZiplineBuff                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::GetZiplineBuff(class ABuff_Zipline_DinoBase_C** ZiplineBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetZiplineBuff");

	UZiplineComponent_Base_C_GetZiplineBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ZiplineBuff != nullptr)
		*ZiplineBuff = params.ZiplineBuff;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetTargetedZipline
// (Event, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZipline_Anchor_C*       TargetedZipline                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::STATIC_GetTargetedZipline(class AZipline_Anchor_C** TargetedZipline, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.GetTargetedZipline");

	UZiplineComponent_Base_C_GetTargetedZipline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetedZipline != nullptr)
		*TargetedZipline = params.TargetedZipline;
	if (Location != nullptr)
		*Location = params.Location;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.UpdateNonDediLimits
// ()

void UZiplineComponent_Base_C::UpdateNonDediLimits()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.UpdateNonDediLimits");

	UZiplineComponent_Base_C_UpdateNonDediLimits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetNonDediTimerTickEveryFrame
// ()
// Parameters:
// bool                           TickEveryFrame                 (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::SetNonDediTimerTickEveryFrame(bool TickEveryFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetNonDediTimerTickEveryFrame");

	UZiplineComponent_Base_C_SetNonDediTimerTickEveryFrame_Params params;
	params.TickEveryFrame = TickEveryFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.InterpMeshRelativeTransform
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::STATIC_InterpMeshRelativeTransform(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.InterpMeshRelativeTransform");

	UZiplineComponent_Base_C_InterpMeshRelativeTransform_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.BPOnComponentCreated
// ()

void UZiplineComponent_Base_C::BPOnComponentCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.BPOnComponentCreated");

	UZiplineComponent_Base_C_BPOnComponentCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.ZiplineNonDediLogic
// (NetRequest, Exec, NetResponse, MulticastDelegate, Private, Protected, Delegate, BlueprintCallable, BlueprintEvent)

void UZiplineComponent_Base_C::ZiplineNonDediLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.ZiplineNonDediLogic");

	UZiplineComponent_Base_C_ZiplineNonDediLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Multi Soft Set Transform_InterfaceCall
// ()
// Parameters:
// struct UObject_FTransform      NewTransform                   (Parm, IsPlainOldData)

void UZiplineComponent_Base_C::Multi_Soft_Set_Transform_InterfaceCall(const struct UObject_FTransform& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Multi Soft Set Transform_InterfaceCall");

	UZiplineComponent_Base_C_Multi_Soft_Set_Transform_InterfaceCall_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Initial Velocity Multicast_InterfaceCall
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Set_Initial_Velocity_Multicast_InterfaceCall(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Initial Velocity Multicast_InterfaceCall");

	UZiplineComponent_Base_C_Set_Initial_Velocity_Multicast_InterfaceCall_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Is Hanging_InterfaceCall
// ()
// Parameters:
// bool                           bNewIsHanging                  (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Set_Is_Hanging_InterfaceCall(bool bNewIsHanging)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Is Hanging_InterfaceCall");

	UZiplineComponent_Base_C_Set_Is_Hanging_InterfaceCall_Params params;
	params.bNewIsHanging = bNewIsHanging;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Non Dedi Tick Every Frame_InterfaceCall
// ()
// Parameters:
// bool                           bNewTickEveryFrame             (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Set_Non_Dedi_Tick_Every_Frame_InterfaceCall(bool bNewTickEveryFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Non Dedi Tick Every Frame_InterfaceCall");

	UZiplineComponent_Base_C_Set_Non_Dedi_Tick_Every_Frame_InterfaceCall_Params params;
	params.bNewTickEveryFrame = bNewTickEveryFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Sliding_InterfaceCall
// ()
// Parameters:
// bool                           bNewSliding                    (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Set_Sliding_InterfaceCall(bool bNewSliding)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Sliding_InterfaceCall");

	UZiplineComponent_Base_C_Set_Sliding_InterfaceCall_Params params;
	params.bNewSliding = bNewSliding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Zipline Jump Off Direction AI_InterfaceCall
// ()
// Parameters:
// struct FVector                 NewZiplineJumpOffDirectionAI   (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Set_Zipline_Jump_Off_Direction_AI_InterfaceCall(const struct FVector& NewZiplineJumpOffDirectionAI)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Zipline Jump Off Direction AI_InterfaceCall");

	UZiplineComponent_Base_C_Set_Zipline_Jump_Off_Direction_AI_InterfaceCall_Params params;
	params.NewZiplineJumpOffDirectionAI = NewZiplineJumpOffDirectionAI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Zipline New Target Location_InterfaceCall
// ()
// Parameters:
// struct FVector                 NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Set_Zipline_New_Target_Location_InterfaceCall(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Zipline New Target Location_InterfaceCall");

	UZiplineComponent_Base_C_Set_Zipline_New_Target_Location_InterfaceCall_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Start Zipline Jumping_InterfaceCall
// ()

void UZiplineComponent_Base_C::Start_Zipline_Jumping_InterfaceCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Start Zipline Jumping_InterfaceCall");

	UZiplineComponent_Base_C_Start_Zipline_Jumping_InterfaceCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetKeepHanging_InterfaceCall
// ()
// Parameters:
// bool                           bNewKeepHanging                (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::SetKeepHanging_InterfaceCall(bool bNewKeepHanging)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetKeepHanging_InterfaceCall");

	UZiplineComponent_Base_C_SetKeepHanging_InterfaceCall_Params params;
	params.bNewKeepHanging = bNewKeepHanging;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetUsingZipline_InterfaceCall
// ()
// Parameters:
// bool                           bUsingZipline                  (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::SetUsingZipline_InterfaceCall(bool bUsingZipline)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetUsingZipline_InterfaceCall");

	UZiplineComponent_Base_C_SetUsingZipline_InterfaceCall_Params params;
	params.bUsingZipline = bUsingZipline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Zipline Jump Off Impulse AI_InterfaceCall
// ()
// Parameters:
// struct FVector                 NewZiplineJumpOffImpulseAI     (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Set_Zipline_Jump_Off_Impulse_AI_InterfaceCall(const struct FVector& NewZiplineJumpOffImpulseAI)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Zipline Jump Off Impulse AI_InterfaceCall");

	UZiplineComponent_Base_C_Set_Zipline_Jump_Off_Impulse_AI_InterfaceCall_Params params;
	params.NewZiplineJumpOffImpulseAI = NewZiplineJumpOffImpulseAI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Finished Attach_Interface Call
// ()
// Parameters:
// bool                           bNewFinishedAttach             (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Set_Finished_Attach_Interface_Call(bool bNewFinishedAttach)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Finished Attach_Interface Call");

	UZiplineComponent_Base_C_Set_Finished_Attach_Interface_Call_Params params;
	params.bNewFinishedAttach = bNewFinishedAttach;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetProcessMoveToOrder_InterfaceCall
// ()
// Parameters:
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::SetProcessMoveToOrder_InterfaceCall(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetProcessMoveToOrder_InterfaceCall");

	UZiplineComponent_Base_C_SetProcessMoveToOrder_InterfaceCall_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Current Move To Order Location Interface Call
// ()
// Parameters:
// struct FVector                 NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::Set_Current_Move_To_Order_Location_Interface_Call(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Set Current Move To Order Location Interface Call");

	UZiplineComponent_Base_C_Set_Current_Move_To_Order_Location_Interface_Call_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.ZiplineTargetingTimer
// ()

void UZiplineComponent_Base_C::ZiplineTargetingTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.ZiplineTargetingTimer");

	UZiplineComponent_Base_C_ZiplineTargetingTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.ResetZiplineJumping_RunOnServer
// ()

void UZiplineComponent_Base_C::ResetZiplineJumping_RunOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.ResetZiplineJumping_RunOnServer");

	UZiplineComponent_Base_C_ResetZiplineJumping_RunOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.ResetZiplineJumping_Multicast
// ()

void UZiplineComponent_Base_C::ResetZiplineJumping_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.ResetZiplineJumping_Multicast");

	UZiplineComponent_Base_C_ResetZiplineJumping_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.StartZiplineJumping
// ()

void UZiplineComponent_Base_C::StartZiplineJumping()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.StartZiplineJumping");

	UZiplineComponent_Base_C_StartZiplineJumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.AttachToZipline_RunOnServer
// ()
// Parameters:
// class AZipline_Anchor_C*       ZiplineAnchor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::AttachToZipline_RunOnServer(class AZipline_Anchor_C* ZiplineAnchor, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.AttachToZipline_RunOnServer");

	UZiplineComponent_Base_C_AttachToZipline_RunOnServer_Params params;
	params.ZiplineAnchor = ZiplineAnchor;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.AttachToZipline_Multicast
// ()
// Parameters:
// class AZipline_Anchor_C*       ZiplineAnchor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::AttachToZipline_Multicast(class AZipline_Anchor_C* ZiplineAnchor, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.AttachToZipline_Multicast");

	UZiplineComponent_Base_C_AttachToZipline_Multicast_Params params;
	params.ZiplineAnchor = ZiplineAnchor;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.TryAttachToZipline_RunOnServer
// ()

void UZiplineComponent_Base_C::TryAttachToZipline_RunOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.TryAttachToZipline_RunOnServer");

	UZiplineComponent_Base_C_TryAttachToZipline_RunOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.DoZiplineTurn
// ()

void UZiplineComponent_Base_C::DoZiplineTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.DoZiplineTurn");

	UZiplineComponent_Base_C_DoZiplineTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.PreZiplineTurn_Multicast
// ()

void UZiplineComponent_Base_C::PreZiplineTurn_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.PreZiplineTurn_Multicast");

	UZiplineComponent_Base_C_PreZiplineTurn_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetInitialVelocity_Multicast
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::SetInitialVelocity_Multicast(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.SetInitialVelocity_Multicast");

	UZiplineComponent_Base_C_SetInitialVelocity_Multicast_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.Multi_SoftSetTransform
// ()
// Parameters:
// struct UObject_FTransform      NewTransform                   (Parm, IsPlainOldData)

void UZiplineComponent_Base_C::Multi_SoftSetTransform(const struct UObject_FTransform& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.Multi_SoftSetTransform");

	UZiplineComponent_Base_C_Multi_SoftSetTransform_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZiplineComponent_Base.ZiplineComponent_Base_C.ExecuteUbergraph_ZiplineComponent_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UZiplineComponent_Base_C::ExecuteUbergraph_ZiplineComponent_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZiplineComponent_Base.ZiplineComponent_Base_C.ExecuteUbergraph_ZiplineComponent_Base");

	UZiplineComponent_Base_C_ExecuteUbergraph_ZiplineComponent_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

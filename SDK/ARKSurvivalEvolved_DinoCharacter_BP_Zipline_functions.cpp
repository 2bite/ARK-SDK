// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacter_BP_Zipline_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Get Zipline Buff
// ()
// Parameters:
// class ABuff_Zipline_DinoBase_C* ZiplineBuff                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::Get_Zipline_Buff(class ABuff_Zipline_DinoBase_C** ZiplineBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Get Zipline Buff");

	ADinoCharacter_BP_Zipline_C_Get_Zipline_Buff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ZiplineBuff != nullptr)
		*ZiplineBuff = params.ZiplineBuff;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.OnOrderedMoveToOrFollow
// ()
// Parameters:
// bool                           moveTo                         (Parm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::OnOrderedMoveToOrFollow(bool moveTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.OnOrderedMoveToOrFollow");

	ADinoCharacter_BP_Zipline_C_OnOrderedMoveToOrFollow_Params params;
	params.moveTo = moveTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPOnTamedProcessOrder
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::BPOnTamedProcessOrder(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPOnTamedProcessOrder");

	ADinoCharacter_BP_Zipline_C_BPOnTamedProcessOrder_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BlueprintOverrideWantsToRun
// ()
// Parameters:
// bool*                          bInputWantsToRun               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinoCharacter_BP_Zipline_C::BlueprintOverrideWantsToRun(bool* bInputWantsToRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BlueprintOverrideWantsToRun");

	ADinoCharacter_BP_Zipline_C_BlueprintOverrideWantsToRun_Params params;
	params.bInputWantsToRun = bInputWantsToRun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPOverrideMoveToOrder
// ()
// Parameters:
// struct FVector*                MoveToLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      OrderingPlayer                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinoCharacter_BP_Zipline_C::BPOverrideMoveToOrder(struct FVector* MoveToLocation, class AShooterCharacter** OrderingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPOverrideMoveToOrder");

	ADinoCharacter_BP_Zipline_C_BPOverrideMoveToOrder_Params params;
	params.MoveToLocation = MoveToLocation;
	params.OrderingPlayer = OrderingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UpdateNonDediActive
// ()

void ADinoCharacter_BP_Zipline_C::UpdateNonDediActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UpdateNonDediActive");

	ADinoCharacter_BP_Zipline_C_UpdateNonDediActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Update Non Dedi Limits
// ()

void ADinoCharacter_BP_Zipline_C::Update_Non_Dedi_Limits()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Update Non Dedi Limits");

	ADinoCharacter_BP_Zipline_C_Update_Non_Dedi_Limits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UpdateCrosshair
// ()

void ADinoCharacter_BP_Zipline_C::UpdateCrosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UpdateCrosshair");

	ADinoCharacter_BP_Zipline_C_UpdateCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPNotifySetRider");

	ADinoCharacter_BP_Zipline_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPTimerServer
// ()

void ADinoCharacter_BP_Zipline_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPTimerServer");

	ADinoCharacter_BP_Zipline_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SoftSetTransform
// (NetReliable, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct UObject_FTransform      NewTransform                   (Parm, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::SoftSetTransform(const struct UObject_FTransform& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SoftSetTransform");

	ADinoCharacter_BP_Zipline_C_SoftSetTransform_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UpdateTPViewOffset
// ()

void ADinoCharacter_BP_Zipline_C::UpdateTPViewOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UpdateTPViewOffset");

	ADinoCharacter_BP_Zipline_C_UpdateTPViewOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetTargetMeshRelativeTransformPure
// (NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct UObject_FTransform      Result                         (Parm, OutParm, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::GetTargetMeshRelativeTransformPure(struct UObject_FTransform* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetTargetMeshRelativeTransformPure");

	ADinoCharacter_BP_Zipline_C_GetTargetMeshRelativeTransformPure_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.InterpMeshRelativeTransform
// (NetRequest, Exec, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::STATIC_InterpMeshRelativeTransform(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.InterpMeshRelativeTransform");

	ADinoCharacter_BP_Zipline_C_InterpMeshRelativeTransform_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetTargetedZipline
// (Exec, Native, Event, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AZipline_Anchor_C*       targetedZipline                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::GetTargetedZipline(class AZipline_Anchor_C** targetedZipline, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetTargetedZipline");

	ADinoCharacter_BP_Zipline_C_GetTargetedZipline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (targetedZipline != nullptr)
		*targetedZipline = params.targetedZipline;
	if (Location != nullptr)
		*Location = params.Location;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ZiplineNonDediLogic
// ()

void ADinoCharacter_BP_Zipline_C::ZiplineNonDediLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ZiplineNonDediLogic");

	ADinoCharacter_BP_Zipline_C_ZiplineNonDediLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SetNonDediTimerTickEveryFrame
// ()
// Parameters:
// bool                           tickEveryFrame                 (Parm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::SetNonDediTimerTickEveryFrame(bool tickEveryFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SetNonDediTimerTickEveryFrame");

	ADinoCharacter_BP_Zipline_C_SetNonDediTimerTickEveryFrame_Params params;
	params.tickEveryFrame = tickEveryFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetClosestLocationToPointFromArray
// ()
// Parameters:
// TArray<struct FVector>         LocationsToTest                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Point                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ClosestLocation                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ArrayIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::GetClosestLocationToPointFromArray(const struct FVector& Point, TArray<struct FVector>* LocationsToTest, struct FVector* ClosestLocation, int* ArrayIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetClosestLocationToPointFromArray");

	ADinoCharacter_BP_Zipline_C_GetClosestLocationToPointFromArray_Params params;
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


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SetServerTimerTickEveryFrame
// ()
// Parameters:
// bool                           tickEveryFrame                 (Parm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::SetServerTimerTickEveryFrame(bool tickEveryFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SetServerTimerTickEveryFrame");

	ADinoCharacter_BP_Zipline_C_SetServerTimerTickEveryFrame_Params params;
	params.tickEveryFrame = tickEveryFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.CreateZiplineBuffAndStartRiding
// ()
// Parameters:
// class AZipline_Anchor_C*       Anchor                         (Parm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::CreateZiplineBuffAndStartRiding(class AZipline_Anchor_C* Anchor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.CreateZiplineBuffAndStartRiding");

	ADinoCharacter_BP_Zipline_C_CreateZiplineBuffAndStartRiding_Params params;
	params.Anchor = Anchor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.IsTargetZiplineBlocked
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// class AZipline_Anchor_C*       Anchor                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm)
// bool                           HitReturn                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::STATIC_IsTargetZiplineBlocked(const struct FVector& Location, class AZipline_Anchor_C* Anchor, struct FHitResult* HitResult, bool* HitReturn, struct FVector* StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.IsTargetZiplineBlocked");

	ADinoCharacter_BP_Zipline_C_IsTargetZiplineBlocked_Params params;
	params.Location = Location;
	params.Anchor = Anchor;

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


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetClosestPointOnLine
// ()
// Parameters:
// struct FVector                 A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 B                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 closestPoint                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::GetClosestPointOnLine(const struct FVector& A, const struct FVector& B, const struct FVector& Point, struct FVector* closestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.GetClosestPointOnLine");

	ADinoCharacter_BP_Zipline_C_GetClosestPointOnLine_Params params;
	params.A = A;
	params.B = B;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (closestPoint != nullptr)
		*closestPoint = params.closestPoint;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.TryAttachingToZipline
// (NetReliable, NetRequest, Exec, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AZipline_Anchor_C*       overrideAnchor                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 overrideStartLocation          (Parm, ZeroConstructor, IsPlainOldData)
// float                          overrideFindLocationDistance   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OverrideFindLocationDirection  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::TryAttachingToZipline(class AZipline_Anchor_C* overrideAnchor, const struct FVector& overrideStartLocation, float overrideFindLocationDistance, const struct FVector& OverrideFindLocationDirection, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.TryAttachingToZipline");

	ADinoCharacter_BP_Zipline_C_TryAttachingToZipline_Params params;
	params.overrideAnchor = overrideAnchor;
	params.overrideStartLocation = overrideStartLocation;
	params.overrideFindLocationDistance = overrideFindLocationDistance;
	params.OverrideFindLocationDirection = OverrideFindLocationDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPOnStartJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinoCharacter_BP_Zipline_C::BPOnStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPOnStartJump");

	ADinoCharacter_BP_Zipline_C_BPOnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPNotifyClearRider");

	ADinoCharacter_BP_Zipline_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPTimerNonDedicated
// ()

void ADinoCharacter_BP_Zipline_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BPTimerNonDedicated");

	ADinoCharacter_BP_Zipline_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Is Dino Submerged
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADinoCharacter_BP_Zipline_C::Is_Dino_Submerged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Is Dino Submerged");

	ADinoCharacter_BP_Zipline_C_Is_Dino_Submerged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UserConstructionScript
// ()

void ADinoCharacter_BP_Zipline_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.UserConstructionScript");

	ADinoCharacter_BP_Zipline_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.BlueprintAnimNotifyCustomEvent");

	ADinoCharacter_BP_Zipline_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.TryAttachToZipline_RunOnServer
// ()

void ADinoCharacter_BP_Zipline_C::TryAttachToZipline_RunOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.TryAttachToZipline_RunOnServer");

	ADinoCharacter_BP_Zipline_C_TryAttachToZipline_RunOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.StartZiplineJumping
// ()

void ADinoCharacter_BP_Zipline_C::StartZiplineJumping()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.StartZiplineJumping");

	ADinoCharacter_BP_Zipline_C_StartZiplineJumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.AttachToZipline_RunOnServer
// ()
// Parameters:
// class AZipline_Anchor_C*       ZiplineAnchor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::AttachToZipline_RunOnServer(class AZipline_Anchor_C* ZiplineAnchor, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.AttachToZipline_RunOnServer");

	ADinoCharacter_BP_Zipline_C_AttachToZipline_RunOnServer_Params params;
	params.ZiplineAnchor = ZiplineAnchor;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.AttachToZipline_Multicast
// ()
// Parameters:
// class AZipline_Anchor_C*       ZiplineAnchor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::AttachToZipline_Multicast(class AZipline_Anchor_C* ZiplineAnchor, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.AttachToZipline_Multicast");

	ADinoCharacter_BP_Zipline_C_AttachToZipline_Multicast_Params params;
	params.ZiplineAnchor = ZiplineAnchor;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ResetZiplineJumping_RunOnServer
// ()

void ADinoCharacter_BP_Zipline_C::ResetZiplineJumping_RunOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ResetZiplineJumping_RunOnServer");

	ADinoCharacter_BP_Zipline_C_ResetZiplineJumping_RunOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ResetZiplineJumping_Multicast
// ()

void ADinoCharacter_BP_Zipline_C::ResetZiplineJumping_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ResetZiplineJumping_Multicast");

	ADinoCharacter_BP_Zipline_C_ResetZiplineJumping_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ZiplineTargetingTimer
// ()

void ADinoCharacter_BP_Zipline_C::ZiplineTargetingTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ZiplineTargetingTimer");

	ADinoCharacter_BP_Zipline_C_ZiplineTargetingTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SetInitialVelocity_Multicast
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::SetInitialVelocity_Multicast(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.SetInitialVelocity_Multicast");

	ADinoCharacter_BP_Zipline_C_SetInitialVelocity_Multicast_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Multi_SoftSetTransform
// ()
// Parameters:
// struct UObject_FTransform      NewTransform                   (Parm, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::Multi_SoftSetTransform(const struct UObject_FTransform& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.Multi_SoftSetTransform");

	ADinoCharacter_BP_Zipline_C_Multi_SoftSetTransform_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.DoZiplineTurn
// ()

void ADinoCharacter_BP_Zipline_C::DoZiplineTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.DoZiplineTurn");

	ADinoCharacter_BP_Zipline_C_DoZiplineTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.PreZiplineTurn_Multicast
// ()

void ADinoCharacter_BP_Zipline_C::PreZiplineTurn_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.PreZiplineTurn_Multicast");

	ADinoCharacter_BP_Zipline_C_PreZiplineTurn_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.DebugSphere_Multicast
// ()
// Parameters:
// struct FVector                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::DebugSphere_Multicast(const struct FVector& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.DebugSphere_Multicast");

	ADinoCharacter_BP_Zipline_C_DebugSphere_Multicast_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.DebugArrow_Multicast
// ()
// Parameters:
// struct FVector                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewParam1                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewParam3                      (Parm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::DebugArrow_Multicast(const struct FVector& NewParam, const struct FVector& NewParam1, float NewParam3)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.DebugArrow_Multicast");

	ADinoCharacter_BP_Zipline_C_DebugArrow_Multicast_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;
	params.NewParam3 = NewParam3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ExecuteUbergraph_DinoCharacter_BP_Zipline
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADinoCharacter_BP_Zipline_C::ExecuteUbergraph_DinoCharacter_BP_Zipline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacter_BP_Zipline.DinoCharacter_BP_Zipline_C.ExecuteUbergraph_DinoCharacter_BP_Zipline");

	ADinoCharacter_BP_Zipline_C_ExecuteUbergraph_DinoCharacter_BP_Zipline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

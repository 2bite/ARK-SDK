// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ValidateZipLineTransform
// (NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// struct UObject_FTransform      InTransform                    (Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ACaveWolf_Character_BP_C::ValidateZipLineTransform(struct UObject_FTransform* InTransform, struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ValidateZipLineTransform");

	ACaveWolf_Character_BP_C_ValidateZipLineTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTransform != nullptr)
		*InTransform = params.InTransform;
	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;

	return params.ReturnValue;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPOnTamedProcessOrder
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::BPOnTamedProcessOrder(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPOnTamedProcessOrder");

	ACaveWolf_Character_BP_C_BPOnTamedProcessOrder_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintOverrideWantsToRun
// ()
// Parameters:
// bool*                          bInputWantsToRun               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACaveWolf_Character_BP_C::BlueprintOverrideWantsToRun(bool* bInputWantsToRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintOverrideWantsToRun");

	ACaveWolf_Character_BP_C_BlueprintOverrideWantsToRun_Params params;
	params.bInputWantsToRun = bInputWantsToRun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPOverrideMoveToOrder
// ()
// Parameters:
// struct FVector*                MoveToLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      OrderingPlayer                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACaveWolf_Character_BP_C::BPOverrideMoveToOrder(struct FVector* MoveToLocation, class AShooterCharacter** OrderingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPOverrideMoveToOrder");

	ACaveWolf_Character_BP_C_BPOverrideMoveToOrder_Params params;
	params.MoveToLocation = MoveToLocation;
	params.OrderingPlayer = OrderingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPGetAddForwardVelocityOnJump
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACaveWolf_Character_BP_C::BPGetAddForwardVelocityOnJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPGetAddForwardVelocityOnJump");

	ACaveWolf_Character_BP_C_BPGetAddForwardVelocityOnJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.IsTargetZiplineBlocked
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// class AZipline_Anchor_C*       Anchor                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm)
// bool                           HitReturn                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::STATIC_IsTargetZiplineBlocked(const struct FVector& Location, class AZipline_Anchor_C* Anchor, struct FHitResult* HitResult, bool* HitReturn, struct FVector* StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.IsTargetZiplineBlocked");

	ACaveWolf_Character_BP_C_IsTargetZiplineBlocked_Params params;
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


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACaveWolf_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintCanAttack");

	ACaveWolf_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetClosestLocationToPointFromArray
// ()
// Parameters:
// TArray<struct FVector>         LocationsToTest                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Point                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ClosestLocation                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ArrayIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::GetClosestLocationToPointFromArray(const struct FVector& Point, TArray<struct FVector>* LocationsToTest, struct FVector* ClosestLocation, int* ArrayIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetClosestLocationToPointFromArray");

	ACaveWolf_Character_BP_C_GetClosestLocationToPointFromArray_Params params;
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


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.UpdateTPVViewOffset
// ()

void ACaveWolf_Character_BP_C::UpdateTPVViewOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.UpdateTPVViewOffset");

	ACaveWolf_Character_BP_C_UpdateTPVViewOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.Set Server Timer Tick Every Frame
// ()
// Parameters:
// bool                           TickEveryFrame                 (Parm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::Set_Server_Timer_Tick_Every_Frame(bool TickEveryFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.Set Server Timer Tick Every Frame");

	ACaveWolf_Character_BP_C_Set_Server_Timer_Tick_Every_Frame_Params params;
	params.TickEveryFrame = TickEveryFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPTimerServer
// ()

void ACaveWolf_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPTimerServer");

	ACaveWolf_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetTargetMeshRelativeTransform_Pure
// (NetReliable, NetRequest, NetResponse, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct UObject_FTransform      Result                         (Parm, OutParm, IsPlainOldData)

void ACaveWolf_Character_BP_C::GetTargetMeshRelativeTransform_Pure(struct UObject_FTransform* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetTargetMeshRelativeTransform_Pure");

	ACaveWolf_Character_BP_C_GetTargetMeshRelativeTransform_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.SetNonDediTimer_TickEveryFrame
// ()
// Parameters:
// bool                           TickEveryFrame                 (Parm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::SetNonDediTimer_TickEveryFrame(bool TickEveryFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.SetNonDediTimer_TickEveryFrame");

	ACaveWolf_Character_BP_C_SetNonDediTimer_TickEveryFrame_Params params;
	params.TickEveryFrame = TickEveryFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetTargetMeshRelativeTransform
// (NetReliable, Event, NetResponse, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct UObject_FTransform      Result                         (Parm, OutParm, IsPlainOldData)

void ACaveWolf_Character_BP_C::GetTargetMeshRelativeTransform(struct UObject_FTransform* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetTargetMeshRelativeTransform");

	ACaveWolf_Character_BP_C_GetTargetMeshRelativeTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.DebugDrawRotationAxes
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          lineLength                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          lineDuration                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          LineThickness                  (Parm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::DebugDrawRotationAxes(const struct FVector& Origin, const struct FRotator& Rotation, float lineLength, float lineDuration, float LineThickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.DebugDrawRotationAxes");

	ACaveWolf_Character_BP_C_DebugDrawRotationAxes_Params params;
	params.Origin = Origin;
	params.Rotation = Rotation;
	params.lineLength = lineLength;
	params.lineDuration = lineDuration;
	params.LineThickness = LineThickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.SoftSetCaveWolfTransform
// (NetReliable, Exec, Native, Event, Static, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct UObject_FTransform      NewTransform                   (Parm, IsPlainOldData)

void ACaveWolf_Character_BP_C::STATIC_SoftSetCaveWolfTransform(const struct UObject_FTransform& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.SoftSetCaveWolfTransform");

	ACaveWolf_Character_BP_C_SoftSetCaveWolfTransform_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.InterpCaveWolfMeshRelativeTransform
// (NetRequest, Exec, NetResponse, Static, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::STATIC_InterpCaveWolfMeshRelativeTransform(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.InterpCaveWolfMeshRelativeTransform");

	ACaveWolf_Character_BP_C_InterpCaveWolfMeshRelativeTransform_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintAdjustOutputDamage
// (NetReliable, NetRequest, Event, NetMulticast, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACaveWolf_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintAdjustOutputDamage");

	ACaveWolf_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
	params.AttackIndex = AttackIndex;
	params.OriginalDamageAmount = OriginalDamageAmount;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamageType != nullptr)
		*OutDamageType = params.OutDamageType;
	if (OutDamageImpulse != nullptr)
		*OutDamageImpulse = params.OutDamageImpulse;

	return params.ReturnValue;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPOnStartJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACaveWolf_Character_BP_C::BPOnStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPOnStartJump");

	ACaveWolf_Character_BP_C_BPOnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPTimerNonDedicated
// ()

void ACaveWolf_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPTimerNonDedicated");

	ACaveWolf_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetZiplineDirectionFromAnchor
// ()
// Parameters:
// class AZipline_Anchor_C*       Anchor                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DownDirection                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::GetZiplineDirectionFromAnchor(class AZipline_Anchor_C* Anchor, struct FVector* DownDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetZiplineDirectionFromAnchor");

	ACaveWolf_Character_BP_C_GetZiplineDirectionFromAnchor_Params params;
	params.Anchor = Anchor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DownDirection != nullptr)
		*DownDirection = params.DownDirection;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetClosestPointOnLine
// ()
// Parameters:
// struct FVector                 A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 B                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 closestPoint                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::GetClosestPointOnLine(const struct FVector& A, const struct FVector& B, const struct FVector& Point, struct FVector* closestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetClosestPointOnLine");

	ACaveWolf_Character_BP_C_GetClosestPointOnLine_Params params;
	params.A = A;
	params.B = B;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (closestPoint != nullptr)
		*closestPoint = params.closestPoint;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetZiplineBuff
// ()
// Parameters:
// class ABuff_Zipline_CaveWolf_C* ZiplineBuff                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::GetZiplineBuff(class ABuff_Zipline_CaveWolf_C** ZiplineBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetZiplineBuff");

	ACaveWolf_Character_BP_C_GetZiplineBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ZiplineBuff != nullptr)
		*ZiplineBuff = params.ZiplineBuff;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetTargetedZipline
// (NetReliable, Exec, NetResponse, Static, NetMulticast, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AZipline_Anchor_C*       TargetedZipline                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::STATIC_GetTargetedZipline(class AZipline_Anchor_C** TargetedZipline, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.GetTargetedZipline");

	ACaveWolf_Character_BP_C_GetTargetedZipline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetedZipline != nullptr)
		*TargetedZipline = params.TargetedZipline;
	if (Location != nullptr)
		*Location = params.Location;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPNotifySetRider");

	ACaveWolf_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPNotifyClearRider");

	ACaveWolf_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.IsRotation Nearly Equal
// ()
// Parameters:
// struct FRotator                A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::IsRotation_Nearly_Equal(const struct FRotator& A, const struct FRotator& B, float Tolerance, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.IsRotation Nearly Equal");

	ACaveWolf_Character_BP_C_IsRotation_Nearly_Equal_Params params;
	params.A = A;
	params.B = B;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.IsVectorNearlyEqual
// ()
// Parameters:
// struct FVector                 inVec                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InVec2                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACaveWolf_Character_BP_C::IsVectorNearlyEqual(const struct FVector& inVec, const struct FVector& InVec2, float Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.IsVectorNearlyEqual");

	ACaveWolf_Character_BP_C_IsVectorNearlyEqual_Params params;
	params.inVec = inVec;
	params.InVec2 = InVec2;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACaveWolf_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintCanRiderAttack");

	ACaveWolf_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.TryAttachingToZipline
// (NetReliable, Exec, Static, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AZipline_Anchor_C*       overrideAnchor                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OverrideStartLocation          (Parm, ZeroConstructor, IsPlainOldData)
// float                          OverrideFindLocationDistance   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 overrideFindLocationDirection  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DontUseLineOfSightCheck        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::STATIC_TryAttachingToZipline(class AZipline_Anchor_C* overrideAnchor, const struct FVector& OverrideStartLocation, float OverrideFindLocationDistance, const struct FVector& overrideFindLocationDirection, bool DontUseLineOfSightCheck, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.TryAttachingToZipline");

	ACaveWolf_Character_BP_C_TryAttachingToZipline_Params params;
	params.overrideAnchor = overrideAnchor;
	params.OverrideStartLocation = OverrideStartLocation;
	params.OverrideFindLocationDistance = OverrideFindLocationDistance;
	params.overrideFindLocationDirection = overrideFindLocationDirection;
	params.DontUseLineOfSightCheck = DontUseLineOfSightCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPModifyHarvestingQuantity
// ()
// Parameters:
// float*                         originalQuantity               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 resourceSelected               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACaveWolf_Character_BP_C::BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BPModifyHarvestingQuantity");

	ACaveWolf_Character_BP_C_BPModifyHarvestingQuantity_Params params;
	params.originalQuantity = originalQuantity;
	params.resourceSelected = resourceSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.UserConstructionScript
// ()

void ACaveWolf_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.UserConstructionScript");

	ACaveWolf_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.TryAttachToZipline_RunOnServer
// ()

void ACaveWolf_Character_BP_C::TryAttachToZipline_RunOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.TryAttachToZipline_RunOnServer");

	ACaveWolf_Character_BP_C_TryAttachToZipline_RunOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ACaveWolf_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.DoZiplineTurn
// ()

void ACaveWolf_Character_BP_C::DoZiplineTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.DoZiplineTurn");

	ACaveWolf_Character_BP_C_DoZiplineTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.PreZiplineTurn_Multicast
// ()

void ACaveWolf_Character_BP_C::PreZiplineTurn_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.PreZiplineTurn_Multicast");

	ACaveWolf_Character_BP_C_PreZiplineTurn_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ZiplineTargetingTimer
// ()

void ACaveWolf_Character_BP_C::ZiplineTargetingTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ZiplineTargetingTimer");

	ACaveWolf_Character_BP_C_ZiplineTargetingTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.AttachToZipline_RunOnServer
// ()
// Parameters:
// class AZipline_Anchor_C*       ZiplineAnchor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::AttachToZipline_RunOnServer(class AZipline_Anchor_C* ZiplineAnchor, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.AttachToZipline_RunOnServer");

	ACaveWolf_Character_BP_C_AttachToZipline_RunOnServer_Params params;
	params.ZiplineAnchor = ZiplineAnchor;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.AttachToZipline_Multicast
// ()
// Parameters:
// class AZipline_Anchor_C*       ZiplineAnchor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::AttachToZipline_Multicast(class AZipline_Anchor_C* ZiplineAnchor, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.AttachToZipline_Multicast");

	ACaveWolf_Character_BP_C_AttachToZipline_Multicast_Params params;
	params.ZiplineAnchor = ZiplineAnchor;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.StartZiplineJumping
// ()

void ACaveWolf_Character_BP_C::StartZiplineJumping()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.StartZiplineJumping");

	ACaveWolf_Character_BP_C_StartZiplineJumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.CreateZiplineBuffAndStartRiding
// ()
// Parameters:
// class AZipline_Anchor_C*       Anchor                         (Parm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::CreateZiplineBuffAndStartRiding(class AZipline_Anchor_C* Anchor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.CreateZiplineBuffAndStartRiding");

	ACaveWolf_Character_BP_C_CreateZiplineBuffAndStartRiding_Params params;
	params.Anchor = Anchor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.Multi_SoftSetCaveWolfTransform
// ()
// Parameters:
// struct UObject_FTransform      NewTransform                   (Parm, IsPlainOldData)

void ACaveWolf_Character_BP_C::Multi_SoftSetCaveWolfTransform(const struct UObject_FTransform& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.Multi_SoftSetCaveWolfTransform");

	ACaveWolf_Character_BP_C_Multi_SoftSetCaveWolfTransform_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.SetInitialVelocity_Multicast
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::SetInitialVelocity_Multicast(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.SetInitialVelocity_Multicast");

	ACaveWolf_Character_BP_C_SetInitialVelocity_Multicast_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ResetZiplineJumping_RunOnServer
// ()

void ACaveWolf_Character_BP_C::ResetZiplineJumping_RunOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ResetZiplineJumping_RunOnServer");

	ACaveWolf_Character_BP_C_ResetZiplineJumping_RunOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ResetZiplineJumping_Multicast
// ()

void ACaveWolf_Character_BP_C::ResetZiplineJumping_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ResetZiplineJumping_Multicast");

	ACaveWolf_Character_BP_C_ResetZiplineJumping_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ResetForcePerFrameTicking
// ()

void ACaveWolf_Character_BP_C::ResetForcePerFrameTicking()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ResetForcePerFrameTicking");

	ACaveWolf_Character_BP_C_ResetForcePerFrameTicking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ExecuteUbergraph_CaveWolf_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_C::ExecuteUbergraph_CaveWolf_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.ExecuteUbergraph_CaveWolf_Character_BP");

	ACaveWolf_Character_BP_C_ExecuteUbergraph_CaveWolf_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Zipline_DinoBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineFaceUpDirection
// ()
// Parameters:
// bool                           FaceUpDirection                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::SetZiplineFaceUpDirection(bool FaceUpDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineFaceUpDirection");

	ABuff_Zipline_DinoBase_C_SetZiplineFaceUpDirection_Params params;
	params.FaceUpDirection = FaceUpDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetDistanceToAnchor
// ()
// Parameters:
// bool                           GetLower                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::GetDistanceToAnchor(bool GetLower, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetDistanceToAnchor");

	ABuff_Zipline_DinoBase_C_GetDistanceToAnchor_Params params;
	params.GetLower = GetLower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CanZiplineFlip
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::STATIC_CanZiplineFlip(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CanZiplineFlip");

	ABuff_Zipline_DinoBase_C_CanZiplineFlip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetZiplineSpeedAndAcceleration
// ()

void ABuff_Zipline_DinoBase_C::ResetZiplineSpeedAndAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetZiplineSpeedAndAcceleration");

	ABuff_Zipline_DinoBase_C_ResetZiplineSpeedAndAcceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineSliding
// ()
// Parameters:
// bool                           Reset                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::SetZiplineSliding(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineSliding");

	ABuff_Zipline_DinoBase_C_SetZiplineSliding_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineRunningSpeedAndAcceleration
// ()

void ABuff_Zipline_DinoBase_C::SetZiplineRunningSpeedAndAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineRunningSpeedAndAcceleration");

	ABuff_Zipline_DinoBase_C_SetZiplineRunningSpeedAndAcceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.RotationNearlyEqual
// ()
// Parameters:
// struct FRotator                RotA                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                RotB                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ErrorTolerance                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::RotationNearlyEqual(const struct FRotator& RotA, const struct FRotator& RotB, float ErrorTolerance, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.RotationNearlyEqual");

	ABuff_Zipline_DinoBase_C_RotationNearlyEqual_Params params;
	params.RotA = RotA;
	params.RotB = RotB;
	params.ErrorTolerance = ErrorTolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ReceiveBeginPlay
// ()

void ABuff_Zipline_DinoBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ReceiveBeginPlay");

	ABuff_Zipline_DinoBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateActorZiplineOffset
// ()

void ABuff_Zipline_DinoBase_C::UpdateActorZiplineOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateActorZiplineOffset");

	ABuff_Zipline_DinoBase_C_UpdateActorZiplineOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetHurtAnim
// ()
// Parameters:
// bool                           Hanging                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reset                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::SetHurtAnim(bool Hanging, bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetHurtAnim");

	ABuff_Zipline_DinoBase_C_SetHurtAnim_Params params;
	params.Hanging = Hanging;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPInstigatorUnpossessed
// ()

void ABuff_Zipline_DinoBase_C::BPInstigatorUnpossessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPInstigatorUnpossessed");

	ABuff_Zipline_DinoBase_C_BPInstigatorUnpossessed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BuffTickServer");

	ABuff_Zipline_DinoBase_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.Get Zipline Start and End Point NonPure
// ()
// Parameters:
// bool                           NoOffset                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::Get_Zipline_Start_and_End_Point_NonPure(bool NoOffset, struct FVector* Start, struct FVector* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.Get Zipline Start and End Point NonPure");

	ABuff_Zipline_DinoBase_C_Get_Zipline_Start_and_End_Point_NonPure_Params params;
	params.NoOffset = NoOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetAttachedCharacterTransform
// ()
// Parameters:
// struct UObject_FTransform      NewTransform                   (Parm, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::SetAttachedCharacterTransform(const struct UObject_FTransform& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetAttachedCharacterTransform");

	ABuff_Zipline_DinoBase_C_SetAttachedCharacterTransform_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetupLocalClient
// ()
// Parameters:
// class AActor*                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::SetupLocalClient(class AActor* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetupLocalClient");

	ABuff_Zipline_DinoBase_C_SetupLocalClient_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.Deactivate Local Client
// ()
// Parameters:
// class AActor*                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::Deactivate_Local_Client(class AActor* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.Deactivate Local Client");

	ABuff_Zipline_DinoBase_C_Deactivate_Local_Client_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.IsStillColliding
// (NetReliable, Exec, Event, NetResponse, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)

void ABuff_Zipline_DinoBase_C::IsStillColliding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.IsStillColliding");

	ABuff_Zipline_DinoBase_C_IsStillColliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.HandleCollision
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ABuff_Zipline_DinoBase_C::HandleCollision(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.HandleCollision");

	ABuff_Zipline_DinoBase_C_HandleCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.HitZiplineEndStop
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class UMovementComponent*      MovementComp                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::STATIC_HitZiplineEndStop(class UMovementComponent* MovementComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.HitZiplineEndStop");

	ABuff_Zipline_DinoBase_C_HitZiplineEndStop_Params params;
	params.MovementComp = MovementComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalcZiplinePreservedStartVelocity
// ()
// Parameters:
// struct FVector                 InVelocity                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::CalcZiplinePreservedStartVelocity(const struct FVector& InVelocity, struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalcZiplinePreservedStartVelocity");

	ABuff_Zipline_DinoBase_C_CalcZiplinePreservedStartVelocity_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalcZiplineVelocityMotorized
// ()
// Parameters:
// struct FVector                 InVelocity                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutVelocity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::CalcZiplineVelocityMotorized(const struct FVector& InVelocity, float DeltaTime, struct FVector* OutVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalcZiplineVelocityMotorized");

	ABuff_Zipline_DinoBase_C_CalcZiplineVelocityMotorized_Params params;
	params.InVelocity = InVelocity;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVelocity != nullptr)
		*OutVelocity = params.OutVelocity;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalcZiplineVelocityNonMotorized
// ()
// Parameters:
// struct FVector                 InVelocity                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutVelocity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::CalcZiplineVelocityNonMotorized(const struct FVector& InVelocity, float DeltaTime, struct FVector* OutVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalcZiplineVelocityNonMotorized");

	ABuff_Zipline_DinoBase_C_CalcZiplineVelocityNonMotorized_Params params;
	params.InVelocity = InVelocity;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVelocity != nullptr)
		*OutVelocity = params.OutVelocity;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ProcessMotorInput
// ()
// Parameters:
// float                          A                              (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::ProcessMotorInput(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ProcessMotorInput");

	ABuff_Zipline_DinoBase_C_ProcessMotorInput_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.IsZiplineStateBlockedOrStopped
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Zipline_DinoBase_C::IsZiplineStateBlockedOrStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.IsZiplineStateBlockedOrStopped");

	ABuff_Zipline_DinoBase_C_IsZiplineStateBlockedOrStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.IsAnimBlockingZiplineMovement
// ()
// Parameters:
// bool                           bLocked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::IsAnimBlockingZiplineMovement(bool* bLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.IsAnimBlockingZiplineMovement");

	ABuff_Zipline_DinoBase_C_IsAnimBlockingZiplineMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLocked != nullptr)
		*bLocked = params.bLocked;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPIsCharacterHardAttached
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Zipline_DinoBase_C::BPIsCharacterHardAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPIsCharacterHardAttached");

	ABuff_Zipline_DinoBase_C_BPIsCharacterHardAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPNonDedicatedPlayerPostAnimUpdate
// ()

void ABuff_Zipline_DinoBase_C::BPNonDedicatedPlayerPostAnimUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPNonDedicatedPlayerPostAnimUpdate");

	ABuff_Zipline_DinoBase_C_BPNonDedicatedPlayerPostAnimUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPCharacterDetach
// ()

void ABuff_Zipline_DinoBase_C::BPCharacterDetach()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPCharacterDetach");

	ABuff_Zipline_DinoBase_C_BPCharacterDetach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineControlRotation
// ()

void ABuff_Zipline_DinoBase_C::SetZiplineControlRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineControlRotation");

	ABuff_Zipline_DinoBase_C_SetZiplineControlRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayTurnAnimation
// ()
// Parameters:
// class UAnimMontage*            override                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::PlayTurnAnimation(class UAnimMontage* override, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayTurnAnimation");

	ABuff_Zipline_DinoBase_C_PlayTurnAnimation_Params params;
	params.override = override;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Zipline_DinoBase_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BuffAdjustDamage");

	ABuff_Zipline_DinoBase_C_BuffAdjustDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;

	return params.ReturnValue;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFPVCameraAndMeshPosition
// ()

void ABuff_Zipline_DinoBase_C::UpdateFPVCameraAndMeshPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFPVCameraAndMeshPosition");

	ABuff_Zipline_DinoBase_C_UpdateFPVCameraAndMeshPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetFPVViewLocation
// ()
// Parameters:
// struct FVector                 ViewLoc                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::GetFPVViewLocation(struct FVector* ViewLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetFPVViewLocation");

	ABuff_Zipline_DinoBase_C_GetFPVViewLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewLoc != nullptr)
		*ViewLoc = params.ViewLoc;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateHandleMeshLocationAndRotation
// ()

void ABuff_Zipline_DinoBase_C::UpdateHandleMeshLocationAndRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateHandleMeshLocationAndRotation");

	ABuff_Zipline_DinoBase_C_UpdateHandleMeshLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFPVAnims
// ()

void ABuff_Zipline_DinoBase_C::UpdateFPVAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFPVAnims");

	ABuff_Zipline_DinoBase_C_UpdateFPVAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.VectorNearlyEqual
// ()
// Parameters:
// float                          ErrorTolerance                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 inVec                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InVec2                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Zipline_DinoBase_C::VectorNearlyEqual(float ErrorTolerance, const struct FVector& inVec, const struct FVector& InVec2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.VectorNearlyEqual");

	ABuff_Zipline_DinoBase_C_VectorNearlyEqual_Params params;
	params.ErrorTolerance = ErrorTolerance;
	params.inVec = inVec;
	params.InVec2 = InVec2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetCamera
// ()

void ABuff_Zipline_DinoBase_C::ResetCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetCamera");

	ABuff_Zipline_DinoBase_C_ResetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateCamera
// ()

void ABuff_Zipline_DinoBase_C::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateCamera");

	ABuff_Zipline_DinoBase_C_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetFOV
// ()

void ABuff_Zipline_DinoBase_C::ResetFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetFOV");

	ABuff_Zipline_DinoBase_C_ResetFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFOV
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::UpdateFOV(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFOV");

	ABuff_Zipline_DinoBase_C_UpdateFOV_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetMeshPosition
// ()

void ABuff_Zipline_DinoBase_C::ResetMeshPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ResetMeshPosition");

	ABuff_Zipline_DinoBase_C_ResetMeshPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.JumpImpulse
// (Event, Static, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::STATIC_JumpImpulse(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.JumpImpulse");

	ABuff_Zipline_DinoBase_C_JumpImpulse_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InterpolateCharacterMeshToLine
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::InterpolateCharacterMeshToLine(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InterpolateCharacterMeshToLine");

	ABuff_Zipline_DinoBase_C_InterpolateCharacterMeshToLine_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetZiplineStartAndEndPoint
// ()
// Parameters:
// bool                           NoOffset                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::GetZiplineStartAndEndPoint(bool NoOffset, struct FVector* Start, struct FVector* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetZiplineStartAndEndPoint");

	ABuff_Zipline_DinoBase_C_GetZiplineStartAndEndPoint_Params params;
	params.NoOffset = NoOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalculateZiplineMaxVelocity
// ()
// Parameters:
// float                          Accleration                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxVelocity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::CalculateZiplineMaxVelocity(float Accleration, float Length, float* MaxVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalculateZiplineMaxVelocity");

	ABuff_Zipline_DinoBase_C_CalculateZiplineMaxVelocity_Params params;
	params.Accleration = Accleration;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxVelocity != nullptr)
		*MaxVelocity = params.MaxVelocity;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalculateZiplineAcceleration
// ()
// Parameters:
// struct FVector                 StartPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndPoint                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Acceleration                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::CalculateZiplineAcceleration(const struct FVector& StartPoint, const struct FVector& EndPoint, float* Acceleration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.CalculateZiplineAcceleration");

	ABuff_Zipline_DinoBase_C_CalculateZiplineAcceleration_Params params;
	params.StartPoint = StartPoint;
	params.EndPoint = EndPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Acceleration != nullptr)
		*Acceleration = params.Acceleration;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.Play Detach Animation
// ()
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::Play_Detach_Animation(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.Play Detach Animation");

	ABuff_Zipline_DinoBase_C_Play_Detach_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayAttachAnimation
// ()
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::PlayAttachAnimation(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayAttachAnimation");

	ABuff_Zipline_DinoBase_C_PlayAttachAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetCurrentDistanceOnLinePercent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Zipline_DinoBase_C::GetCurrentDistanceOnLinePercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetCurrentDistanceOnLinePercent");

	ABuff_Zipline_DinoBase_C_GetCurrentDistanceOnLinePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetStartEndOffset
// ()
// Parameters:
// bool                           ReturnPercent                  (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        forChar                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Zipline_DinoBase_C::GetStartEndOffset(bool ReturnPercent, class APrimalCharacter* forChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetStartEndOffset");

	ABuff_Zipline_DinoBase_C_GetStartEndOffset_Params params;
	params.ReturnPercent = ReturnPercent;
	params.forChar = forChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetCurrentSpeedPercentageFromMax
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Zipline_DinoBase_C::GetCurrentSpeedPercentageFromMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetCurrentSpeedPercentageFromMax");

	ABuff_Zipline_DinoBase_C_GetCurrentSpeedPercentageFromMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetMotorState
// ()
// Parameters:
// TEnumAsByte<E_ZiplineMotorState> NewMotorState                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::SetMotorState(TEnumAsByte<E_ZiplineMotorState> NewMotorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetMotorState");

	ABuff_Zipline_DinoBase_C_SetMotorState_Params params;
	params.NewMotorState = NewMotorState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetClosestPointOnLine
// ()
// Parameters:
// struct FVector                 LineStart                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LineEnd                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::GetClosestPointOnLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Location, struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetClosestPointOnLine");

	ABuff_Zipline_DinoBase_C_GetClosestPointOnLine_Params params;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Zipline_DinoBase_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPCheckPreventInput");

	ABuff_Zipline_DinoBase_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateMeshAttachment
// ()

void ABuff_Zipline_DinoBase_C::UpdateMeshAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateMeshAttachment");

	ABuff_Zipline_DinoBase_C_UpdateMeshAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFX
// ()

void ABuff_Zipline_DinoBase_C::UpdateFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UpdateFX");

	ABuff_Zipline_DinoBase_C_UpdateFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BuffTickClient");

	ABuff_Zipline_DinoBase_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetAttachOffset
// ()
// Parameters:
// struct FVector                 AttachOffset                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::GetAttachOffset(struct FVector* AttachOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.GetAttachOffset");

	ABuff_Zipline_DinoBase_C_GetAttachOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttachOffset != nullptr)
		*AttachOffset = params.AttachOffset;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPSetupForInstigator
// (Native, Event, NetResponse, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPSetupForInstigator");

	ABuff_Zipline_DinoBase_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPDeactivated");

	ABuff_Zipline_DinoBase_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPOverrideCharacterNewFallVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_Zipline_DinoBase_C::BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BPOverrideCharacterNewFallVelocity");

	ABuff_Zipline_DinoBase_C_BPOverrideCharacterNewFallVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialVelocity != nullptr)
		*InitialVelocity = params.InitialVelocity;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;

	return params.ReturnValue;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.AttachToZipline
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FVector                 StartLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::STATIC_AttachToZipline(const struct FVector& StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.AttachToZipline");

	ABuff_Zipline_DinoBase_C_AttachToZipline_Params params;
	params.StartLocation = StartLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.End Move Along Zipline
// ()
// Parameters:
// bool                           AddImpulse                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::End_Move_Along_Zipline(bool AddImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.End Move Along Zipline");

	ABuff_Zipline_DinoBase_C_End_Move_Along_Zipline_Params params;
	params.AddImpulse = AddImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.TickMoveAlongZipline
// ()

void ABuff_Zipline_DinoBase_C::TickMoveAlongZipline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.TickMoveAlongZipline");

	ABuff_Zipline_DinoBase_C_TickMoveAlongZipline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.StartMoveAlongZipline
// ()
// Parameters:
// struct FVector                 StartLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// class AZipline_Anchor_C*       UpperZiplineAnchor             (Parm, ZeroConstructor, IsPlainOldData)
// class AZipline_Anchor_C*       LowerZiplineAnchor             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::StartMoveAlongZipline(const struct FVector& StartLocation, class AZipline_Anchor_C* UpperZiplineAnchor, class AZipline_Anchor_C* LowerZiplineAnchor, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.StartMoveAlongZipline");

	ABuff_Zipline_DinoBase_C_StartMoveAlongZipline_Params params;
	params.StartLocation = StartLocation;
	params.UpperZiplineAnchor = UpperZiplineAnchor;
	params.LowerZiplineAnchor = LowerZiplineAnchor;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UserConstructionScript
// (NetReliable, Exec, NetResponse, MulticastDelegate, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)

void ABuff_Zipline_DinoBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.UserConstructionScript");

	ABuff_Zipline_DinoBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Run_K2Node_InputActionEvent_109
// ()

void ABuff_Zipline_DinoBase_C::InpActEvt_Run_K2Node_InputActionEvent_109()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Run_K2Node_InputActionEvent_109");

	ABuff_Zipline_DinoBase_C_InpActEvt_Run_K2Node_InputActionEvent_109_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Run_K2Node_InputActionEvent_108
// ()

void ABuff_Zipline_DinoBase_C::InpActEvt_Run_K2Node_InputActionEvent_108()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Run_K2Node_InputActionEvent_108");

	ABuff_Zipline_DinoBase_C_InpActEvt_Run_K2Node_InputActionEvent_108_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Jump_K2Node_InputActionEvent_107
// ()

void ABuff_Zipline_DinoBase_C::InpActEvt_Jump_K2Node_InputActionEvent_107()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Jump_K2Node_InputActionEvent_107");

	ABuff_Zipline_DinoBase_C_InpActEvt_Jump_K2Node_InputActionEvent_107_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Crouch_K2Node_InputActionEvent_106
// ()

void ABuff_Zipline_DinoBase_C::InpActEvt_Crouch_K2Node_InputActionEvent_106()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Crouch_K2Node_InputActionEvent_106");

	ABuff_Zipline_DinoBase_C_InpActEvt_Crouch_K2Node_InputActionEvent_106_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_105
// ()

void ABuff_Zipline_DinoBase_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_105()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_105");

	ABuff_Zipline_DinoBase_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_105_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_52
// ()

void ABuff_Zipline_DinoBase_C::InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_52()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_52");

	ABuff_Zipline_DinoBase_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_52_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_51
// ()

void ABuff_Zipline_DinoBase_C::InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_51()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_51");

	ABuff_Zipline_DinoBase_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_51_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_104
// ()

void ABuff_Zipline_DinoBase_C::InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_104()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_104");

	ABuff_Zipline_DinoBase_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_104_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.EndMoveAlongZipline_RunOnServer
// ()
// Parameters:
// bool                           AddImpulse                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::EndMoveAlongZipline_RunOnServer(bool AddImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.EndMoveAlongZipline_RunOnServer");

	ABuff_Zipline_DinoBase_C_EndMoveAlongZipline_RunOnServer_Params params;
	params.AddImpulse = AddImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87");

	ABuff_Zipline_DinoBase_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetMotorState_RunOnServer
// ()
// Parameters:
// TEnumAsByte<E_ZiplineMotorState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::SetMotorState_RunOnServer(TEnumAsByte<E_ZiplineMotorState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetMotorState_RunOnServer");

	ABuff_Zipline_DinoBase_C_SetMotorState_RunOnServer_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BindToHit
// ()

void ABuff_Zipline_DinoBase_C::BindToHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.BindToHit");

	ABuff_Zipline_DinoBase_C_BindToHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayCameraShake
// ()

void ABuff_Zipline_DinoBase_C::PlayCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayCameraShake");

	ABuff_Zipline_DinoBase_C_PlayCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayAttachDelayed
// ()

void ABuff_Zipline_DinoBase_C::PlayAttachDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.PlayAttachDelayed");

	ABuff_Zipline_DinoBase_C_PlayAttachDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.StopMoving_Multicast
// ()

void ABuff_Zipline_DinoBase_C::StopMoving_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.StopMoving_Multicast");

	ABuff_Zipline_DinoBase_C_StopMoving_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.OnComponentHit_Event
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ABuff_Zipline_DinoBase_C::OnComponentHit_Event(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.OnComponentHit_Event");

	ABuff_Zipline_DinoBase_C_OnComponentHit_Event_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetInitialVelocity
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::SetInitialVelocity(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetInitialVelocity");

	ABuff_Zipline_DinoBase_C_SetInitialVelocity_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SecondJumpImpulse
// ()

void ABuff_Zipline_DinoBase_C::SecondJumpImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SecondJumpImpulse");

	ABuff_Zipline_DinoBase_C_SecondJumpImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.FlipOnZipline_Multicast
// ()
// Parameters:
// bool                           fast                           (Parm, ZeroConstructor, IsPlainOldData)
// class ADinoCharacter_BP_Zipline_C* attachedDino                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::FlipOnZipline_Multicast(bool fast, class ADinoCharacter_BP_Zipline_C* attachedDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.FlipOnZipline_Multicast");

	ABuff_Zipline_DinoBase_C_FlipOnZipline_Multicast_Params params;
	params.fast = fast;
	params.attachedDino = attachedDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.FlipOnZipline_RunOnServer
// ()

void ABuff_Zipline_DinoBase_C::FlipOnZipline_RunOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.FlipOnZipline_RunOnServer");

	ABuff_Zipline_DinoBase_C_FlipOnZipline_RunOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetIsTurning
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::SetIsTurning(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetIsTurning");

	ABuff_Zipline_DinoBase_C_SetIsTurning_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.DoZiplineTurn_RunOnServer
// ()

void ABuff_Zipline_DinoBase_C::DoZiplineTurn_RunOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.DoZiplineTurn_RunOnServer");

	ABuff_Zipline_DinoBase_C_DoZiplineTurn_RunOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.RunPressed
// ()

void ABuff_Zipline_DinoBase_C::RunPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.RunPressed");

	ABuff_Zipline_DinoBase_C_RunPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineRunningSpeedAndAcceleration_Multicast
// ()
// Parameters:
// bool                           Reset                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::SetZiplineRunningSpeedAndAcceleration_Multicast(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineRunningSpeedAndAcceleration_Multicast");

	ABuff_Zipline_DinoBase_C_SetZiplineRunningSpeedAndAcceleration_Multicast_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineRunningSpeedAndAcceleration_RunOnServer
// ()
// Parameters:
// bool                           Reset                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::SetZiplineRunningSpeedAndAcceleration_RunOnServer(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetZiplineRunningSpeedAndAcceleration_RunOnServer");

	ABuff_Zipline_DinoBase_C_SetZiplineRunningSpeedAndAcceleration_RunOnServer_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetRunning_RunOnClient
// ()

void ABuff_Zipline_DinoBase_C::SetRunning_RunOnClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetRunning_RunOnClient");

	ABuff_Zipline_DinoBase_C_SetRunning_RunOnClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetSliding_Multicast
// ()

void ABuff_Zipline_DinoBase_C::SetSliding_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.SetSliding_Multicast");

	ABuff_Zipline_DinoBase_C_SetSliding_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.AI_SetZiplineRunning_Multicast
// ()

void ABuff_Zipline_DinoBase_C::AI_SetZiplineRunning_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.AI_SetZiplineRunning_Multicast");

	ABuff_Zipline_DinoBase_C_AI_SetZiplineRunning_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ExecuteUbergraph_Buff_Zipline_DinoBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_DinoBase_C::ExecuteUbergraph_Buff_Zipline_DinoBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C.ExecuteUbergraph_Buff_Zipline_DinoBase");

	ABuff_Zipline_DinoBase_C_ExecuteUbergraph_Buff_Zipline_DinoBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

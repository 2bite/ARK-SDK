// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Zipline_CaveWolf_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPInstigatorUnpossessed
// ()

void ABuff_Zipline_CaveWolf_C::BPInstigatorUnpossessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPInstigatorUnpossessed");

	ABuff_Zipline_CaveWolf_C_BPInstigatorUnpossessed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineFaceUpDirection
// ()
// Parameters:
// bool                           FacingUpDirection              (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::SetZiplineFaceUpDirection(bool FacingUpDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineFaceUpDirection");

	ABuff_Zipline_CaveWolf_C_SetZiplineFaceUpDirection_Params params;
	params.FacingUpDirection = FacingUpDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.Get Distance to Anchor
// ()
// Parameters:
// bool                           GetLower                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::Get_Distance_to_Anchor(bool GetLower, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.Get Distance to Anchor");

	ABuff_Zipline_CaveWolf_C_Get_Distance_to_Anchor_Params params;
	params.GetLower = GetLower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineSliding
// ()
// Parameters:
// bool                           Reset                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::SetZiplineSliding(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineSliding");

	ABuff_Zipline_CaveWolf_C_SetZiplineSliding_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.PlayAttachDelayed
// ()

void ABuff_Zipline_CaveWolf_C::PlayAttachDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.PlayAttachDelayed");

	ABuff_Zipline_CaveWolf_C_PlayAttachDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetAttachedCharacterTransform
// ()
// Parameters:
// struct UObject_FTransform*     NewTransform                   (Parm, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::SetAttachedCharacterTransform(struct UObject_FTransform* NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetAttachedCharacterTransform");

	ABuff_Zipline_CaveWolf_C_SetAttachedCharacterTransform_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.PlayAttachAnimation
// ()
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::PlayAttachAnimation(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.PlayAttachAnimation");

	ABuff_Zipline_CaveWolf_C_PlayAttachAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CalcZiplineVelocityMotorized
// ()
// Parameters:
// struct FVector*                InVelocity                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutVelocity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::CalcZiplineVelocityMotorized(struct FVector* InVelocity, float* DeltaTime, struct FVector* OutVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CalcZiplineVelocityMotorized");

	ABuff_Zipline_CaveWolf_C_CalcZiplineVelocityMotorized_Params params;
	params.InVelocity = InVelocity;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVelocity != nullptr)
		*OutVelocity = params.OutVelocity;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ReceiveBeginPlay
// ()

void ABuff_Zipline_CaveWolf_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ReceiveBeginPlay");

	ABuff_Zipline_CaveWolf_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.GetAttachOffset
// ()
// Parameters:
// struct FVector                 AttachOffset                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::GetAttachOffset(struct FVector* AttachOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.GetAttachOffset");

	ABuff_Zipline_CaveWolf_C_GetAttachOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttachOffset != nullptr)
		*AttachOffset = params.AttachOffset;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.Play Detach Animation
// ()
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::Play_Detach_Animation(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.Play Detach Animation");

	ABuff_Zipline_CaveWolf_C_Play_Detach_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.IsStillColliding
// (NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void ABuff_Zipline_CaveWolf_C::STATIC_IsStillColliding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.IsStillColliding");

	ABuff_Zipline_CaveWolf_C_IsStillColliding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CanZiplineFlip
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::STATIC_CanZiplineFlip(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CanZiplineFlip");

	ABuff_Zipline_CaveWolf_C_CanZiplineFlip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ResetCamera
// ()

void ABuff_Zipline_CaveWolf_C::ResetCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ResetCamera");

	ABuff_Zipline_CaveWolf_C_ResetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.HandleCollision
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ABuff_Zipline_CaveWolf_C::HandleCollision(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.HandleCollision");

	ABuff_Zipline_CaveWolf_C_HandleCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.HitZiplineEndStop
// (Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class UMovementComponent**     MovementComp                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::HitZiplineEndStop(class UMovementComponent** MovementComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.HitZiplineEndStop");

	ABuff_Zipline_CaveWolf_C_HitZiplineEndStop_Params params;
	params.MovementComp = MovementComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CalcZiplinePreservedStartVelocity
// ()
// Parameters:
// struct FVector*                InVelocity                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::CalcZiplinePreservedStartVelocity(struct FVector* InVelocity, struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CalcZiplinePreservedStartVelocity");

	ABuff_Zipline_CaveWolf_C_CalcZiplinePreservedStartVelocity_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineRunningSpeedAndAcceleration
// ()

void ABuff_Zipline_CaveWolf_C::SetZiplineRunningSpeedAndAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineRunningSpeedAndAcceleration");

	ABuff_Zipline_CaveWolf_C_SetZiplineRunningSpeedAndAcceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ResetZiplineSpeedAndAcceleration
// ()

void ABuff_Zipline_CaveWolf_C::ResetZiplineSpeedAndAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ResetZiplineSpeedAndAcceleration");

	ABuff_Zipline_CaveWolf_C_ResetZiplineSpeedAndAcceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.End Move Along Zipline
// ()
// Parameters:
// bool*                          AddImpulse                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::End_Move_Along_Zipline(bool* AddImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.End Move Along Zipline");

	ABuff_Zipline_CaveWolf_C_End_Move_Along_Zipline_Params params;
	params.AddImpulse = AddImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CalcZiplineVelocityNonMotorized
// ()
// Parameters:
// struct FVector*                InVelocity                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutVelocity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::CalcZiplineVelocityNonMotorized(struct FVector* InVelocity, float* DeltaTime, struct FVector* OutVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.CalcZiplineVelocityNonMotorized");

	ABuff_Zipline_CaveWolf_C_CalcZiplineVelocityNonMotorized_Params params;
	params.InVelocity = InVelocity;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVelocity != nullptr)
		*OutVelocity = params.OutVelocity;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UpdateFX
// ()

void ABuff_Zipline_CaveWolf_C::UpdateFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UpdateFX");

	ABuff_Zipline_CaveWolf_C_UpdateFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ProcessMotorInput
// ()
// Parameters:
// float*                         A                              (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::ProcessMotorInput(float* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ProcessMotorInput");

	ABuff_Zipline_CaveWolf_C_ProcessMotorInput_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.JumpImpulse
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FVector*                Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::STATIC_JumpImpulse(struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.JumpImpulse");

	ABuff_Zipline_CaveWolf_C_JumpImpulse_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UpdateActorZiplineOffset
// (NetRequest, Exec, Native, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void ABuff_Zipline_CaveWolf_C::UpdateActorZiplineOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UpdateActorZiplineOffset");

	ABuff_Zipline_CaveWolf_C_UpdateActorZiplineOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.TickMoveAlongZipline
// ()

void ABuff_Zipline_CaveWolf_C::TickMoveAlongZipline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.TickMoveAlongZipline");

	ABuff_Zipline_CaveWolf_C_TickMoveAlongZipline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetHurtAnim
// ()
// Parameters:
// bool                           Hanging                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reset                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::SetHurtAnim(bool Hanging, bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetHurtAnim");

	ABuff_Zipline_CaveWolf_C_SetHurtAnim_Params params;
	params.Hanging = Hanging;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.AttachToZipline
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FVector*                StartLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::AttachToZipline(struct FVector* StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.AttachToZipline");

	ABuff_Zipline_CaveWolf_C_AttachToZipline_Params params;
	params.StartLocation = StartLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BuffTickClient");

	ABuff_Zipline_CaveWolf_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UpdateFPVCameraAndMeshPosition
// ()

void ABuff_Zipline_CaveWolf_C::UpdateFPVCameraAndMeshPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UpdateFPVCameraAndMeshPosition");

	ABuff_Zipline_CaveWolf_C_UpdateFPVCameraAndMeshPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPOverrideCharacterNewFallVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_Zipline_CaveWolf_C::BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPOverrideCharacterNewFallVelocity");

	ABuff_Zipline_CaveWolf_C_BPOverrideCharacterNewFallVelocity_Params params;
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


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Zipline_CaveWolf_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPCheckPreventInput");

	ABuff_Zipline_CaveWolf_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.PlayTurnAnimation
// ()
// Parameters:
// class UAnimMontage**           override                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::PlayTurnAnimation(class UAnimMontage** override, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.PlayTurnAnimation");

	ABuff_Zipline_CaveWolf_C_PlayTurnAnimation_Params params;
	params.override = override;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineControlRotation
// ()

void ABuff_Zipline_CaveWolf_C::SetZiplineControlRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineControlRotation");

	ABuff_Zipline_CaveWolf_C_SetZiplineControlRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.RotationNearlyEqual
// ()
// Parameters:
// struct FRotator                rotA                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                rotB                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ErrorTolerance                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::RotationNearlyEqual(const struct FRotator& rotA, const struct FRotator& rotB, float ErrorTolerance, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.RotationNearlyEqual");

	ABuff_Zipline_CaveWolf_C_RotationNearlyEqual_Params params;
	params.rotA = rotA;
	params.rotB = rotB;
	params.ErrorTolerance = ErrorTolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPDeactivated");

	ABuff_Zipline_CaveWolf_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.BPSetupForInstigator");

	ABuff_Zipline_CaveWolf_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ResetMeshPosition
// ()

void ABuff_Zipline_CaveWolf_C::ResetMeshPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ResetMeshPosition");

	ABuff_Zipline_CaveWolf_C_ResetMeshPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InterpolateCharacterMeshToLine
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::InterpolateCharacterMeshToLine(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InterpolateCharacterMeshToLine");

	ABuff_Zipline_CaveWolf_C_InterpolateCharacterMeshToLine_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UserConstructionScript
// ()

void ABuff_Zipline_CaveWolf_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.UserConstructionScript");

	ABuff_Zipline_CaveWolf_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Run_K2Node_InputActionEvent_107
// ()

void ABuff_Zipline_CaveWolf_C::InpActEvt_Run_K2Node_InputActionEvent_107()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Run_K2Node_InputActionEvent_107");

	ABuff_Zipline_CaveWolf_C_InpActEvt_Run_K2Node_InputActionEvent_107_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Run_K2Node_InputActionEvent_106
// ()

void ABuff_Zipline_CaveWolf_C::InpActEvt_Run_K2Node_InputActionEvent_106()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Run_K2Node_InputActionEvent_106");

	ABuff_Zipline_CaveWolf_C_InpActEvt_Run_K2Node_InputActionEvent_106_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Jump_K2Node_InputActionEvent_105
// ()

void ABuff_Zipline_CaveWolf_C::InpActEvt_Jump_K2Node_InputActionEvent_105()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Jump_K2Node_InputActionEvent_105");

	ABuff_Zipline_CaveWolf_C_InpActEvt_Jump_K2Node_InputActionEvent_105_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Use_K2Node_InputActionEvent_104
// ()

void ABuff_Zipline_CaveWolf_C::InpActEvt_Use_K2Node_InputActionEvent_104()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Use_K2Node_InputActionEvent_104");

	ABuff_Zipline_CaveWolf_C_InpActEvt_Use_K2Node_InputActionEvent_104_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Crouch_K2Node_InputActionEvent_103
// ()

void ABuff_Zipline_CaveWolf_C::InpActEvt_Crouch_K2Node_InputActionEvent_103()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Crouch_K2Node_InputActionEvent_103");

	ABuff_Zipline_CaveWolf_C_InpActEvt_Crouch_K2Node_InputActionEvent_103_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_102
// ()

void ABuff_Zipline_CaveWolf_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_102()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_102");

	ABuff_Zipline_CaveWolf_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_102_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_54
// ()

void ABuff_Zipline_CaveWolf_C::InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_54()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_54");

	ABuff_Zipline_CaveWolf_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_54_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_53
// ()

void ABuff_Zipline_CaveWolf_C::InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_53()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_53");

	ABuff_Zipline_CaveWolf_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_53_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_101
// ()

void ABuff_Zipline_CaveWolf_C::InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_101");

	ABuff_Zipline_CaveWolf_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_101_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_52
// ()

void ABuff_Zipline_CaveWolf_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_52()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_52");

	ABuff_Zipline_CaveWolf_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_52_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.FlipOnZipline_Multicast
// ()

void ABuff_Zipline_CaveWolf_C::FlipOnZipline_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.FlipOnZipline_Multicast");

	ABuff_Zipline_CaveWolf_C_FlipOnZipline_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.FlipOnZipline_RunOnServer
// ()

void ABuff_Zipline_CaveWolf_C::FlipOnZipline_RunOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.FlipOnZipline_RunOnServer");

	ABuff_Zipline_CaveWolf_C_FlipOnZipline_RunOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetIsTurning
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::SetIsTurning(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetIsTurning");

	ABuff_Zipline_CaveWolf_C_SetIsTurning_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.DoZiplineTurn_RunOnServer
// ()

void ABuff_Zipline_CaveWolf_C::DoZiplineTurn_RunOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.DoZiplineTurn_RunOnServer");

	ABuff_Zipline_CaveWolf_C_DoZiplineTurn_RunOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.RunPressed
// ()

void ABuff_Zipline_CaveWolf_C::RunPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.RunPressed");

	ABuff_Zipline_CaveWolf_C_RunPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineRunningSpeedAndAcceleration_Multicast
// ()
// Parameters:
// bool                           Reset                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::SetZiplineRunningSpeedAndAcceleration_Multicast(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineRunningSpeedAndAcceleration_Multicast");

	ABuff_Zipline_CaveWolf_C_SetZiplineRunningSpeedAndAcceleration_Multicast_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineRunningSpeedAndAcceleration_RunOnServer
// ()
// Parameters:
// bool                           Reset                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::SetZiplineRunningSpeedAndAcceleration_RunOnServer(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetZiplineRunningSpeedAndAcceleration_RunOnServer");

	ABuff_Zipline_CaveWolf_C_SetZiplineRunningSpeedAndAcceleration_RunOnServer_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetRunning_RunOnClient
// ()

void ABuff_Zipline_CaveWolf_C::SetRunning_RunOnClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetRunning_RunOnClient");

	ABuff_Zipline_CaveWolf_C_SetRunning_RunOnClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.DoNothing
// ()

void ABuff_Zipline_CaveWolf_C::DoNothing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.DoNothing");

	ABuff_Zipline_CaveWolf_C_DoNothing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetSliding_Multicast
// ()

void ABuff_Zipline_CaveWolf_C::SetSliding_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.SetSliding_Multicast");

	ABuff_Zipline_CaveWolf_C_SetSliding_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.AI_SetZiplineRunning_Multicast
// ()

void ABuff_Zipline_CaveWolf_C::AI_SetZiplineRunning_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.AI_SetZiplineRunning_Multicast");

	ABuff_Zipline_CaveWolf_C_AI_SetZiplineRunning_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ExecuteUbergraph_Buff_Zipline_CaveWolf
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_CaveWolf_C::ExecuteUbergraph_Buff_Zipline_CaveWolf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.ExecuteUbergraph_Buff_Zipline_CaveWolf");

	ABuff_Zipline_CaveWolf_C_ExecuteUbergraph_Buff_Zipline_CaveWolf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

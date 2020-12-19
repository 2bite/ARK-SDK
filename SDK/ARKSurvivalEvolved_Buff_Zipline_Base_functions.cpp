// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Zipline_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPInstigatorUnpossessed
// ()

void ABuff_Zipline_Base_C::BPInstigatorUnpossessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPInstigatorUnpossessed");

	ABuff_Zipline_Base_C_BPInstigatorUnpossessed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.BuffTickServer");

	ABuff_Zipline_Base_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.Get Zipline Start and End Point NonPure
// ()
// Parameters:
// bool                           NoOffset                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::Get_Zipline_Start_and_End_Point_NonPure(bool NoOffset, struct FVector* Start, struct FVector* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.Get Zipline Start and End Point NonPure");

	ABuff_Zipline_Base_C_Get_Zipline_Start_and_End_Point_NonPure_Params params;
	params.NoOffset = NoOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetAttachedCharacterTransform
// ()
// Parameters:
// struct UObject_FTransform      NewTransform                   (Parm, IsPlainOldData)

void ABuff_Zipline_Base_C::SetAttachedCharacterTransform(const struct UObject_FTransform& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetAttachedCharacterTransform");

	ABuff_Zipline_Base_C_SetAttachedCharacterTransform_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetupLocalClient
// ()
// Parameters:
// class AActor*                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::SetupLocalClient(class AActor* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetupLocalClient");

	ABuff_Zipline_Base_C_SetupLocalClient_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.Deactivate Local Client
// ()
// Parameters:
// class AActor*                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::Deactivate_Local_Client(class AActor* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.Deactivate Local Client");

	ABuff_Zipline_Base_C_Deactivate_Local_Client_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.IsStillColliding
// (NetReliable, NetRequest, Event, Static, NetMulticast, Public, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, Const)

void ABuff_Zipline_Base_C::STATIC_IsStillColliding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.IsStillColliding");

	ABuff_Zipline_Base_C_IsStillColliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.HandleCollision
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ABuff_Zipline_Base_C::HandleCollision(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.HandleCollision");

	ABuff_Zipline_Base_C_HandleCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.HitZiplineEndStop
// ()
// Parameters:
// class UMovementComponent*      MovementComp                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::HitZiplineEndStop(class UMovementComponent* MovementComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.HitZiplineEndStop");

	ABuff_Zipline_Base_C_HitZiplineEndStop_Params params;
	params.MovementComp = MovementComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalcZiplinePreservedStartVelocity
// ()
// Parameters:
// struct FVector                 InVelocity                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::CalcZiplinePreservedStartVelocity(const struct FVector& InVelocity, struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalcZiplinePreservedStartVelocity");

	ABuff_Zipline_Base_C_CalcZiplinePreservedStartVelocity_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalcZiplineVelocityMotorized
// ()
// Parameters:
// struct FVector                 InVelocity                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutVelocity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::CalcZiplineVelocityMotorized(const struct FVector& InVelocity, float DeltaTime, struct FVector* OutVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalcZiplineVelocityMotorized");

	ABuff_Zipline_Base_C_CalcZiplineVelocityMotorized_Params params;
	params.InVelocity = InVelocity;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVelocity != nullptr)
		*OutVelocity = params.OutVelocity;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalcZiplineVelocityNonMotorized
// ()
// Parameters:
// struct FVector                 InVelocity                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutVelocity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::CalcZiplineVelocityNonMotorized(const struct FVector& InVelocity, float DeltaTime, struct FVector* OutVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalcZiplineVelocityNonMotorized");

	ABuff_Zipline_Base_C_CalcZiplineVelocityNonMotorized_Params params;
	params.InVelocity = InVelocity;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVelocity != nullptr)
		*OutVelocity = params.OutVelocity;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.ProcessMotorInput
// ()
// Parameters:
// float                          A                              (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::ProcessMotorInput(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.ProcessMotorInput");

	ABuff_Zipline_Base_C_ProcessMotorInput_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.IsZiplineStateBlockedOrStopped
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Zipline_Base_C::IsZiplineStateBlockedOrStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.IsZiplineStateBlockedOrStopped");

	ABuff_Zipline_Base_C_IsZiplineStateBlockedOrStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.IsAnimBlockingZiplineMovement
// ()
// Parameters:
// bool                           bLocked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::IsAnimBlockingZiplineMovement(bool* bLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.IsAnimBlockingZiplineMovement");

	ABuff_Zipline_Base_C_IsAnimBlockingZiplineMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLocked != nullptr)
		*bLocked = params.bLocked;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPIsCharacterHardAttached
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Zipline_Base_C::BPIsCharacterHardAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPIsCharacterHardAttached");

	ABuff_Zipline_Base_C_BPIsCharacterHardAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPNonDedicatedPlayerPostAnimUpdate
// ()

void ABuff_Zipline_Base_C::BPNonDedicatedPlayerPostAnimUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPNonDedicatedPlayerPostAnimUpdate");

	ABuff_Zipline_Base_C_BPNonDedicatedPlayerPostAnimUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPCharacterDetach
// ()

void ABuff_Zipline_Base_C::BPCharacterDetach()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPCharacterDetach");

	ABuff_Zipline_Base_C_BPCharacterDetach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetZiplineControlRotation
// ()

void ABuff_Zipline_Base_C::SetZiplineControlRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetZiplineControlRotation");

	ABuff_Zipline_Base_C_SetZiplineControlRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.PlayTurnAnimation
// ()
// Parameters:
// class UAnimMontage*            Override                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::PlayTurnAnimation(class UAnimMontage* Override, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.PlayTurnAnimation");

	ABuff_Zipline_Base_C_PlayTurnAnimation_Params params;
	params.Override = Override;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Zipline_Base_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.BuffAdjustDamage");

	ABuff_Zipline_Base_C_BuffAdjustDamage_Params params;
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


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateFPVCameraAndMeshPosition
// ()

void ABuff_Zipline_Base_C::UpdateFPVCameraAndMeshPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateFPVCameraAndMeshPosition");

	ABuff_Zipline_Base_C_UpdateFPVCameraAndMeshPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetFPVViewLocation
// ()
// Parameters:
// struct FVector                 ViewLoc                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::GetFPVViewLocation(struct FVector* ViewLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetFPVViewLocation");

	ABuff_Zipline_Base_C_GetFPVViewLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewLoc != nullptr)
		*ViewLoc = params.ViewLoc;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateHandleMeshLocationAndRotation
// ()

void ABuff_Zipline_Base_C::UpdateHandleMeshLocationAndRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateHandleMeshLocationAndRotation");

	ABuff_Zipline_Base_C_UpdateHandleMeshLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateFPVAnims
// ()

void ABuff_Zipline_Base_C::UpdateFPVAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateFPVAnims");

	ABuff_Zipline_Base_C_UpdateFPVAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.VectorNearlyEqual
// ()
// Parameters:
// float                          ErrorTolerance                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 inVec                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InVec2                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Zipline_Base_C::VectorNearlyEqual(float ErrorTolerance, const struct FVector& inVec, const struct FVector& InVec2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.VectorNearlyEqual");

	ABuff_Zipline_Base_C_VectorNearlyEqual_Params params;
	params.ErrorTolerance = ErrorTolerance;
	params.inVec = inVec;
	params.InVec2 = InVec2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.ResetCamera
// ()

void ABuff_Zipline_Base_C::ResetCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.ResetCamera");

	ABuff_Zipline_Base_C_ResetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateCamera
// ()

void ABuff_Zipline_Base_C::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateCamera");

	ABuff_Zipline_Base_C_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.ResetFOV
// ()

void ABuff_Zipline_Base_C::ResetFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.ResetFOV");

	ABuff_Zipline_Base_C_ResetFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateFOV
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::UpdateFOV(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateFOV");

	ABuff_Zipline_Base_C_UpdateFOV_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.ResetMeshPosition
// ()

void ABuff_Zipline_Base_C::ResetMeshPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.ResetMeshPosition");

	ABuff_Zipline_Base_C_ResetMeshPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.JumpImpulse
// (Exec, Native, Static, NetMulticast, Public, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::STATIC_JumpImpulse(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.JumpImpulse");

	ABuff_Zipline_Base_C_JumpImpulse_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.InterpolateCharacterMeshToLine
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::InterpolateCharacterMeshToLine(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.InterpolateCharacterMeshToLine");

	ABuff_Zipline_Base_C_InterpolateCharacterMeshToLine_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetZiplineStartAndEndPoint
// ()
// Parameters:
// bool                           NoOffset                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::GetZiplineStartAndEndPoint(bool NoOffset, struct FVector* Start, struct FVector* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetZiplineStartAndEndPoint");

	ABuff_Zipline_Base_C_GetZiplineStartAndEndPoint_Params params;
	params.NoOffset = NoOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalculateZiplineMaxVelocity
// ()
// Parameters:
// float                          Accleration                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxVelocity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::CalculateZiplineMaxVelocity(float Accleration, float Length, float* MaxVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalculateZiplineMaxVelocity");

	ABuff_Zipline_Base_C_CalculateZiplineMaxVelocity_Params params;
	params.Accleration = Accleration;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxVelocity != nullptr)
		*MaxVelocity = params.MaxVelocity;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalculateZiplineAcceleration
// ()
// Parameters:
// struct FVector                 StartPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndPoint                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Acceleration                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::CalculateZiplineAcceleration(const struct FVector& StartPoint, const struct FVector& EndPoint, float* Acceleration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.CalculateZiplineAcceleration");

	ABuff_Zipline_Base_C_CalculateZiplineAcceleration_Params params;
	params.StartPoint = StartPoint;
	params.EndPoint = EndPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Acceleration != nullptr)
		*Acceleration = params.Acceleration;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.Play Detach Animation
// ()
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::Play_Detach_Animation(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.Play Detach Animation");

	ABuff_Zipline_Base_C_Play_Detach_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.PlayAttachAnimation
// ()
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::PlayAttachAnimation(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.PlayAttachAnimation");

	ABuff_Zipline_Base_C_PlayAttachAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetCurrentDistanceOnLinePercent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Zipline_Base_C::GetCurrentDistanceOnLinePercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetCurrentDistanceOnLinePercent");

	ABuff_Zipline_Base_C_GetCurrentDistanceOnLinePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetStartEndOffset
// ()
// Parameters:
// bool                           ReturnPercent                  (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        forChar                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Zipline_Base_C::GetStartEndOffset(bool ReturnPercent, class APrimalCharacter* forChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetStartEndOffset");

	ABuff_Zipline_Base_C_GetStartEndOffset_Params params;
	params.ReturnPercent = ReturnPercent;
	params.forChar = forChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetCurrentSpeedPercentageFromMax
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Zipline_Base_C::GetCurrentSpeedPercentageFromMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetCurrentSpeedPercentageFromMax");

	ABuff_Zipline_Base_C_GetCurrentSpeedPercentageFromMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetMotorState
// ()
// Parameters:
// TEnumAsByte<E_ZiplineMotorState> NewMotorState                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::SetMotorState(TEnumAsByte<E_ZiplineMotorState> NewMotorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetMotorState");

	ABuff_Zipline_Base_C_SetMotorState_Params params;
	params.NewMotorState = NewMotorState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetClosestPointOnLine
// ()
// Parameters:
// struct FVector                 LineStart                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LineEnd                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::GetClosestPointOnLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Location, struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetClosestPointOnLine");

	ABuff_Zipline_Base_C_GetClosestPointOnLine_Params params;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Zipline_Base_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPCheckPreventInput");

	ABuff_Zipline_Base_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateMeshAttachment
// ()

void ABuff_Zipline_Base_C::UpdateMeshAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateMeshAttachment");

	ABuff_Zipline_Base_C_UpdateMeshAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateFX
// ()

void ABuff_Zipline_Base_C::UpdateFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.UpdateFX");

	ABuff_Zipline_Base_C_UpdateFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.BuffTickClient");

	ABuff_Zipline_Base_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetAttachOffset
// ()
// Parameters:
// struct FVector                 AttachOffset                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::GetAttachOffset(struct FVector* AttachOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.GetAttachOffset");

	ABuff_Zipline_Base_C_GetAttachOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttachOffset != nullptr)
		*AttachOffset = params.AttachOffset;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPSetupForInstigator
// (NetRequest, Exec, Native, Event, NetResponse, Protected, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPSetupForInstigator");

	ABuff_Zipline_Base_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPDeactivated");

	ABuff_Zipline_Base_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPOverrideCharacterNewFallVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_Zipline_Base_C::BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.BPOverrideCharacterNewFallVelocity");

	ABuff_Zipline_Base_C_BPOverrideCharacterNewFallVelocity_Params params;
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


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.AttachToZipline
// (Native, NetResponse, Static, Protected, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 StartLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::STATIC_AttachToZipline(const struct FVector& StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.AttachToZipline");

	ABuff_Zipline_Base_C_AttachToZipline_Params params;
	params.StartLocation = StartLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.End Move Along Zipline
// ()
// Parameters:
// bool                           AddImpulse                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::End_Move_Along_Zipline(bool AddImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.End Move Along Zipline");

	ABuff_Zipline_Base_C_End_Move_Along_Zipline_Params params;
	params.AddImpulse = AddImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.TickMoveAlongZipline
// ()

void ABuff_Zipline_Base_C::TickMoveAlongZipline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.TickMoveAlongZipline");

	ABuff_Zipline_Base_C_TickMoveAlongZipline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.StartMoveAlongZipline
// ()
// Parameters:
// struct FVector                 StartLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// class AZipline_Anchor_C*       UpperZiplineAnchor             (Parm, ZeroConstructor, IsPlainOldData)
// class AZipline_Anchor_C*       LowerZiplineAnchor             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::StartMoveAlongZipline(const struct FVector& StartLocation, class AZipline_Anchor_C* UpperZiplineAnchor, class AZipline_Anchor_C* LowerZiplineAnchor, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.StartMoveAlongZipline");

	ABuff_Zipline_Base_C_StartMoveAlongZipline_Params params;
	params.StartLocation = StartLocation;
	params.UpperZiplineAnchor = UpperZiplineAnchor;
	params.LowerZiplineAnchor = LowerZiplineAnchor;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.UserConstructionScript
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, Protected, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABuff_Zipline_Base_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.UserConstructionScript");

	ABuff_Zipline_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Use_K2Node_InputActionEvent_100
// ()

void ABuff_Zipline_Base_C::InpActEvt_Use_K2Node_InputActionEvent_100()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Use_K2Node_InputActionEvent_100");

	ABuff_Zipline_Base_C_InpActEvt_Use_K2Node_InputActionEvent_100_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Prone_K2Node_InputActionEvent_99
// ()

void ABuff_Zipline_Base_C::InpActEvt_Prone_K2Node_InputActionEvent_99()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Prone_K2Node_InputActionEvent_99");

	ABuff_Zipline_Base_C_InpActEvt_Prone_K2Node_InputActionEvent_99_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Crouch_K2Node_InputActionEvent_98
// ()

void ABuff_Zipline_Base_C::InpActEvt_Crouch_K2Node_InputActionEvent_98()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Crouch_K2Node_InputActionEvent_98");

	ABuff_Zipline_Base_C_InpActEvt_Crouch_K2Node_InputActionEvent_98_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Jump_K2Node_InputActionEvent_97
// ()

void ABuff_Zipline_Base_C::InpActEvt_Jump_K2Node_InputActionEvent_97()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Jump_K2Node_InputActionEvent_97");

	ABuff_Zipline_Base_C_InpActEvt_Jump_K2Node_InputActionEvent_97_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_51
// ()

void ABuff_Zipline_Base_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_51()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_51");

	ABuff_Zipline_Base_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_51_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_50
// ()

void ABuff_Zipline_Base_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_50()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_50");

	ABuff_Zipline_Base_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_50_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_49
// ()

void ABuff_Zipline_Base_C::InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_49()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_49");

	ABuff_Zipline_Base_C_InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_49_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.EndMoveAlongZipline_RunOnServer
// ()
// Parameters:
// bool                           AddImpulse                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::EndMoveAlongZipline_RunOnServer(bool AddImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.EndMoveAlongZipline_RunOnServer");

	ABuff_Zipline_Base_C_EndMoveAlongZipline_RunOnServer_Params params;
	params.AddImpulse = AddImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87");

	ABuff_Zipline_Base_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetMotorState_RunOnServer
// ()
// Parameters:
// TEnumAsByte<E_ZiplineMotorState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::SetMotorState_RunOnServer(TEnumAsByte<E_ZiplineMotorState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetMotorState_RunOnServer");

	ABuff_Zipline_Base_C_SetMotorState_RunOnServer_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.BindToHit
// ()

void ABuff_Zipline_Base_C::BindToHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.BindToHit");

	ABuff_Zipline_Base_C_BindToHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.PlayCameraShake
// ()

void ABuff_Zipline_Base_C::PlayCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.PlayCameraShake");

	ABuff_Zipline_Base_C_PlayCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.PlayAttachDelayed
// ()

void ABuff_Zipline_Base_C::PlayAttachDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.PlayAttachDelayed");

	ABuff_Zipline_Base_C_PlayAttachDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.StopMoving_Multicast
// ()

void ABuff_Zipline_Base_C::StopMoving_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.StopMoving_Multicast");

	ABuff_Zipline_Base_C_StopMoving_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.OnComponentHit_Event
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ABuff_Zipline_Base_C::OnComponentHit_Event(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.OnComponentHit_Event");

	ABuff_Zipline_Base_C_OnComponentHit_Event_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetInitialVelocity
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::SetInitialVelocity(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.SetInitialVelocity");

	ABuff_Zipline_Base_C_SetInitialVelocity_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.SecondJumpImpulse
// ()

void ABuff_Zipline_Base_C::SecondJumpImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.SecondJumpImpulse");

	ABuff_Zipline_Base_C_SecondJumpImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Base.Buff_Zipline_Base_C.ExecuteUbergraph_Buff_Zipline_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Base_C::ExecuteUbergraph_Buff_Zipline_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Base.Buff_Zipline_Base_C.ExecuteUbergraph_Buff_Zipline_Base");

	ABuff_Zipline_Base_C_ExecuteUbergraph_Buff_Zipline_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Shapeshifter_Large_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.WantsToRun
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::WantsToRun(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.WantsToRun");

	AShapeshifter_Large_Character_BP_C_WantsToRun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnNonInstanceJumpOffWallInput
// ()
// Parameters:
// float*                         HoldTime                       (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::OnNonInstanceJumpOffWallInput(float* HoldTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnNonInstanceJumpOffWallInput");

	AShapeshifter_Large_Character_BP_C_OnNonInstanceJumpOffWallInput_Params params;
	params.HoldTime = HoldTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetLatchJumpSpeedThresholdForRotate
// (Native, MulticastDelegate, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::GetLatchJumpSpeedThresholdForRotate(float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetLatchJumpSpeedThresholdForRotate");

	AShapeshifter_Large_Character_BP_C_GetLatchJumpSpeedThresholdForRotate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Large_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPHandleControllerInitiatedAttack");

	AShapeshifter_Large_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AdjustIKHalfLegLength
// ()
// Parameters:
// bool                           Default                        (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::AdjustIKHalfLegLength(bool Default)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AdjustIKHalfLegLength");

	AShapeshifter_Large_Character_BP_C_AdjustIKHalfLegLength_Params params;
	params.Default = Default;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Large_Character_BP_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPCanCryo");

	AShapeshifter_Large_Character_BP_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDinoPostBeginPlay
// ()

void AShapeshifter_Large_Character_BP_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDinoPostBeginPlay");

	AShapeshifter_Large_Character_BP_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CanSequentialJump
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::CanSequentialJump(bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CanSequentialJump");

	AShapeshifter_Large_Character_BP_C_CanSequentialJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Throttled TickFn
// (Event, NetResponse, Static, NetMulticast, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void AShapeshifter_Large_Character_BP_C::STATIC_Throttled_TickFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Throttled TickFn");

	AShapeshifter_Large_Character_BP_C_Throttled_TickFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPAcknowledgeServerCorrection
// ()
// Parameters:
// float*                         TimeStamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NewLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NewVel                         (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    NewBase                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewBaseBoneName                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 ServerMovementMode             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Large_Character_BP_C::BPAcknowledgeServerCorrection(float* TimeStamp, struct FVector* NewLoc, struct FVector* NewVel, class UPrimitiveComponent** NewBase, struct FName* NewBaseBoneName, bool* bHasBase, bool* bBaseRelativePosition, unsigned char* ServerMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPAcknowledgeServerCorrection");

	AShapeshifter_Large_Character_BP_C_BPAcknowledgeServerCorrection_Params params;
	params.TimeStamp = TimeStamp;
	params.NewLoc = NewLoc;
	params.NewVel = NewVel;
	params.NewBase = NewBase;
	params.NewBaseBoneName = NewBaseBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReplicateMovementToSimulatedClients
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Large_Character_BP_C::ReplicateMovementToSimulatedClients()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReplicateMovementToSimulatedClients");

	AShapeshifter_Large_Character_BP_C_ReplicateMovementToSimulatedClients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdateBerzerk
// ()

void AShapeshifter_Large_Character_BP_C::UpdateBerzerk()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdateBerzerk");

	AShapeshifter_Large_Character_BP_C_UpdateBerzerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetCameraInterpSpeed
// ()
// Parameters:
// float                          InterpSpeed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::GetCameraInterpSpeed(float* InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetCameraInterpSpeed");

	AShapeshifter_Large_Character_BP_C_GetCameraInterpSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InterpSpeed != nullptr)
		*InterpSpeed = params.InterpSpeed;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InitUnTransformEvents
// ()

void AShapeshifter_Large_Character_BP_C::InitUnTransformEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InitUnTransformEvents");

	AShapeshifter_Large_Character_BP_C_InitUnTransformEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnJumpFromGround
// ()
// Parameters:
// float*                         HoldTime                       (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::OnJumpFromGround(float* HoldTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnJumpFromGround");

	AShapeshifter_Large_Character_BP_C_OnJumpFromGround_Params params;
	params.HoldTime = HoldTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_OnSetDeath
// ()

void AShapeshifter_Large_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_OnSetDeath");

	AShapeshifter_Large_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetProjectileTypeForRockThrow
// ()
// Parameters:
// struct FName                   TypeName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::GetProjectileTypeForRockThrow(struct FName* TypeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetProjectileTypeForRockThrow");

	AShapeshifter_Large_Character_BP_C_GetProjectileTypeForRockThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TypeName != nullptr)
		*TypeName = params.TypeName;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get RockThrowAttack Anim Index from Idle Anim
// ()
// Parameters:
// int                            Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::Get_RockThrowAttack_Anim_Index_from_Idle_Anim(int* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get RockThrowAttack Anim Index from Idle Anim");

	AShapeshifter_Large_Character_BP_C_Get_RockThrowAttack_Anim_Index_from_Idle_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GrabRock
// ()

void AShapeshifter_Large_Character_BP_C::GrabRock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GrabRock");

	AShapeshifter_Large_Character_BP_C_GrabRock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CanJumpInternal
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Large_Character_BP_C::CanJumpInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CanJumpInternal");

	AShapeshifter_Large_Character_BP_C_CanJumpInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ThrowRock
// (Native, Event, NetMulticast, MulticastDelegate, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void AShapeshifter_Large_Character_BP_C::ThrowRock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ThrowRock");

	AShapeshifter_Large_Character_BP_C_ThrowRock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Is Super Uberpounce
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::Is_Super_Uberpounce(bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Is Super Uberpounce");

	AShapeshifter_Large_Character_BP_C_Is_Super_Uberpounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceInterpSpeed
// ()
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::GetUberpounceInterpSpeed(float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceInterpSpeed");

	AShapeshifter_Large_Character_BP_C_GetUberpounceInterpSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetInitialAnimationForUberpounce
// ()
// Parameters:
// bool*                          QuickUberpounce                (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            OutAnim                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   RetStartSectionName            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::GetInitialAnimationForUberpounce(bool* QuickUberpounce, class UAnimMontage** OutAnim, struct FName* RetStartSectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetInitialAnimationForUberpounce");

	AShapeshifter_Large_Character_BP_C_GetInitialAnimationForUberpounce_Params params;
	params.QuickUberpounce = QuickUberpounce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAnim != nullptr)
		*OutAnim = params.OutAnim;
	if (RetStartSectionName != nullptr)
		*RetStartSectionName = params.RetStartSectionName;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdateIdleAnim
// ()
// Parameters:
// TEnumAsByte<EShapeshifterIdleAnimEnum> newIdle                        (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::UpdateIdleAnim(TEnumAsByte<EShapeshifterIdleAnimEnum> newIdle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdateIdleAnim");

	AShapeshifter_Large_Character_BP_C_UpdateIdleAnim_Params params;
	params.newIdle = newIdle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceRangeBase
// ()
// Parameters:
// float                          Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::GetUberpounceRangeBase(float* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceRangeBase");

	AShapeshifter_Large_Character_BP_C_GetUberpounceRangeBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceMaxRange
// ()
// Parameters:
// float                          Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::GetUberpounceMaxRange(float* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceMaxRange");

	AShapeshifter_Large_Character_BP_C_GetUberpounceMaxRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPGetCrosshairAlpha
// (NetRequest, Static, NetMulticast, MulticastDelegate, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShapeshifter_Large_Character_BP_C::STATIC_BPGetCrosshairAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPGetCrosshairAlpha");

	AShapeshifter_Large_Character_BP_C_BPGetCrosshairAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetDamageResistancePercentFromAddiction
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::GetDamageResistancePercentFromAddiction(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetDamageResistancePercentFromAddiction");

	AShapeshifter_Large_Character_BP_C_GetDamageResistancePercentFromAddiction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Reset Untransform Time
// ()

void AShapeshifter_Large_Character_BP_C::Reset_Untransform_Time()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Reset Untransform Time");

	AShapeshifter_Large_Character_BP_C_Reset_Untransform_Time_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Transformation Lifetime Reduction PercentFrom Addiction
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::Get_Transformation_Lifetime_Reduction_PercentFrom_Addiction(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Transformation Lifetime Reduction PercentFrom Addiction");

	AShapeshifter_Large_Character_BP_C_Get_Transformation_Lifetime_Reduction_PercentFrom_Addiction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Transformation Lifetime Reduction from Addiction
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::Get_Transformation_Lifetime_Reduction_from_Addiction(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Transformation Lifetime Reduction from Addiction");

	AShapeshifter_Large_Character_BP_C_Get_Transformation_Lifetime_Reduction_from_Addiction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get AnimSpeedBonus from Addiction
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::Get_AnimSpeedBonus_from_Addiction(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get AnimSpeedBonus from Addiction");

	AShapeshifter_Large_Character_BP_C_Get_AnimSpeedBonus_from_Addiction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetDamageMultiFromAddiction
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::GetDamageMultiFromAddiction(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetDamageMultiFromAddiction");

	AShapeshifter_Large_Character_BP_C_GetDamageMultiFromAddiction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnUberpounceStateChanged
// ()
// Parameters:
// TEnumAsByte<EUberpounceState>* NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUberpounceState>* PrevState                      (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::OnUberpounceStateChanged(TEnumAsByte<EUberpounceState>* NewState, TEnumAsByte<EUberpounceState>* PrevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnUberpounceStateChanged");

	AShapeshifter_Large_Character_BP_C_OnUberpounceStateChanged_Params params;
	params.NewState = NewState;
	params.PrevState = PrevState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDinoTooltipCustomTorpidityProgressBar
// (NetRequest, Exec, Static, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           overrideTorpidityProgressBarIfActive (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          progressPercent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  Label                          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Large_Character_BP_C::STATIC_BPDinoTooltipCustomTorpidityProgressBar(bool* overrideTorpidityProgressBarIfActive, float* progressPercent, class FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDinoTooltipCustomTorpidityProgressBar");

	AShapeshifter_Large_Character_BP_C_BPDinoTooltipCustomTorpidityProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (overrideTorpidityProgressBarIfActive != nullptr)
		*overrideTorpidityProgressBarIfActive = params.overrideTorpidityProgressBarIfActive;
	if (progressPercent != nullptr)
		*progressPercent = params.progressPercent;
	if (Label != nullptr)
		*Label = params.Label;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPGetMultiUseEntries
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AShapeshifter_Large_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPGetMultiUseEntries");

	AShapeshifter_Large_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AddBerzerkDamage
// ()
// Parameters:
// float                          Dmg                            (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::AddBerzerkDamage(float Dmg)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AddBerzerkDamage");

	AShapeshifter_Large_Character_BP_C_AddBerzerkDamage_Params params;
	params.Dmg = Dmg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_LatchIdleAnimRep
// ()

void AShapeshifter_Large_Character_BP_C::OnRep_LatchIdleAnimRep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_LatchIdleAnimRep");

	AShapeshifter_Large_Character_BP_C_OnRep_LatchIdleAnimRep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOverrideTamingDescriptionLabel
// ()
// Parameters:
// struct FSlateColor             TextColor                      (Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AShapeshifter_Large_Character_BP_C::BPOverrideTamingDescriptionLabel(struct FSlateColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOverrideTamingDescriptionLabel");

	AShapeshifter_Large_Character_BP_C_BPOverrideTamingDescriptionLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextColor != nullptr)
		*TextColor = params.TextColor;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AllowPlayMontage
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Large_Character_BP_C::AllowPlayMontage(class UAnimMontage** AnimMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AllowPlayMontage");

	AShapeshifter_Large_Character_BP_C_AllowPlayMontage_Params params;
	params.AnimMontage = AnimMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.PrintHealth
// (Net, NetReliable, NetRequest, Exec, Event, Static, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UPrimalCharacterStatusComponent* Status                         (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::STATIC_PrintHealth(class UPrimalCharacterStatusComponent* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.PrintHealth");

	AShapeshifter_Large_Character_BP_C_PrintHealth_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_FullyReplicatedOnInitialize
// ()

void AShapeshifter_Large_Character_BP_C::OnRep_FullyReplicatedOnInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_FullyReplicatedOnInitialize");

	AShapeshifter_Large_Character_BP_C_OnRep_FullyReplicatedOnInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartUberPounce
// ()
// Parameters:
// struct FUberpounceData*        Data                           (Parm)

void AShapeshifter_Large_Character_BP_C::StartUberPounce(struct FUberpounceData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartUberPounce");

	AShapeshifter_Large_Character_BP_C_StartUberPounce_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.K2_OnMovementModeChanged");

	AShapeshifter_Large_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_LastUberpounceJumpTime
// ()

void AShapeshifter_Large_Character_BP_C::OnRep_LastUberpounceJumpTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_LastUberpounceJumpTime");

	AShapeshifter_Large_Character_BP_C_OnRep_LastUberpounceJumpTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.LatchedJumpAttached
// ()

void AShapeshifter_Large_Character_BP_C::LatchedJumpAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.LatchedJumpAttached");

	AShapeshifter_Large_Character_BP_C_LatchedJumpAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.On Uberpounce AttachedToLocation
// (NetRequest, Native, Event, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void AShapeshifter_Large_Character_BP_C::On_Uberpounce_AttachedToLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.On Uberpounce AttachedToLocation");

	AShapeshifter_Large_Character_BP_C_On_Uberpounce_AttachedToLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDisplayTamedMessage
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Large_Character_BP_C::BPDisplayTamedMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDisplayTamedMessage");

	AShapeshifter_Large_Character_BP_C_BPDisplayTamedMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.PrintStats
// (NetReliable, NetRequest, Exec, Native, Event, Static, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UPrimalCharacterStatusComponent* StatusComp                     (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::STATIC_PrintStats(class UPrimalCharacterStatusComponent* StatusComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.PrintStats");

	AShapeshifter_Large_Character_BP_C_PrintStats_Params params;
	params.StatusComp = StatusComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Pounce Latched Anim
// ()
// Parameters:
// class UAnimMontage*            Anim                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartSectionName               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::Get_Pounce_Latched_Anim(class UAnimMontage** Anim, struct FName* StartSectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Pounce Latched Anim");

	AShapeshifter_Large_Character_BP_C_Get_Pounce_Latched_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Anim != nullptr)
		*Anim = params.Anim;
	if (StartSectionName != nullptr)
		*StartSectionName = params.StartSectionName;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ResetMeshRelativeLocation
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void AShapeshifter_Large_Character_BP_C::STATIC_ResetMeshRelativeLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ResetMeshRelativeLocation");

	AShapeshifter_Large_Character_BP_C_ResetMeshRelativeLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BlueprintAdjustOutputDamage
// (Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShapeshifter_Large_Character_BP_C::STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BlueprintAdjustOutputDamage");

	AShapeshifter_Large_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
	params.AttackIndex = AttackIndex;
	params.OriginalDamageAmount = OriginalDamageAmount;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamageType != nullptr)
		*OutDamageType = params.OutDamageType;
	if (OutDamageImpulse != nullptr)
		*OutDamageImpulse = params.OutDamageImpulse;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.RidingTick
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::STATIC_RidingTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.RidingTick");

	AShapeshifter_Large_Character_BP_C_RidingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOnAnimPlayedNotify
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  StartSectionName               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicate                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicateToOwner              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseAndServerUpdateMesh (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseOnServer         (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::BPOnAnimPlayedNotify(class UAnimMontage** AnimMontage, float* InPlayRate, struct FName* StartSectionName, bool* bReplicate, bool* bReplicateToOwner, bool* bForceTickPoseAndServerUpdateMesh, bool* bForceTickPoseOnServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOnAnimPlayedNotify");

	AShapeshifter_Large_Character_BP_C_BPOnAnimPlayedNotify_Params params;
	params.AnimMontage = AnimMontage;
	params.InPlayRate = InPlayRate;
	params.StartSectionName = StartSectionName;
	params.bReplicate = bReplicate;
	params.bReplicateToOwner = bReplicateToOwner;
	params.bForceTickPoseAndServerUpdateMesh = bForceTickPoseAndServerUpdateMesh;
	params.bForceTickPoseOnServer = bForceTickPoseOnServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
// (Net, NetRequest, Exec, Native, NetMulticast, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           overrideTamingProgressBarIfActive (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          progressPercent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  Label                          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Large_Character_BP_C::BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDinoTooltipCustomTamingProgressBar");

	AShapeshifter_Large_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (overrideTamingProgressBarIfActive != nullptr)
		*overrideTamingProgressBarIfActive = params.overrideTamingProgressBarIfActive;
	if (progressPercent != nullptr)
		*progressPercent = params.progressPercent;
	if (Label != nullptr)
		*Label = params.Label;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Large_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BlueprintCanAttack");

	AShapeshifter_Large_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CalculateDamageTakenRequiredForBerzerk
// ()
// Parameters:
// float                          Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::CalculateDamageTakenRequiredForBerzerk(float* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CalculateDamageTakenRequiredForBerzerk");

	AShapeshifter_Large_Character_BP_C_CalculateDamageTakenRequiredForBerzerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShapeshifter_Large_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPAdjustDamage");

	AShapeshifter_Large_Character_BP_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CalculateTotalTimeTransformed
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::CalculateTotalTimeTransformed(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CalculateTotalTimeTransformed");

	AShapeshifter_Large_Character_BP_C_CalculateTotalTimeTransformed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetSmallsInstance
// ()
// Parameters:
// class APrimalDinoCharacter*    Instance                       (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::SetSmallsInstance(class APrimalDinoCharacter* Instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetSmallsInstance");

	AShapeshifter_Large_Character_BP_C_SetSmallsInstance_Params params;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SpawnSmalls
// ()

void AShapeshifter_Large_Character_BP_C::SpawnSmalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SpawnSmalls");

	AShapeshifter_Large_Character_BP_C_SpawnSmalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_InterceptMoveRight
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Large_Character_BP_C::BP_InterceptMoveRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_InterceptMoveRight");

	AShapeshifter_Large_Character_BP_C_BP_InterceptMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnPinnedBuffEnded
// ()
// Parameters:
// class APrimalCharacter**       BuffTarget                     (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::OnPinnedBuffEnded(class APrimalCharacter** BuffTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnPinnedBuffEnded");

	AShapeshifter_Large_Character_BP_C_OnPinnedBuffEnded_Params params;
	params.BuffTarget = BuffTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Large_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_InterceptMoveForward");

	AShapeshifter_Large_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceRotationFromSocket
// ()
// Parameters:
// class APrimalCharacter**       Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Socket                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::GetUberpounceRotationFromSocket(class APrimalCharacter** Target, struct FName* Socket, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceRotationFromSocket");

	AShapeshifter_Large_Character_BP_C_GetUberpounceRotationFromSocket_Params params;
	params.Target = Target;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.QueueSequential Jump
// ()

void AShapeshifter_Large_Character_BP_C::QueueSequential_Jump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.QueueSequential Jump");

	AShapeshifter_Large_Character_BP_C_QueueSequential_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_PreventMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Large_Character_BP_C::BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_PreventMovementMode");

	AShapeshifter_Large_Character_BP_C_BP_PreventMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOverrideGetAttackAnimationIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShapeshifter_Large_Character_BP_C::BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	AShapeshifter_Large_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPGetHUDElements
// (Net, Native, Event, NetResponse, NetMulticast, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void AShapeshifter_Large_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPGetHUDElements");

	AShapeshifter_Large_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetSmalls
// ()
// Parameters:
// class AShapeshifter_Small_Character_BP_C* Smalls                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::GetSmalls(class AShapeshifter_Small_Character_BP_C** Smalls)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetSmalls");

	AShapeshifter_Large_Character_BP_C_GetSmalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Smalls != nullptr)
		*Smalls = params.Smalls;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartBerzerk
// ()

void AShapeshifter_Large_Character_BP_C::StartBerzerk()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartBerzerk");

	AShapeshifter_Large_Character_BP_C_StartBerzerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOnDinoCheat
// (Net, NetRequest, Native, Event, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::STATIC_BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOnDinoCheat");

	AShapeshifter_Large_Character_BP_C_BPOnDinoCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.IsBerzerk
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::IsBerzerk(bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.IsBerzerk");

	AShapeshifter_Large_Character_BP_C_IsBerzerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_OnJumpReleased
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void AShapeshifter_Large_Character_BP_C::STATIC_BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_OnJumpReleased");

	AShapeshifter_Large_Character_BP_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPUnstasis
// ()

void AShapeshifter_Large_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPUnstasis");

	AShapeshifter_Large_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Un TransformFn
// ()

void AShapeshifter_Large_Character_BP_C::Un_TransformFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Un TransformFn");

	AShapeshifter_Large_Character_BP_C_Un_TransformFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPIsBasedOnActor
// ()
// Parameters:
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Large_Character_BP_C::BPIsBasedOnActor(class AActor** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPIsBasedOnActor");

	AShapeshifter_Large_Character_BP_C_BPIsBasedOnActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetDebugString
// (NetRequest, Exec, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class FString                  Output                         (Parm, OutParm, ZeroConstructor)

void AShapeshifter_Large_Character_BP_C::STATIC_GetDebugString(class FString* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetDebugString");

	AShapeshifter_Large_Character_BP_C_GetDebugString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdateUberpounceFn
// ()

void AShapeshifter_Large_Character_BP_C::UpdateUberpounceFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdateUberpounceFn");

	AShapeshifter_Large_Character_BP_C_UpdateUberpounceFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetInitialAnimationForUberpouncePublic
// ()
// Parameters:
// class UAnimMontage*            AnimMontage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::GetInitialAnimationForUberpouncePublic(class UAnimMontage** AnimMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetInitialAnimationForUberpouncePublic");

	AShapeshifter_Large_Character_BP_C_GetInitialAnimationForUberpouncePublic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimMontage != nullptr)
		*AnimMontage = params.AnimMontage;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnPounceStarted
// ()

void AShapeshifter_Large_Character_BP_C::OnPounceStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnPounceStarted");

	AShapeshifter_Large_Character_BP_C_OnPounceStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdatePounceFn
// ()

void AShapeshifter_Large_Character_BP_C::UpdatePounceFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdatePounceFn");

	AShapeshifter_Large_Character_BP_C_UpdatePounceFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Compute Pounce Transform
// ()
// Parameters:
// struct FVector                 CurrentLoc                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CurrentRot                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           UpdatedTransform               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::Compute_Pounce_Transform(const struct FVector& CurrentLoc, const struct FRotator& CurrentRot, struct FVector* NewLocation, struct FRotator* NewRotation, bool* UpdatedTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Compute Pounce Transform");

	AShapeshifter_Large_Character_BP_C_Compute_Pounce_Transform_Params params;
	params.CurrentLoc = CurrentLoc;
	params.CurrentRot = CurrentRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;
	if (NewRotation != nullptr)
		*NewRotation = params.NewRotation;
	if (UpdatedTransform != nullptr)
		*UpdatedTransform = params.UpdatedTransform;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPPreventOrderAllowed
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Large_Character_BP_C::BPPreventOrderAllowed(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPPreventOrderAllowed");

	AShapeshifter_Large_Character_BP_C_BPPreventOrderAllowed_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Pounce Target
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rot                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::Get_Pounce_Target(struct FVector* Loc, struct FRotator* Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Pounce Target");

	AShapeshifter_Large_Character_BP_C_Get_Pounce_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loc != nullptr)
		*Loc = params.Loc;
	if (Rot != nullptr)
		*Rot = params.Rot;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShapeshifter_Large_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPServerHandleNetExecCommand");

	AShapeshifter_Large_Character_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.PounceAttachToCharacter
// ()

void AShapeshifter_Large_Character_BP_C::PounceAttachToCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.PounceAttachToCharacter");

	AShapeshifter_Large_Character_BP_C_PounceAttachToCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_PounceStateReplicated
// ()

void AShapeshifter_Large_Character_BP_C::OnRep_PounceStateReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_PounceStateReplicated");

	AShapeshifter_Large_Character_BP_C_OnRep_PounceStateReplicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetPounceState
// ()
// Parameters:
// TEnumAsByte<EShapeshifter_Large_PounceState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::SetPounceState(TEnumAsByte<EShapeshifter_Large_PounceState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetPounceState");

	AShapeshifter_Large_Character_BP_C_SetPounceState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.EndPounce
// ()

void AShapeshifter_Large_Character_BP_C::EndPounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.EndPounce");

	AShapeshifter_Large_Character_BP_C_EndPounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartPounce
// ()

void AShapeshifter_Large_Character_BP_C::StartPounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartPounce");

	AShapeshifter_Large_Character_BP_C_StartPounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetPounceTarget
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::SetPounceTarget(class APrimalCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetPounceTarget");

	AShapeshifter_Large_Character_BP_C_SetPounceTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPNotifyClearRider");

	AShapeshifter_Large_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPNotifySetRider");

	AShapeshifter_Large_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnLanded
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void AShapeshifter_Large_Character_BP_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnLanded");

	AShapeshifter_Large_Character_BP_C_OnLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.TrySet Collision
// ()
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::TrySet_Collision(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.TrySet Collision");

	AShapeshifter_Large_Character_BP_C_TrySet_Collision_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.DrawDebugRotator
// ()
// Parameters:
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::DrawDebugRotator(const struct FVector& Position, const struct FRotator& Rotation, float Duration, float Thickness, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.DrawDebugRotator");

	AShapeshifter_Large_Character_BP_C_DrawDebugRotator_Params params;
	params.Position = Position;
	params.Rotation = Rotation;
	params.Duration = Duration;
	params.Thickness = Thickness;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReceiveTick");

	AShapeshifter_Large_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReceivePossessed
// ()
// Parameters:
// class AController**            NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReceivePossessed");

	AShapeshifter_Large_Character_BP_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReceiveBeginPlay
// ()

void AShapeshifter_Large_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReceiveBeginPlay");

	AShapeshifter_Large_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UserConstructionScript
// ()

void AShapeshifter_Large_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UserConstructionScript");

	AShapeshifter_Large_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_362
// ()

void AShapeshifter_Large_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_362()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_362");

	AShapeshifter_Large_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_362_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_361
// ()

void AShapeshifter_Large_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_361()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_361");

	AShapeshifter_Large_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_361_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_360
// ()

void AShapeshifter_Large_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_360()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_360");

	AShapeshifter_Large_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_360_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_359
// ()

void AShapeshifter_Large_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_359()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_359");

	AShapeshifter_Large_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_359_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_358
// ()

void AShapeshifter_Large_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_358()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_358");

	AShapeshifter_Large_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_358_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_76
// ()

void AShapeshifter_Large_Character_BP_C::InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_76()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_76");

	AShapeshifter_Large_Character_BP_C_InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_76_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Initialize
// ()

void AShapeshifter_Large_Character_BP_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Initialize");

	AShapeshifter_Large_Character_BP_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_Initialize
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_Initialize");

	AShapeshifter_Large_Character_BP_C_AnimNotify_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CompleteTransform
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_CompleteTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CompleteTransform");

	AShapeshifter_Large_Character_BP_C_AnimNotify_CompleteTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.MultiOnLanded
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::MultiOnLanded(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.MultiOnLanded");

	AShapeshifter_Large_Character_BP_C_MultiOnLanded_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetPounceTarget
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::ServerSetPounceTarget(class APrimalCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetPounceTarget");

	AShapeshifter_Large_Character_BP_C_ServerSetPounceTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerEndPounce
// ()

void AShapeshifter_Large_Character_BP_C::ServerEndPounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerEndPounce");

	AShapeshifter_Large_Character_BP_C_ServerEndPounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.MultiEndPounce
// ()

void AShapeshifter_Large_Character_BP_C::MultiEndPounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.MultiEndPounce");

	AShapeshifter_Large_Character_BP_C_MultiEndPounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdatePounce
// ()

void AShapeshifter_Large_Character_BP_C::UpdatePounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdatePounce");

	AShapeshifter_Large_Character_BP_C_UpdatePounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UnTransform
// ()

void AShapeshifter_Large_Character_BP_C::UnTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UnTransform");

	AShapeshifter_Large_Character_BP_C_UnTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerStartJump
// ()

void AShapeshifter_Large_Character_BP_C::ServerStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerStartJump");

	AShapeshifter_Large_Character_BP_C_ServerStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_DoJump
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_DoJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_DoJump");

	AShapeshifter_Large_Character_BP_C_AnimNotify_DoJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AteElement
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_AteElement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AteElement");

	AShapeshifter_Large_Character_BP_C_AnimNotify_AteElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.QueueSequentialJumpEvent
// ()

void AShapeshifter_Large_Character_BP_C::QueueSequentialJumpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.QueueSequentialJumpEvent");

	AShapeshifter_Large_Character_BP_C_QueueSequentialJumpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetLastTimeReleaseJumpWhileFalling
// ()
// Parameters:
// double                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraDirection                (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::ServerSetLastTimeReleaseJumpWhileFalling(double Time, const struct FVector& Velocity, const struct FVector& CameraDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetLastTimeReleaseJumpWhileFalling");

	AShapeshifter_Large_Character_BP_C_ServerSetLastTimeReleaseJumpWhileFalling_Params params;
	params.Time = Time;
	params.Velocity = Velocity;
	params.CameraDirection = CameraDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_SequentialJumpTakeOff
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_SequentialJumpTakeOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_SequentialJumpTakeOff");

	AShapeshifter_Large_Character_BP_C_AnimNotify_SequentialJumpTakeOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerForwardInputDuringSequentialJump
// ()
// Parameters:
// float                          Axis                           (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::ServerForwardInputDuringSequentialJump(float Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerForwardInputDuringSequentialJump");

	AShapeshifter_Large_Character_BP_C_ServerForwardInputDuringSequentialJump_Params params;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.MultiUpdateVelocity
// ()
// Parameters:
// struct FVector                 NewVelocity                    (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::MultiUpdateVelocity(const struct FVector& NewVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.MultiUpdateVelocity");

	AShapeshifter_Large_Character_BP_C_MultiUpdateVelocity_Params params;
	params.NewVelocity = NewVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AOEGroundPound
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_AOEGroundPound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AOEGroundPound");

	AShapeshifter_Large_Character_BP_C_AnimNotify_AOEGroundPound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_SwipeAttack
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_SwipeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_SwipeAttack");

	AShapeshifter_Large_Character_BP_C_AnimNotify_SwipeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ChargingMeleeStart
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_ChargingMeleeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ChargingMeleeStart");

	AShapeshifter_Large_Character_BP_C_AnimNotify_ChargingMeleeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ChargingMeleeEnd
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_ChargingMeleeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ChargingMeleeEnd");

	AShapeshifter_Large_Character_BP_C_AnimNotify_ChargingMeleeEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ChargingMeleeTick
// ()

void AShapeshifter_Large_Character_BP_C::ChargingMeleeTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ChargingMeleeTick");

	AShapeshifter_Large_Character_BP_C_ChargingMeleeTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CameraShake
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_CameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CameraShake");

	AShapeshifter_Large_Character_BP_C_AnimNotify_CameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerLeftRightInputDuringSequentialJump
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::ServerLeftRightInputDuringSequentialJump(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerLeftRightInputDuringSequentialJump");

	AShapeshifter_Large_Character_BP_C_ServerLeftRightInputDuringSequentialJump_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CameraShakeLight
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_CameraShakeLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CameraShakeLight");

	AShapeshifter_Large_Character_BP_C_AnimNotify_CameraShakeLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.DeleteSmallsEvent
// ()

void AShapeshifter_Large_Character_BP_C::DeleteSmallsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.DeleteSmallsEvent");

	AShapeshifter_Large_Character_BP_C_DeleteSmallsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartBerzerkEvent
// ()

void AShapeshifter_Large_Character_BP_C::StartBerzerkEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartBerzerkEvent");

	AShapeshifter_Large_Character_BP_C_StartBerzerkEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BerzerkPassout
// ()

void AShapeshifter_Large_Character_BP_C::BerzerkPassout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BerzerkPassout");

	AShapeshifter_Large_Character_BP_C_BerzerkPassout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetAllowRiding
// ()
// Parameters:
// bool                           Allowed                        (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::SetAllowRiding(bool Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetAllowRiding");

	AShapeshifter_Large_Character_BP_C_SetAllowRiding_Params params;
	params.Allowed = Allowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ResetAnimSpeed
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_ResetAnimSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ResetAnimSpeed");

	AShapeshifter_Large_Character_BP_C_AnimNotify_ResetAnimSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ThrowRider
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_ThrowRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ThrowRider");

	AShapeshifter_Large_Character_BP_C_AnimNotify_ThrowRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_StartRoar
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_StartRoar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_StartRoar");

	AShapeshifter_Large_Character_BP_C_AnimNotify_StartRoar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_StopRoar
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_StopRoar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_StopRoar");

	AShapeshifter_Large_Character_BP_C_AnimNotify_StopRoar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartUnTransform
// ()

void AShapeshifter_Large_Character_BP_C::StartUnTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartUnTransform");

	AShapeshifter_Large_Character_BP_C_StartUnTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_UnTransform
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_UnTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_UnTransform");

	AShapeshifter_Large_Character_BP_C_AnimNotify_UnTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ClearRider
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_ClearRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ClearRider");

	AShapeshifter_Large_Character_BP_C_AnimNotify_ClearRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_InitializeSize
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_InitializeSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_InitializeSize");

	AShapeshifter_Large_Character_BP_C_AnimNotify_InitializeSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CheckForFallingLatch
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_CheckForFallingLatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CheckForFallingLatch");

	AShapeshifter_Large_Character_BP_C_AnimNotify_CheckForFallingLatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerRequestUberpounceJump
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::ServerRequestUberpounceJump(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerRequestUberpounceJump");

	AShapeshifter_Large_Character_BP_C_ServerRequestUberpounceJump_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_DoUberpounceJump
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_DoUberpounceJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_DoUberpounceJump");

	AShapeshifter_Large_Character_BP_C_AnimNotify_DoUberpounceJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BackupDestroy
// ()

void AShapeshifter_Large_Character_BP_C::BackupDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BackupDestroy");

	AShapeshifter_Large_Character_BP_C_BackupDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_LatchedJumpAttached
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_LatchedJumpAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_LatchedJumpAttached");

	AShapeshifter_Large_Character_BP_C_AnimNotify_LatchedJumpAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InitSmalls
// ()

void AShapeshifter_Large_Character_BP_C::InitSmalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InitSmalls");

	AShapeshifter_Large_Character_BP_C_InitSmalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_QueuedRoar
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_QueuedRoar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_QueuedRoar");

	AShapeshifter_Large_Character_BP_C_AnimNotify_QueuedRoar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetPounceAnticipationIdle
// ()
// Parameters:
// bool                           IsAnticipIdle                  (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::ServerSetPounceAnticipationIdle(bool IsAnticipIdle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetPounceAnticipationIdle");

	AShapeshifter_Large_Character_BP_C_ServerSetPounceAnticipationIdle_Params params;
	params.IsAnticipIdle = IsAnticipIdle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetIsHoldingCrouch
// ()
// Parameters:
// bool                           HoldingCrouch                  (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::ServerSetIsHoldingCrouch(bool HoldingCrouch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetIsHoldingCrouch");

	AShapeshifter_Large_Character_BP_C_ServerSetIsHoldingCrouch_Params params;
	params.HoldingCrouch = HoldingCrouch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_GrabRock
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_GrabRock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_GrabRock");

	AShapeshifter_Large_Character_BP_C_AnimNotify_GrabRock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ThrowRock
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_ThrowRock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ThrowRock");

	AShapeshifter_Large_Character_BP_C_AnimNotify_ThrowRock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerUpdateCameraLocationForBoulderThrow
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::ServerUpdateCameraLocationForBoulderThrow(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerUpdateCameraLocationForBoulderThrow");

	AShapeshifter_Large_Character_BP_C_ServerUpdateCameraLocationForBoulderThrow_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerRequestSequentialJump
// ()

void AShapeshifter_Large_Character_BP_C::ServerRequestSequentialJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerRequestSequentialJump");

	AShapeshifter_Large_Character_BP_C_ServerRequestSequentialJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AOEJumpStart
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_AOEJumpStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AOEJumpStart");

	AShapeshifter_Large_Character_BP_C_AnimNotify_AOEJumpStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AOEJumpEnd
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_AOEJumpEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AOEJumpEnd");

	AShapeshifter_Large_Character_BP_C_AnimNotify_AOEJumpEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_EnableIK
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_EnableIK()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_EnableIK");

	AShapeshifter_Large_Character_BP_C_AnimNotify_EnableIK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_DisableIK
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_DisableIK()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_DisableIK");

	AShapeshifter_Large_Character_BP_C_AnimNotify_DisableIK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ShouldCancelLatch
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_ShouldCancelLatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ShouldCancelLatch");

	AShapeshifter_Large_Character_BP_C_AnimNotify_ShouldCancelLatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerRequestJumpOffWallWithAnticipation
// ()

void AShapeshifter_Large_Character_BP_C::ServerRequestJumpOffWallWithAnticipation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerRequestJumpOffWallWithAnticipation");

	AShapeshifter_Large_Character_BP_C_ServerRequestJumpOffWallWithAnticipation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_PushOffWall
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_PushOffWall()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_PushOffWall");

	AShapeshifter_Large_Character_BP_C_AnimNotify_PushOffWall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_StartTransform
// ()

void AShapeshifter_Large_Character_BP_C::AnimNotify_StartTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_StartTransform");

	AShapeshifter_Large_Character_BP_C_AnimNotify_StartTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ExecuteUbergraph_Shapeshifter_Large_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_Character_BP_C::ExecuteUbergraph_Shapeshifter_Large_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ExecuteUbergraph_Shapeshifter_Large_Character_BP");

	AShapeshifter_Large_Character_BP_C_ExecuteUbergraph_Shapeshifter_Large_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

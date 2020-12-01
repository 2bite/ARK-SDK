// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_Climber_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnClimberFinishedAttaching
// ()

void ADino_Character_BP_Climber_C::OnClimberFinishedAttaching()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnClimberFinishedAttaching");

	ADino_Character_BP_Climber_C_OnClimberFinishedAttaching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimbingTraceHitResultValid
// ()
// Parameters:
// bool                           bValidHit                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)
// struct FVector                 TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            TraceIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            TraceRetryNum                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimbingTraceHitResultValid(bool bValidHit, const struct FVector& TraceStart, const struct FVector& TraceEnd, int TraceIndex, int TraceRetryNum, struct FHitResult* Hit, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimbingTraceHitResultValid");

	ADino_Character_BP_Climber_C_IsClimbingTraceHitResultValid_Params params;
	params.bValidHit = bValidHit;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.TraceIndex = TraceIndex;
	params.TraceRetryNum = TraceRetryNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberOverrideRetriedTraceResult
// ()
// Parameters:
// struct FHitResult              WithHit                        (Parm, OutParm, ReferenceParm)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::CanClimberOverrideRetriedTraceResult(struct FHitResult* WithHit, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberOverrideRetriedTraceResult");

	ADino_Character_BP_Climber_C_CanClimberOverrideRetriedTraceResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WithHit != nullptr)
		*WithHit = params.WithHit;
	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.AdjustClimbTraceTransform
// ()
// Parameters:
// struct FName                   WithSocketName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct UObject_FTransform      WithTraceTransform             (Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct UObject_FTransform      ClimberTransform               (Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct UObject_FTransform      AdjustedTransform              (Parm, OutParm, IsPlainOldData)

void ADino_Character_BP_Climber_C::AdjustClimbTraceTransform(const struct FName& WithSocketName, struct UObject_FTransform* WithTraceTransform, struct UObject_FTransform* ClimberTransform, struct UObject_FTransform* AdjustedTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.AdjustClimbTraceTransform");

	ADino_Character_BP_Climber_C_AdjustClimbTraceTransform_Params params;
	params.WithSocketName = WithSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WithTraceTransform != nullptr)
		*WithTraceTransform = params.WithTraceTransform;
	if (ClimberTransform != nullptr)
		*ClimberTransform = params.ClimberTransform;
	if (AdjustedTransform != nullptr)
		*AdjustedTransform = params.AdjustedTransform;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Tick_SimulateSeekingBetweenFrames
// (NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// bool                           bFoundSurface                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Tick_SimulateSeekingBetweenFrames(bool* bFoundSurface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Tick_SimulateSeekingBetweenFrames");

	ADino_Character_BP_Climber_C_Tick_SimulateSeekingBetweenFrames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundSurface != nullptr)
		*bFoundSurface = params.bFoundSurface;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClearCachedServerClimberMoveData
// ()

void ADino_Character_BP_Climber_C::ClearCachedServerClimberMoveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClearCachedServerClimberMoveData");

	ADino_Character_BP_Climber_C_ClearCachedServerClimberMoveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CacheServerClimberMoveData
// (NetReliable, NetRequest, Event, Static, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)

void ADino_Character_BP_Climber_C::STATIC_CacheServerClimberMoveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CacheServerClimberMoveData");

	ADino_Character_BP_Climber_C_CacheServerClimberMoveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Tick_SimulateClimbingBetweenFrames
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)

void ADino_Character_BP_Climber_C::STATIC_Tick_SimulateClimbingBetweenFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Tick_SimulateClimbingBetweenFrames");

	ADino_Character_BP_Climber_C_Tick_SimulateClimbingBetweenFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnWalkableGroundFoundWhileClimbing
// ()

void ADino_Character_BP_Climber_C::OnWalkableGroundFoundWhileClimbing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnWalkableGroundFoundWhileClimbing");

	ADino_Character_BP_Climber_C_OnWalkableGroundFoundWhileClimbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetDesiredMoveDirection
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetDesiredMoveDirection(struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetDesiredMoveDirection");

	ADino_Character_BP_Climber_C_GetDesiredMoveDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Correct Surface Trace Offset Use Trace Map Override
// ()
// Parameters:
// TArray<bool>                   UseTraceMap                    (Parm, OutParm, ZeroConstructor)

void ADino_Character_BP_Climber_C::Get_Correct_Surface_Trace_Offset_Use_Trace_Map_Override(TArray<bool>* UseTraceMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Correct Surface Trace Offset Use Trace Map Override");

	ADino_Character_BP_Climber_C_Get_Correct_Surface_Trace_Offset_Use_Trace_Map_Override_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseTraceMap != nullptr)
		*UseTraceMap = params.UseTraceMap;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceWeightOverride
// ()
// Parameters:
// bool                           UseResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  Weights                        (Parm, OutParm, ZeroConstructor)

void ADino_Character_BP_Climber_C::GetCorrectClimbingTraceWeightOverride(bool* UseResult, TArray<float>* Weights)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceWeightOverride");

	ADino_Character_BP_Climber_C_GetCorrectClimbingTraceWeightOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseResult != nullptr)
		*UseResult = params.UseResult;
	if (Weights != nullptr)
		*Weights = params.Weights;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberUpdateServerTimerByClimberStateOverride
// ()

void ADino_Character_BP_Climber_C::ClimberUpdateServerTimerByClimberStateOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberUpdateServerTimerByClimberStateOverride");

	ADino_Character_BP_Climber_C_ClimberUpdateServerTimerByClimberStateOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Calc Current Climbing Velocity Override State
// ()
// Parameters:
// struct FVector                 CurrentVelocity                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldOverrideVelocity         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Calc_Current_Climbing_Velocity_Override_State(const struct FVector& CurrentVelocity, bool* ShouldOverrideVelocity, struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Calc Current Climbing Velocity Override State");

	ADino_Character_BP_Climber_C_Calc_Current_Climbing_Velocity_Override_State_Params params;
	params.CurrentVelocity = CurrentVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldOverrideVelocity != nullptr)
		*ShouldOverrideVelocity = params.ShouldOverrideVelocity;
	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AllowMovementWhileClimbing
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Climber_AllowMovementWhileClimbing(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AllowMovementWhileClimbing");

	ADino_Character_BP_Climber_C_Climber_AllowMovementWhileClimbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberDetaching_Pure
// ()
// Parameters:
// bool                           checkPrevious                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimberDetaching_Pure(bool checkPrevious, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberDetaching_Pure");

	ADino_Character_BP_Climber_C_IsClimberDetaching_Pure_Params params;
	params.checkPrevious = checkPrevious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberCanEverJump_Pure
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::ClimberCanEverJump_Pure(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberCanEverJump_Pure");

	ADino_Character_BP_Climber_C_ClimberCanEverJump_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_CanEverJump
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Climber_CanEverJump(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_CanEverJump");

	ADino_Character_BP_Climber_C_Climber_CanEverJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnJumped
// ()

void ADino_Character_BP_Climber_C::OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnJumped");

	ADino_Character_BP_Climber_C_OnJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.NetSync_ClimberIsJumping
// ()
// Parameters:
// bool                           newVal                         (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::NetSync_ClimberIsJumping(bool newVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.NetSync_ClimberIsJumping");

	ADino_Character_BP_Climber_C_NetSync_ClimberIsJumping_Params params;
	params.newVal = newVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnPostNetReplication
// ()
// Parameters:
// struct FVector*                ReplicatedLoc                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               ReplicatedRot                  (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::BP_OnPostNetReplication(struct FVector* ReplicatedLoc, struct FRotator* ReplicatedRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnPostNetReplication");

	ADino_Character_BP_Climber_C_BP_OnPostNetReplication_Params params;
	params.ReplicatedLoc = ReplicatedLoc;
	params.ReplicatedRot = ReplicatedRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnPreventStopServerTick
// ()

void ADino_Character_BP_Climber_C::Climber_AI_OnPreventStopServerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnPreventStopServerTick");

	ADino_Character_BP_Climber_C_Climber_AI_OnPreventStopServerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanStopServerTick
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Climber_AI_CanStopServerTick(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanStopServerTick");

	ADino_Character_BP_Climber_C_Climber_AI_CanStopServerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimberLockInputsWhileAttached
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::ShouldClimberLockInputsWhileAttached(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimberLockInputsWhileAttached");

	ADino_Character_BP_Climber_C_ShouldClimberLockInputsWhileAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_ClimbingCanAttack
// ()
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Climber_AI_ClimbingCanAttack(int AttackIndex, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_ClimbingCanAttack");

	ADino_Character_BP_Climber_C_Climber_AI_ClimbingCanAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnFlee
// ()

void ADino_Character_BP_Climber_C::Climber_AI_OnFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnFlee");

	ADino_Character_BP_Climber_C_Climber_AI_OnFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CheckForAttackWhileClimbing
// ()

void ADino_Character_BP_Climber_C::Climber_AI_CheckForAttackWhileClimbing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CheckForAttackWhileClimbing");

	ADino_Character_BP_Climber_C_Climber_AI_CheckForAttackWhileClimbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOnStartJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADino_Character_BP_Climber_C::BPOnStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOnStartJump");

	ADino_Character_BP_Climber_C_BPOnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnRunReleased
// ()

void ADino_Character_BP_Climber_C::Climber_OnRunReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnRunReleased");

	ADino_Character_BP_Climber_C_Climber_OnRunReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnRunPressed
// ()

void ADino_Character_BP_Climber_C::Climber_OnRunPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnRunPressed");

	ADino_Character_BP_Climber_C_Climber_OnRunPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCharacterUnsleeped
// ()

void ADino_Character_BP_Climber_C::BPCharacterUnsleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCharacterUnsleeped");

	ADino_Character_BP_Climber_C_BPCharacterUnsleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCharacterSleeped
// ()

void ADino_Character_BP_Climber_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCharacterSleeped");

	ADino_Character_BP_Climber_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberAI_UpdateHasTargetWhileClimbing
// ()

void ADino_Character_BP_Climber_C::ClimberAI_UpdateHasTargetWhileClimbing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberAI_UpdateHasTargetWhileClimbing");

	ADino_Character_BP_Climber_C_ClimberAI_UpdateHasTargetWhileClimbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberPlayingPreventInputAnim
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimberPlayingPreventInputAnim(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberPlayingPreventInputAnim");

	ADino_Character_BP_Climber_C_IsClimberPlayingPreventInputAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnSetDeath
// ()

void ADino_Character_BP_Climber_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnSetDeath");

	ADino_Character_BP_Climber_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberInClimbingStateRange
// ()
// Parameters:
// TEnumAsByte<E_DinoClimberState> startState                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_DinoClimberState> EndState                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           checkPrevious                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimberInClimbingStateRange(TEnumAsByte<E_DinoClimberState> startState, TEnumAsByte<E_DinoClimberState> EndState, bool checkPrevious, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberInClimbingStateRange");

	ADino_Character_BP_Climber_C_IsClimberInClimbingStateRange_Params params;
	params.startState = startState;
	params.EndState = EndState;
	params.checkPrevious = checkPrevious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOrderedMoveToLoc
// ()
// Parameters:
// struct FVector                 DestLoc                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ADino_Character_BP_Climber_C::BPOrderedMoveToLoc(struct FVector* DestLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOrderedMoveToLoc");

	ADino_Character_BP_Climber_C_BPOrderedMoveToLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DestLoc != nullptr)
		*DestLoc = params.DestLoc;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_IsCharacterHardAttached
// ()
// Parameters:
// bool*                          bIgnoreRiding                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIgnoreCarried                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADino_Character_BP_Climber_C::BP_IsCharacterHardAttached(bool* bIgnoreRiding, bool* bIgnoreCarried)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_IsCharacterHardAttached");

	ADino_Character_BP_Climber_C_BP_IsCharacterHardAttached_Params params;
	params.bIgnoreRiding = bIgnoreRiding;
	params.bIgnoreCarried = bIgnoreCarried;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCharacterDetach
// ()

void ADino_Character_BP_Climber_C::BPCharacterDetach()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCharacterDetach");

	ADino_Character_BP_Climber_C_BPCharacterDetach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberNearWaterSurface
// ()
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimberNearWaterSurface(float Distance, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberNearWaterSurface");

	ADino_Character_BP_Climber_C_IsClimberNearWaterSurface_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberClimbing_Pure
// ()
// Parameters:
// bool                           isFinishedAttaching            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           includeSeeking__when_above_false_ (Parm, ZeroConstructor, IsPlainOldData)
// bool                           includeDetaching               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           checkPrevious                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimberClimbing_Pure(bool isFinishedAttaching, bool includeSeeking__when_above_false_, bool includeDetaching, bool checkPrevious, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberClimbing_Pure");

	ADino_Character_BP_Climber_C_IsClimberClimbing_Pure_Params params;
	params.isFinishedAttaching = isFinishedAttaching;
	params.includeSeeking__when_above_false_ = includeSeeking__when_above_false_;
	params.includeDetaching = includeDetaching;
	params.checkPrevious = checkPrevious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectWallJumpAnim
// ()
// Parameters:
// struct FVector                 wallJumpVelocity               (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Anim                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetCorrectWallJumpAnim(const struct FVector& wallJumpVelocity, class UAnimMontage** Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectWallJumpAnim");

	ADino_Character_BP_Climber_C_GetCorrectWallJumpAnim_Params params;
	params.wallJumpVelocity = wallJumpVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Anim != nullptr)
		*Anim = params.Anim;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldUseTraceHitForClimbingMovement
// ()
// Parameters:
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::ShouldUseTraceHitForClimbingMovement(const struct FVector& HitLocation, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldUseTraceHitForClimbingMovement");

	ADino_Character_BP_Climber_C_ShouldUseTraceHitForClimbingMovement_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimberCheckNewClimbingRotation
// ()
// Parameters:
// struct FRotator                climbingRotation               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::ShouldClimberCheckNewClimbingRotation(const struct FRotator& climbingRotation, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimberCheckNewClimbingRotation");

	ADino_Character_BP_Climber_C_ShouldClimberCheckNewClimbingRotation_Params params;
	params.climbingRotation = climbingRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberMovingOnSurface_Pure
// ()
// Parameters:
// bool                           checkPrevious                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimberMovingOnSurface_Pure(bool checkPrevious, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberMovingOnSurface_Pure");

	ADino_Character_BP_Climber_C_IsClimberMovingOnSurface_Pure_Params params;
	params.checkPrevious = checkPrevious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberSoftSetRotation
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::CanClimberSoftSetRotation(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberSoftSetRotation");

	ADino_Character_BP_Climber_C_CanClimberSoftSetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertClimberSpaceVectorToWorld_Pure
// ()
// Parameters:
// struct FVector                 climberSpaceVector             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldVector                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::ConvertClimberSpaceVectorToWorld_Pure(const struct FVector& climberSpaceVector, struct FVector* WorldVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertClimberSpaceVectorToWorld_Pure");

	ADino_Character_BP_Climber_C_ConvertClimberSpaceVectorToWorld_Pure_Params params;
	params.climberSpaceVector = climberSpaceVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldVector != nullptr)
		*WorldVector = params.WorldVector;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertClimberSpaceVectorToWorld
// ()
// Parameters:
// struct FVector                 climberSpaceVector             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldVector                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::ConvertClimberSpaceVectorToWorld(const struct FVector& climberSpaceVector, struct FVector* WorldVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertClimberSpaceVectorToWorld");

	ADino_Character_BP_Climber_C_ConvertClimberSpaceVectorToWorld_Params params;
	params.climberSpaceVector = climberSpaceVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldVector != nullptr)
		*WorldVector = params.WorldVector;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertVectorToWorld_Pure
// ()
// Parameters:
// struct FVector                 localVector                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldVector                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::ConvertVectorToWorld_Pure(const struct FVector& localVector, struct FVector* WorldVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertVectorToWorld_Pure");

	ADino_Character_BP_Climber_C_ConvertVectorToWorld_Pure_Params params;
	params.localVector = localVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldVector != nullptr)
		*WorldVector = params.WorldVector;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToWorld_Pure
// ()
// Parameters:
// struct FRotator                localRotator                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                worldRotator                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::ConvertRotatorToWorld_Pure(const struct FRotator& localRotator, struct FRotator* worldRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToWorld_Pure");

	ADino_Character_BP_Climber_C_ConvertRotatorToWorld_Pure_Params params;
	params.localRotator = localRotator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (worldRotator != nullptr)
		*worldRotator = params.worldRotator;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToWorld
// (NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// struct FRotator                localRotator                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                worldRotator                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::STATIC_ConvertRotatorToWorld(const struct FRotator& localRotator, struct FRotator* worldRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToWorld");

	ADino_Character_BP_Climber_C_ConvertRotatorToWorld_Params params;
	params.localRotator = localRotator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (worldRotator != nullptr)
		*worldRotator = params.worldRotator;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertVectorToWorld
// (NetReliable, NetRequest, Exec, Event, Static, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// struct FVector                 localVector                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldVector                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::STATIC_ConvertVectorToWorld(const struct FVector& localVector, struct FVector* WorldVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertVectorToWorld");

	ADino_Character_BP_Climber_C_ConvertVectorToWorld_Params params;
	params.localVector = localVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldVector != nullptr)
		*WorldVector = params.WorldVector;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberUpdateServerTimer
// ()
// Parameters:
// float                          newMin                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          newMAX                         (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::ClimberUpdateServerTimer(float newMin, float newMAX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberUpdateServerTimer");

	ADino_Character_BP_Climber_C_ClimberUpdateServerTimer_Params params;
	params.newMin = newMin;
	params.newMAX = newMAX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberFalling_Pure
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimberFalling_Pure(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberFalling_Pure");

	ADino_Character_BP_Climber_C_IsClimberFalling_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberFalling
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimberFalling(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberFalling");

	ADino_Character_BP_Climber_C_IsClimberFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_TraceForMoveNormal
// (NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// struct FVector                 TargetLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           foundHit                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 newMoveNormal                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::STATIC_Climber_TraceForMoveNormal(const struct FVector& TargetLocation, bool* foundHit, struct FVector* newMoveNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_TraceForMoveNormal");

	ADino_Character_BP_Climber_C_Climber_TraceForMoveNormal_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (foundHit != nullptr)
		*foundHit = params.foundHit;
	if (newMoveNormal != nullptr)
		*newMoveNormal = params.newMoveNormal;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberRestoreToSeeking
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADino_Character_BP_Climber_C::CanClimberRestoreToSeeking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberRestoreToSeeking");

	ADino_Character_BP_Climber_C_CanClimberRestoreToSeeking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanWanderOntoWalls
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Climber_AI_CanWanderOntoWalls(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanWanderOntoWalls");

	ADino_Character_BP_Climber_C_Climber_AI_CanWanderOntoWalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_SetNewBlendspaceAxes
// ()

void ADino_Character_BP_Climber_C::ClimbingIK_SetNewBlendspaceAxes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_SetNewBlendspaceAxes");

	ADino_Character_BP_Climber_C_ClimbingIK_SetNewBlendspaceAxes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_Box
// ()
// Parameters:
// struct FVector                 Center                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Extent                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           allowDraw                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           forceDebug                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           preventReplication             (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::DebugClimber_NetDrawDebug_Box(const struct FVector& Center, const struct FVector& Extent, const struct FLinearColor& Color, const struct FRotator& Rotation, float Duration, bool allowDraw, bool forceDebug, bool preventReplication)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_Box");

	ADino_Character_BP_Climber_C_DebugClimber_NetDrawDebug_Box_Params params;
	params.Center = Center;
	params.Extent = Extent;
	params.Color = Color;
	params.Rotation = Rotation;
	params.Duration = Duration;
	params.allowDraw = allowDraw;
	params.forceDebug = forceDebug;
	params.preventReplication = preventReplication;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_Sphere
// ()
// Parameters:
// struct FVector                 Center                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Segments                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           allowDraw                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           forceDebug                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           preventReplication             (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::DebugClimber_NetDrawDebug_Sphere(const struct FVector& Center, float Radius, int Segments, const struct FLinearColor& Color, float Duration, bool allowDraw, bool forceDebug, bool preventReplication)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_Sphere");

	ADino_Character_BP_Climber_C_DebugClimber_NetDrawDebug_Sphere_Params params;
	params.Center = Center;
	params.Radius = Radius;
	params.Segments = Segments;
	params.Color = Color;
	params.Duration = Duration;
	params.allowDraw = allowDraw;
	params.forceDebug = forceDebug;
	params.preventReplication = preventReplication;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberUpdateServerTimerByClimberState
// ()

void ADino_Character_BP_Climber_C::ClimberUpdateServerTimerByClimberState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberUpdateServerTimerByClimberState");

	ADino_Character_BP_Climber_C_ClimberUpdateServerTimerByClimberState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanStopAttachedServerTick
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Climber_AI_CanStopAttachedServerTick(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanStopAttachedServerTick");

	ADino_Character_BP_Climber_C_Climber_AI_CanStopAttachedServerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_Update_ClimbWandering_Duration
// ()

void ADino_Character_BP_Climber_C::Climber_AI_Update_ClimbWandering_Duration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_Update_ClimbWandering_Duration");

	ADino_Character_BP_Climber_C_Climber_AI_Update_ClimbWandering_Duration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanUpdateClimbWandering
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Climber_AI_CanUpdateClimbWandering(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanUpdateClimbWandering");

	ADino_Character_BP_Climber_C_Climber_AI_CanUpdateClimbWandering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingClimber_AI
// ()

void ADino_Character_BP_Climber_C::UpdateClimbingClimber_AI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingClimber_AI");

	ADino_Character_BP_Climber_C_UpdateClimbingClimber_AI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_Update_IsClimbWandering
// ()
// Parameters:
// bool                           forceStartWandering            (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Climber_AI_Update_IsClimbWandering(bool forceStartWandering)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_Update_IsClimbWandering");

	ADino_Character_BP_Climber_C_Climber_AI_Update_IsClimbWandering_Params params;
	params.forceStartWandering = forceStartWandering;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_Update_ClimbWander_TargetRotation
// ()

void ADino_Character_BP_Climber_C::Climber_AI_Update_ClimbWander_TargetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_Update_ClimbWander_TargetRotation");

	ADino_Character_BP_Climber_C_Climber_AI_Update_ClimbWander_TargetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToLocal
// (Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// struct FRotator                Rotator                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                localRotator                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::STATIC_ConvertRotatorToLocal(const struct FRotator& Rotator, struct FRotator* localRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToLocal");

	ADino_Character_BP_Climber_C_ConvertRotatorToLocal_Params params;
	params.Rotator = Rotator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (localRotator != nullptr)
		*localRotator = params.localRotator;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_UpdateMeshBendDotProducts
// ()

void ADino_Character_BP_Climber_C::ClimbingIK_UpdateMeshBendDotProducts()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_UpdateMeshBendDotProducts");

	ADino_Character_BP_Climber_C_ClimbingIK_UpdateMeshBendDotProducts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanWanderWhileClimbing
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Climber_AI_CanWanderWhileClimbing(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanWanderWhileClimbing");

	ADino_Character_BP_Climber_C_Climber_AI_CanWanderWhileClimbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceMaxRetryCount_Pure
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetCorrectClimbingTraceMaxRetryCount_Pure(int index, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceMaxRetryCount_Pure");

	ADino_Character_BP_Climber_C_GetCorrectClimbingTraceMaxRetryCount_Pure_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceMaxRetryCount
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetCorrectClimbingTraceMaxRetryCount(int index, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceMaxRetryCount");

	ADino_Character_BP_Climber_C_GetCorrectClimbingTraceMaxRetryCount_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceType_Pure
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_DinoClimber_TraceType> Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetCorrectClimbingTraceType_Pure(int index, TEnumAsByte<E_DinoClimber_TraceType>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceType_Pure");

	ADino_Character_BP_Climber_C_GetCorrectClimbingTraceType_Pure_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceType
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_DinoClimber_TraceType> Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetCorrectClimbingTraceType(int index, TEnumAsByte<E_DinoClimber_TraceType>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceType");

	ADino_Character_BP_Climber_C_GetCorrectClimbingTraceType_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectLookLockDot_Pure
// ()
// Parameters:
// int                            TraceIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          dot                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetCorrectLookLockDot_Pure(int TraceIndex, float* dot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectLookLockDot_Pure");

	ADino_Character_BP_Climber_C_GetCorrectLookLockDot_Pure_Params params;
	params.TraceIndex = TraceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dot != nullptr)
		*dot = params.dot;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectLookLockDot
// ()
// Parameters:
// int                            TraceIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          dot                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetCorrectLookLockDot(int TraceIndex, float* dot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectLookLockDot");

	ADino_Character_BP_Climber_C_GetCorrectLookLockDot_Params params;
	params.TraceIndex = TraceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dot != nullptr)
		*dot = params.dot;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceWeight_Pure
// ()
// Parameters:
// int                            TraceIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isForReplace                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetCorrectClimbingTraceWeight_Pure(int TraceIndex, bool isForReplace, float* Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceWeight_Pure");

	ADino_Character_BP_Climber_C_GetCorrectClimbingTraceWeight_Pure_Params params;
	params.TraceIndex = TraceIndex;
	params.isForReplace = isForReplace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weight != nullptr)
		*Weight = params.Weight;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceWeight
// ()
// Parameters:
// int                            TraceIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isForReplace                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetCorrectClimbingTraceWeight(int TraceIndex, bool isForReplace, float* Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceWeight");

	ADino_Character_BP_Climber_C_GetCorrectClimbingTraceWeight_Params params;
	params.TraceIndex = TraceIndex;
	params.isForReplace = isForReplace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weight != nullptr)
		*Weight = params.Weight;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Should Climber Use Climbing Trace Hit
// ()
// Parameters:
// int                            TraceIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Should_Climber_Use_Climbing_Trace_Hit(int TraceIndex, const struct FVector& HitLocation, const struct FVector& HitNormal, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Should Climber Use Climbing Trace Hit");

	ADino_Character_BP_Climber_C_Should_Climber_Use_Climbing_Trace_Hit_Params params;
	params.TraceIndex = TraceIndex;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberRetryClimbingTrace
// ()
// Parameters:
// int                            TraceIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::CanClimberRetryClimbingTrace(int TraceIndex, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberRetryClimbingTrace");

	ADino_Character_BP_Climber_C_CanClimberRetryClimbingTrace_Params params;
	params.TraceIndex = TraceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ProcessResultsOfClimbingTraces
// ()
// Parameters:
// int                            numValidTraceHits              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    traceIndecesArray              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           requireAllTraceHitsValid       (Parm, ZeroConstructor, IsPlainOldData)
// int                            numTraceSockets                (Parm, ZeroConstructor, IsPlainOldData)
// struct UObject_FTransform      currentClimberTransform        (Parm, IsPlainOldData)
// TArray<bool>                   traceHitsArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         traceHitLocationsArray         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         traceNormalsArray              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           centerTraceHit                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 desiredSurfaceLocation         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isSurfaceValid                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 surfaceLocation                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SurfaceNormal                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SurfaceLocation_Move           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 surfaceNormal_Move             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::ProcessResultsOfClimbingTraces(int numValidTraceHits, bool requireAllTraceHitsValid, int numTraceSockets, const struct UObject_FTransform& currentClimberTransform, bool centerTraceHit, const struct FVector& desiredSurfaceLocation, TArray<int>* traceIndecesArray, TArray<bool>* traceHitsArray, TArray<struct FVector>* traceHitLocationsArray, TArray<struct FVector>* traceNormalsArray, bool* isSurfaceValid, struct FVector* surfaceLocation, struct FVector* SurfaceNormal, struct FVector* SurfaceLocation_Move, struct FVector* surfaceNormal_Move)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ProcessResultsOfClimbingTraces");

	ADino_Character_BP_Climber_C_ProcessResultsOfClimbingTraces_Params params;
	params.numValidTraceHits = numValidTraceHits;
	params.requireAllTraceHitsValid = requireAllTraceHitsValid;
	params.numTraceSockets = numTraceSockets;
	params.currentClimberTransform = currentClimberTransform;
	params.centerTraceHit = centerTraceHit;
	params.desiredSurfaceLocation = desiredSurfaceLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (traceIndecesArray != nullptr)
		*traceIndecesArray = params.traceIndecesArray;
	if (traceHitsArray != nullptr)
		*traceHitsArray = params.traceHitsArray;
	if (traceHitLocationsArray != nullptr)
		*traceHitLocationsArray = params.traceHitLocationsArray;
	if (traceNormalsArray != nullptr)
		*traceNormalsArray = params.traceNormalsArray;
	if (isSurfaceValid != nullptr)
		*isSurfaceValid = params.isSurfaceValid;
	if (surfaceLocation != nullptr)
		*surfaceLocation = params.surfaceLocation;
	if (SurfaceNormal != nullptr)
		*SurfaceNormal = params.SurfaceNormal;
	if (SurfaceLocation_Move != nullptr)
		*SurfaceLocation_Move = params.SurfaceLocation_Move;
	if (surfaceNormal_Move != nullptr)
		*surfaceNormal_Move = params.surfaceNormal_Move;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CenterSphereTraceForSurfaceLocation
// (Native, Event, Static, Public, Protected, Delegate, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct UObject_FTransform      currTransform                  (Parm, IsPlainOldData)
// bool                           foundSurface                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 surfaceLocation                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::STATIC_CenterSphereTraceForSurfaceLocation(const struct UObject_FTransform& currTransform, bool* foundSurface, struct FVector* surfaceLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CenterSphereTraceForSurfaceLocation");

	ADino_Character_BP_Climber_C_CenterSphereTraceForSurfaceLocation_Params params;
	params.currTransform = currTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (foundSurface != nullptr)
		*foundSurface = params.foundSurface;
	if (surfaceLocation != nullptr)
		*surfaceLocation = params.surfaceLocation;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.TraceForClimbableSurface
// (NetRequest, Exec, Native, Event, NetResponse, Static, Public, Protected, Delegate, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// TArray<struct UObject_FTransform> traceSocketOffsetTransforms    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct UObject_FTransform      ClimberTransform               (Parm, IsPlainOldData)
// float                          TraceLength                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           preventTraceRetries            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    currSurfaceTraceIndecesArray   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           foundAnyValidTraceHits         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            numValidTraceHits              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   validTraceHits                 (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         traceHitLocations              (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         traceHitNormals                (Parm, OutParm, ZeroConstructor)

void ADino_Character_BP_Climber_C::STATIC_TraceForClimbableSurface(const struct UObject_FTransform& ClimberTransform, float TraceLength, bool preventTraceRetries, TArray<struct UObject_FTransform>* traceSocketOffsetTransforms, TArray<int>* currSurfaceTraceIndecesArray, bool* foundAnyValidTraceHits, int* numValidTraceHits, TArray<bool>* validTraceHits, TArray<struct FVector>* traceHitLocations, TArray<struct FVector>* traceHitNormals)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.TraceForClimbableSurface");

	ADino_Character_BP_Climber_C_TraceForClimbableSurface_Params params;
	params.ClimberTransform = ClimberTransform;
	params.TraceLength = TraceLength;
	params.preventTraceRetries = preventTraceRetries;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (traceSocketOffsetTransforms != nullptr)
		*traceSocketOffsetTransforms = params.traceSocketOffsetTransforms;
	if (currSurfaceTraceIndecesArray != nullptr)
		*currSurfaceTraceIndecesArray = params.currSurfaceTraceIndecesArray;
	if (foundAnyValidTraceHits != nullptr)
		*foundAnyValidTraceHits = params.foundAnyValidTraceHits;
	if (numValidTraceHits != nullptr)
		*numValidTraceHits = params.numValidTraceHits;
	if (validTraceHits != nullptr)
		*validTraceHits = params.validTraceHits;
	if (traceHitLocations != nullptr)
		*traceHitLocations = params.traceHitLocations;
	if (traceHitNormals != nullptr)
		*traceHitNormals = params.traceHitNormals;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToLocal_Pure
// ()
// Parameters:
// struct FRotator                Rotator                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                localRotator                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::ConvertRotatorToLocal_Pure(const struct FRotator& Rotator, struct FRotator* localRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToLocal_Pure");

	ADino_Character_BP_Climber_C_ConvertRotatorToLocal_Pure_Params params;
	params.Rotator = Rotator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (localRotator != nullptr)
		*localRotator = params.localRotator;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_TraceForNewSurfaceNormals
// (NetReliable, Event, Static, NetMulticast, Public, Protected, Delegate, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class FString                  socketGroupSubstring           (Parm, ZeroConstructor)
// float                          dot                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::STATIC_ClimbingIK_TraceForNewSurfaceNormals(const class FString& socketGroupSubstring, float* dot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_TraceForNewSurfaceNormals");

	ADino_Character_BP_Climber_C_ClimbingIK_TraceForNewSurfaceNormals_Params params;
	params.socketGroupSubstring = socketGroupSubstring;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dot != nullptr)
		*dot = params.dot;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_UpdateMeshHeightOffset
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Protected, Delegate, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void ADino_Character_BP_Climber_C::STATIC_ClimbingIK_UpdateMeshHeightOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_UpdateMeshHeightOffset");

	ADino_Character_BP_Climber_C_ClimbingIK_UpdateMeshHeightOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingIK
// ()

void ADino_Character_BP_Climber_C::UpdateClimbingIK()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingIK");

	ADino_Character_BP_Climber_C_UpdateClimbingIK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberDesiredWallJumpDir
// ()
// Parameters:
// struct FVector                 desiredDir                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetClimberDesiredWallJumpDir(struct FVector* desiredDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberDesiredWallJumpDir");

	ADino_Character_BP_Climber_C_GetClimberDesiredWallJumpDir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (desiredDir != nullptr)
		*desiredDir = params.desiredDir;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnStartSeeking
// ()

void ADino_Character_BP_Climber_C::OnStartSeeking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnStartSeeking");

	ADino_Character_BP_Climber_C_OnStartSeeking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReceiveHit
// ()
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ADino_Character_BP_Climber_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReceiveHit");

	ADino_Character_BP_Climber_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** meshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BlueprintAnimNotifyCustomEvent");

	ADino_Character_BP_Climber_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.meshComp = meshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.On ClimberAttached
// ()

void ADino_Character_BP_Climber_C::On_ClimberAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.On ClimberAttached");

	ADino_Character_BP_Climber_C_On_ClimberAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_PlayCameraShake_Client
// ()
// Parameters:
// class UClass*                  Shake                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Climber_PlayCameraShake_Client(class UClass* Shake, float Scale, float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_PlayCameraShake_Client");

	ADino_Character_BP_Climber_C_Climber_PlayCameraShake_Client_Params params;
	params.Shake = Shake;
	params.Scale = Scale;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnZoomOut
// ()

void ADino_Character_BP_Climber_C::BP_OnZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnZoomOut");

	ADino_Character_BP_Climber_C_BP_OnZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnZoomIn
// ()

void ADino_Character_BP_Climber_C::BP_OnZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnZoomIn");

	ADino_Character_BP_Climber_C_BP_OnZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Average Max Delta with Rotator Array
// ()
// Parameters:
// TArray<struct FRotator>        Array                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FRotator                Rotator                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          averageDelta                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_Average_Max_Delta_with_Rotator_Array(const struct FRotator& Rotator, TArray<struct FRotator>* Array, float* averageDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Average Max Delta with Rotator Array");

	ADino_Character_BP_Climber_C_Get_Average_Max_Delta_with_Rotator_Array_Params params;
	params.Rotator = Rotator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (averageDelta != nullptr)
		*averageDelta = params.averageDelta;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get AverageMeanDelta with Rotator Array
// ()
// Parameters:
// TArray<struct FRotator>        Array                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FRotator                Rotator                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          averageDelta                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_AverageMeanDelta_with_Rotator_Array(const struct FRotator& Rotator, TArray<struct FRotator>* Array, float* averageDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get AverageMeanDelta with Rotator Array");

	ADino_Character_BP_Climber_C_Get_AverageMeanDelta_with_Rotator_Array_Params params;
	params.Rotator = Rotator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (averageDelta != nullptr)
		*averageDelta = params.averageDelta;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetMaxDeltaBetweenRotators
// ()
// Parameters:
// struct FRotator                A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delta                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetMaxDeltaBetweenRotators(const struct FRotator& A, const struct FRotator& B, float* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetMaxDeltaBetweenRotators");

	ADino_Character_BP_Climber_C_GetMaxDeltaBetweenRotators_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delta != nullptr)
		*Delta = params.Delta;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetAverageDeltaBetweenRotators
// ()
// Parameters:
// struct FRotator                A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delta                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetAverageDeltaBetweenRotators(const struct FRotator& A, const struct FRotator& B, float* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetAverageDeltaBetweenRotators");

	ADino_Character_BP_Climber_C_GetAverageDeltaBetweenRotators_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delta != nullptr)
		*Delta = params.Delta;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.AddRiderToFinalCameraRotationArrays
// ()
// Parameters:
// class AShooterCharacter*       RiderToAdd                     (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::AddRiderToFinalCameraRotationArrays(class AShooterCharacter* RiderToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.AddRiderToFinalCameraRotationArrays");

	ADino_Character_BP_Climber_C_AddRiderToFinalCameraRotationArrays_Params params;
	params.RiderToAdd = RiderToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DetermineNewRiderFinalCameraRotationIndex
// ()
// Parameters:
// class AShooterCharacter*       theRider                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::DetermineNewRiderFinalCameraRotationIndex(class AShooterCharacter* theRider, int* index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DetermineNewRiderFinalCameraRotationIndex");

	ADino_Character_BP_Climber_C_DetermineNewRiderFinalCameraRotationIndex_Params params;
	params.theRider = theRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (index != nullptr)
		*index = params.index;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.RemoveRiderFromFinalCameraRotationArrays
// ()
// Parameters:
// class AShooterCharacter*       RiderToRemove                  (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::RemoveRiderFromFinalCameraRotationArrays(class AShooterCharacter* RiderToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.RemoveRiderFromFinalCameraRotationArrays");

	ADino_Character_BP_Climber_C_RemoveRiderFromFinalCameraRotationArrays_Params params;
	params.RiderToRemove = RiderToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberLookDirDotToClimbingNormal_Pure
// ()
// Parameters:
// float                          dot                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetClimberLookDirDotToClimbingNormal_Pure(float* dot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberLookDirDotToClimbingNormal_Pure");

	ADino_Character_BP_Climber_C_GetClimberLookDirDotToClimbingNormal_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dot != nullptr)
		*dot = params.dot;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberLookDirDotToClimbingNormal
// ()
// Parameters:
// float                          dot                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetClimberLookDirDotToClimbingNormal(float* dot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberLookDirDotToClimbingNormal");

	ADino_Character_BP_Climber_C_GetClimberLookDirDotToClimbingNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dot != nullptr)
		*dot = params.dot;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberUpVector_Pure
// ()
// Parameters:
// struct FVector                 Up                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetClimberUpVector_Pure(struct FVector* Up)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberUpVector_Pure");

	ADino_Character_BP_Climber_C_GetClimberUpVector_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Up != nullptr)
		*Up = params.Up;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentRiderFinalCameraRotationArrayIndex
// ()
// Parameters:
// class AShooterCharacter*       thisRider                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetCurrentRiderFinalCameraRotationArrayIndex(class AShooterCharacter* thisRider, int* index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentRiderFinalCameraRotationArrayIndex");

	ADino_Character_BP_Climber_C_GetCurrentRiderFinalCameraRotationArrayIndex_Params params;
	params.thisRider = thisRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (index != nullptr)
		*index = params.index;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Riding Players Final Camera Rotations
// ()
// Parameters:
// bool                           startedClimbing                (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Update_Riding_Players_Final_Camera_Rotations(bool startedClimbing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Riding Players Final Camera Rotations");

	ADino_Character_BP_Climber_C_Update_Riding_Players_Final_Camera_Rotations_Params params;
	params.startedClimbing = startedClimbing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPDoAttack");

	ADino_Character_BP_Climber_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanNonControlledClimberNotClimbingOverrideTransformInterpolation
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::CanNonControlledClimberNotClimbingOverrideTransformInterpolation(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanNonControlledClimberNotClimbingOverrideTransformInterpolation");

	ADino_Character_BP_Climber_C_CanNonControlledClimberNotClimbingOverrideTransformInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberStopNonDediTick_NonControlled
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::CanClimberStopNonDediTick_NonControlled(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberStopNonDediTick_NonControlled");

	ADino_Character_BP_Climber_C_CanClimberStopNonDediTick_NonControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Jump_Released
// ()

void ADino_Character_BP_Climber_C::Input_Jump_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Jump_Released");

	ADino_Character_BP_Climber_C_Input_Jump_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Jump_Pressed
// ()

void ADino_Character_BP_Climber_C::Input_Jump_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Jump_Pressed");

	ADino_Character_BP_Climber_C_Input_Jump_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanAttachOnSpawn
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Climber_AI_CanAttachOnSpawn(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanAttachOnSpawn");

	ADino_Character_BP_Climber_C_Climber_AI_CanAttachOnSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberLookDir
// ()
// Parameters:
// struct FVector                 lookDir                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetClimberLookDir(struct FVector* lookDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberLookDir");

	ADino_Character_BP_Climber_C_GetClimberLookDir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lookDir != nullptr)
		*lookDir = params.lookDir;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsPrimalCharacterFriendly
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsPrimalCharacterFriendly(class APrimalCharacter* Character, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsPrimalCharacterFriendly");

	ADino_Character_BP_Climber_C_IsPrimalCharacterFriendly_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Look Dir Dot to Normal
// ()
// Parameters:
// struct FVector                 Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          dot                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_Climber_Look_Dir_Dot_to_Normal(const struct FVector& Normal, float* dot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Look Dir Dot to Normal");

	ADino_Character_BP_Climber_C_Get_Climber_Look_Dir_Dot_to_Normal_Params params;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dot != nullptr)
		*dot = params.dot;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberViewLocation_Pure
// ()
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetClimberViewLocation_Pure(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberViewLocation_Pure");

	ADino_Character_BP_Climber_C_GetClimberViewLocation_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberViewLocation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetClimberViewLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberViewLocation");

	ADino_Character_BP_Climber_C_GetClimberViewLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberSeek
// ()
// Parameters:
// bool                           isForStart                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::CanClimberSeek(bool isForStart, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberSeek");

	ADino_Character_BP_Climber_C_CanClimberSeek_Params params;
	params.isForStart = isForStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberClimbingSimple_Pure
// ()
// Parameters:
// bool                           excludeDetaching               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           checkPrev                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimberClimbingSimple_Pure(bool excludeDetaching, bool checkPrev, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberClimbingSimple_Pure");

	ADino_Character_BP_Climber_C_IsClimberClimbingSimple_Pure_Params params;
	params.excludeDetaching = excludeDetaching;
	params.checkPrev = checkPrev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberClimbing_Simple
// ()
// Parameters:
// bool                           excludeDetaching               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           checkPrev                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimberClimbing_Simple(bool excludeDetaching, bool checkPrev, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberClimbing_Simple");

	ADino_Character_BP_Climber_C_IsClimberClimbing_Simple_Params params;
	params.excludeDetaching = excludeDetaching;
	params.checkPrev = checkPrev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberOn Server Run Released
// ()

void ADino_Character_BP_Climber_C::ClimberOn_Server_Run_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberOn Server Run Released");

	ADino_Character_BP_Climber_C_ClimberOn_Server_Run_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnServerRunPressed
// ()

void ADino_Character_BP_Climber_C::Climber_OnServerRunPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnServerRunPressed");

	ADino_Character_BP_Climber_C_Climber_OnServerRunPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClientTick_UpdateClimberTarget FOV
// ()

void ADino_Character_BP_Climber_C::ClientTick_UpdateClimberTarget_FOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClientTick_UpdateClimberTarget FOV");

	ADino_Character_BP_Climber_C_ClientTick_UpdateClimberTarget_FOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberStopNonDediTick_Controlled
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::CanClimberStopNonDediTick_Controlled(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberStopNonDediTick_Controlled");

	ADino_Character_BP_Climber_C_CanClimberStopNonDediTick_Controlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPModifyFOV
// ()
// Parameters:
// float*                         FOVIn                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADino_Character_BP_Climber_C::BPModifyFOV(float* FOVIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPModifyFOV");

	ADino_Character_BP_Climber_C_BPModifyFOV_Params params;
	params.FOVIn = FOVIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.HasClimberResetTPVCamera
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::HasClimberResetTPVCamera(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.HasClimberResetTPVCamera");

	ADino_Character_BP_Climber_C_HasClimberResetTPVCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Stop All Climber Logic
// ()

void ADino_Character_BP_Climber_C::Stop_All_Climber_Logic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Stop All Climber Logic");

	ADino_Character_BP_Climber_C_Stop_All_Climber_Logic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingSurfaceNormalFromRotation
// ()
// Parameters:
// struct FRotator                climbingRotation               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SurfaceNormal                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetClimbingSurfaceNormalFromRotation(const struct FRotator& climbingRotation, struct FVector* SurfaceNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingSurfaceNormalFromRotation");

	ADino_Character_BP_Climber_C_GetClimbingSurfaceNormalFromRotation_Params params;
	params.climbingRotation = climbingRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SurfaceNormal != nullptr)
		*SurfaceNormal = params.SurfaceNormal;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetAngleDeltaBetweenVectors
// ()
// Parameters:
// struct FVector                 VectorA                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VectorB                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AroundAxis                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          theta                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetAngleDeltaBetweenVectors(const struct FVector& VectorA, const struct FVector& VectorB, const struct FVector& AroundAxis, float* theta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetAngleDeltaBetweenVectors");

	ADino_Character_BP_Climber_C_GetAngleDeltaBetweenVectors_Params params;
	params.VectorA = VectorA;
	params.VectorB = VectorB;
	params.AroundAxis = AroundAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (theta != nullptr)
		*theta = params.theta;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Rotate RotatorForwardVector to Target Constant
// ()
// Parameters:
// struct FRotator                currentRotator                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 targetForward                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          RotationRate                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                newRotator                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Rotate_RotatorForwardVector_to_Target_Constant(const struct FRotator& currentRotator, const struct FVector& targetForward, float RotationRate, struct FRotator* newRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Rotate RotatorForwardVector to Target Constant");

	ADino_Character_BP_Climber_C_Rotate_RotatorForwardVector_to_Target_Constant_Params params;
	params.currentRotator = currentRotator;
	params.targetForward = targetForward;
	params.RotationRate = RotationRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newRotator != nullptr)
		*newRotator = params.newRotator;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.RemoveAxisFromVector
// ()
// Parameters:
// struct FVector                 Vector                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Axis                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 newVector                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::RemoveAxisFromVector(const struct FVector& Vector, const struct FVector& Axis, struct FVector* newVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.RemoveAxisFromVector");

	ADino_Character_BP_Climber_C_RemoveAxisFromVector_Params params;
	params.Vector = Vector;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newVector != nullptr)
		*newVector = params.newVector;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberSwimming_Pure
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimberSwimming_Pure(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberSwimming_Pure");

	ADino_Character_BP_Climber_C_IsClimberSwimming_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Finish Attaching
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Can_Climber_Finish_Attaching(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Finish Attaching");

	ADino_Character_BP_Climber_C_Can_Climber_Finish_Attaching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Finish Skidding
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Can_Climber_Finish_Skidding(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Finish Skidding");

	ADino_Character_BP_Climber_C_Can_Climber_Finish_Skidding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberSkid
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::CanClimberSkid(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberSkid");

	ADino_Character_BP_Climber_C_CanClimberSkid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Flipping
// ()

void ADino_Character_BP_Climber_C::ServerTick_Flipping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Flipping");

	ADino_Character_BP_Climber_C_ServerTick_Flipping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DoesClimberHaveEnough Stamina Pure
// ()
// Parameters:
// float                          needsStamina                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::DoesClimberHaveEnough_Stamina_Pure(float needsStamina, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DoesClimberHaveEnough Stamina Pure");

	ADino_Character_BP_Climber_C_DoesClimberHaveEnough_Stamina_Pure_Params params;
	params.needsStamina = needsStamina;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DoesClimberHave Enough Stamina
// ()
// Parameters:
// float                          needsStamina                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::DoesClimberHave_Enough_Stamina(float needsStamina, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DoesClimberHave Enough Stamina");

	ADino_Character_BP_Climber_C_DoesClimberHave_Enough_Stamina_Params params;
	params.needsStamina = needsStamina;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberCallServerRunInputEvents
// ()
// Parameters:
// bool                           newRunPressed                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::CanClimberCallServerRunInputEvents(bool newRunPressed, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberCallServerRunInputEvents");

	ADino_Character_BP_Climber_C_CanClimberCallServerRunInputEvents_Params params;
	params.newRunPressed = newRunPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Grounded_Pure
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Is_Climber_Grounded_Pure(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Grounded_Pure");

	ADino_Character_BP_Climber_C_Is_Climber_Grounded_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Run_Toggle
// ()

void ADino_Character_BP_Climber_C::Input_Run_Toggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Run_Toggle");

	ADino_Character_BP_Climber_C_Input_Run_Toggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Run_Released
// ()

void ADino_Character_BP_Climber_C::Input_Run_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Run_Released");

	ADino_Character_BP_Climber_C_Input_Run_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Run_Pressed
// ()

void ADino_Character_BP_Climber_C::Input_Run_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Run_Pressed");

	ADino_Character_BP_Climber_C_Input_Run_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ResetShouldDrawCrosshair
// ()

void ADino_Character_BP_Climber_C::ResetShouldDrawCrosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ResetShouldDrawCrosshair");

	ADino_Character_BP_Climber_C_ResetShouldDrawCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber Check for ObstaclesInDir
// (NetRequest, Exec, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// struct FVector                 checkDir                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          checkTrace_Distance            (Parm, ZeroConstructor, IsPlainOldData)
// float                          checkTrace_Padding             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETraceTypeQuery>   checkTrace_Channel             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           forceDebug                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NoObstacles                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              obstacleHit                    (Parm, OutParm)

void ADino_Character_BP_Climber_C::Climber_Check_for_ObstaclesInDir(const struct FVector& checkDir, float checkTrace_Distance, float checkTrace_Padding, TEnumAsByte<ETraceTypeQuery> checkTrace_Channel, bool forceDebug, bool* NoObstacles, struct FHitResult* obstacleHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber Check for ObstaclesInDir");

	ADino_Character_BP_Climber_C_Climber_Check_for_ObstaclesInDir_Params params;
	params.checkDir = checkDir;
	params.checkTrace_Distance = checkTrace_Distance;
	params.checkTrace_Padding = checkTrace_Padding;
	params.checkTrace_Channel = checkTrace_Channel;
	params.forceDebug = forceDebug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NoObstacles != nullptr)
		*NoObstacles = params.NoObstacles;
	if (obstacleHit != nullptr)
		*obstacleHit = params.obstacleHit;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_Line
// ()
// Parameters:
// struct FVector                 LineStart                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LineEnd                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           allowDraw                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           forceDebug                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           preventReplication             (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::DebugClimber_NetDrawDebug_Line(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& Color, float Duration, float Thickness, bool allowDraw, bool forceDebug, bool preventReplication)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_Line");

	ADino_Character_BP_Climber_C_DebugClimber_NetDrawDebug_Line_Params params;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.Color = Color;
	params.Duration = Duration;
	params.Thickness = Thickness;
	params.allowDraw = allowDraw;
	params.forceDebug = forceDebug;
	params.preventReplication = preventReplication;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Right Vector_Pure
// ()
// Parameters:
// struct FVector                 Right                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_Climber_Right_Vector_Pure(struct FVector* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Right Vector_Pure");

	ADino_Character_BP_Climber_C_Get_Climber_Right_Vector_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Right != nullptr)
		*Right = params.Right;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Forward Vector_Pure
// ()
// Parameters:
// struct FVector                 Forward                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_Climber_Forward_Vector_Pure(struct FVector* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Forward Vector_Pure");

	ADino_Character_BP_Climber_C_Get_Climber_Forward_Vector_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Forward != nullptr)
		*Forward = params.Forward;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnWallJump
// ()
// Parameters:
// struct FVector                 wallJumpVelocity               (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::OnWallJump(const struct FVector& wallJumpVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnWallJump");

	ADino_Character_BP_Climber_C_OnWallJump_Params params;
	params.wallJumpVelocity = wallJumpVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanWallJump
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::CanWallJump(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanWallJump");

	ADino_Character_BP_Climber_C_CanWallJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_PreventMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADino_Character_BP_Climber_C::BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_PreventMovementMode");

	ADino_Character_BP_Climber_C_BP_PreventMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOverrideCharacterNewFallVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADino_Character_BP_Climber_C::BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOverrideCharacterNewFallVelocity");

	ADino_Character_BP_Climber_C_BPOverrideCharacterNewFallVelocity_Params params;
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


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Current Climber LookRotation
// ()
// Parameters:
// bool                           bIgnoreDeadzone                (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                lookRot                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_Current_Climber_LookRotation(bool bIgnoreDeadzone, struct FRotator* lookRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Current Climber LookRotation");

	ADino_Character_BP_Climber_C_Get_Current_Climber_LookRotation_Params params;
	params.bIgnoreDeadzone = bIgnoreDeadzone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lookRot != nullptr)
		*lookRot = params.lookRot;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsRemoteClientClimber
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsRemoteClientClimber(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsRemoteClientClimber");

	ADino_Character_BP_Climber_C_IsRemoteClientClimber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnSetTamedFollowTarget
// ()

void ADino_Character_BP_Climber_C::Climber_AI_OnSetTamedFollowTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnSetTamedFollowTarget");

	ADino_Character_BP_Climber_C_Climber_AI_OnSetTamedFollowTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.AllowGrappling
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADino_Character_BP_Climber_C::AllowGrappling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.AllowGrappling");

	ADino_Character_BP_Climber_C_AllowGrappling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnSetTarget
// ()
// Parameters:
// class AActor*                  NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Climber_AI_OnSetTarget(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnSetTarget");

	ADino_Character_BP_Climber_C_Climber_AI_OnSetTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberStartSeeking
// ()

void ADino_Character_BP_Climber_C::ClimberStartSeeking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberStartSeeking");

	ADino_Character_BP_Climber_C_ClimberStartSeeking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberStopSeeking
// ()

void ADino_Character_BP_Climber_C::ClimberStopSeeking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberStopSeeking");

	ADino_Character_BP_Climber_C_ClimberStopSeeking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Set Climber IK_Active
// ()
// Parameters:
// bool                           newActive                      (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Set_Climber_IK_Active(bool newActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Set Climber IK_Active");

	ADino_Character_BP_Climber_C_Set_Climber_IK_Active_Params params;
	params.newActive = newActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingIK_BlendspaceAxes_Back
// ()
// Parameters:
// struct FVector2D               axes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetClimbingIK_BlendspaceAxes_Back(struct FVector2D* axes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingIK_BlendspaceAxes_Back");

	ADino_Character_BP_Climber_C_GetClimbingIK_BlendspaceAxes_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (axes != nullptr)
		*axes = params.axes;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingIK_BlendspaceAxes_Front
// ()
// Parameters:
// struct FVector2D               axes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetClimbingIK_BlendspaceAxes_Front(struct FVector2D* axes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingIK_BlendspaceAxes_Front");

	ADino_Character_BP_Climber_C_GetClimbingIK_BlendspaceAxes_Front_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (axes != nullptr)
		*axes = params.axes;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update NonDedi Climber Mesh
// ()

void ADino_Character_BP_Climber_C::Update_NonDedi_Climber_Mesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update NonDedi Climber Mesh");

	ADino_Character_BP_Climber_C_Update_NonDedi_Climber_Mesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPDesiredRotationIsLocalSpace
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADino_Character_BP_Climber_C::BPDesiredRotationIsLocalSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPDesiredRotationIsLocalSpace");

	ADino_Character_BP_Climber_C_BPDesiredRotationIsLocalSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberCheckForAboveWalkableGround
// (NetReliable, Exec, Event, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::ClimberCheckForAboveWalkableGround(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberCheckForAboveWalkableGround");

	ADino_Character_BP_Climber_C_ClimberCheckForAboveWalkableGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPModifyDesiredRotation
// ()
// Parameters:
// struct FRotator                InDesiredRotation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                OutDesiredRotation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADino_Character_BP_Climber_C::BPModifyDesiredRotation(struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPModifyDesiredRotation");

	ADino_Character_BP_Climber_C_BPModifyDesiredRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InDesiredRotation != nullptr)
		*InDesiredRotation = params.InDesiredRotation;
	if (OutDesiredRotation != nullptr)
		*OutDesiredRotation = params.OutDesiredRotation;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPSetupTamed");

	ADino_Character_BP_Climber_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberSeeking
// ()
// Parameters:
// bool                           checkPrevious                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimberSeeking(bool checkPrevious, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberSeeking");

	ADino_Character_BP_Climber_C_IsClimberSeeking_Params params;
	params.checkPrevious = checkPrevious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Did Climber Just Start or Stop Climbing
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Did_Climber_Just_Start_or_Stop_Climbing(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Did Climber Just Start or Stop Climbing");

	ADino_Character_BP_Climber_C_Did_Climber_Just_Start_or_Stop_Climbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberSwimming
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimberSwimming(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberSwimming");

	ADino_Character_BP_Climber_C_IsClimberSwimming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ResetClimbingVars
// ()

void ADino_Character_BP_Climber_C::ResetClimbingVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ResetClimbingVars");

	ADino_Character_BP_Climber_C_ResetClimbingVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimber Inputs
// ()

void ADino_Character_BP_Climber_C::UpdateClimber_Inputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimber Inputs");

	ADino_Character_BP_Climber_C_UpdateClimber_Inputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsOwningClientClimber
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsOwningClientClimber(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsOwningClientClimber");

	ADino_Character_BP_Climber_C_IsOwningClientClimber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Update ClimbingCamera Final Orientation
// ()
// Parameters:
// class AShooterCharacter*       viewingRider                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Can_Climber_Update_ClimbingCamera_Final_Orientation(class AShooterCharacter* viewingRider, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Update ClimbingCamera Final Orientation");

	ADino_Character_BP_Climber_C_Can_Climber_Update_ClimbingCamera_Final_Orientation_Params params;
	params.viewingRider = viewingRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Update Climber TPV_Camera Offset
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Can_Update_Climber_TPV_Camera_Offset(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Update Climber TPV_Camera Offset");

	ADino_Character_BP_Climber_C_Can_Update_Climber_TPV_Camera_Offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client Tick Update Climber TPV_Camera Offset
// ()

void ADino_Character_BP_Climber_C::Client_Tick_Update_Climber_TPV_Camera_Offset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client Tick Update Climber TPV_Camera Offset");

	ADino_Character_BP_Climber_C_Client_Tick_Update_Climber_TPV_Camera_Offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateOwningClientIsClimbingBuff
// ()

void ADino_Character_BP_Climber_C::UpdateOwningClientIsClimbingBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateOwningClientIsClimbingBuff");

	ADino_Character_BP_Climber_C_UpdateOwningClientIsClimbingBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Store NonDedi Climber Climbing Velocity
// ()

void ADino_Character_BP_Climber_C::Store_NonDedi_Climber_Climbing_Velocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Store NonDedi Climber Climbing Velocity");

	ADino_Character_BP_Climber_C_Store_NonDedi_Climber_Climbing_Velocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCameraRotationFinal
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                InCurrentFinalRot              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ADino_Character_BP_Climber_C::BPCameraRotationFinal(class APrimalCharacter** viewingCharacter, struct FRotator* InCurrentFinalRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCameraRotationFinal");

	ADino_Character_BP_Climber_C_BPCameraRotationFinal_Params params;
	params.viewingCharacter = viewingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InCurrentFinalRot != nullptr)
		*InCurrentFinalRot = params.InCurrentFinalRot;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Capsule BottomWorldLocation
// ()
// Parameters:
// float                          offsetTowardsCenter            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Bottom                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_Climber_Capsule_BottomWorldLocation(float offsetTowardsCenter, struct FVector* Bottom)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Capsule BottomWorldLocation");

	ADino_Character_BP_Climber_C_Get_Climber_Capsule_BottomWorldLocation_Params params;
	params.offsetTowardsCenter = offsetTowardsCenter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bottom != nullptr)
		*Bottom = params.Bottom;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get ClimberVelocity Pure
// ()
// Parameters:
// bool                           forceUseWorldDeltaSeconds      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_ClimberVelocity_Pure(bool forceUseWorldDeltaSeconds, struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get ClimberVelocity Pure");

	ADino_Character_BP_Climber_C_Get_ClimberVelocity_Pure_Params params;
	params.forceUseWorldDeltaSeconds = forceUseWorldDeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOverrideFPVViewLocation
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADino_Character_BP_Climber_C::BPOverrideFPVViewLocation(class APrimalCharacter** viewingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOverrideFPVViewLocation");

	ADino_Character_BP_Climber_C_BPOverrideFPVViewLocation_Params params;
	params.viewingCharacter = viewingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPGetFPVViewLocation
// (NetReliable, Exec, Event, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADino_Character_BP_Climber_C::BPGetFPVViewLocation(class APrimalCharacter** viewingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPGetFPVViewLocation");

	ADino_Character_BP_Climber_C_BPGetFPVViewLocation_Params params;
	params.viewingCharacter = viewingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPLimitPlayerRotation
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               InViewRotation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ADino_Character_BP_Climber_C::BPLimitPlayerRotation(class APrimalCharacter** viewingCharacter, struct FRotator* InViewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPLimitPlayerRotation");

	ADino_Character_BP_Climber_C_BPLimitPlayerRotation_Params params;
	params.viewingCharacter = viewingCharacter;
	params.InViewRotation = InViewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPModifyViewHitDir
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InViewHitDir                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADino_Character_BP_Climber_C::BPModifyViewHitDir(class APrimalCharacter** viewingCharacter, float* InViewHitDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPModifyViewHitDir");

	ADino_Character_BP_Climber_C_BPModifyViewHitDir_Params params;
	params.viewingCharacter = viewingCharacter;
	params.InViewHitDir = InViewHitDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCameraBaseOrientation
// ()
// Parameters:
// class APrimalCharacter**       viewingCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ADino_Character_BP_Climber_C::BPCameraBaseOrientation(class APrimalCharacter** viewingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCameraBaseOrientation");

	ADino_Character_BP_Climber_C_BPCameraBaseOrientation_Params params;
	params.viewingCharacter = viewingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberVelocityAlongNormal
// ()
// Parameters:
// struct FVector                 Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetClimberVelocityAlongNormal(const struct FVector& Normal, float* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberVelocityAlongNormal");

	ADino_Character_BP_Climber_C_GetClimberVelocityAlongNormal_Params params;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Velocity
// ()
// Parameters:
// bool                           forceUseWorldDeltaSeconds      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_Climber_Velocity(bool forceUseWorldDeltaSeconds, struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Velocity");

	ADino_Character_BP_Climber_C_Get_Climber_Velocity_Params params;
	params.forceUseWorldDeltaSeconds = forceUseWorldDeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingStaminaCost
// ()
// Parameters:
// float                          cost                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetCurrentClimbingStaminaCost(float* cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingStaminaCost");

	ADino_Character_BP_Climber_C_GetCurrentClimbingStaminaCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (cost != nullptr)
		*cost = params.cost;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingRotationSpeed
// ()
// Parameters:
// float                          RotationSpeed                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetCurrentClimbingRotationSpeed(float* RotationSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingRotationSpeed");

	ADino_Character_BP_Climber_C_GetCurrentClimbingRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RotationSpeed != nullptr)
		*RotationSpeed = params.RotationSpeed;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingMoveVector
// ()
// Parameters:
// struct FVector                 OverrideMoveDir                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 moveVector                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetCurrentClimbingMoveVector(const struct FVector& OverrideMoveDir, struct FVector* moveVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingMoveVector");

	ADino_Character_BP_Climber_C_GetCurrentClimbingMoveVector_Params params;
	params.OverrideMoveDir = OverrideMoveDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (moveVector != nullptr)
		*moveVector = params.moveVector;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get CurrentClimbingVelocityMax
// ()
// Parameters:
// float                          Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_CurrentClimbingVelocityMax(float* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get CurrentClimbingVelocityMax");

	ADino_Character_BP_Climber_C_Get_CurrentClimbingVelocityMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnSeek Released
// ()
// Parameters:
// bool                           toggle                         (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::OnSeek_Released(bool toggle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnSeek Released");

	ADino_Character_BP_Climber_C_OnSeek_Released_Params params;
	params.toggle = toggle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnSeek Pressed
// ()
// Parameters:
// bool                           toggle                         (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::OnSeek_Pressed(bool toggle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnSeek Pressed");

	ADino_Character_BP_Climber_C_OnSeek_Pressed_Params params;
	params.toggle = toggle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnClientRunReleased
// ()

void ADino_Character_BP_Climber_C::Climber_OnClientRunReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnClientRunReleased");

	ADino_Character_BP_Climber_C_Climber_OnClientRunReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnClientRunPressed
// ()

void ADino_Character_BP_Climber_C::Climber_OnClientRunPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnClientRunPressed");

	ADino_Character_BP_Climber_C_Climber_OnClientRunPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.On Climbing Traces Found No Valid Surface
// ()
// Parameters:
// TArray<bool>                   hitMap                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ADino_Character_BP_Climber_C::On_Climbing_Traces_Found_No_Valid_Surface(TArray<bool>* hitMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.On Climbing Traces Found No Valid Surface");

	ADino_Character_BP_Climber_C_On_Climbing_Traces_Found_No_Valid_Surface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hitMap != nullptr)
		*hitMap = params.hitMap;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get New Trace Vectors For AroundCornerCheck
// ()
// Parameters:
// struct FVector                 TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            TraceIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            retryNum                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           didLastTraceHit                (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              lastTraceHitResult             (Parm)
// bool                           retryTrace                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 updatedTraceStart              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 updatedTraceEnd                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           overrideTraceHit               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 newHitLoc                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 newHitNormal                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_New_Trace_Vectors_For_AroundCornerCheck(const struct FVector& TraceStart, const struct FVector& TraceEnd, int TraceIndex, int retryNum, bool didLastTraceHit, const struct FHitResult& lastTraceHitResult, bool* retryTrace, struct FVector* updatedTraceStart, struct FVector* updatedTraceEnd, bool* overrideTraceHit, struct FVector* newHitLoc, struct FVector* newHitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get New Trace Vectors For AroundCornerCheck");

	ADino_Character_BP_Climber_C_Get_New_Trace_Vectors_For_AroundCornerCheck_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.TraceIndex = TraceIndex;
	params.retryNum = retryNum;
	params.didLastTraceHit = didLastTraceHit;
	params.lastTraceHitResult = lastTraceHitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retryTrace != nullptr)
		*retryTrace = params.retryTrace;
	if (updatedTraceStart != nullptr)
		*updatedTraceStart = params.updatedTraceStart;
	if (updatedTraceEnd != nullptr)
		*updatedTraceEnd = params.updatedTraceEnd;
	if (overrideTraceHit != nullptr)
		*overrideTraceHit = params.overrideTraceHit;
	if (newHitLoc != nullptr)
		*newHitLoc = params.newHitLoc;
	if (newHitNormal != nullptr)
		*newHitNormal = params.newHitNormal;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCustomSurfaceTraceDistance
// ()
// Parameters:
// int                            TraceIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          customDistance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetCustomSurfaceTraceDistance(int TraceIndex, float* customDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCustomSurfaceTraceDistance");

	ADino_Character_BP_Climber_C_GetCustomSurfaceTraceDistance_Params params;
	params.TraceIndex = TraceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (customDistance != nullptr)
		*customDistance = params.customDistance;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimber_CenterSphereTraceForSurfaceLocation
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::ShouldClimber_CenterSphereTraceForSurfaceLocation(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimber_CenterSphereTraceForSurfaceLocation");

	ADino_Character_BP_Climber_C_ShouldClimber_CenterSphereTraceForSurfaceLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetNewClimbingRotation
// ()
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::SetNewClimbingRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetNewClimbingRotation");

	ADino_Character_BP_Climber_C_SetNewClimbingRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ForceStopClimbingNow
// ()

void ADino_Character_BP_Climber_C::ForceStopClimbingNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ForceStopClimbingNow");

	ADino_Character_BP_Climber_C_ForceStopClimbingNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Apply Detach Impulse
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Can_Climber_Apply_Detach_Impulse(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Apply Detach Impulse");

	ADino_Character_BP_Climber_C_Can_Climber_Apply_Detach_Impulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.LerpRotatorToTarget
// ()
// Parameters:
// struct FRotator                currentRotator                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                targetRotator                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          LerpSpeed                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                lerpedRotator                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::LerpRotatorToTarget(const struct FRotator& currentRotator, const struct FRotator& targetRotator, float LerpSpeed, struct FRotator* lerpedRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.LerpRotatorToTarget");

	ADino_Character_BP_Climber_C_LerpRotatorToTarget_Params params;
	params.currentRotator = currentRotator;
	params.targetRotator = targetRotator;
	params.LerpSpeed = LerpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lerpedRotator != nullptr)
		*lerpedRotator = params.lerpedRotator;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Trace for Non Climbable Surface
// (Exec, Native, Static, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// struct FVector                 traceDir                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::STATIC_Trace_for_Non_Climbable_Surface(const struct FVector& traceDir, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Trace for Non Climbable Surface");

	ADino_Character_BP_Climber_C_Trace_for_Non_Climbable_Surface_Params params;
	params.traceDir = traceDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Surface Trace Offset Array from UseTraceMap
// (Native, Event, Static, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// TArray<bool>                   useMap                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct UObject_FTransform> Result                         (Parm, OutParm, ZeroConstructor)
// TArray<int>                    indexArray                     (Parm, OutParm, ZeroConstructor)

void ADino_Character_BP_Climber_C::STATIC_Get_Surface_Trace_Offset_Array_from_UseTraceMap(TArray<bool>* useMap, TArray<struct UObject_FTransform>* Result, TArray<int>* indexArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Surface Trace Offset Array from UseTraceMap");

	ADino_Character_BP_Climber_C_Get_Surface_Trace_Offset_Array_from_UseTraceMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (useMap != nullptr)
		*useMap = params.useMap;
	if (Result != nullptr)
		*Result = params.Result;
	if (indexArray != nullptr)
		*indexArray = params.indexArray;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.MakeClimbingRotationFromForwardVector
// ()
// Parameters:
// struct FVector                 newForward                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::MakeClimbingRotationFromForwardVector(const struct FVector& newForward, struct FRotator* NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.MakeClimbingRotationFromForwardVector");

	ADino_Character_BP_Climber_C_MakeClimbingRotationFromForwardVector_Params params;
	params.newForward = newForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewRotation != nullptr)
		*NewRotation = params.NewRotation;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingTurnAngleDelta
// ()
// Parameters:
// float                          Delta                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetCurrentClimbingTurnAngleDelta(float* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingTurnAngleDelta");

	ADino_Character_BP_Climber_C_GetCurrentClimbingTurnAngleDelta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delta != nullptr)
		*Delta = params.Delta;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_RotationAxes
// ()
// Parameters:
// struct FRotator                Rotator                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           allowDraw                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           forceDebug                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           preventReplication             (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::DebugClimber_NetDrawDebug_RotationAxes(const struct FRotator& Rotator, const struct FVector& Origin, float Length, float Duration, float Thickness, bool allowDraw, bool forceDebug, bool preventReplication)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_RotationAxes");

	ADino_Character_BP_Climber_C_DebugClimber_NetDrawDebug_RotationAxes_Params params;
	params.Rotator = Rotator;
	params.Origin = Origin;
	params.Length = Length;
	params.Duration = Duration;
	params.Thickness = Thickness;
	params.allowDraw = allowDraw;
	params.forceDebug = forceDebug;
	params.preventReplication = preventReplication;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetClimbableSurfaceVars
// ()
// Parameters:
// struct FVector                 newSurfaceNormal               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 newSurfaceNormal_Move          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 newSurfaceLocation             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 newSurfaceLocation_Move        (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::SetClimbableSurfaceVars(const struct FVector& newSurfaceNormal, const struct FVector& newSurfaceNormal_Move, const struct FVector& newSurfaceLocation, const struct FVector& newSurfaceLocation_Move)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetClimbableSurfaceVars");

	ADino_Character_BP_Climber_C_SetClimbableSurfaceVars_Params params;
	params.newSurfaceNormal = newSurfaceNormal;
	params.newSurfaceNormal_Move = newSurfaceNormal_Move;
	params.newSurfaceLocation = newSurfaceLocation;
	params.newSurfaceLocation_Move = newSurfaceLocation_Move;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SnapClimberToSurface
// (NetReliable, Exec, Event, NetMulticast, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)

void ADino_Character_BP_Climber_C::SnapClimberToSurface()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SnapClimberToSurface");

	ADino_Character_BP_Climber_C_SnapClimberToSurface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get ClimberState Index
// ()
// Parameters:
// bool                           getPrevious                    (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_ClimberState_Index(bool getPrevious, unsigned char* index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get ClimberState Index");

	ADino_Character_BP_Climber_C_Get_ClimberState_Index_Params params;
	params.getPrevious = getPrevious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (index != nullptr)
		*index = params.index;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimber Update Climbing Rotation
// ()
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                approvedRotation               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::CanClimber_Update_Climbing_Rotation(const struct FRotator& NewRotation, bool* Result, struct FRotator* approvedRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimber Update Climbing Rotation");

	ADino_Character_BP_Climber_C_CanClimber_Update_Climbing_Rotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (approvedRotation != nullptr)
		*approvedRotation = params.approvedRotation;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckForRetrySurfaceTrace
// ()
// Parameters:
// struct FVector                 TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            TraceIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            retryNum                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           didLastTraceHit                (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              lastTraceHitResult             (Parm)
// bool                           retry                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 retryStart                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 retryEnd                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           overrideTraceHit               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 newNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::CheckForRetrySurfaceTrace(const struct FVector& TraceStart, const struct FVector& TraceEnd, int TraceIndex, int retryNum, bool didLastTraceHit, const struct FHitResult& lastTraceHitResult, bool* retry, struct FVector* retryStart, struct FVector* retryEnd, bool* overrideTraceHit, struct FVector* NewLocation, struct FVector* newNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckForRetrySurfaceTrace");

	ADino_Character_BP_Climber_C_CheckForRetrySurfaceTrace_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.TraceIndex = TraceIndex;
	params.retryNum = retryNum;
	params.didLastTraceHit = didLastTraceHit;
	params.lastTraceHitResult = lastTraceHitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retry != nullptr)
		*retry = params.retry;
	if (retryStart != nullptr)
		*retryStart = params.retryStart;
	if (retryEnd != nullptr)
		*retryEnd = params.retryEnd;
	if (overrideTraceHit != nullptr)
		*overrideTraceHit = params.overrideTraceHit;
	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;
	if (newNormal != nullptr)
		*newNormal = params.newNormal;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingTurnDirection
// ()
// Parameters:
// int                            turnDir                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetClimbingTurnDirection(int* turnDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingTurnDirection");

	ADino_Character_BP_Climber_C_GetClimbingTurnDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (turnDir != nullptr)
		*turnDir = params.turnDir;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Flipped Rotation
// ()
// Parameters:
// struct FRotator                flipRotation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_Climber_Flipped_Rotation(struct FRotator* flipRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Flipped Rotation");

	ADino_Character_BP_Climber_C_Get_Climber_Flipped_Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flipRotation != nullptr)
		*flipRotation = params.flipRotation;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberFlipAxis
// ()
// Parameters:
// struct FVector                 Axis                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetClimberFlipAxis(struct FVector* Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberFlipAxis");

	ADino_Character_BP_Climber_C_GetClimberFlipAxis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Axis != nullptr)
		*Axis = params.Axis;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingMoveDirFromRotation
// ()
// Parameters:
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 moveDir                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetClimbingMoveDirFromRotation(const struct FRotator& Rotation, struct FVector* moveDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingMoveDirFromRotation");

	ADino_Character_BP_Climber_C_GetClimbingMoveDirFromRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (moveDir != nullptr)
		*moveDir = params.moveDir;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Make Climbing Rotation fromSurfaceNormal
// ()
// Parameters:
// struct FVector                 SurfaceNormal                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Make_Climbing_Rotation_fromSurfaceNormal(const struct FVector& SurfaceNormal, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Make Climbing Rotation fromSurfaceNormal");

	ADino_Character_BP_Climber_C_Make_Climbing_Rotation_fromSurfaceNormal_Params params;
	params.SurfaceNormal = SurfaceNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Right Vector
// ()
// Parameters:
// struct FVector                 Right                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_Climber_Right_Vector(struct FVector* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Right Vector");

	ADino_Character_BP_Climber_C_Get_Climber_Right_Vector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Right != nullptr)
		*Right = params.Right;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Forward Vector
// ()
// Parameters:
// struct FVector                 Forward                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_Climber_Forward_Vector(struct FVector* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Forward Vector");

	ADino_Character_BP_Climber_C_Get_Climber_Forward_Vector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Forward != nullptr)
		*Forward = params.Forward;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Up Vector
// ()
// Parameters:
// struct FVector                 Up                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_Climber_Up_Vector(struct FVector* Up)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Up Vector");

	ADino_Character_BP_Climber_C_Get_Climber_Up_Vector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Up != nullptr)
		*Up = params.Up;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetClimberCanIgnoreWater
// ()
// Parameters:
// bool                           restoreToDefault               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           newVal                         (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::SetClimberCanIgnoreWater(bool restoreToDefault, bool newVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetClimberCanIgnoreWater");

	ADino_Character_BP_Climber_C_SetClimberCanIgnoreWater_Params params;
	params.restoreToDefault = restoreToDefault;
	params.newVal = newVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Currently Climb Out Of Water
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Can_Climber_Currently_Climb_Out_Of_Water(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Currently Climb Out Of Water");

	ADino_Character_BP_Climber_C_Can_Climber_Currently_Climb_Out_Of_Water_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckForClimbOutOfWater
// ()
// Parameters:
// bool                           allowClimbing                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::CheckForClimbOutOfWater(bool* allowClimbing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckForClimbOutOfWater");

	ADino_Character_BP_Climber_C_CheckForClimbOutOfWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (allowClimbing != nullptr)
		*allowClimbing = params.allowClimbing;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateControlledClientClimber
// ()

void ADino_Character_BP_Climber_C::UpdateControlledClientClimber()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateControlledClientClimber");

	ADino_Character_BP_Climber_C_UpdateControlledClientClimber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberTick_Server
// ()

void ADino_Character_BP_Climber_C::ClimberTick_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberTick_Server");

	ADino_Character_BP_Climber_C_ClimberTick_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberTick_NonDedi
// ()

void ADino_Character_BP_Climber_C::ClimberTick_NonDedi()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberTick_NonDedi");

	ADino_Character_BP_Climber_C_ClimberTick_NonDedi_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateNonControlledClimber
// ()

void ADino_Character_BP_Climber_C::UpdateNonControlledClimber()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateNonControlledClimber");

	ADino_Character_BP_Climber_C_UpdateNonControlledClimber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimberMovementMode
// ()

void ADino_Character_BP_Climber_C::UpdateClimberMovementMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimberMovementMode");

	ADino_Character_BP_Climber_C_UpdateClimberMovementMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnClimberDetached
// ()

void ADino_Character_BP_Climber_C::OnClimberDetached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnClimberDetached");

	ADino_Character_BP_Climber_C_OnClimberDetached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimberOverrideFallVelocity
// ()

void ADino_Character_BP_Climber_C::UpdateClimberOverrideFallVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimberOverrideFallVelocity");

	ADino_Character_BP_Climber_C_UpdateClimberOverrideFallVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Rotate to Target Rotation
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Can_Climber_Rotate_to_Target_Rotation(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Rotate to Target Rotation");

	ADino_Character_BP_Climber_C_Can_Climber_Rotate_to_Target_Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberDetaching
// ()
// Parameters:
// bool                           checkPrevious                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimberDetaching(bool checkPrevious, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberDetaching");

	ADino_Character_BP_Climber_C_IsClimberDetaching_Params params;
	params.checkPrevious = checkPrevious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Sync RiderLookDirection
// ()

void ADino_Character_BP_Climber_C::Sync_RiderLookDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Sync RiderLookDirection");

	ADino_Character_BP_Climber_C_Sync_RiderLookDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnRep_CurrentClimberStateIndex
// ()

void ADino_Character_BP_Climber_C::OnRep_CurrentClimberStateIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnRep_CurrentClimberStateIndex");

	ADino_Character_BP_Climber_C_OnRep_CurrentClimberStateIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberMeshInterpolate
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::CanClimberMeshInterpolate(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberMeshInterpolate");

	ADino_Character_BP_Climber_C_CanClimberMeshInterpolate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Flip CheckNormal
// ()
// Parameters:
// struct FVector                 Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_Climber_Flip_CheckNormal(struct FVector* Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Flip CheckNormal");

	ADino_Character_BP_Climber_C_Get_Climber_Flip_CheckNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Normal != nullptr)
		*Normal = params.Normal;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectFlippingAnim
// ()
// Parameters:
// class UAnimMontage*            Anim                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetCorrectFlippingAnim(class UAnimMontage** Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectFlippingAnim");

	ADino_Character_BP_Climber_C_GetCorrectFlippingAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Anim != nullptr)
		*Anim = params.Anim;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberAttachFromGround
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::CanClimberAttachFromGround(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberAttachFromGround");

	ADino_Character_BP_Climber_C_CanClimberAttachFromGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get CorrectClimber Rotation
// ()
// Parameters:
// bool                           updateRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_CorrectClimber_Rotation(bool* updateRotation, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get CorrectClimber Rotation");

	ADino_Character_BP_Climber_C_Get_CorrectClimber_Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (updateRotation != nullptr)
		*updateRotation = params.updateRotation;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Receive Climbing Input Backward
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Can_Receive_Climbing_Input_Backward(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Receive Climbing Input Backward");

	ADino_Character_BP_Climber_C_Can_Receive_Climbing_Input_Backward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanReceiveClimbingInput_Forward
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::CanReceiveClimbingInput_Forward(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanReceiveClimbingInput_Forward");

	ADino_Character_BP_Climber_C_CanReceiveClimbingInput_Forward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectSurfaceTraceDistance
// ()
// Parameters:
// bool                           isForRetry                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          traceDist                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetCorrectSurfaceTraceDistance(bool isForRetry, float* traceDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectSurfaceTraceDistance");

	ADino_Character_BP_Climber_C_GetCorrectSurfaceTraceDistance_Params params;
	params.isForRetry = isForRetry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (traceDist != nullptr)
		*traceDist = params.traceDist;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingClimber
// ()
// Parameters:
// bool                           IgnoreFailure                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canKeepClimbing                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::UpdateClimbingClimber(bool IgnoreFailure, bool* canKeepClimbing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingClimber");

	ADino_Character_BP_Climber_C_UpdateClimbingClimber_Params params;
	params.IgnoreFailure = IgnoreFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canKeepClimbing != nullptr)
		*canKeepClimbing = params.canKeepClimbing;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Correct Surface Trace OffsetTransforms
// ()
// Parameters:
// bool                           overrideUseMap                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   newUseMp                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct UObject_FTransform> offsetTransforms               (Parm, OutParm, ZeroConstructor)
// TArray<int>                    TraceIndeces                   (Parm, OutParm, ZeroConstructor)

void ADino_Character_BP_Climber_C::Get_Correct_Surface_Trace_OffsetTransforms(bool overrideUseMap, TArray<bool>* newUseMp, TArray<struct UObject_FTransform>* offsetTransforms, TArray<int>* TraceIndeces)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Correct Surface Trace OffsetTransforms");

	ADino_Character_BP_Climber_C_Get_Correct_Surface_Trace_OffsetTransforms_Params params;
	params.overrideUseMap = overrideUseMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newUseMp != nullptr)
		*newUseMp = params.newUseMp;
	if (offsetTransforms != nullptr)
		*offsetTransforms = params.offsetTransforms;
	if (TraceIndeces != nullptr)
		*TraceIndeces = params.TraceIndeces;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get CorrectDetachAnim
// ()
// Parameters:
// class UAnimMontage*            Anim                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_CorrectDetachAnim(class UAnimMontage** Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get CorrectDetachAnim");

	ADino_Character_BP_Climber_C_Get_CorrectDetachAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Anim != nullptr)
		*Anim = params.Anim;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberPlayingAnim
// ()
// Parameters:
// class UAnimMontage*            checkAnim                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimberPlayingAnim(class UAnimMontage* checkAnim, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberPlayingAnim");

	ADino_Character_BP_Climber_C_IsClimberPlayingAnim_Params params;
	params.checkAnim = checkAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Interp Climber toTransform
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// struct UObject_FTransform      Transform                      (Parm, IsPlainOldData)
// float                          LocationInterpSpeed            (Parm, ZeroConstructor, IsPlainOldData)
// float                          RotationInterpSpeed            (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           reachedTransform               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::STATIC_Interp_Climber_toTransform(const struct UObject_FTransform& Transform, float LocationInterpSpeed, float RotationInterpSpeed, float DeltaTime, bool* reachedTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Interp Climber toTransform");

	ADino_Character_BP_Climber_C_Interp_Climber_toTransform_Params params;
	params.Transform = Transform;
	params.LocationInterpSpeed = LocationInterpSpeed;
	params.RotationInterpSpeed = RotationInterpSpeed;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (reachedTransform != nullptr)
		*reachedTransform = params.reachedTransform;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SoftSetClimberTransform
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// struct UObject_FTransform      NewTransform                   (Parm, IsPlainOldData)

void ADino_Character_BP_Climber_C::STATIC_SoftSetClimberTransform(const struct UObject_FTransform& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SoftSetClimberTransform");

	ADino_Character_BP_Climber_C_SoftSetClimberTransform_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectAttachAnim
// ()
// Parameters:
// class UAnimMontage*            Anim                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetCorrectAttachAnim(class UAnimMontage** Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectAttachAnim");

	ADino_Character_BP_Climber_C_GetCorrectAttachAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Anim != nullptr)
		*Anim = params.Anim;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Correct Mesh Offset
// ()
// Parameters:
// struct FVector                 Offset                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_Correct_Mesh_Offset(struct FVector* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Correct Mesh Offset");

	ADino_Character_BP_Climber_C_Get_Correct_Mesh_Offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.StoreClimb Trace Socket Offsets
// (NetRequest, Native, Public, Private, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)

void ADino_Character_BP_Climber_C::StoreClimb_Trace_Socket_Offsets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.StoreClimb Trace Socket Offsets");

	ADino_Character_BP_Climber_C_StoreClimb_Trace_Socket_Offsets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Attaching
// ()
// Parameters:
// bool                           checkPrevious                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Is_Climber_Attaching(bool checkPrevious, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Attaching");

	ADino_Character_BP_Climber_C_Is_Climber_Attaching_Params params;
	params.checkPrevious = checkPrevious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.RotateClimber To Look Rotation
// ()

void ADino_Character_BP_Climber_C::RotateClimber_To_Look_Rotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.RotateClimber To Look Rotation");

	ADino_Character_BP_Climber_C_RotateClimber_To_Look_Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Check For Prevent Stop Climbing
// ()
// Parameters:
// TArray<bool>                   traceHitsArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            numValidHits                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            numTraces                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           allowClimbing                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Check_For_Prevent_Stop_Climbing(int numValidHits, int numTraces, TArray<bool>* traceHitsArray, bool* allowClimbing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Check For Prevent Stop Climbing");

	ADino_Character_BP_Climber_C_Check_For_Prevent_Stop_Climbing_Params params;
	params.numValidHits = numValidHits;
	params.numTraces = numTraces;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (traceHitsArray != nullptr)
		*traceHitsArray = params.traceHitsArray;
	if (allowClimbing != nullptr)
		*allowClimbing = params.allowClimbing;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update RiderWithClimberState
// ()

void ADino_Character_BP_Climber_C::Update_RiderWithClimberState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update RiderWithClimberState");

	ADino_Character_BP_Climber_C_Update_RiderWithClimberState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberInAnyClimberState
// ()
// Parameters:
// bool                           checkPrevious                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimberInAnyClimberState(bool checkPrevious, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberInAnyClimberState");

	ADino_Character_BP_Climber_C_IsClimberInAnyClimberState_Params params;
	params.checkPrevious = checkPrevious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Flip Attached Climber
// ()

void ADino_Character_BP_Climber_C::Flip_Attached_Climber()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Flip Attached Climber");

	ADino_Character_BP_Climber_C_Flip_Attached_Climber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanAttached Climber Flip
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::CanAttached_Climber_Flip(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanAttached Climber Flip");

	ADino_Character_BP_Climber_C_CanAttached_Climber_Flip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Check for Attached Climber Flip
// ()

void ADino_Character_BP_Climber_C::Check_for_Attached_Climber_Flip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Check for Attached Climber Flip");

	ADino_Character_BP_Climber_C_Check_for_Attached_Climber_Flip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Moving on Surface
// ()
// Parameters:
// bool                           checkPrevious                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Is_Climber_Moving_on_Surface(bool checkPrevious, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Moving on Surface");

	ADino_Character_BP_Climber_C_Is_Climber_Moving_on_Surface_Params params;
	params.checkPrevious = checkPrevious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climbing Forward Velocity
// ()
// Parameters:
// float                          forwardVelocity                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_Climbing_Forward_Velocity(float* forwardVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climbing Forward Velocity");

	ADino_Character_BP_Climber_C_Get_Climbing_Forward_Velocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (forwardVelocity != nullptr)
		*forwardVelocity = params.forwardVelocity;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climbing Right Velocity
// ()
// Parameters:
// float                          RightVelocity                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_Climbing_Right_Velocity(float* RightVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climbing Right Velocity");

	ADino_Character_BP_Climber_C_Get_Climbing_Right_Velocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RightVelocity != nullptr)
		*RightVelocity = params.RightVelocity;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Detach Climber from Surface
// ()

void ADino_Character_BP_Climber_C::Detach_Climber_from_Surface()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Detach Climber from Surface");

	ADino_Character_BP_Climber_C_Detach_Climber_from_Surface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Detaching
// ()

void ADino_Character_BP_Climber_C::ServerTick_Detaching()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Detaching");

	ADino_Character_BP_Climber_C_ServerTick_Detaching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetServerTickDeltaTime
// ()
// Parameters:
// float                          DeltaTime                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetServerTickDeltaTime(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetServerTickDeltaTime");

	ADino_Character_BP_Climber_C_GetServerTickDeltaTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeltaTime != nullptr)
		*DeltaTime = params.DeltaTime;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Skid
// ()
// Parameters:
// struct FVector                 currVelocity                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Dir                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpSpeed                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewVelocity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Skid(const struct FVector& currVelocity, const struct FVector& Dir, float InterpSpeed, struct FVector* NewVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Skid");

	ADino_Character_BP_Climber_C_Skid_Params params;
	params.currVelocity = currVelocity;
	params.Dir = Dir;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewVelocity != nullptr)
		*NewVelocity = params.NewVelocity;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Move on Surface Velocity
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_Move_on_Surface_Velocity(struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Move on Surface Velocity");

	ADino_Character_BP_Climber_C_Get_Move_on_Surface_Velocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Continue Attaching
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Can_Climber_Continue_Attaching(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Continue Attaching");

	ADino_Character_BP_Climber_C_Can_Climber_Continue_Attaching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Rotate Climber To TargetClimbingRotation
// ()

void ADino_Character_BP_Climber_C::Rotate_Climber_To_TargetClimbingRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Rotate Climber To TargetClimbingRotation");

	ADino_Character_BP_Climber_C_Rotate_Climber_To_TargetClimbingRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Climber TargetClimbingRotation
// ()

void ADino_Character_BP_Climber_C::Update_Climber_TargetClimbingRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Climber TargetClimbingRotation");

	ADino_Character_BP_Climber_C_Update_Climber_TargetClimbingRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Attach Climber to Surface
// ()

void ADino_Character_BP_Climber_C::Attach_Climber_to_Surface()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Attach Climber to Surface");

	ADino_Character_BP_Climber_C_Attach_Climber_to_Surface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimbingIndexEqualToCurrent
// ()
// Parameters:
// unsigned char                  index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimbingIndexEqualToCurrent(unsigned char index, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimbingIndexEqualToCurrent");

	ADino_Character_BP_Climber_C_IsClimbingIndexEqualToCurrent_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberMoving Absolute Up
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimberMoving_Absolute_Up(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberMoving Absolute Up");

	ADino_Character_BP_Climber_C_IsClimberMoving_Absolute_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Override
// ()

void ADino_Character_BP_Climber_C::ServerTick_Override()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Override");

	ADino_Character_BP_Climber_C_ServerTick_Override_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.StopClimbing
// ()
// Parameters:
// bool                           resetRestoreToSeeking          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           skipDetach                     (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::StopClimbing(bool resetRestoreToSeeking, bool skipDetach)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.StopClimbing");

	ADino_Character_BP_Climber_C_StopClimbing_Params params;
	params.resetRestoreToSeeking = resetRestoreToSeeking;
	params.skipDetach = skipDetach;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Replicate Index Update Non Dedi Climber
// ()

void ADino_Character_BP_Climber_C::Replicate_Index_Update_Non_Dedi_Climber()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Replicate Index Update Non Dedi Climber");

	ADino_Character_BP_Climber_C_Replicate_Index_Update_Non_Dedi_Climber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Find Valid AiSpawn Transform
// (NetReliable, NetRequest, Native, Public, Private, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// bool                           canSpawn                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct UObject_FTransform      validTransform                 (Parm, OutParm, IsPlainOldData)

void ADino_Character_BP_Climber_C::Find_Valid_AiSpawn_Transform(bool* canSpawn, struct UObject_FTransform* validTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Find Valid AiSpawn Transform");

	ADino_Character_BP_Climber_C_Find_Valid_AiSpawn_Transform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canSpawn != nullptr)
		*canSpawn = params.canSpawn;
	if (validTransform != nullptr)
		*validTransform = params.validTransform;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Replicate Index Update Target TPV_Camera Offset
// ()

void ADino_Character_BP_Climber_C::Replicate_Index_Update_Target_TPV_Camera_Offset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Replicate Index Update Target TPV_Camera Offset");

	ADino_Character_BP_Climber_C_Replicate_Index_Update_Target_TPV_Camera_Offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Replicate Index Update Server And Client Climber
// ()

void ADino_Character_BP_Climber_C::Replicate_Index_Update_Server_And_Client_Climber()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Replicate Index Update Server And Client Climber");

	ADino_Character_BP_Climber_C_Replicate_Index_Update_Server_And_Client_Climber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReachedTop Of Climb
// ()

void ADino_Character_BP_Climber_C::ReachedTop_Of_Climb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReachedTop Of Climb");

	ADino_Character_BP_Climber_C_ReachedTop_Of_Climb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingVars
// ()
// Parameters:
// bool                           validSurfaceFound              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SurfaceNormal                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 surfaceNormal_Move             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 surfaceLocation                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SurfaceLocation_Move           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   hitMap                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    traceIndexArray                (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ADino_Character_BP_Climber_C::UpdateClimbingVars(bool validSurfaceFound, const struct FVector& SurfaceNormal, const struct FVector& surfaceNormal_Move, const struct FVector& surfaceLocation, const struct FVector& SurfaceLocation_Move, TArray<bool>* hitMap, TArray<int>* traceIndexArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingVars");

	ADino_Character_BP_Climber_C_UpdateClimbingVars_Params params;
	params.validSurfaceFound = validSurfaceFound;
	params.SurfaceNormal = SurfaceNormal;
	params.surfaceNormal_Move = surfaceNormal_Move;
	params.surfaceLocation = surfaceLocation;
	params.SurfaceLocation_Move = SurfaceLocation_Move;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hitMap != nullptr)
		*hitMap = params.hitMap;
	if (traceIndexArray != nullptr)
		*traceIndexArray = params.traceIndexArray;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsHitSurfaceClimbable
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsHitSurfaceClimbable(const struct FHitResult& Hit, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsHitSurfaceClimbable");

	ADino_Character_BP_Climber_C_IsHitSurfaceClimbable_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReplicateClimbing Index
// ()

void ADino_Character_BP_Climber_C::ReplicateClimbing_Index()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReplicateClimbing Index");

	ADino_Character_BP_Climber_C_ReplicateClimbing_Index_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateServerClimberByClimbingIndex
// ()

void ADino_Character_BP_Climber_C::UpdateServerClimberByClimbingIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateServerClimberByClimbingIndex");

	ADino_Character_BP_Climber_C_UpdateServerClimberByClimbingIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimberStateByClimbingIndex
// ()
// Parameters:
// unsigned char                  newIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::UpdateClimberStateByClimbingIndex(unsigned char newIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimberStateByClimbingIndex");

	ADino_Character_BP_Climber_C_UpdateClimberStateByClimbingIndex_Params params;
	params.newIndex = newIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbing Velocity
// ()

void ADino_Character_BP_Climber_C::UpdateClimbing_Velocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbing Velocity");

	ADino_Character_BP_Climber_C_UpdateClimbing_Velocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Calc Current Climbing Velocity
// ()
// Parameters:
// struct FVector                 newClimbingVel                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Calc_Current_Climbing_Velocity(struct FVector* newClimbingVel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Calc Current Climbing Velocity");

	ADino_Character_BP_Climber_C_Calc_Current_Climbing_Velocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newClimbingVel != nullptr)
		*newClimbingVel = params.newClimbingVel;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Climbing
// ()

void ADino_Character_BP_Climber_C::ServerTick_Climbing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Climbing");

	ADino_Character_BP_Climber_C_ServerTick_Climbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Attached
// ()

void ADino_Character_BP_Climber_C::ServerTick_Attached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Attached");

	ADino_Character_BP_Climber_C_ServerTick_Attached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Skidding
// ()

void ADino_Character_BP_Climber_C::ServerTick_Skidding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Skidding");

	ADino_Character_BP_Climber_C_ServerTick_Skidding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Attaching
// ()

void ADino_Character_BP_Climber_C::ServerTick_Attaching()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Attaching");

	ADino_Character_BP_Climber_C_ServerTick_Attaching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Seeking
// ()

void ADino_Character_BP_Climber_C::ServerTick_Seeking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Seeking");

	ADino_Character_BP_Climber_C_ServerTick_Seeking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClientTick_NoInput
// ()

void ADino_Character_BP_Climber_C::ClientTick_NoInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClientTick_NoInput");

	ADino_Character_BP_Climber_C_ClientTick_NoInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client Tick Input Backward
// ()

void ADino_Character_BP_Climber_C::Client_Tick_Input_Backward()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client Tick Input Backward");

	ADino_Character_BP_Climber_C_Client_Tick_Input_Backward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClientTick_Input_Forward
// ()

void ADino_Character_BP_Climber_C::ClientTick_Input_Forward()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClientTick_Input_Forward");

	ADino_Character_BP_Climber_C_ClientTick_Input_Forward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimberDraw CrosshairWhileClimbing
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::ShouldClimberDraw_CrosshairWhileClimbing(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimberDraw CrosshairWhileClimbing");

	ADino_Character_BP_Climber_C_ShouldClimberDraw_CrosshairWhileClimbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsNormalClimbable
// ()
// Parameters:
// struct FVector                 Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isAverageNormal                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsNormalClimbable(const struct FVector& Normal, bool isAverageNormal, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsNormalClimbable");

	ADino_Character_BP_Climber_C_IsNormalClimbable_Params params;
	params.Normal = Normal;
	params.isAverageNormal = isAverageNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADino_Character_BP_Climber_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPAdjustDamage");

	ADino_Character_BP_Climber_C_BPAdjustDamage_Params params;
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


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReduceClimberStamina
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::ReduceClimberStamina(float amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReduceClimberStamina");

	ADino_Character_BP_Climber_C_ReduceClimberStamina_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DisplayMessage
// ()
// Parameters:
// class FString                  Message                        (Parm, ZeroConstructor)

void ADino_Character_BP_Climber_C::DisplayMessage(const class FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DisplayMessage");

	ADino_Character_BP_Climber_C_DisplayMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberHas Enough Stamina to Climb
// ()
// Parameters:
// bool                           HUD_NotifyOnFailure            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::ClimberHas_Enough_Stamina_to_Climb(bool HUD_NotifyOnFailure, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberHas Enough Stamina to Climb");

	ADino_Character_BP_Climber_C_ClimberHas_Enough_Stamina_to_Climb_Params params;
	params.HUD_NotifyOnFailure = HUD_NotifyOnFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is ClimberClimbing
// ()
// Parameters:
// bool                           isFinishedAttaching            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           includeSeeking__when_above_false_ (Parm, ZeroConstructor, IsPlainOldData)
// bool                           includeDetaching               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           checkPrevious                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Is_ClimberClimbing(bool isFinishedAttaching, bool includeSeeking__when_above_false_, bool includeDetaching, bool checkPrevious, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is ClimberClimbing");

	ADino_Character_BP_Climber_C_Is_ClimberClimbing_Params params;
	params.isFinishedAttaching = isFinishedAttaching;
	params.includeSeeking__when_above_false_ = includeSeeking__when_above_false_;
	params.includeDetaching = includeDetaching;
	params.checkPrevious = checkPrevious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Reduce StaminaWhileClimbing
// ()

void ADino_Character_BP_Climber_C::Reduce_StaminaWhileClimbing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Reduce StaminaWhileClimbing");

	ADino_Character_BP_Climber_C_Reduce_StaminaWhileClimbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberPlayLandAnim
// (Exec, Native, Event, NetResponse, MulticastDelegate, Public, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// bool                           forceSuccess                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::ClimberPlayLandAnim(bool forceSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberPlayLandAnim");

	ADino_Character_BP_Climber_C_ClimberPlayLandAnim_Params params;
	params.forceSuccess = forceSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOnMovementModeChangedNotify");

	ADino_Character_BP_Climber_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Hard Set Climber RotationBut Interp Mesh Location
// ()
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Hard_Set_Climber_RotationBut_Interp_Mesh_Location(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Hard Set Climber RotationBut Interp Mesh Location");

	ADino_Character_BP_Climber_C_Hard_Set_Climber_RotationBut_Interp_Mesh_Location_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CleanUpClimbingAnims
// ()
// Parameters:
// bool                           animsClean                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::CleanUpClimbingAnims(bool* animsClean)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CleanUpClimbingAnims");

	ADino_Character_BP_Climber_C_CleanUpClimbingAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (animsClean != nullptr)
		*animsClean = params.animsClean;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Set Should Restore to Attached
// ()
// Parameters:
// bool                           newVal                         (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Set_Should_Restore_to_Attached(bool newVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Set Should Restore to Attached");

	ADino_Character_BP_Climber_C_Set_Should_Restore_to_Attached_Params params;
	params.newVal = newVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SoftSetClimberRotation
// ()
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::SoftSetClimberRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SoftSetClimberRotation");

	ADino_Character_BP_Climber_C_SoftSetClimberRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.WallJump
// ()

void ADino_Character_BP_Climber_C::WallJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.WallJump");

	ADino_Character_BP_Climber_C_WallJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InterpolateClimberMesh
// ()
// Parameters:
// class USkeletalMeshComponent*  meshToInterpolate              (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::InterpolateClimberMesh(class USkeletalMeshComponent* meshToInterpolate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InterpolateClimberMesh");

	ADino_Character_BP_Climber_C_InterpolateClimberMesh_Params params;
	params.meshToInterpolate = meshToInterpolate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Climber Cilmbing Anims
// ()
// Parameters:
// bool                           ensureAnimsPlaying             (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Update_Climber_Cilmbing_Anims(bool ensureAnimsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Climber Cilmbing Anims");

	ADino_Character_BP_Climber_C_Update_Climber_Cilmbing_Anims_Params params;
	params.ensureAnimsPlaying = ensureAnimsPlaying;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetUse Aim Offsets
// ()
// Parameters:
// bool                           newUse                         (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::SetUse_Aim_Offsets(bool newUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetUse Aim Offsets");

	ADino_Character_BP_Climber_C_SetUse_Aim_Offsets_Params params;
	params.newUse = newUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetStayOnSurfaceVelocity
// ()
// Parameters:
// bool                           bOverrideVars                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OverrideSurfaceLoc             (Parm, ZeroConstructor, IsPlainOldData)
// float                          OverrideDistFromSurface        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OverrideClimberLoc             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreventUpdatingServerTimer    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::GetStayOnSurfaceVelocity(bool bOverrideVars, const struct FVector& OverrideSurfaceLoc, float OverrideDistFromSurface, const struct FVector& OverrideClimberLoc, bool bPreventUpdatingServerTimer, struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetStayOnSurfaceVelocity");

	ADino_Character_BP_Climber_C_GetStayOnSurfaceVelocity_Params params;
	params.bOverrideVars = bOverrideVars;
	params.OverrideSurfaceLoc = OverrideSurfaceLoc;
	params.OverrideDistFromSurface = OverrideDistFromSurface;
	params.OverrideClimberLoc = OverrideClimberLoc;
	params.bPreventUpdatingServerTimer = bPreventUpdatingServerTimer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReceiveAnyDamage");

	ADino_Character_BP_Climber_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Init Climber
// ()

void ADino_Character_BP_Climber_C::Init_Climber()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Init Climber");

	ADino_Character_BP_Climber_C_Init_Climber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPUnstasis
// ()

void ADino_Character_BP_Climber_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPUnstasis");

	ADino_Character_BP_Climber_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CheckForAttachToSurfaceOnSpawn
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)

void ADino_Character_BP_Climber_C::STATIC_Climber_AI_CheckForAttachToSurfaceOnSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CheckForAttachToSurfaceOnSpawn");

	ADino_Character_BP_Climber_C_Climber_AI_CheckForAttachToSurfaceOnSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client Set Climber State
// ()
// Parameters:
// unsigned char                  NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Client_Set_Climber_State(unsigned char NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client Set Climber State");

	ADino_Character_BP_Climber_C_Client_Set_Climber_State_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can ClimberContinueClimbing
// (Net, NetRequest, Event, NetResponse, NetMulticast, Private, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Can_ClimberContinueClimbing(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can ClimberContinueClimbing");

	ADino_Character_BP_Climber_C_Can_ClimberContinueClimbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_SetAttachedToSurface
// ()
// Parameters:
// bool                           newVal                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           forceSuccess                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Climber_AI_SetAttachedToSurface(bool newVal, bool forceSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_SetAttachedToSurface");

	ADino_Character_BP_Climber_C_Climber_AI_SetAttachedToSurface_Params params;
	params.newVal = newVal;
	params.forceSuccess = forceSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Ai Controller
// ()
// Parameters:
// class ADino_AIController_BP_Climber_C* Ref                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_Climber_Ai_Controller(class ADino_AIController_BP_Climber_C** Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Ai Controller");

	ADino_Character_BP_Climber_C_Get_Climber_Ai_Controller_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ref != nullptr)
		*Ref = params.Ref;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_DetachFromSurface
// ()

void ADino_Character_BP_Climber_C::Climber_AI_DetachFromSurface()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_DetachFromSurface");

	ADino_Character_BP_Climber_C_Climber_AI_DetachFromSurface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Attached
// ()
// Parameters:
// bool                           checkPrevious                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Is_Climber_Attached(bool checkPrevious, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Attached");

	ADino_Character_BP_Climber_C_Is_Climber_Attached_Params params;
	params.checkPrevious = checkPrevious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPNotifyClearRider");

	ADino_Character_BP_Climber_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPNotifySetRider");

	ADino_Character_BP_Climber_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPTimerNonDedicated
// ()

void ADino_Character_BP_Climber_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPTimerNonDedicated");

	ADino_Character_BP_Climber_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Climber Transforms
// ()

void ADino_Character_BP_Climber_C::Update_Climber_Transforms()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Climber Transforms");

	ADino_Character_BP_Climber_C_Update_Climber_Transforms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Default Climber
// ()
// Parameters:
// class ADino_Character_BP_Climber_C* Ref                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Get_Default_Climber(class ADino_Character_BP_Climber_C** Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Default Climber");

	ADino_Character_BP_Climber_C_Get_Default_Climber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ref != nullptr)
		*Ref = params.Ref;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberGrounded
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::IsClimberGrounded(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberGrounded");

	ADino_Character_BP_Climber_C_IsClimberGrounded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CalcCurrentClimbableSurface
// (NetReliable, NetResponse, Static, MulticastDelegate, Public, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// float                          TraceDistance                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           preventTraceRetries            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           requireAllTraceHitsAreValid    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OverrideClimberTransform       (Parm, ZeroConstructor, IsPlainOldData)
// struct UObject_FTransform      NewTransform                   (Parm, IsPlainOldData)
// bool                           OverrideTraceUseMap            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   newUseMap                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           validSurfaceFound              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SurfaceNormal                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 surfaceNormal_Move             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 surfaceLocation                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SurfaceLocation_Move           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   hitMap                         (Parm, OutParm, ZeroConstructor)
// TArray<int>                    traceIndexArray                (Parm, OutParm, ZeroConstructor)

void ADino_Character_BP_Climber_C::STATIC_CalcCurrentClimbableSurface(float TraceDistance, bool preventTraceRetries, bool requireAllTraceHitsAreValid, bool OverrideClimberTransform, const struct UObject_FTransform& NewTransform, bool OverrideTraceUseMap, TArray<bool>* newUseMap, bool* validSurfaceFound, struct FVector* SurfaceNormal, struct FVector* surfaceNormal_Move, struct FVector* surfaceLocation, struct FVector* SurfaceLocation_Move, TArray<bool>* hitMap, TArray<int>* traceIndexArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CalcCurrentClimbableSurface");

	ADino_Character_BP_Climber_C_CalcCurrentClimbableSurface_Params params;
	params.TraceDistance = TraceDistance;
	params.preventTraceRetries = preventTraceRetries;
	params.requireAllTraceHitsAreValid = requireAllTraceHitsAreValid;
	params.OverrideClimberTransform = OverrideClimberTransform;
	params.NewTransform = NewTransform;
	params.OverrideTraceUseMap = OverrideTraceUseMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newUseMap != nullptr)
		*newUseMap = params.newUseMap;
	if (validSurfaceFound != nullptr)
		*validSurfaceFound = params.validSurfaceFound;
	if (SurfaceNormal != nullptr)
		*SurfaceNormal = params.SurfaceNormal;
	if (surfaceNormal_Move != nullptr)
		*surfaceNormal_Move = params.surfaceNormal_Move;
	if (surfaceLocation != nullptr)
		*surfaceLocation = params.surfaceLocation;
	if (SurfaceLocation_Move != nullptr)
		*SurfaceLocation_Move = params.SurfaceLocation_Move;
	if (hitMap != nullptr)
		*hitMap = params.hitMap;
	if (traceIndexArray != nullptr)
		*traceIndexArray = params.traceIndexArray;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Net Set Climber State
// ()
// Parameters:
// unsigned char                  newStateIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Net_Set_Climber_State(unsigned char newStateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Net Set Climber State");

	ADino_Character_BP_Climber_C_Net_Set_Climber_State_Params params;
	params.newStateIndex = newStateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPTimerServer
// ()

void ADino_Character_BP_Climber_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPTimerServer");

	ADino_Character_BP_Climber_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UserConstructionScript
// ()

void ADino_Character_BP_Climber_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UserConstructionScript");

	ADino_Character_BP_Climber_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_Run_K2Node_InputActionEvent_117
// ()

void ADino_Character_BP_Climber_C::InpActEvt_Run_K2Node_InputActionEvent_117()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_Run_K2Node_InputActionEvent_117");

	ADino_Character_BP_Climber_C_InpActEvt_Run_K2Node_InputActionEvent_117_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_Run_K2Node_InputActionEvent_116
// ()

void ADino_Character_BP_Climber_C::InpActEvt_Run_K2Node_InputActionEvent_116()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_Run_K2Node_InputActionEvent_116");

	ADino_Character_BP_Climber_C_InpActEvt_Run_K2Node_InputActionEvent_116_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_RunToggle_K2Node_InputActionEvent_115
// ()

void ADino_Character_BP_Climber_C::InpActEvt_RunToggle_K2Node_InputActionEvent_115()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_RunToggle_K2Node_InputActionEvent_115");

	ADino_Character_BP_Climber_C_InpActEvt_RunToggle_K2Node_InputActionEvent_115_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_Jump_K2Node_InputActionEvent_114
// ()

void ADino_Character_BP_Climber_C::InpActEvt_Jump_K2Node_InputActionEvent_114()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_Jump_K2Node_InputActionEvent_114");

	ADino_Character_BP_Climber_C_InpActEvt_Jump_K2Node_InputActionEvent_114_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_StartSeeking
// ()

void ADino_Character_BP_Climber_C::Server_StartSeeking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_StartSeeking");

	ADino_Character_BP_Climber_C_Server_StartSeeking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_StopSeeking
// ()

void ADino_Character_BP_Climber_C::Server_StopSeeking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_StopSeeking");

	ADino_Character_BP_Climber_C_Server_StopSeeking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_NetSetClimberState
// ()
// Parameters:
// unsigned char                  NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Server_NetSetClimberState(unsigned char NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_NetSetClimberState");

	ADino_Character_BP_Climber_C_Server_NetSetClimberState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetReadyToClimbAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::SetReadyToClimbAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetReadyToClimbAfterDelay");

	ADino_Character_BP_Climber_C_SetReadyToClimbAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckUntil_SetAiAttachedToSurface
// ()

void ADino_Character_BP_Climber_C::CheckUntil_SetAiAttachedToSurface()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckUntil_SetAiAttachedToSurface");

	ADino_Character_BP_Climber_C_CheckUntil_SetAiAttachedToSurface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.PlayAttachParticleWhenCloseToSurface
// ()

void ADino_Character_BP_Climber_C::PlayAttachParticleWhenCloseToSurface()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.PlayAttachParticleWhenCloseToSurface");

	ADino_Character_BP_Climber_C_PlayAttachParticleWhenCloseToSurface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.PreventLandingAnimBriefly
// ()

void ADino_Character_BP_Climber_C::PreventLandingAnimBriefly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.PreventLandingAnimBriefly");

	ADino_Character_BP_Climber_C_PreventLandingAnimBriefly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckOnJumpStateAfterJumpDelay
// ()

void ADino_Character_BP_Climber_C::CheckOnJumpStateAfterJumpDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckOnJumpStateAfterJumpDelay");

	ADino_Character_BP_Climber_C_CheckOnJumpStateAfterJumpDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnJumpPressed
// ()

void ADino_Character_BP_Climber_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnJumpPressed");

	ADino_Character_BP_Climber_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnJumpReleased
// ()

void ADino_Character_BP_Climber_C::BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnJumpReleased");

	ADino_Character_BP_Climber_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SyncToServer_RiderViewRotation
// ()
// Parameters:
// struct FRotator                ViewRotation                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::SyncToServer_RiderViewRotation(const struct FRotator& ViewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SyncToServer_RiderViewRotation");

	ADino_Character_BP_Climber_C_SyncToServer_RiderViewRotation_Params params;
	params.ViewRotation = ViewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SyncToOwningClient_ClimbingVelocity
// ()
// Parameters:
// struct FVector                 climbingVelocity               (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::SyncToOwningClient_ClimbingVelocity(const struct FVector& climbingVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SyncToOwningClient_ClimbingVelocity");

	ADino_Character_BP_Climber_C_SyncToOwningClient_ClimbingVelocity_Params params;
	params.climbingVelocity = climbingVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_OnRunPressed
// ()

void ADino_Character_BP_Climber_C::Server_OnRunPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_OnRunPressed");

	ADino_Character_BP_Climber_C_Server_OnRunPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_OnRunReleased
// ()

void ADino_Character_BP_Climber_C::Server_OnRunReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_OnRunReleased");

	ADino_Character_BP_Climber_C_Server_OnRunReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_Climber_OnRunPressed
// ()

void ADino_Character_BP_Climber_C::Multi_Climber_OnRunPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_Climber_OnRunPressed");

	ADino_Character_BP_Climber_C_Multi_Climber_OnRunPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_Climber_OnRunReleased
// ()

void ADino_Character_BP_Climber_C::Multi_Climber_OnRunReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_Climber_OnRunReleased");

	ADino_Character_BP_Climber_C_Multi_Climber_OnRunReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClearClimberControlRotationRoll
// ()

void ADino_Character_BP_Climber_C::ClearClimberControlRotationRoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClearClimberControlRotationRoll");

	ADino_Character_BP_Climber_C_ClearClimberControlRotationRoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClearClimberControlRotationRoll_NextTick
// ()

void ADino_Character_BP_Climber_C::ClearClimberControlRotationRoll_NextTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClearClimberControlRotationRoll_NextTick");

	ADino_Character_BP_Climber_C_ClearClimberControlRotationRoll_NextTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReceiveBeginPlay
// ()

void ADino_Character_BP_Climber_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReceiveBeginPlay");

	ADino_Character_BP_Climber_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.LockClimbingMeshRotationInterpSpeedForDuration
// ()
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::LockClimbingMeshRotationInterpSpeedForDuration(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.LockClimbingMeshRotationInterpSpeedForDuration");

	ADino_Character_BP_Climber_C_LockClimbingMeshRotationInterpSpeedForDuration_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_SyncClimberDesiredRotationOnDetach
// ()
// Parameters:
// struct FRotator                DesiredRotation                (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Multi_SyncClimberDesiredRotationOnDetach(const struct FRotator& DesiredRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_SyncClimberDesiredRotationOnDetach");

	ADino_Character_BP_Climber_C_Multi_SyncClimberDesiredRotationOnDetach_Params params;
	params.DesiredRotation = DesiredRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InitClimber_NextTick
// ()

void ADino_Character_BP_Climber_C::InitClimber_NextTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InitClimber_NextTick");

	ADino_Character_BP_Climber_C_InitClimber_NextTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InitClimber_Now
// ()

void ADino_Character_BP_Climber_C::InitClimber_Now()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InitClimber_Now");

	ADino_Character_BP_Climber_C_InitClimber_Now_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_OnWallJump
// ()
// Parameters:
// struct FVector                 wallJumpVelocity               (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Multi_OnWallJump(const struct FVector& wallJumpVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_OnWallJump");

	ADino_Character_BP_Climber_C_Multi_OnWallJump_Params params;
	params.wallJumpVelocity = wallJumpVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_DrawDebug_Line
// ()
// Parameters:
// struct FVector                 LineStart                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LineEnd                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Multi_DrawDebug_Line(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& Color, float Duration, float Thickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_DrawDebug_Line");

	ADino_Character_BP_Climber_C_Multi_DrawDebug_Line_Params params;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.Color = Color;
	params.Duration = Duration;
	params.Thickness = Thickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_OnJumpPresssed
// ()

void ADino_Character_BP_Climber_C::Server_OnJumpPresssed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_OnJumpPresssed");

	ADino_Character_BP_Climber_C_Server_OnJumpPresssed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_JumpAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Climber_JumpAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_JumpAfterDelay");

	ADino_Character_BP_Climber_C_Climber_JumpAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_HardSetClimberActorRotation
// ()
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Multi_HardSetClimberActorRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_HardSetClimberActorRotation");

	ADino_Character_BP_Climber_C_Multi_HardSetClimberActorRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_WallJumpAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Climber_WallJumpAfterDelay(float Delay, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_WallJumpAfterDelay");

	ADino_Character_BP_Climber_C_Climber_WallJumpAfterDelay_Params params;
	params.Delay = Delay;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_ClimberPlayLandAnim
// ()
// Parameters:
// bool                           forceSuccess                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Multi_ClimberPlayLandAnim(bool forceSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_ClimberPlayLandAnim");

	ADino_Character_BP_Climber_C_Multi_ClimberPlayLandAnim_Params params;
	params.forceSuccess = forceSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client_Jump
// ()
// Parameters:
// bool                           forceSuccess                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Client_Jump(bool forceSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client_Jump");

	ADino_Character_BP_Climber_C_Client_Jump_Params params;
	params.forceSuccess = forceSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_DrawDebug_Sphere
// ()
// Parameters:
// struct FVector                 Center                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Segments                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Multi_DrawDebug_Sphere(const struct FVector& Center, float Radius, int Segments, const struct FLinearColor& Color, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_DrawDebug_Sphere");

	ADino_Character_BP_Climber_C_Multi_DrawDebug_Sphere_Params params;
	params.Center = Center;
	params.Radius = Radius;
	params.Segments = Segments;
	params.Color = Color;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_DrawDebug_Box
// ()
// Parameters:
// struct FVector                 Center                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Extent                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Multi_DrawDebug_Box(const struct FVector& Center, const struct FVector& Extent, const struct FLinearColor& Color, const struct FRotator& Rotation, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_DrawDebug_Box");

	ADino_Character_BP_Climber_C_Multi_DrawDebug_Box_Params params;
	params.Center = Center;
	params.Extent = Extent;
	params.Color = Color;
	params.Rotation = Rotation;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber AI Restart Seeking After Delay
// ()

void ADino_Character_BP_Climber_C::Climber_AI_Restart_Seeking_After_Delay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber AI Restart Seeking After Delay");

	ADino_Character_BP_Climber_C_Climber_AI_Restart_Seeking_After_Delay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_SoftSetClimberActorRotation
// ()
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Multi_SoftSetClimberActorRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_SoftSetClimberActorRotation");

	ADino_Character_BP_Climber_C_Multi_SoftSetClimberActorRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_SetIsClimberJumping
// ()
// Parameters:
// bool                           newVal                         (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Server_SetIsClimberJumping(bool newVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_SetIsClimberJumping");

	ADino_Character_BP_Climber_C_Server_SetIsClimberJumping_Params params;
	params.newVal = newVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client_SetActorLocAndRot
// ()
// Parameters:
// struct FVector                 NewLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                newRot                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSoftSet                       (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::Client_SetActorLocAndRot(const struct FVector& NewLoc, const struct FRotator& newRot, bool bSoftSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client_SetActorLocAndRot");

	ADino_Character_BP_Climber_C_Client_SetActorLocAndRot_Params params;
	params.NewLoc = NewLoc;
	params.newRot = newRot;
	params.bSoftSet = bSoftSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ExecuteUbergraph_Dino_Character_BP_Climber
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Climber_C::ExecuteUbergraph_Dino_Character_BP_Climber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ExecuteUbergraph_Dino_Character_BP_Climber");

	ADino_Character_BP_Climber_C_ExecuteUbergraph_Dino_Character_BP_Climber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

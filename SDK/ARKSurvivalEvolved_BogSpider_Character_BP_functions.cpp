// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BogSpider_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpooderInSPACE
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::IsSpooderInSPACE(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpooderInSPACE");

	ABogSpider_Character_BP_C_IsSpooderInSPACE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWallJump
// ()
// Parameters:
// struct FVector*                wallJumpVelocity               (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::OnWallJump(struct FVector* wallJumpVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWallJump");

	ABogSpider_Character_BP_C_OnWallJump_Params params;
	params.wallJumpVelocity = wallJumpVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnClimberFinishedAttaching
// ()

void ABogSpider_Character_BP_C::OnClimberFinishedAttaching()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnClimberFinishedAttaching");

	ABogSpider_Character_BP_C_OnClimberFinishedAttaching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.StoreClimb Trace Socket Offsets
// (Static, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)

void ABogSpider_Character_BP_C::STATIC_StoreClimb_Trace_Socket_Offsets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.StoreClimb Trace Socket Offsets");

	ABogSpider_Character_BP_C_StoreClimb_Trace_Socket_Offsets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderClimbingTraceTransform
// (Exec, Static, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// int                            TraceIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct UObject_FTransform      TraceTransform                 (Parm, OutParm, IsPlainOldData)

void ABogSpider_Character_BP_C::STATIC_GetSpiderClimbingTraceTransform(int TraceIndex, bool bWorldSpace, struct UObject_FTransform* TraceTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderClimbingTraceTransform");

	ABogSpider_Character_BP_C_GetSpiderClimbingTraceTransform_Params params;
	params.TraceIndex = TraceIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TraceTransform != nullptr)
		*TraceTransform = params.TraceTransform;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsClimbingTraceHitResultValid
// ()
// Parameters:
// bool*                          bValidHit                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)
// struct FVector*                TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TraceIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TraceRetryNum                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::IsClimbingTraceHitResultValid(bool* bValidHit, struct FVector* TraceStart, struct FVector* TraceEnd, int* TraceIndex, int* TraceRetryNum, struct FHitResult* Hit, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsClimbingTraceHitResultValid");

	ABogSpider_Character_BP_C_IsClimbingTraceHitResultValid_Params params;
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


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberOverrideRetriedTraceResult
// ()
// Parameters:
// struct FHitResult              WithHit                        (Parm, OutParm, ReferenceParm)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CanClimberOverrideRetriedTraceResult(struct FHitResult* WithHit, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberOverrideRetriedTraceResult");

	ABogSpider_Character_BP_C_CanClimberOverrideRetriedTraceResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WithHit != nullptr)
		*WithHit = params.WithHit;
	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanSpiderStopNonDediTick
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CanSpiderStopNonDediTick(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanSpiderStopNonDediTick");

	ABogSpider_Character_BP_C_CanSpiderStopNonDediTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberStopNonDediTick_NonControlled
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CanClimberStopNonDediTick_NonControlled(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberStopNonDediTick_NonControlled");

	ABogSpider_Character_BP_C_CanClimberStopNonDediTick_NonControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberStopNonDediTick_Controlled
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CanClimberStopNonDediTick_Controlled(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberStopNonDediTick_Controlled");

	ABogSpider_Character_BP_C_CanClimberStopNonDediTick_Controlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Can ClimberContinueClimbing
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Can_ClimberContinueClimbing(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Can ClimberContinueClimbing");

	ABogSpider_Character_BP_C_Can_ClimberContinueClimbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanSpiderUseAbilities
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CanSpiderUseAbilities(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanSpiderUseAbilities");

	ABogSpider_Character_BP_C_CanSpiderUseAbilities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateSpiderRandomTickDelay
// ()

void ABogSpider_Character_BP_C::UpdateSpiderRandomTickDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateSpiderRandomTickDelay");

	ABogSpider_Character_BP_C_UpdateSpiderRandomTickDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.StopAllSpiderCameraShake
// ()
// Parameters:
// class APrimalCharacter*        ForRider                       (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::StopAllSpiderCameraShake(class APrimalCharacter* ForRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.StopAllSpiderCameraShake");

	ABogSpider_Character_BP_C_StopAllSpiderCameraShake_Params params;
	params.ForRider = ForRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateNonControlledClimber
// (NetRequest, NetResponse, NetMulticast, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)

void ABogSpider_Character_BP_C::UpdateNonControlledClimber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateNonControlledClimber");

	ABogSpider_Character_BP_C_UpdateNonControlledClimber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsPlayingJumpDetachAnim
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::IsPlayingJumpDetachAnim(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsPlayingJumpDetachAnim");

	ABogSpider_Character_BP_C_IsPlayingJumpDetachAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanPrimalCharBeUsedForTaming
// ()
// Parameters:
// class APrimalCharacter*        Char                           (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CanPrimalCharBeUsedForTaming(class APrimalCharacter** Char, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanPrimalCharBeUsedForTaming");

	ABogSpider_Character_BP_C_CanPrimalCharBeUsedForTaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Char != nullptr)
		*Char = params.Char;
	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.AddTamingAffinityFromLifeSteal
// ()
// Parameters:
// class AShooterCharacter*       ForPlayer                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABogSpider_Character_BP_C::AddTamingAffinityFromLifeSteal(class AShooterCharacter** ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.AddTamingAffinityFromLifeSteal");

	ABogSpider_Character_BP_C_AddTamingAffinityFromLifeSteal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForPlayer != nullptr)
		*ForPlayer = params.ForPlayer;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPClientDoMultiUse");

	ABogSpider_Character_BP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.RefreshSpiderVision
// ()

void ABogSpider_Character_BP_C::RefreshSpiderVision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.RefreshSpiderVision");

	ABogSpider_Character_BP_C_RefreshSpiderVision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_CacheWebTracePreviewHits
// (Event, NetResponse, Static, NetMulticast, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// TArray<struct FHitResult>      TraceHits                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABogSpider_Character_BP_C::STATIC_Tick_CacheWebTracePreviewHits(TArray<struct FHitResult>* TraceHits)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_CacheWebTracePreviewHits");

	ABogSpider_Character_BP_C_Tick_CacheWebTracePreviewHits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TraceHits != nullptr)
		*TraceHits = params.TraceHits;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CalcAirJumpVelocity
// ()
// Parameters:
// struct FVector2D               WithInputs                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WithVelocity                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                WithControlRot                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABogSpider_Character_BP_C::CalcAirJumpVelocity(const struct FVector2D& WithInputs, const struct FVector& WithVelocity, struct FRotator* WithControlRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CalcAirJumpVelocity");

	ABogSpider_Character_BP_C_CalcAirJumpVelocity_Params params;
	params.WithInputs = WithInputs;
	params.WithVelocity = WithVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WithControlRot != nullptr)
		*WithControlRot = params.WithControlRot;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetMultiUseEntries
// (NetRequest, Native, Event, NetResponse, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABogSpider_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetMultiUseEntries");

	ABogSpider_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderAnimBP
// ()
// Parameters:
// class UBogSpider_AnimBlueprint_C* animBP                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::GetSpiderAnimBP(class UBogSpider_AnimBlueprint_C** animBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderAnimBP");

	ABogSpider_Character_BP_C_GetSpiderAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (animBP != nullptr)
		*animBP = params.animBP;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.AddChargeJumpVelocity
// ()
// Parameters:
// float                          WithChargeRatio                (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::AddChargeJumpVelocity(float WithChargeRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.AddChargeJumpVelocity");

	ABogSpider_Character_BP_C_AddChargeJumpVelocity_Params params;
	params.WithChargeRatio = WithChargeRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoChargeJump_Server
// ()
// Parameters:
// double                         ClientTimestamp                (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::DoChargeJump_Server(double ClientTimestamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoChargeJump_Server");

	ABogSpider_Character_BP_C_DoChargeJump_Server_Params params;
	params.ClientTimestamp = ClientTimestamp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartChargeJump_Server
// ()
// Parameters:
// double                         ClientTimestamp                (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::StartChargeJump_Server(double ClientTimestamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartChargeJump_Server");

	ABogSpider_Character_BP_C_StartChargeJump_Server_Params params;
	params.ClientTimestamp = ClientTimestamp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateClientWaterWalkingBuff
// ()

void ABogSpider_Character_BP_C::Tick_UpdateClientWaterWalkingBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateClientWaterWalkingBuff");

	ABogSpider_Character_BP_C_Tick_UpdateClientWaterWalkingBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPAcknowledgeServerCorrection
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

bool ABogSpider_Character_BP_C::BPAcknowledgeServerCorrection(float* TimeStamp, struct FVector* NewLoc, struct FVector* NewVel, class UPrimitiveComponent** NewBase, struct FName* NewBaseBoneName, bool* bHasBase, bool* bBaseRelativePosition, unsigned char* ServerMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPAcknowledgeServerCorrection");

	ABogSpider_Character_BP_C_BPAcknowledgeServerCorrection_Params params;
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


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SpiderPrintShippingMessage
// ()
// Parameters:
// class FString                  Message                        (Parm, ZeroConstructor)

void ABogSpider_Character_BP_C::SpiderPrintShippingMessage(const class FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SpiderPrintShippingMessage");

	ABogSpider_Character_BP_C_SpiderPrintShippingMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnDinoCheat
// ()
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnDinoCheat");

	ABogSpider_Character_BP_C_BPOnDinoCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideRiderCameraCollisionSweep
// (NetRequest, Exec, Native, Event, NetMulticast, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// struct FVector                 SweepStart                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 SweepEnd                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FHitResult              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHitResult ABogSpider_Character_BP_C::BP_OverrideRiderCameraCollisionSweep(struct FVector* SweepStart, struct FVector* SweepEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideRiderCameraCollisionSweep");

	ABogSpider_Character_BP_C_BP_OverrideRiderCameraCollisionSweep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepStart != nullptr)
		*SweepStart = params.SweepStart;
	if (SweepEnd != nullptr)
		*SweepEnd = params.SweepEnd;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.AdjustClimbTraceTransform
// (NetReliable, Static, NetMulticast, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// struct FName*                  WithSocketName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct UObject_FTransform      WithTraceTransform             (Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct UObject_FTransform      ClimberTransform               (Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct UObject_FTransform      AdjustedTransform              (Parm, OutParm, IsPlainOldData)

void ABogSpider_Character_BP_C::STATIC_AdjustClimbTraceTransform(struct FName* WithSocketName, struct UObject_FTransform* WithTraceTransform, struct UObject_FTransform* ClimberTransform, struct UObject_FTransform* AdjustedTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.AdjustClimbTraceTransform");

	ABogSpider_Character_BP_C_AdjustClimbTraceTransform_Params params;
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


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsRiderLookDirParallelWithClimbUp
// ()
// Parameters:
// struct FVector2D               WithinAngleRange               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          angleDelta                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::IsRiderLookDirParallelWithClimbUp(const struct FVector2D& WithinAngleRange, bool* bResult, float* angleDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsRiderLookDirParallelWithClimbUp");

	ABogSpider_Character_BP_C_IsRiderLookDirParallelWithClimbUp_Params params;
	params.WithinAngleRange = WithinAngleRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (angleDelta != nullptr)
		*angleDelta = params.angleDelta;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderTransformForEnsnare
// (NetRequest, Event, Static, NetMulticast, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// struct UObject_FTransform      Transform                      (Parm, OutParm, IsPlainOldData)

void ABogSpider_Character_BP_C::STATIC_GetSpiderTransformForEnsnare(struct UObject_FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderTransformForEnsnare");

	ABogSpider_Character_BP_C_GetSpiderTransformForEnsnare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideCarriedCharacterTransform
// (Native, NetResponse, Static, NetMulticast, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// class APrimalCharacter**       ForCarriedChar                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABogSpider_Character_BP_C::STATIC_BP_OverrideCarriedCharacterTransform(class APrimalCharacter** ForCarriedChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideCarriedCharacterTransform");

	ABogSpider_Character_BP_C_BP_OverrideCarriedCharacterTransform_Params params;
	params.ForCarriedChar = ForCarriedChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.WantsToAirBrake
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::WantsToAirBrake(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.WantsToAirBrake");

	ABogSpider_Character_BP_C_WantsToAirBrake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateClimberOverrideFallVelocity
// ()

void ABogSpider_Character_BP_C::UpdateClimberOverrideFallVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateClimberOverrideFallVelocity");

	ABogSpider_Character_BP_C_UpdateClimberOverrideFallVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ModifySpiderFallingVelocity
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::ModifySpiderFallingVelocity(float DeltaTime, struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ModifySpiderFallingVelocity");

	ABogSpider_Character_BP_C_ModifySpiderFallingVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Rotate RotatorForwardVector to Target Constant
// ()
// Parameters:
// struct FRotator*               currentRotator                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                targetForward                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         RotationRate                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                newRotator                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Rotate_RotatorForwardVector_to_Target_Constant(struct FRotator* currentRotator, struct FVector* targetForward, float* RotationRate, struct FRotator* newRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Rotate RotatorForwardVector to Target Constant");

	ABogSpider_Character_BP_C_Rotate_RotatorForwardVector_to_Target_Constant_Params params;
	params.currentRotator = currentRotator;
	params.targetForward = targetForward;
	params.RotationRate = RotationRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newRotator != nullptr)
		*newRotator = params.newRotator;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetCurrentClimbingRotationSpeed
// ()
// Parameters:
// float                          RotationSpeed                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::GetCurrentClimbingRotationSpeed(float* RotationSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetCurrentClimbingRotationSpeed");

	ABogSpider_Character_BP_C_GetCurrentClimbingRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RotationSpeed != nullptr)
		*RotationSpeed = params.RotationSpeed;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Rotate Climber To TargetClimbingRotation
// ()

void ABogSpider_Character_BP_C::Rotate_Climber_To_TargetClimbingRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Rotate Climber To TargetClimbingRotation");

	ABogSpider_Character_BP_C_Rotate_Climber_To_TargetClimbingRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPDidSetCarriedCharacter
// (NetReliable, Exec, Event, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::BPDidSetCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPDidSetCarriedCharacter");

	ABogSpider_Character_BP_C_BPDidSetCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberRestoreToSeeking
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABogSpider_Character_BP_C::CanClimberRestoreToSeeking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberRestoreToSeeking");

	ABogSpider_Character_BP_C_CanClimberRestoreToSeeking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpiderClimbRunning
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABogSpider_Character_BP_C::IsSpiderClimbRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpiderClimbRunning");

	ABogSpider_Character_BP_C_IsSpiderClimbRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_SimulateClimbingBetweenFrames
// ()

void ABogSpider_Character_BP_C::Tick_SimulateClimbingBetweenFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_SimulateClimbingBetweenFrames");

	ABogSpider_Character_BP_C_Tick_SimulateClimbingBetweenFrames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsClimberGrounded
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::IsClimberGrounded(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsClimberGrounded");

	ABogSpider_Character_BP_C_IsClimberGrounded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetCrosshairColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor ABogSpider_Character_BP_C::BPGetCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetCrosshairColor");

	ABogSpider_Character_BP_C_BPGetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Get CorrectDetachAnim
// ()
// Parameters:
// class UAnimMontage*            Anim                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Get_CorrectDetachAnim(class UAnimMontage** Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Get CorrectDetachAnim");

	ABogSpider_Character_BP_C_Get_CorrectDetachAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Anim != nullptr)
		*Anim = params.Anim;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanSpiderRunSeek
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CanSpiderRunSeek(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanSpiderRunSeek");

	ABogSpider_Character_BP_C_CanSpiderRunSeek_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderRunSeeking
// ()

void ABogSpider_Character_BP_C::Tick_UpdateSpiderRunSeeking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderRunSeeking");

	ABogSpider_Character_BP_C_Tick_UpdateSpiderRunSeeking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderCameraShake
// ()

void ABogSpider_Character_BP_C::Tick_UpdateSpiderCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderCameraShake");

	ABogSpider_Character_BP_C_Tick_UpdateSpiderCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ClimberCheckForAboveWalkableGround
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::ClimberCheckForAboveWalkableGround(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ClimberCheckForAboveWalkableGround");

	ABogSpider_Character_BP_C_ClimberCheckForAboveWalkableGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Get Correct Surface Trace OffsetTransforms
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// bool*                          overrideUseMap                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   newUseMp                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct UObject_FTransform> offsetTransforms               (Parm, OutParm, ZeroConstructor)
// TArray<int>                    TraceIndeces                   (Parm, OutParm, ZeroConstructor)

void ABogSpider_Character_BP_C::STATIC_Get_Correct_Surface_Trace_OffsetTransforms(bool* overrideUseMap, TArray<bool>* newUseMp, TArray<struct UObject_FTransform>* offsetTransforms, TArray<int>* TraceIndeces)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Get Correct Surface Trace OffsetTransforms");

	ABogSpider_Character_BP_C_Get_Correct_Surface_Trace_OffsetTransforms_Params params;
	params.overrideUseMap = overrideUseMap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newUseMp != nullptr)
		*newUseMp = params.newUseMp;
	if (offsetTransforms != nullptr)
		*offsetTransforms = params.offsetTransforms;
	if (TraceIndeces != nullptr)
		*TraceIndeces = params.TraceIndeces;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DisplaySpiderHudNotification
// ()
// Parameters:
// class FString                  Notification                   (Parm, ZeroConstructor)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               DisplayScaleAndTime            (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::DisplaySpiderHudNotification(const class FString& Notification, const struct FLinearColor& Color, const struct FVector2D& DisplayScaleAndTime, class UTexture2D* Icon, class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DisplaySpiderHudNotification");

	ABogSpider_Character_BP_C_DisplaySpiderHudNotification_Params params;
	params.Notification = Notification;
	params.Color = Color;
	params.DisplayScaleAndTime = DisplayScaleAndTime;
	params.Icon = Icon;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_ManageBloodSuckingClientBuff
// ()

void ABogSpider_Character_BP_C::Tick_ManageBloodSuckingClientBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_ManageBloodSuckingClientBuff");

	ABogSpider_Character_BP_C_Tick_ManageBloodSuckingClientBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UnriddenSpiderTryBioGrappleTarget
// ()
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::UnriddenSpiderTryBioGrappleTarget(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UnriddenSpiderTryBioGrappleTarget");

	ABogSpider_Character_BP_C_UnriddenSpiderTryBioGrappleTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Climber_AllowMovementWhileClimbing
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Climber_AllowMovementWhileClimbing(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Climber_AllowMovementWhileClimbing");

	ABogSpider_Character_BP_C_Climber_AllowMovementWhileClimbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Climber_AI_OnSetTarget
// ()
// Parameters:
// class AActor**                 NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Climber_AI_OnSetTarget(class AActor** NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Climber_AI_OnSetTarget");

	ABogSpider_Character_BP_C_Climber_AI_OnSetTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateClimbingClimber
// ()
// Parameters:
// bool*                          IgnoreFailure                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canKeepClimbing                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::UpdateClimbingClimber(bool* IgnoreFailure, bool* canKeepClimbing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateClimbingClimber");

	ABogSpider_Character_BP_C_UpdateClimbingClimber_Params params;
	params.IgnoreFailure = IgnoreFailure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canKeepClimbing != nullptr)
		*canKeepClimbing = params.canKeepClimbing;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderVisionActive
// ()
// Parameters:
// bool                           bNewActive                     (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::SetSpiderVisionActive(bool bNewActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderVisionActive");

	ABogSpider_Character_BP_C_SetSpiderVisionActive_Params params;
	params.bNewActive = bNewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ToggleSpiderVision
// ()

void ABogSpider_Character_BP_C::ToggleSpiderVision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ToggleSpiderVision");

	ABogSpider_Character_BP_C_ToggleSpiderVision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberSeek
// ()
// Parameters:
// bool*                          isForStart                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CanClimberSeek(bool* isForStart, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberSeek");

	ABogSpider_Character_BP_C_CanClimberSeek_Params params;
	params.isForStart = isForStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Get CurrentClimbingVelocityMax
// ()
// Parameters:
// float                          Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Get_CurrentClimbingVelocityMax(float* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Get CurrentClimbingVelocityMax");

	ABogSpider_Character_BP_C_Get_CurrentClimbingVelocityMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Can Climber Rotate to Target Rotation
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Can_Climber_Rotate_to_Target_Rotation(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Can Climber Rotate to Target Rotation");

	ABogSpider_Character_BP_C_Can_Climber_Rotate_to_Target_Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetClimbingMoveDirFromRotation
// ()
// Parameters:
// struct FRotator*               Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 moveDir                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::GetClimbingMoveDirFromRotation(struct FRotator* Rotation, struct FVector* moveDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetClimbingMoveDirFromRotation");

	ABogSpider_Character_BP_C_GetClimbingMoveDirFromRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (moveDir != nullptr)
		*moveDir = params.moveDir;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CheckForUpdateSpiderClimbMoving
// ()

void ABogSpider_Character_BP_C::CheckForUpdateSpiderClimbMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CheckForUpdateSpiderClimbMoving");

	ABogSpider_Character_BP_C_CheckForUpdateSpiderClimbMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateClimber Inputs
// ()

void ABogSpider_Character_BP_C::UpdateClimber_Inputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateClimber Inputs");

	ABogSpider_Character_BP_C_UpdateClimber_Inputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Init Climber
// ()

void ABogSpider_Character_BP_C::Init_Climber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Init Climber");

	ABogSpider_Character_BP_C_Init_Climber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsNormalClimbable
// ()
// Parameters:
// struct FVector*                Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isAverageNormal                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::IsNormalClimbable(struct FVector* Normal, bool* isAverageNormal, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsNormalClimbable");

	ABogSpider_Character_BP_C_IsNormalClimbable_Params params;
	params.Normal = Normal;
	params.isAverageNormal = isAverageNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Replicate Index Update Server And Client Climber
// ()

void ABogSpider_Character_BP_C::Replicate_Index_Update_Server_And_Client_Climber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Replicate Index Update Server And Client Climber");

	ABogSpider_Character_BP_C_Replicate_Index_Update_Server_And_Client_Climber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Check For Prevent Stop Climbing
// ()
// Parameters:
// TArray<bool>                   traceHitsArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           numValidHits                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           numTraces                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllowClimbing                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Check_For_Prevent_Stop_Climbing(int* numValidHits, int* numTraces, TArray<bool>* traceHitsArray, bool* AllowClimbing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Check For Prevent Stop Climbing");

	ABogSpider_Character_BP_C_Check_For_Prevent_Stop_Climbing_Params params;
	params.numValidHits = numValidHits;
	params.numTraces = numTraces;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (traceHitsArray != nullptr)
		*traceHitsArray = params.traceHitsArray;
	if (AllowClimbing != nullptr)
		*AllowClimbing = params.AllowClimbing;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetCorrectSurfaceTraceDistance
// ()
// Parameters:
// bool*                          isForRetry                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          traceDist                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::GetCorrectSurfaceTraceDistance(bool* isForRetry, float* traceDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetCorrectSurfaceTraceDistance");

	ABogSpider_Character_BP_C_GetCorrectSurfaceTraceDistance_Params params;
	params.isForRetry = isForRetry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (traceDist != nullptr)
		*traceDist = params.traceDist;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterpolateClimberMesh
// ()
// Parameters:
// class USkeletalMeshComponent** meshToInterpolate              (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::InterpolateClimberMesh(class USkeletalMeshComponent** meshToInterpolate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterpolateClimberMesh");

	ABogSpider_Character_BP_C_InterpolateClimberMesh_Params params;
	params.meshToInterpolate = meshToInterpolate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOverrideCharacterNewFallVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABogSpider_Character_BP_C::BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOverrideCharacterNewFallVelocity");

	ABogSpider_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params params;
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


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWebSprinting
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::IsWebSprinting(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWebSprinting");

	ABogSpider_Character_BP_C_IsWebSprinting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.FireQuickWebs_Both
// ()
// Parameters:
// struct FVector                 WithHitLocation_A              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WithHitLocation_B              (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::FireQuickWebs_Both(const struct FVector& WithHitLocation_A, const struct FVector& WithHitLocation_B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.FireQuickWebs_Both");

	ABogSpider_Character_BP_C_FireQuickWebs_Both_Params params;
	params.WithHitLocation_A = WithHitLocation_A;
	params.WithHitLocation_B = WithHitLocation_B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanQuickFireWebs
// ()
// Parameters:
// bool                           bSingle                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CanQuickFireWebs(bool bSingle, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanQuickFireWebs");

	ABogSpider_Character_BP_C_CanQuickFireWebs_Params params;
	params.bSingle = bSingle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.FireQuickWebs_Single
// ()
// Parameters:
// struct FVector                 WithHitLocation                (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        WithBioGrappleTarget           (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::FireQuickWebs_Single(const struct FVector& WithHitLocation, class APrimalCharacter* WithBioGrappleTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.FireQuickWebs_Single");

	ABogSpider_Character_BP_C_FireQuickWebs_Single_Params params;
	params.WithHitLocation = WithHitLocation;
	params.WithBioGrappleTarget = WithBioGrappleTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoWebSearch_Both
// (NetReliable, Exec, Native, Static, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// struct FRotator                ViewRot                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundAny                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundOne                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FoundHitLoc_A                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  FoundHitActor_A                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FoundHitLoc_B                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  FoundHitActor_B                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::STATIC_DoWebSearch_Both(const struct FRotator& ViewRot, bool* bFoundAny, bool* bFoundOne, struct FVector* FoundHitLoc_A, class AActor** FoundHitActor_A, struct FVector* FoundHitLoc_B, class AActor** FoundHitActor_B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoWebSearch_Both");

	ABogSpider_Character_BP_C_DoWebSearch_Both_Params params;
	params.ViewRot = ViewRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundAny != nullptr)
		*bFoundAny = params.bFoundAny;
	if (bFoundOne != nullptr)
		*bFoundOne = params.bFoundOne;
	if (FoundHitLoc_A != nullptr)
		*FoundHitLoc_A = params.FoundHitLoc_A;
	if (FoundHitActor_A != nullptr)
		*FoundHitActor_A = params.FoundHitActor_A;
	if (FoundHitLoc_B != nullptr)
		*FoundHitLoc_B = params.FoundHitLoc_B;
	if (FoundHitActor_B != nullptr)
		*FoundHitActor_B = params.FoundHitActor_B;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoWebSearch_Single
// (Exec, Event, NetResponse, Static, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// struct FRotator                ViewRot                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundHit                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FoundHitLoc                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  FoundHitActor                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::STATIC_DoWebSearch_Single(const struct FRotator& ViewRot, bool* bFoundHit, struct FVector* FoundHitLoc, class AActor** FoundHitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoWebSearch_Single");

	ABogSpider_Character_BP_C_DoWebSearch_Single_Params params;
	params.ViewRot = ViewRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundHit != nullptr)
		*bFoundHit = params.bFoundHit;
	if (FoundHitLoc != nullptr)
		*FoundHitLoc = params.FoundHitLoc;
	if (FoundHitActor != nullptr)
		*FoundHitActor = params.FoundHitActor;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetAirJumpVelocity
// ()

void ABogSpider_Character_BP_C::SetAirJumpVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetAirJumpVelocity");

	ABogSpider_Character_BP_C_SetAirJumpVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoAirJump
// ()
// Parameters:
// struct FVector2D               WithMoveInputs                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WithVelocity                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                WithControlRot                 (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::DoAirJump(const struct FVector2D& WithMoveInputs, const struct FVector& WithVelocity, const struct FRotator& WithControlRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoAirJump");

	ABogSpider_Character_BP_C_DoAirJump_Params params;
	params.WithMoveInputs = WithMoveInputs;
	params.WithVelocity = WithVelocity;
	params.WithControlRot = WithControlRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanAirJump
// ()
// Parameters:
// bool                           bForStart                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CanAirJump(bool bForStart, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanAirJump");

	ABogSpider_Character_BP_C_CanAirJump_Params params;
	params.bForStart = bForStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryDoAirJump
// ()
// Parameters:
// struct FVector2D               WithMoveInputs                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WithVelocity                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                WithControlRot                 (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::TryDoAirJump(const struct FVector2D& WithMoveInputs, const struct FVector& WithVelocity, const struct FRotator& WithControlRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryDoAirJump");

	ABogSpider_Character_BP_C_TryDoAirJump_Params params;
	params.WithMoveInputs = WithMoveInputs;
	params.WithVelocity = WithVelocity;
	params.WithControlRot = WithControlRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanAttachWebsToCharInPVE
// ()
// Parameters:
// class APrimalCharacter*        ToChar                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CanAttachWebsToCharInPVE(class APrimalCharacter* ToChar, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanAttachWebsToCharInPVE");

	ABogSpider_Character_BP_C_CanAttachWebsToCharInPVE_Params params;
	params.ToChar = ToChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BreakWebVisually
// ()
// Parameters:
// bool                           bBreakLeft                     (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::BreakWebVisually(bool bBreakLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BreakWebVisually");

	ABogSpider_Character_BP_C_BreakWebVisually_Params params;
	params.bBreakLeft = bBreakLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWebTetherImpact
// ()
// Parameters:
// struct FHitResult              WithHit                        (Parm, OutParm, ReferenceParm)

void ABogSpider_Character_BP_C::OnWebTetherImpact(struct FHitResult* WithHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWebTetherImpact");

	ABogSpider_Character_BP_C_OnWebTetherImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WithHit != nullptr)
		*WithHit = params.WithHit;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpiderBloodHangry
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::IsSpiderBloodHangry(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpiderBloodHangry");

	ABogSpider_Character_BP_C_IsSpiderBloodHangry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterceptRiderEmoteAnim
// (Exec, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// class UAnimMontage**           EmoteAnim                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABogSpider_Character_BP_C::InterceptRiderEmoteAnim(class UAnimMontage** EmoteAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterceptRiderEmoteAnim");

	ABogSpider_Character_BP_C_InterceptRiderEmoteAnim_Params params;
	params.EmoteAnim = EmoteAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.NetSyncInputBitmask
// ()
// Parameters:
// class FString                  TriggeredByInput               (Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::NetSyncInputBitmask(const class FString& TriggeredByInput, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.NetSyncInputBitmask");

	ABogSpider_Character_BP_C_NetSyncInputBitmask_Params params;
	params.TriggeredByInput = TriggeredByInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsBioGrappleOnCooldown
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::IsBioGrappleOnCooldown(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsBioGrappleOnCooldown");

	ABogSpider_Character_BP_C_IsBioGrappleOnCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OnStartCarried
// ()
// Parameters:
// class APrimalDinoCharacter**   aDino                          (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::BP_OnStartCarried(class APrimalDinoCharacter** aDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OnStartCarried");

	ABogSpider_Character_BP_C_BP_OnStartCarried_Params params;
	params.aDino = aDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWebShootybangFailed
// ()

void ABogSpider_Character_BP_C::OnWebShootybangFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWebShootybangFailed");

	ABogSpider_Character_BP_C_OnWebShootybangFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.AddBioGrappledBuffToChar
// ()
// Parameters:
// class APrimalCharacter*        ToChar                         (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff*             AddedBuff                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::AddBioGrappledBuffToChar(class APrimalCharacter* ToChar, class APrimalBuff** AddedBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.AddBioGrappledBuffToChar");

	ABogSpider_Character_BP_C_AddBioGrappledBuffToChar_Params params;
	params.ToChar = ToChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AddedBuff != nullptr)
		*AddedBuff = params.AddedBuff;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReleaseEnsnaredChar
// ()

void ABogSpider_Character_BP_C::ReleaseEnsnaredChar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReleaseEnsnaredChar");

	ABogSpider_Character_BP_C_ReleaseEnsnaredChar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnBioGrappledCharBreakWeb
// (NetRequest, Native, NetResponse, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// class APrimalCharacter*        BreakingChar                   (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::OnBioGrappledCharBreakWeb(class APrimalCharacter* BreakingChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnBioGrappledCharBreakWeb");

	ABogSpider_Character_BP_C_OnBioGrappledCharBreakWeb_Params params;
	params.BreakingChar = BreakingChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetEnsnaredCharRef
// (NetReliable, Native, Event, NetResponse, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// class APrimalCharacter*        NewCharRef                     (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::SetEnsnaredCharRef(class APrimalCharacter* NewCharRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetEnsnaredCharRef");

	ABogSpider_Character_BP_C_SetEnsnaredCharRef_Params params;
	params.NewCharRef = NewCharRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetWebVisibility
// ()
// Parameters:
// bool                           bNewVisibility                 (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::SetWebVisibility(bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetWebVisibility");

	ABogSpider_Character_BP_C_SetWebVisibility_Params params;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.StopSpiderJump
// ()

void ABogSpider_Character_BP_C::StopSpiderJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.StopSpiderJump");

	ABogSpider_Character_BP_C_StopSpiderJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoRealSpiderJump
// ()

void ABogSpider_Character_BP_C::DoRealSpiderJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoRealSpiderJump");

	ABogSpider_Character_BP_C_DoRealSpiderJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ShouldPreventWebShootWhileHoldingInputs
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::ShouldPreventWebShootWhileHoldingInputs(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ShouldPreventWebShootWhileHoldingInputs");

	ABogSpider_Character_BP_C_ShouldPreventWebShootWhileHoldingInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetChargeJumpRatio
// ()
// Parameters:
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::GetChargeJumpRatio(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetChargeJumpRatio");

	ABogSpider_Character_BP_C_GetChargeJumpRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnKillEnsnaredDino
// ()
// Parameters:
// class APrimalDinoCharacter*    KilledDino                     (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::OnKillEnsnaredDino(class APrimalDinoCharacter* KilledDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnKillEnsnaredDino");

	ABogSpider_Character_BP_C_OnKillEnsnaredDino_Params params;
	params.KilledDino = KilledDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetMeshRotation
// ()

void ABogSpider_Character_BP_C::ResetMeshRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetMeshRotation");

	ABogSpider_Character_BP_C_ResetMeshRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOverrideCameraViewTarget
// (NetReliable, NetRequest, Native, NetMulticast, Public, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// struct FName*                  CurrentCameraMode              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DesiredCameraLocation          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               DesiredCameraRotation          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DesiredFOV                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraLocation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraRotation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CameraRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraFOV             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CameraFOV                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOverrideCameraViewTarget");

	ABogSpider_Character_BP_C_BPOverrideCameraViewTarget_Params params;
	params.CurrentCameraMode = CurrentCameraMode;
	params.DesiredCameraLocation = DesiredCameraLocation;
	params.DesiredCameraRotation = DesiredCameraRotation;
	params.DesiredFOV = DesiredFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOverrideCameraLocation != nullptr)
		*bOverrideCameraLocation = params.bOverrideCameraLocation;
	if (CameraLocation != nullptr)
		*CameraLocation = params.CameraLocation;
	if (bOverrideCameraRotation != nullptr)
		*bOverrideCameraRotation = params.bOverrideCameraRotation;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
	if (bOverrideCameraFOV != nullptr)
		*bOverrideCameraFOV = params.bOverrideCameraFOV;
	if (CameraFOV != nullptr)
		*CameraFOV = params.CameraFOV;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOverrideStencilAllianceForTarget
// ()
// Parameters:
// class APrimalCharacter**       TargetDino                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    Component                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EStencilAlliance>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EStencilAlliance> ABogSpider_Character_BP_C::BPOverrideStencilAllianceForTarget(class APrimalCharacter** TargetDino, class UPrimitiveComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOverrideStencilAllianceForTarget");

	ABogSpider_Character_BP_C_BPOverrideStencilAllianceForTarget_Params params;
	params.TargetDino = TargetDino;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideTerminalVelocity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABogSpider_Character_BP_C::BP_OverrideTerminalVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideTerminalVelocity");

	ABogSpider_Character_BP_C_BP_OverrideTerminalVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetImpendingLand
// ()
// Parameters:
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::SetImpendingLand(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetImpendingLand");

	ABogSpider_Character_BP_C_SetImpendingLand_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanChargeJump
// ()
// Parameters:
// bool                           bForStart                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CanChargeJump(bool bForStart, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanChargeJump");

	ABogSpider_Character_BP_C_CanChargeJump_Params params;
	params.bForStart = bForStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CancelChargeJump
// ()

void ABogSpider_Character_BP_C::CancelChargeJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CancelChargeJump");

	ABogSpider_Character_BP_C_CancelChargeJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoChargeJump_Client
// ()

void ABogSpider_Character_BP_C::DoChargeJump_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoChargeJump_Client");

	ABogSpider_Character_BP_C_DoChargeJump_Client_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartChargeJump_Client
// ()

void ABogSpider_Character_BP_C::StartChargeJump_Client()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartChargeJump_Client");

	ABogSpider_Character_BP_C_StartChargeJump_Client_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderChargeJump
// ()

void ABogSpider_Character_BP_C::Tick_UpdateSpiderChargeJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderChargeJump");

	ABogSpider_Character_BP_C_Tick_UpdateSpiderChargeJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartBioGrappleCooldown
// ()

void ABogSpider_Character_BP_C::StartBioGrappleCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartBioGrappleCooldown");

	ABogSpider_Character_BP_C_StartBioGrappleCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWebTetherBroken
// ()
// Parameters:
// bool                           bIsLeft                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FGrappleTether          BrokenTether                   (Parm, OutParm, ReferenceParm)

void ABogSpider_Character_BP_C::OnWebTetherBroken(bool bIsLeft, struct FGrappleTether* BrokenTether)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWebTetherBroken");

	ABogSpider_Character_BP_C_OnWebTetherBroken_Params params;
	params.bIsLeft = bIsLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BrokenTether != nullptr)
		*BrokenTether = params.BrokenTether;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_ManageSpiderSounds
// (NetRequest, Native, Event, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)

void ABogSpider_Character_BP_C::Tick_ManageSpiderSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_ManageSpiderSounds");

	ABogSpider_Character_BP_C_Tick_ManageSpiderSounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.RotateDirToTargetWithLimit
// ()
// Parameters:
// struct FVector                 RotateDir                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ToTargetDir                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          RotatingLimitDegrees           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewDir                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::RotateDirToTargetWithLimit(const struct FVector& RotateDir, const struct FVector& ToTargetDir, float RotatingLimitDegrees, struct FVector* NewDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.RotateDirToTargetWithLimit");

	ABogSpider_Character_BP_C_RotateDirToTargetWithLimit_Params params;
	params.RotateDir = RotateDir;
	params.ToTargetDir = ToTargetDir;
	params.RotatingLimitDegrees = RotatingLimitDegrees;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewDir != nullptr)
		*NewDir = params.NewDir;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CheckForInstantHarvestDeadEnsnaredChar
// (NetRequest, Exec, Native, Event, NetResponse, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// class APrimalCharacter*        forChar                        (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CheckForInstantHarvestDeadEnsnaredChar(class APrimalCharacter* forChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CheckForInstantHarvestDeadEnsnaredChar");

	ABogSpider_Character_BP_C_CheckForInstantHarvestDeadEnsnaredChar_Params params;
	params.forChar = forChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpiderRotating
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::IsSpiderRotating(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpiderRotating");

	ABogSpider_Character_BP_C_IsSpiderRotating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Net_OnWebTethersCreated
// ()
// Parameters:
// struct FHitResult              TetherHits_Left                (Parm, OutParm, ReferenceParm)
// struct FHitResult              TetherHits_Right               (Parm, OutParm, ReferenceParm)

void ABogSpider_Character_BP_C::Net_OnWebTethersCreated(struct FHitResult* TetherHits_Left, struct FHitResult* TetherHits_Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Net_OnWebTethersCreated");

	ABogSpider_Character_BP_C_Net_OnWebTethersCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TetherHits_Left != nullptr)
		*TetherHits_Left = params.TetherHits_Left;
	if (TetherHits_Right != nullptr)
		*TetherHits_Right = params.TetherHits_Right;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebVisually
// ()
// Parameters:
// bool                           bIsLeft                        (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CreateWebVisually(bool bIsLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebVisually");

	ABogSpider_Character_BP_C_CreateWebVisually_Params params;
	params.bIsLeft = bIsLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetReelingCables
// ()

void ABogSpider_Character_BP_C::ResetReelingCables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetReelingCables");

	ABogSpider_Character_BP_C_ResetReelingCables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnGrappleBuffActiveStateChanged
// ()
// Parameters:
// bool                           bIsActive                      (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::OnGrappleBuffActiveStateChanged(bool bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnGrappleBuffActiveStateChanged");

	ABogSpider_Character_BP_C_OnGrappleBuffActiveStateChanged_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnSpiderTargetSet
// ()
// Parameters:
// class AActor*                  NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::OnSpiderTargetSet(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnSpiderTargetSet");

	ABogSpider_Character_BP_C_OnSpiderTargetSet_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshInterpSpeed_Rotation
// ()
// Parameters:
// float                          InterpSpeed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::GetMeshInterpSpeed_Rotation(float* InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshInterpSpeed_Rotation");

	ABogSpider_Character_BP_C_GetMeshInterpSpeed_Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InterpSpeed != nullptr)
		*InterpSpeed = params.InterpSpeed;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshInterpSpeed_Location
// ()
// Parameters:
// float                          InterpSpeed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::GetMeshInterpSpeed_Location(float* InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshInterpSpeed_Location");

	ABogSpider_Character_BP_C_GetMeshInterpSpeed_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InterpSpeed != nullptr)
		*InterpSpeed = params.InterpSpeed;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoStupidThings
// ()

void ABogSpider_Character_BP_C::DoStupidThings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoStupidThings");

	ABogSpider_Character_BP_C_DoStupidThings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ShouldShowStupid Name
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::ShouldShowStupid_Name(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ShouldShowStupid Name");

	ABogSpider_Character_BP_C_ShouldShowStupid_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideDinoName
// ()
// Parameters:
// class FString*                 CurrentDinoName                (Parm, ZeroConstructor)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ABogSpider_Character_BP_C::BP_OverrideDinoName(class FString* CurrentDinoName, class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideDinoName");

	ABogSpider_Character_BP_C_BP_OverrideDinoName_Params params;
	params.CurrentDinoName = CurrentDinoName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderTargetLocation
// ()

void ABogSpider_Character_BP_C::Tick_UpdateSpiderTargetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderTargetLocation");

	ABogSpider_Character_BP_C_Tick_UpdateSpiderTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshTargetRotOffset
// ()
// Parameters:
// struct FRotator                TargetRotOffset                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::GetMeshTargetRotOffset(struct FRotator* TargetRotOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshTargetRotOffset");

	ABogSpider_Character_BP_C_GetMeshTargetRotOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetRotOffset != nullptr)
		*TargetRotOffset = params.TargetRotOffset;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshTargetLocOffset
// ()
// Parameters:
// struct FVector                 TargetLocOffset                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::GetMeshTargetLocOffset(struct FVector* TargetLocOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshTargetLocOffset");

	ABogSpider_Character_BP_C_GetMeshTargetLocOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocOffset != nullptr)
		*TargetLocOffset = params.TargetLocOffset;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderVelocityVars_Pure
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          VelocitySize                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VelocityDir                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Velocity2D                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          VelocitySize2D                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::GetSpiderVelocityVars_Pure(struct FVector* Velocity, float* VelocitySize, struct FVector* VelocityDir, struct FVector2D* Velocity2D, float* VelocitySize2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderVelocityVars_Pure");

	ABogSpider_Character_BP_C_GetSpiderVelocityVars_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
	if (VelocitySize != nullptr)
		*VelocitySize = params.VelocitySize;
	if (VelocityDir != nullptr)
		*VelocityDir = params.VelocityDir;
	if (Velocity2D != nullptr)
		*Velocity2D = params.Velocity2D;
	if (VelocitySize2D != nullptr)
		*VelocitySize2D = params.VelocitySize2D;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderVelocityVars
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          VelocitySize                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VelocityDir                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Velocity2D                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          VelocitySize2D                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::GetSpiderVelocityVars(struct FVector* Velocity, float* VelocitySize, struct FVector* VelocityDir, struct FVector2D* Velocity2D, float* VelocitySize2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderVelocityVars");

	ABogSpider_Character_BP_C_GetSpiderVelocityVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
	if (VelocitySize != nullptr)
		*VelocitySize = params.VelocitySize;
	if (VelocityDir != nullptr)
		*VelocityDir = params.VelocityDir;
	if (Velocity2D != nullptr)
		*Velocity2D = params.Velocity2D;
	if (VelocitySize2D != nullptr)
		*VelocitySize2D = params.VelocitySize2D;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsAirBraking
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::IsAirBraking(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsAirBraking");

	ABogSpider_Character_BP_C_IsAirBraking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.HideWebCables
// ()

void ABogSpider_Character_BP_C::HideWebCables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.HideWebCables");

	ABogSpider_Character_BP_C_HideWebCables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsInterpolatingMesh
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::IsInterpolatingMesh(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsInterpolatingMesh");

	ABogSpider_Character_BP_C_IsInterpolatingMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ClearBioGrappledBuff
// ()

void ABogSpider_Character_BP_C::ClearBioGrappledBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ClearBioGrappledBuff");

	ABogSpider_Character_BP_C_ClearBioGrappledBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnBioGrappleReleased
// ()
// Parameters:
// class APrimalCharacter*        ReleasedChar                   (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::OnBioGrappleReleased(class APrimalCharacter* ReleasedChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnBioGrappleReleased");

	ABogSpider_Character_BP_C_OnBioGrappleReleased_Params params;
	params.ReleasedChar = ReleasedChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnBioGrappledChar
// (NetRequest, Exec, Static, NetMulticast, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// class APrimalCharacter*        GrappledChar                   (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::STATIC_OnBioGrappledChar(class APrimalCharacter* GrappledChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnBioGrappledChar");

	ABogSpider_Character_BP_C_OnBioGrappledChar_Params params;
	params.GrappledChar = GrappledChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanTraceForLandingImpact
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CanTraceForLandingImpact(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanTraceForLandingImpact");

	ABogSpider_Character_BP_C_CanTraceForLandingImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetLastFallingVelocity
// ()

void ABogSpider_Character_BP_C::ResetLastFallingVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetLastFallingVelocity");

	ABogSpider_Character_BP_C_ResetLastFallingVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetIsAirBraking
// ()
// Parameters:
// bool                           NewAirBraking                  (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::SetIsAirBraking(bool NewAirBraking)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetIsAirBraking");

	ABogSpider_Character_BP_C_SetIsAirBraking_Params params;
	params.NewAirBraking = NewAirBraking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderVelocity
// ()
// Parameters:
// struct FVector                 NewVelocity                    (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::SetSpiderVelocity(const struct FVector& NewVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderVelocity");

	ABogSpider_Character_BP_C_SetSpiderVelocity_Params params;
	params.NewVelocity = NewVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CacheLastVelocityVars
// ()

void ABogSpider_Character_BP_C::CacheLastVelocityVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CacheLastVelocityVars");

	ABogSpider_Character_BP_C_CacheLastVelocityVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CacheCurrentVelocityVars
// ()

void ABogSpider_Character_BP_C::CacheCurrentVelocityVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CacheCurrentVelocityVars");

	ABogSpider_Character_BP_C_CacheCurrentVelocityVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPSetupTamed");

	ABogSpider_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateTimerIntervals
// ()

void ABogSpider_Character_BP_C::Tick_UpdateTimerIntervals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateTimerIntervals");

	ABogSpider_Character_BP_C_Tick_UpdateTimerIntervals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanHardLand
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CanHardLand(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanHardLand");

	ABogSpider_Character_BP_C_CanHardLand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_TraceForLandingImpact
// (Exec, Event, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)

void ABogSpider_Character_BP_C::Tick_TraceForLandingImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_TraceForLandingImpact");

	ABogSpider_Character_BP_C_Tick_TraceForLandingImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnSpiderLanded
// ()

void ABogSpider_Character_BP_C::OnSpiderLanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnSpiderLanded");

	ABogSpider_Character_BP_C_OnSpiderLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.StopAllWebDetachAnims
// ()

void ABogSpider_Character_BP_C::StopAllWebDetachAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.StopAllWebDetachAnims");

	ABogSpider_Character_BP_C_StopAllWebDetachAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.PlayWebDetachMontage
// ()
// Parameters:
// bool                           bIsJumpDetach                  (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::PlayWebDetachMontage(bool bIsJumpDetach)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.PlayWebDetachMontage");

	ABogSpider_Character_BP_C_PlayWebDetachMontage_Params params;
	params.bIsJumpDetach = bIsJumpDetach;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsStuckToWall
// ()
// Parameters:
// bool                           bIncludeUnsticking             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::IsStuckToWall(bool bIncludeUnsticking, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsStuckToWall");

	ABogSpider_Character_BP_C_IsStuckToWall_Params params;
	params.bIncludeUnsticking = bIncludeUnsticking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsStuckToWall_Pure
// ()
// Parameters:
// bool                           bIncludeUnsticking             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::IsStuckToWall_Pure(bool bIncludeUnsticking, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsStuckToWall_Pure");

	ABogSpider_Character_BP_C_IsStuckToWall_Pure_Params params;
	params.bIncludeUnsticking = bIncludeUnsticking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetLookOffsetSocketName
// ()
// Parameters:
// class APrimalCharacter**       ForPrimalChar                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABogSpider_Character_BP_C::BPGetLookOffsetSocketName(class APrimalCharacter** ForPrimalChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetLookOffsetSocketName");

	ABogSpider_Character_BP_C_BPGetLookOffsetSocketName_Params params;
	params.ForPrimalChar = ForPrimalChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPDidClearCarriedCharacter
// ()
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::BPDidClearCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPDidClearCarriedCharacter");

	ABogSpider_Character_BP_C_BPDidClearCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPUnstasis
// ()

void ABogSpider_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPUnstasis");

	ABogSpider_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSwingingVelocityRatio
// ()
// Parameters:
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::GetSwingingVelocityRatio(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSwingingVelocityRatio");

	ABogSpider_Character_BP_C_GetSwingingVelocityRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.RotateCharControlRotationTowardsSpider
// ()
// Parameters:
// class APrimalCharacter*        forChar                        (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::RotateCharControlRotationTowardsSpider(class APrimalCharacter* forChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.RotateCharControlRotationTowardsSpider");

	ABogSpider_Character_BP_C_RotateCharControlRotationTowardsSpider_Params params;
	params.forChar = forChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsValidBioGrappleTarget
// (NetReliable, Native, Event, Static, NetMulticast, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// class APrimalCharacter*        ForGrappleTarget               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForStart                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreventTraces                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::STATIC_IsValidBioGrappleTarget(class APrimalCharacter* ForGrappleTarget, bool bForStart, bool bPreventTraces, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsValidBioGrappleTarget");

	ABogSpider_Character_BP_C_IsValidBioGrappleTarget_Params params;
	params.ForGrappleTarget = ForGrappleTarget;
	params.bForStart = bForStart;
	params.bPreventTraces = bPreventTraces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPAllowCarryCharacter
// ()
// Parameters:
// class APrimalCharacter**       checkCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABogSpider_Character_BP_C::BPAllowCarryCharacter(class APrimalCharacter** checkCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPAllowCarryCharacter");

	ABogSpider_Character_BP_C_BPAllowCarryCharacter_Params params;
	params.checkCharacter = checkCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveAnyDamage");

	ABogSpider_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.InitBogSpider
// ()

void ABogSpider_Character_BP_C::InitBogSpider()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.InitBogSpider");

	ABogSpider_Character_BP_C_InitBogSpider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryUnstickFromWall
// ()

void ABogSpider_Character_BP_C::TryUnstickFromWall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryUnstickFromWall");

	ABogSpider_Character_BP_C_TryUnstickFromWall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPDoAttack");

	ABogSpider_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanDoBioGrapple
// (NetReliable, Exec, Event, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// bool                           bForStart                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CanDoBioGrapple(bool bForStart, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanDoBioGrapple");

	ABogSpider_Character_BP_C_CanDoBioGrapple_Params params;
	params.bForStart = bForStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdatePullingBioGrappledCharVars
// ()
// Parameters:
// bool                           bPulling                       (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::UpdatePullingBioGrappledCharVars(bool bPulling)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdatePullingBioGrappledCharVars");

	ABogSpider_Character_BP_C_UpdatePullingBioGrappledCharVars_Params params;
	params.bPulling = bPulling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.WebShootybangBioGrapple
// (NetReliable, NetRequest, Native, Static, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// class AActor*                  TryBioGrappleActor             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::STATIC_WebShootybangBioGrapple(class AActor* TryBioGrappleActor, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.WebShootybangBioGrapple");

	ABogSpider_Character_BP_C_WebShootybangBioGrapple_Params params;
	params.TryBioGrappleActor = TryBioGrappleActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnTamedProcessOrder
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::BPOnTamedProcessOrder(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnTamedProcessOrder");

	ABogSpider_Character_BP_C_BPOnTamedProcessOrder_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWebSprinting_Pure
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::IsWebSprinting_Pure(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWebSprinting_Pure");

	ABogSpider_Character_BP_C_IsWebSprinting_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetBitmaskAsString
// ()
// Parameters:
// int                            Bitmask                        (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  String                         (Parm, OutParm, ZeroConstructor)

void ABogSpider_Character_BP_C::GetBitmaskAsString(int Bitmask, class FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetBitmaskAsString");

	ABogSpider_Character_BP_C_GetBitmaskAsString_Params params;
	params.Bitmask = Bitmask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_InputHeartbeat
// ()

void ABogSpider_Character_BP_C::Tick_InputHeartbeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_InputHeartbeat");

	ABogSpider_Character_BP_C_Tick_InputHeartbeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GenerateInputBitMask
// ()
// Parameters:
// class FString                  TriggeredByInput               (Parm, ZeroConstructor)
// int                            NewBitMask                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::GenerateInputBitMask(const class FString& TriggeredByInput, int* NewBitMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GenerateInputBitMask");

	ABogSpider_Character_BP_C_GenerateInputBitMask_Params params;
	params.TriggeredByInput = TriggeredByInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewBitMask != nullptr)
		*NewBitMask = params.NewBitMask;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ProcessSyncedInputs
// ()

void ABogSpider_Character_BP_C::ProcessSyncedInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ProcessSyncedInputs");

	ABogSpider_Character_BP_C_ProcessSyncedInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveDestroyed
// ()

void ABogSpider_Character_BP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveDestroyed");

	ABogSpider_Character_BP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DestroyWebAnchors
// ()

void ABogSpider_Character_BP_C::DestroyWebAnchors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DestroyWebAnchors");

	ABogSpider_Character_BP_C_DestroyWebAnchors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetupCosmeticsForRider
// (NetRequest, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)

void ABogSpider_Character_BP_C::SetupCosmeticsForRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetupCosmeticsForRider");

	ABogSpider_Character_BP_C_SetupCosmeticsForRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_ManageWebs
// (NetReliable, NetRequest, Exec, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)

void ABogSpider_Character_BP_C::Tick_ManageWebs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_ManageWebs");

	ABogSpider_Character_BP_C_Tick_ManageWebs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsGrapplePullJumping
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::IsGrapplePullJumping(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsGrapplePullJumping");

	ABogSpider_Character_BP_C_IsGrapplePullJumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetWantsToWallStick
// ()
// Parameters:
// bool                           bWantsToStick                  (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::SetWantsToWallStick(bool bWantsToStick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetWantsToWallStick");

	ABogSpider_Character_BP_C_SetWantsToWallStick_Params params;
	params.bWantsToStick = bWantsToStick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_TraceForStickableWall
// (NetReliable, NetRequest, Event, Static, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)

void ABogSpider_Character_BP_C::STATIC_Tick_TraceForStickableWall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_TraceForStickableWall");

	ABogSpider_Character_BP_C_Tick_TraceForStickableWall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetIgnoreWebHitRadius
// ()
// Parameters:
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::GetIgnoreWebHitRadius(float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetIgnoreWebHitRadius");

	ABogSpider_Character_BP_C_GetIgnoreWebHitRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlueprintAnimNotifyCustomEvent
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::STATIC_BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ABogSpider_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetOverrideCameraInterpSpeed
// ()
// Parameters:
// float*                         DefaultTPVCameraSpeedInterpolationMultiplier (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DefaultTPVOffsetInterpSpeed    (Parm, ZeroConstructor, IsPlainOldData)
// float                          TPVCameraSpeedInterpolationMultiplier (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TPVOffsetInterpSpeed           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetOverrideCameraInterpSpeed");

	ABogSpider_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params params;
	params.DefaultTPVCameraSpeedInterpolationMultiplier = DefaultTPVCameraSpeedInterpolationMultiplier;
	params.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TPVCameraSpeedInterpolationMultiplier != nullptr)
		*TPVCameraSpeedInterpolationMultiplier = params.TPVCameraSpeedInterpolationMultiplier;
	if (TPVOffsetInterpSpeed != nullptr)
		*TPVOffsetInterpSpeed = params.TPVOffsetInterpSpeed;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateForceSkidAnims
// ()

void ABogSpider_Character_BP_C::Tick_UpdateForceSkidAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateForceSkidAnims");

	ABogSpider_Character_BP_C_Tick_UpdateForceSkidAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.WantsToSwing
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::WantsToSwing(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.WantsToSwing");

	ABogSpider_Character_BP_C_WantsToSwing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.HasEnoughStamina
// ()
// Parameters:
// float                          requiredStamina                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::HasEnoughStamina(float requiredStamina, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.HasEnoughStamina");

	ABogSpider_Character_BP_C_HasEnoughStamina_Params params;
	params.requiredStamina = requiredStamina;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderStamina
// ()

void ABogSpider_Character_BP_C::Tick_UpdateSpiderStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderStamina");

	ABogSpider_Character_BP_C_Tick_UpdateSpiderStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoGrapplePullJump
// (Exec, Event, Static, NetMulticast, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, Const)

void ABogSpider_Character_BP_C::STATIC_DoGrapplePullJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoGrapplePullJump");

	ABogSpider_Character_BP_C_DoGrapplePullJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetRiderUnboardDirection
// ()
// Parameters:
// class APrimalCharacter**       RidingCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABogSpider_Character_BP_C::BPGetRiderUnboardDirection(class APrimalCharacter** RidingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetRiderUnboardDirection");

	ABogSpider_Character_BP_C_BPGetRiderUnboardDirection_Params params;
	params.RidingCharacter = RidingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ToggleTallModeState
// ()

void ABogSpider_Character_BP_C::ToggleTallModeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ToggleTallModeState");

	ABogSpider_Character_BP_C_ToggleTallModeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateGrappleState
// ()

void ABogSpider_Character_BP_C::Tick_UpdateGrappleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateGrappleState");

	ABogSpider_Character_BP_C_Tick_UpdateGrappleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsAirBraking_Pure
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::IsAirBraking_Pure(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsAirBraking_Pure");

	ABogSpider_Character_BP_C_IsAirBraking_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnRiderMountNotify
// ()
// Parameters:
// class APrimalCharacter*        RiderRef                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsRiding                      (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::OnRiderMountNotify(class APrimalCharacter* RiderRef, bool bIsRiding)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnRiderMountNotify");

	ABogSpider_Character_BP_C_OnRiderMountNotify_Params params;
	params.RiderRef = RiderRef;
	params.bIsRiding = bIsRiding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.AllowPlayMontage
// (NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABogSpider_Character_BP_C::AllowPlayMontage(class UAnimMontage** AnimMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.AllowPlayMontage");

	ABogSpider_Character_BP_C_AllowPlayMontage_Params params;
	params.AnimMontage = AnimMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanEnsnare
// ()
// Parameters:
// bool                           bIsForStart                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CanEnsnare(bool bIsForStart, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanEnsnare");

	ABogSpider_Character_BP_C_CanEnsnare_Params params;
	params.bIsForStart = bIsForStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.TickUpdateEnsnaredChar
// ()

void ABogSpider_Character_BP_C::TickUpdateEnsnaredChar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.TickUpdateEnsnaredChar");

	ABogSpider_Character_BP_C_TickUpdateEnsnaredChar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_StuckToWall
// (Exec, Event, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)

void ABogSpider_Character_BP_C::STATIC_Tick_StuckToWall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_StuckToWall");

	ABogSpider_Character_BP_C_Tick_StuckToWall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABogSpider_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlueprintCanAttack");

	ABogSpider_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsHangingFromWeb
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::IsHangingFromWeb(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsHangingFromWeb");

	ABogSpider_Character_BP_C_IsHangingFromWeb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnStickToWallHit
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ABogSpider_Character_BP_C::OnStickToWallHit(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnStickToWallHit");

	ABogSpider_Character_BP_C_OnStickToWallHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanStickToWall
// ()
// Parameters:
// bool                           bNotifyOfInsufficientStamina   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnorePostJumpCooldown        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CanStickToWall(bool bNotifyOfInsufficientStamina, bool bIgnorePostJumpCooldown, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanStickToWall");

	ABogSpider_Character_BP_C_CanStickToWall_Params params;
	params.bNotifyOfInsufficientStamina = bNotifyOfInsufficientStamina;
	params.bIgnorePostJumpCooldown = bIgnorePostJumpCooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveHit
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ABogSpider_Character_BP_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveHit");

	ABogSpider_Character_BP_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABogSpider_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlueprintCanRiderAttack");

	ABogSpider_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryManualWebDetach
// ()
// Parameters:
// bool                           bDetachLeft                    (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::TryManualWebDetach(bool bDetachLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryManualWebDetach");

	ABogSpider_Character_BP_C_TryManualWebDetach_Params params;
	params.bDetachLeft = bDetachLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.PlaySpiderCameraShake
// ()
// Parameters:
// class UClass*                  CameraShakeClass               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ShakeScale                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ShakeSpeed                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bScaleShakeWithVelocity        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ShakeBaseVelocity              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowReplication              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ShakeScaleClamps               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ShakeSpeedClamps               (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::PlaySpiderCameraShake(class UClass* CameraShakeClass, float ShakeScale, float ShakeSpeed, bool bScaleShakeWithVelocity, float ShakeBaseVelocity, bool bAllowReplication, const struct FVector2D& ShakeScaleClamps, const struct FVector2D& ShakeSpeedClamps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.PlaySpiderCameraShake");

	ABogSpider_Character_BP_C_PlaySpiderCameraShake_Params params;
	params.CameraShakeClass = CameraShakeClass;
	params.ShakeScale = ShakeScale;
	params.ShakeSpeed = ShakeSpeed;
	params.bScaleShakeWithVelocity = bScaleShakeWithVelocity;
	params.ShakeBaseVelocity = ShakeBaseVelocity;
	params.bAllowReplication = bAllowReplication;
	params.ShakeScaleClamps = ShakeScaleClamps;
	params.ShakeSpeedClamps = ShakeSpeedClamps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateShowCrosshair
// ()

void ABogSpider_Character_BP_C::Tick_UpdateShowCrosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateShowCrosshair");

	ABogSpider_Character_BP_C_Tick_UpdateShowCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWaterWalkingSurfaceStateChanged
// ()
// Parameters:
// bool                           NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::OnWaterWalkingSurfaceStateChanged(bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWaterWalkingSurfaceStateChanged");

	ABogSpider_Character_BP_C_OnWaterWalkingSurfaceStateChanged_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_CheckForWalkingOnWaterSurface
// ()

void ABogSpider_Character_BP_C::Tick_CheckForWalkingOnWaterSurface()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_CheckForWalkingOnWaterSurface");

	ABogSpider_Character_BP_C_Tick_CheckForWalkingOnWaterSurface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateWaterWalkingState
// ()
// Parameters:
// bool                           NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceUpdate                   (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::UpdateWaterWalkingState(bool NewState, bool bForceUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateWaterWalkingState");

	ABogSpider_Character_BP_C_UpdateWaterWalkingState_Params params;
	params.NewState = NewState;
	params.bForceUpdate = bForceUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetCurrentJumpMontage
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::GetCurrentJumpMontage(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetCurrentJumpMontage");

	ABogSpider_Character_BP_C_GetCurrentJumpMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnStartJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABogSpider_Character_BP_C::BPOnStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnStartJump");

	ABogSpider_Character_BP_C_BPOnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderTargetTransform
// ()

void ABogSpider_Character_BP_C::Tick_UpdateSpiderTargetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderTargetTransform");

	ABogSpider_Character_BP_C_Tick_UpdateSpiderTargetTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWalkingOnWaterSurface
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::IsWalkingOnWaterSurface(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWalkingOnWaterSurface");

	ABogSpider_Character_BP_C_IsWalkingOnWaterSurface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateOptimalWebHitDist
// ()

void ABogSpider_Character_BP_C::Tick_UpdateOptimalWebHitDist()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateOptimalWebHitDist");

	ABogSpider_Character_BP_C_Tick_UpdateOptimalWebHitDist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetWebTraceHitValue
// ()
// Parameters:
// struct FHitResult              forWebTraceHit                 (Parm)
// bool                           bDebug                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          hitValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::GetWebTraceHitValue(const struct FHitResult& forWebTraceHit, bool bDebug, float* hitValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetWebTraceHitValue");

	ABogSpider_Character_BP_C_GetWebTraceHitValue_Params params;
	params.forWebTraceHit = forWebTraceHit;
	params.bDebug = bDebug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hitValue != nullptr)
		*hitValue = params.hitValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_CheckForTallMode
// ()

void ABogSpider_Character_BP_C::Tick_CheckForTallMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_CheckForTallMode");

	ABogSpider_Character_BP_C_Tick_CheckForTallMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ShouldTallMode
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::ShouldTallMode(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ShouldTallMode");

	ABogSpider_Character_BP_C_ShouldTallMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.RiderHasWeaponEquipped
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::RiderHasWeaponEquipped(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.RiderHasWeaponEquipped");

	ABogSpider_Character_BP_C_RiderHasWeaponEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnTakeOff
// ()

void ABogSpider_Character_BP_C::OnTakeOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnTakeOff");

	ABogSpider_Character_BP_C_OnTakeOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.WebTrace
// (NetRequest, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// struct FVector                 TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           confirmTraceHits               (Parm, ZeroConstructor, IsPlainOldData)
// float                          updateAimedCharsRadus          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowHitPullableChars         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           foundHit                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              webHit                         (Parm, OutParm)
// float                          webHitValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::WebTrace(const struct FVector& TraceStart, const struct FVector& TraceEnd, bool confirmTraceHits, float updateAimedCharsRadus, bool bAllowHitPullableChars, bool* foundHit, struct FHitResult* webHit, float* webHitValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.WebTrace");

	ABogSpider_Character_BP_C_WebTrace_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.confirmTraceHits = confirmTraceHits;
	params.updateAimedCharsRadus = updateAimedCharsRadus;
	params.bAllowHitPullableChars = bAllowHitPullableChars;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (foundHit != nullptr)
		*foundHit = params.foundHit;
	if (webHit != nullptr)
		*webHit = params.webHit;
	if (webHitValue != nullptr)
		*webHitValue = params.webHitValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.TraceForBioGrappleTargetInLookDir
// (NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              snarableCharHit                (Parm, OutParm)

void ABogSpider_Character_BP_C::STATIC_TraceForBioGrappleTargetInLookDir(bool* Result, struct FHitResult* snarableCharHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.TraceForBioGrappleTargetInLookDir");

	ABogSpider_Character_BP_C_TraceForBioGrappleTargetInLookDir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (snarableCharHit != nullptr)
		*snarableCharHit = params.snarableCharHit;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPCharacterSleeped
// ()

void ABogSpider_Character_BP_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPCharacterSleeped");

	ABogSpider_Character_BP_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OnSetDeath
// ()

void ABogSpider_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OnSetDeath");

	ABogSpider_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateRotateToControlRotation
// ()

void ABogSpider_Character_BP_C::UpdateRotateToControlRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateRotateToControlRotation");

	ABogSpider_Character_BP_C_UpdateRotateToControlRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanJumpInternal
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABogSpider_Character_BP_C::CanJumpInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanJumpInternal");

	ABogSpider_Character_BP_C_CanJumpInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveTick
// (Exec, Native, Event, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveTick");

	ABogSpider_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderTargetRotation
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)

void ABogSpider_Character_BP_C::STATIC_Tick_UpdateSpiderTargetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderTargetRotation");

	ABogSpider_Character_BP_C_Tick_UpdateSpiderTargetRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnGrappleBuffStateChanged
// ()
// Parameters:
// TEnumAsByte<EGrappleState>     NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::OnGrappleBuffStateChanged(TEnumAsByte<EGrappleState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnGrappleBuffStateChanged");

	ABogSpider_Character_BP_C_OnGrappleBuffStateChanged_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterpSpiderMesh
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::InterpSpiderMesh(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterpSpiderMesh");

	ABogSpider_Character_BP_C_InterpSpiderMesh_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SoftSetSpiderWorldLocation
// (NetReliable, NetResponse, MulticastDelegate, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// struct FVector                 NewWorldLocation               (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::SoftSetSpiderWorldLocation(const struct FVector& NewWorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SoftSetSpiderWorldLocation");

	ABogSpider_Character_BP_C_SoftSetSpiderWorldLocation_Params params;
	params.NewWorldLocation = NewWorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SoftSetSpiderWorldRotation
// ()
// Parameters:
// struct FRotator                newWorldRotation               (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::SoftSetSpiderWorldRotation(const struct FRotator& newWorldRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SoftSetSpiderWorldRotation");

	ABogSpider_Character_BP_C_SoftSetSpiderWorldRotation_Params params;
	params.newWorldRotation = newWorldRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnMovementModeChangedNotify");

	ABogSpider_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetClosestLocationToScreenCenter
// ()
// Parameters:
// struct FVector                 LocationA                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocationB                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                WithViewRot                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           A                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::GetClosestLocationToScreenCenter(const struct FVector& LocationA, const struct FVector& LocationB, const struct FRotator& WithViewRot, bool* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetClosestLocationToScreenCenter");

	ABogSpider_Character_BP_C_GetClosestLocationToScreenCenter_Params params;
	params.LocationA = LocationA;
	params.LocationB = LocationB;
	params.WithViewRot = WithViewRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsValidStickToWallHit
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)
// bool                           bPreventConfirmTraces          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ValidStickNormal               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::STATIC_IsValidStickToWallHit(bool bPreventConfirmTraces, struct FHitResult* Hit, bool* bIsValid, struct FVector* ValidStickNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsValidStickToWallHit");

	ABogSpider_Character_BP_C_IsValidStickToWallHit_Params params;
	params.bPreventConfirmTraces = bPreventConfirmTraces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
	if (ValidStickNormal != nullptr)
		*ValidStickNormal = params.ValidStickNormal;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABogSpider_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_InterceptMoveForward");

	ABogSpider_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_InterceptMoveRight
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABogSpider_Character_BP_C::BP_InterceptMoveRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_InterceptMoveRight");

	ABogSpider_Character_BP_C_BP_InterceptMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryStickingToWall
// (NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// struct FVector                 AtLocation                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::TryStickingToWall(struct FVector* AtLocation, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryStickingToWall");

	ABogSpider_Character_BP_C_TryStickingToWall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AtLocation != nullptr)
		*AtLocation = params.AtLocation;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryEnsnareChar
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// class APrimalCharacter*        Char                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::STATIC_TryEnsnareChar(class APrimalCharacter* Char, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryEnsnareChar");

	ABogSpider_Character_BP_C_TryEnsnareChar_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.TickBioGrapple
// (NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)

void ABogSpider_Character_BP_C::STATIC_TickBioGrapple()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.TickBioGrapple");

	ABogSpider_Character_BP_C_TickBioGrapple_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPTimerNonDedicated
// ()

void ABogSpider_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPTimerNonDedicated");

	ABogSpider_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Has Webs Attached
// ()
// Parameters:
// int                            RequireNumWebs                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Has_Webs_Attached(int RequireNumWebs, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Has Webs Attached");

	ABogSpider_Character_BP_C_Has_Webs_Attached_Params params;
	params.RequireNumWebs = RequireNumWebs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveBeginPlay
// ()

void ABogSpider_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveBeginPlay");

	ABogSpider_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_SearchForGrapplePoints
// ()

void ABogSpider_Character_BP_C::Tick_SearchForGrapplePoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_SearchForGrapplePoints");

	ABogSpider_Character_BP_C_Tick_SearchForGrapplePoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanJumpDetach
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CanJumpDetach(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanJumpDetach");

	ABogSpider_Character_BP_C_CanJumpDetach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.HasEnoughStaminaPure
// ()
// Parameters:
// float                          requiredStamina                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::HasEnoughStaminaPure(float requiredStamina, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.HasEnoughStaminaPure");

	ABogSpider_Character_BP_C_HasEnoughStaminaPure_Params params;
	params.requiredStamina = requiredStamina;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReduceSpiderStamina
// ()
// Parameters:
// float                          Stamina                        (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::ReduceSpiderStamina(float Stamina)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReduceSpiderStamina");

	ABogSpider_Character_BP_C_ReduceSpiderStamina_Params params;
	params.Stamina = Stamina;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoLifeSteal
// (NetReliable, Native, Static, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// class APrimalCharacter*        FromChar                       (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::STATIC_DoLifeSteal(class APrimalCharacter* FromChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoLifeSteal");

	ABogSpider_Character_BP_C_DoLifeSteal_Params params;
	params.FromChar = FromChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPTimerServer
// ()

void ABogSpider_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPTimerServer");

	ABogSpider_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderCamera
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Tick_UpdateSpiderCamera(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderCamera");

	ABogSpider_Character_BP_C_Tick_UpdateSpiderCamera_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetGrappledBuffClassOverride
// ()
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ABogSpider_Character_BP_C::GetGrappledBuffClassOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetGrappledBuffClassOverride");

	ABogSpider_Character_BP_C_GetGrappledBuffClassOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateGrappledVars
// (Event, NetMulticast, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)

void ABogSpider_Character_BP_C::UpdateGrappledVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateGrappledVars");

	ABogSpider_Character_BP_C_UpdateGrappledVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPNotifyClearRider");

	ABogSpider_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPNotifySetRider");

	ABogSpider_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPModifyFOV
// ()
// Parameters:
// float*                         FOVIn                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABogSpider_Character_BP_C::BPModifyFOV(float* FOVIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPModifyFOV");

	ABogSpider_Character_BP_C_BPModifyFOV_Params params;
	params.FOVIn = FOVIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWeb Trace Hit Valid
// (NetReliable, Static, NetMulticast, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// struct FHitResult              ForHit                         (Parm)
// bool                           bAllowHitPullableChars         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bDidHitPullableChar            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::STATIC_IsWeb_Trace_Hit_Valid(const struct FHitResult& ForHit, bool bAllowHitPullableChars, bool* Result, bool* bDidHitPullableChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWeb Trace Hit Valid");

	ABogSpider_Character_BP_C_IsWeb_Trace_Hit_Valid_Params params;
	params.ForHit = ForHit;
	params.bAllowHitPullableChars = bAllowHitPullableChars;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (bDidHitPullableChar != nullptr)
		*bDidHitPullableChar = params.bDidHitPullableChar;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.WebShootybang
// (Exec, Native, NetResponse, Static, NetMulticast, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// bool                           shootOne                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 hitA                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 hitB                           (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::STATIC_WebShootybang(bool shootOne, const struct FVector& hitA, const struct FVector& hitB)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.WebShootybang");

	ABogSpider_Character_BP_C_WebShootybang_Params params;
	params.shootOne = shootOne;
	params.hitA = hitA;
	params.hitB = hitB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ConfirmWebTraceHit
// (Static, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdateAimedChars              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowHitPullableChars         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           confirmed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              confirmedHit                   (Parm, OutParm)

void ABogSpider_Character_BP_C::STATIC_ConfirmWebTraceHit(const struct FVector& HitLocation, bool bUpdateAimedChars, bool bAllowHitPullableChars, bool* confirmed, struct FHitResult* confirmedHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ConfirmWebTraceHit");

	ABogSpider_Character_BP_C_ConfirmWebTraceHit_Params params;
	params.HitLocation = HitLocation;
	params.bUpdateAimedChars = bUpdateAimedChars;
	params.bAllowHitPullableChars = bAllowHitPullableChars;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (confirmed != nullptr)
		*confirmed = params.confirmed;
	if (confirmedHit != nullptr)
		*confirmedHit = params.confirmedHit;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ProcessWebTraceHits
// (NetRequest, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// struct FRotator                WithViewRotation               (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              centerHit                      (Parm)
// struct FHitResult              LeftHit                        (Parm)
// struct FHitResult              RightHit                       (Parm)
// struct FHitResult              bestHit_Single                 (Parm, OutParm)
// struct FHitResult              bestHit_Left                   (Parm, OutParm)
// struct FHitResult              bestHit_Right                  (Parm, OutParm)

void ABogSpider_Character_BP_C::STATIC_ProcessWebTraceHits(const struct FRotator& WithViewRotation, const struct FHitResult& centerHit, const struct FHitResult& LeftHit, const struct FHitResult& RightHit, struct FHitResult* bestHit_Single, struct FHitResult* bestHit_Left, struct FHitResult* bestHit_Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ProcessWebTraceHits");

	ABogSpider_Character_BP_C_ProcessWebTraceHits_Params params;
	params.WithViewRotation = WithViewRotation;
	params.centerHit = centerHit;
	params.LeftHit = LeftHit;
	params.RightHit = RightHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bestHit_Single != nullptr)
		*bestHit_Single = params.bestHit_Single;
	if (bestHit_Left != nullptr)
		*bestHit_Left = params.bestHit_Left;
	if (bestHit_Right != nullptr)
		*bestHit_Right = params.bestHit_Right;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SearchForAllGrapplePoints
// (NetRequest, Exec, Native, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// struct FRotator                WithViewRot                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseCachedAnchorHits           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundAny                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              foundHit_Center                (Parm, OutParm)
// struct FHitResult              foundHit_Left                  (Parm, OutParm)
// struct FHitResult              foundHit_Right                 (Parm, OutParm)

void ABogSpider_Character_BP_C::STATIC_SearchForAllGrapplePoints(const struct FRotator& WithViewRot, bool bUseCachedAnchorHits, bool* bFoundAny, struct FHitResult* foundHit_Center, struct FHitResult* foundHit_Left, struct FHitResult* foundHit_Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SearchForAllGrapplePoints");

	ABogSpider_Character_BP_C_SearchForAllGrapplePoints_Params params;
	params.WithViewRot = WithViewRot;
	params.bUseCachedAnchorHits = bUseCachedAnchorHits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundAny != nullptr)
		*bFoundAny = params.bFoundAny;
	if (foundHit_Center != nullptr)
		*foundHit_Center = params.foundHit_Center;
	if (foundHit_Left != nullptr)
		*foundHit_Left = params.foundHit_Left;
	if (foundHit_Right != nullptr)
		*foundHit_Right = params.foundHit_Right;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.HasWebsAttached_Pure
// ()
// Parameters:
// int                            RequireNumWebs                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::HasWebsAttached_Pure(int RequireNumWebs, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.HasWebsAttached_Pure");

	ABogSpider_Character_BP_C_HasWebsAttached_Pure_Params params;
	params.RequireNumWebs = RequireNumWebs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderGrappleState
// ()
// Parameters:
// TEnumAsByte<EGrappleState>     NewGrappleState                (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::SetSpiderGrappleState(TEnumAsByte<EGrappleState> NewGrappleState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderGrappleState");

	ABogSpider_Character_BP_C_SetSpiderGrappleState_Params params;
	params.NewGrappleState = NewGrappleState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.AutoSetDesiredGrappleState
// ()

void ABogSpider_Character_BP_C::AutoSetDesiredGrappleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.AutoSetDesiredGrappleState");

	ABogSpider_Character_BP_C_AutoSetDesiredGrappleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterceptInputEvent
// ()
// Parameters:
// class FString*                 InputName                      (Parm, ZeroConstructor)

void ABogSpider_Character_BP_C::InterceptInputEvent(class FString* InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterceptInputEvent");

	ABogSpider_Character_BP_C_InterceptInputEvent_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPPreventFallDamage
// ()
// Parameters:
// struct FHitResult              HitResult                      (Parm, OutParm, ReferenceParm)
// float*                         FallDamageAmount               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABogSpider_Character_BP_C::BPPreventFallDamage(float* FallDamageAmount, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPPreventFallDamage");

	ABogSpider_Character_BP_C_BPPreventFallDamage_Params params;
	params.FallDamageAmount = FallDamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;

	return params.ReturnValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoJumpDetach
// (NetRequest, Exec, Native, Static, NetMulticast, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)

void ABogSpider_Character_BP_C::STATIC_DoJumpDetach()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoJumpDetach");

	ABogSpider_Character_BP_C_DoJumpDetach_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateGrappleBuffRef
// ()
// Parameters:
// bool                           bAddIfNotFound                 (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::UpdateGrappleBuffRef(bool bAddIfNotFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateGrappleBuffRef");

	ABogSpider_Character_BP_C_UpdateGrappleBuffRef_Params params;
	params.bAddIfNotFound = bAddIfNotFound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DetachBothWebs
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Protected, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// bool                           bIsJumpDetach                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreventAnim                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           detachedAny                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::STATIC_DetachBothWebs(bool bIsJumpDetach, bool bPreventAnim, bool* detachedAny)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DetachBothWebs");

	ABogSpider_Character_BP_C_DetachBothWebs_Params params;
	params.bIsJumpDetach = bIsJumpDetach;
	params.bPreventAnim = bPreventAnim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (detachedAny != nullptr)
		*detachedAny = params.detachedAny;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DetachWeb
// ()
// Parameters:
// bool                           bLeft                          (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::DetachWeb(bool bLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DetachWeb");

	ABogSpider_Character_BP_C_DetachWeb_Params params;
	params.bLeft = bLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetClosestSideToLocation
// ()
// Parameters:
// struct FVector                 ToLoc                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLeft                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::GetClosestSideToLocation(const struct FVector& ToLoc, bool* bLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetClosestSideToLocation");

	ABogSpider_Character_BP_C_GetClosestSideToLocation_Params params;
	params.ToLoc = ToLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLeft != nullptr)
		*bLeft = params.bLeft;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanDoWebTraces
// ()
// Parameters:
// bool                           bRequireStamina                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNotifyOfInsufficientStamina   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CanDoWebTraces(bool bRequireStamina, bool bNotifyOfInsufficientStamina, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanDoWebTraces");

	ABogSpider_Character_BP_C_CanDoWebTraces_Params params;
	params.bRequireStamina = bRequireStamina;
	params.bNotifyOfInsufficientStamina = bNotifyOfInsufficientStamina;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateGrapplePointPreviews
// (NetReliable, Native, Static, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::STATIC_Tick_UpdateGrapplePointPreviews(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateGrapplePointPreviews");

	ABogSpider_Character_BP_C_Tick_UpdateGrapplePointPreviews_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebGrappleTether
// (NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// struct FHitResult              FromHit                        (Parm)
// bool                           bLeft                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreventNetSync                (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewTetherIndex                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::CreateWebGrappleTether(const struct FHitResult& FromHit, bool bLeft, bool bPreventNetSync, int* NewTetherIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebGrappleTether");

	ABogSpider_Character_BP_C_CreateWebGrappleTether_Params params;
	params.FromHit = FromHit;
	params.bLeft = bLeft;
	params.bPreventNetSync = bPreventNetSync;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewTetherIndex != nullptr)
		*NewTetherIndex = params.NewTetherIndex;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SearchInDirForValidGrapplePoint
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// struct FRotator                WithViewRot                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          traceDir                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWantsCenter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundAny                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              retHit                         (Parm, OutParm)

void ABogSpider_Character_BP_C::STATIC_SearchInDirForValidGrapplePoint(const struct FRotator& WithViewRot, float traceDir, bool bWantsCenter, bool* bFoundAny, struct FHitResult* retHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SearchInDirForValidGrapplePoint");

	ABogSpider_Character_BP_C_SearchInDirForValidGrapplePoint_Params params;
	params.WithViewRot = WithViewRot;
	params.traceDir = traceDir;
	params.bWantsCenter = bWantsCenter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundAny != nullptr)
		*bFoundAny = params.bFoundAny;
	if (retHit != nullptr)
		*retHit = params.retHit;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.TraceForWebHit
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, BlueprintCallable, Const)
// Parameters:
// struct FRotator                WithViewRot                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCenterTrace                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              foundHit                       (Parm, OutParm)
// float                          foundHitValue                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::STATIC_TraceForWebHit(const struct FRotator& WithViewRot, bool bCenterTrace, bool* bSuccess, struct FHitResult* foundHit, float* foundHitValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.TraceForWebHit");

	ABogSpider_Character_BP_C_TraceForWebHit_Params params;
	params.WithViewRot = WithViewRot;
	params.bCenterTrace = bCenterTrace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (foundHit != nullptr)
		*foundHit = params.foundHit;
	if (foundHitValue != nullptr)
		*foundHitValue = params.foundHitValue;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UserConstructionScript
// ()

void ABogSpider_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UserConstructionScript");

	ABogSpider_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision__FinishedFunc
// ()

void ABogSpider_Character_BP_C::BlendSpiderVision__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision__FinishedFunc");

	ABogSpider_Character_BP_C_BlendSpiderVision__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision__UpdateFunc
// ()

void ABogSpider_Character_BP_C::BlendSpiderVision__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision__UpdateFunc");

	ABogSpider_Character_BP_C_BlendSpiderVision__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_DetachBothWebs
// ()
// Parameters:
// bool                           bIsJumpDetach                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreventAnim                   (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Server_DetachBothWebs(bool bIsJumpDetach, bool bPreventAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_DetachBothWebs");

	ABogSpider_Character_BP_C_Server_DetachBothWebs_Params params;
	params.bIsJumpDetach = bIsJumpDetach;
	params.bPreventAnim = bPreventAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_WebShootybang
// ()
// Parameters:
// struct FVector                 HitRelLoc_A                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor_A                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitRelLoc_B                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor_B                     (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Server_WebShootybang(const struct FVector& HitRelLoc_A, class AActor* HitActor_A, const struct FVector& HitRelLoc_B, class AActor* HitActor_B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_WebShootybang");

	ABogSpider_Character_BP_C_Server_WebShootybang_Params params;
	params.HitRelLoc_A = HitRelLoc_A;
	params.HitActor_A = HitActor_A;
	params.HitRelLoc_B = HitRelLoc_B;
	params.HitActor_B = HitActor_B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_WebShootybang_One
// ()
// Parameters:
// struct FVector                 HitRelLoc                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Server_WebShootybang_One(const struct FVector& HitRelLoc, class AActor* HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_WebShootybang_One");

	ABogSpider_Character_BP_C_Server_WebShootybang_One_Params params;
	params.HitRelLoc = HitRelLoc;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_SetWalkOnWaterState
// ()
// Parameters:
// bool                           bNewState                      (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Multi_SetWalkOnWaterState(bool bNewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_SetWalkOnWaterState");

	ABogSpider_Character_BP_C_Multi_SetWalkOnWaterState_Params params;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SetWalkOnWaterState
// ()
// Parameters:
// bool                           bNewState                      (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Server_SetWalkOnWaterState(bool bNewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SetWalkOnWaterState");

	ABogSpider_Character_BP_C_Server_SetWalkOnWaterState_Params params;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_TryStickingToWall
// ()
// Parameters:
// struct FVector                 AtLocation                     (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Server_TryStickingToWall(const struct FVector& AtLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_TryStickingToWall");

	ABogSpider_Character_BP_C_Server_TryStickingToWall_Params params;
	params.AtLocation = AtLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_ReleaseEnsnaredChar
// ()

void ABogSpider_Character_BP_C::Server_ReleaseEnsnaredChar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_ReleaseEnsnaredChar");

	ABogSpider_Character_BP_C_Server_ReleaseEnsnaredChar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_UnstickFromWall
// ()

void ABogSpider_Character_BP_C::Server_UnstickFromWall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_UnstickFromWall");

	ABogSpider_Character_BP_C_Server_UnstickFromWall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_WebShootybang_BioGrapple
// ()
// Parameters:
// class AActor*                  EnsnaredActor                  (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Server_WebShootybang_BioGrapple(class AActor* EnsnaredActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_WebShootybang_BioGrapple");

	ABogSpider_Character_BP_C_Server_WebShootybang_BioGrapple_Params params;
	params.EnsnaredActor = EnsnaredActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_ToggleTallModeState
// ()

void ABogSpider_Character_BP_C::Server_ToggleTallModeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_ToggleTallModeState");

	ABogSpider_Character_BP_C_Server_ToggleTallModeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_ToggleTallModeState
// ()

void ABogSpider_Character_BP_C::Multi_ToggleTallModeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_ToggleTallModeState");

	ABogSpider_Character_BP_C_Multi_ToggleTallModeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SpiderJump
// ()

void ABogSpider_Character_BP_C::Server_SpiderJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SpiderJump");

	ABogSpider_Character_BP_C_Server_SpiderJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoSpiderJump
// ()

void ABogSpider_Character_BP_C::DoSpiderJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoSpiderJump");

	ABogSpider_Character_BP_C_DoSpiderJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_SpiderJump
// ()

void ABogSpider_Character_BP_C::Multi_SpiderJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_SpiderJump");

	ABogSpider_Character_BP_C_Multi_SpiderJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnWaterWalkingSurfaceStateChanged
// ()
// Parameters:
// bool                           NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Multi_OnWaterWalkingSurfaceStateChanged(bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnWaterWalkingSurfaceStateChanged");

	ABogSpider_Character_BP_C_Multi_OnWaterWalkingSurfaceStateChanged_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_DetachWeb
// ()
// Parameters:
// bool                           bLeft                          (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Server_DetachWeb(bool bLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_DetachWeb");

	ABogSpider_Character_BP_C_Server_DetachWeb_Params params;
	params.bLeft = bLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnDoubleDetach
// ()
// Parameters:
// bool                           bJumpDetach                    (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Multi_OnDoubleDetach(bool bJumpDetach)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnDoubleDetach");

	ABogSpider_Character_BP_C_Multi_OnDoubleDetach_Params params;
	params.bJumpDetach = bJumpDetach;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.FinishedReleasingEnsnaredChar
// ()

void ABogSpider_Character_BP_C::FinishedReleasingEnsnaredChar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.FinishedReleasingEnsnaredChar");

	ABogSpider_Character_BP_C_FinishedReleasingEnsnaredChar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ToggleTallModeAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::ToggleTallModeAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ToggleTallModeAfterDelay");

	ABogSpider_Character_BP_C_ToggleTallModeAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_DoGrapplePullJump
// ()

void ABogSpider_Character_BP_C::Multi_DoGrapplePullJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_DoGrapplePullJump");

	ABogSpider_Character_BP_C_Multi_DoGrapplePullJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Client_OnShootWeb
// ()

void ABogSpider_Character_BP_C::Client_OnShootWeb()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Client_OnShootWeb");

	ABogSpider_Character_BP_C_Client_OnShootWeb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncWantsToWallStick
// ()
// Parameters:
// bool                           bWantsToStick                  (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Server_SyncWantsToWallStick(bool bWantsToStick)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncWantsToWallStick");

	ABogSpider_Character_BP_C_Server_SyncWantsToWallStick_Params params;
	params.bWantsToStick = bWantsToStick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.NextTick_SpawnCosmeticActors
// ()

void ABogSpider_Character_BP_C::NextTick_SpawnCosmeticActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.NextTick_SpawnCosmeticActors");

	ABogSpider_Character_BP_C_NextTick_SpawnCosmeticActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncInputs_OnInputChange
// ()
// Parameters:
// int                            SyncInputBitMask               (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Server_SyncInputs_OnInputChange(int SyncInputBitMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncInputs_OnInputChange");

	ABogSpider_Character_BP_C_Server_SyncInputs_OnInputChange_Params params;
	params.SyncInputBitMask = SyncInputBitMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncInputs_Heartbeat
// ()
// Parameters:
// int                            SyncInputBitMask               (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Server_SyncInputs_Heartbeat(int SyncInputBitMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncInputs_Heartbeat");

	ABogSpider_Character_BP_C_Server_SyncInputs_Heartbeat_Params params;
	params.SyncInputBitMask = SyncInputBitMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetWebSprintToggle
// ()
// Parameters:
// bool                           NewToggle                      (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::SetWebSprintToggle(bool NewToggle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetWebSprintToggle");

	ABogSpider_Character_BP_C_SetWebSprintToggle_Params params;
	params.NewToggle = NewToggle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetControlRot
// ()

void ABogSpider_Character_BP_C::ResetControlRot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetControlRot");

	ABogSpider_Character_BP_C_ResetControlRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_SetActorRotation
// ()
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseSoftSet                    (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Multi_SetActorRotation(const struct FRotator& NewRotation, bool bUseSoftSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_SetActorRotation");

	ABogSpider_Character_BP_C_Multi_SetActorRotation_Params params;
	params.NewRotation = NewRotation;
	params.bUseSoftSet = bUseSoftSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Client_OnJumpDetach
// ()

void ABogSpider_Character_BP_C::Client_OnJumpDetach()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Client_OnJumpDetach");

	ABogSpider_Character_BP_C_Client_OnJumpDetach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Client_DamageBrokeWebs
// ()

void ABogSpider_Character_BP_C::Client_DamageBrokeWebs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Client_DamageBrokeWebs");

	ABogSpider_Character_BP_C_Client_DamageBrokeWebs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.UnstickFromWallAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::UnstickFromWallAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.UnstickFromWallAfterDelay");

	ABogSpider_Character_BP_C_UnstickFromWallAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SetImpendingLand
// ()
// Parameters:
// bool                           bNewVal                        (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Server_SetImpendingLand(bool bNewVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SetImpendingLand");

	ABogSpider_Character_BP_C_Server_SetImpendingLand_Params params;
	params.bNewVal = bNewVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnSetEnsnaredChar
// ()

void ABogSpider_Character_BP_C::Multi_OnSetEnsnaredChar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnSetEnsnaredChar");

	ABogSpider_Character_BP_C_Multi_OnSetEnsnaredChar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnWebTethersCreated
// ()
// Parameters:
// struct FHitResult              WithTetherHit_Left             (Parm)
// struct FHitResult              WithTetherHit_Right            (Parm)

void ABogSpider_Character_BP_C::Multi_OnWebTethersCreated(const struct FHitResult& WithTetherHit_Left, const struct FHitResult& WithTetherHit_Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnWebTethersCreated");

	ABogSpider_Character_BP_C_Multi_OnWebTethersCreated_Params params;
	params.WithTetherHit_Left = WithTetherHit_Left;
	params.WithTetherHit_Right = WithTetherHit_Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnStartChargeJump
// ()

void ABogSpider_Character_BP_C::Multi_OnStartChargeJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnStartChargeJump");

	ABogSpider_Character_BP_C_Multi_OnStartChargeJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_DoChargeJump
// ()

void ABogSpider_Character_BP_C::Multi_DoChargeJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_DoChargeJump");

	ABogSpider_Character_BP_C_Multi_DoChargeJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_CancelChargeJump
// ()

void ABogSpider_Character_BP_C::Multi_CancelChargeJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_CancelChargeJump");

	ABogSpider_Character_BP_C_Multi_CancelChargeJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnTryWebShootyBang
// ()

void ABogSpider_Character_BP_C::OnTryWebShootyBang()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnTryWebShootyBang");

	ABogSpider_Character_BP_C_OnTryWebShootyBang_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetCreatingWeb
// ()

void ABogSpider_Character_BP_C::ResetCreatingWeb()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetCreatingWeb");

	ABogSpider_Character_BP_C_ResetCreatingWeb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnWebShootybangFailed
// ()

void ABogSpider_Character_BP_C::Multi_OnWebShootybangFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnWebShootybangFailed");

	ABogSpider_Character_BP_C_Multi_OnWebShootybangFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_TryDoAirJump
// ()
// Parameters:
// struct FVector2D               WithMoveInputs                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WithVelocity                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                WithControlRot                 (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Server_TryDoAirJump(const struct FVector2D& WithMoveInputs, const struct FVector& WithVelocity, const struct FRotator& WithControlRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_TryDoAirJump");

	ABogSpider_Character_BP_C_Server_TryDoAirJump_Params params;
	params.WithMoveInputs = WithMoveInputs;
	params.WithVelocity = WithVelocity;
	params.WithControlRot = WithControlRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetCanAirJump
// ()

void ABogSpider_Character_BP_C::ResetCanAirJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetCanAirJump");

	ABogSpider_Character_BP_C_ResetCanAirJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_FireQuickWebs_Single
// ()
// Parameters:
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Server_FireQuickWebs_Single(const struct FVector& HitLocation, class AActor* HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_FireQuickWebs_Single");

	ABogSpider_Character_BP_C_Server_FireQuickWebs_Single_Params params;
	params.HitLocation = HitLocation;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_FireQuickWebs_Both
// ()
// Parameters:
// struct FVector                 HitLocation_A                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor_A                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation_B                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor_B                     (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Server_FireQuickWebs_Both(const struct FVector& HitLocation_A, class AActor* HitActor_A, const struct FVector& HitLocation_B, class AActor* HitActor_B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_FireQuickWebs_Both");

	ABogSpider_Character_BP_C_Server_FireQuickWebs_Both_Params params;
	params.HitLocation_A = HitLocation_A;
	params.HitActor_A = HitActor_A;
	params.HitLocation_B = HitLocation_B;
	params.HitActor_B = HitActor_B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebVisually_Left
// ()

void ABogSpider_Character_BP_C::CreateWebVisually_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebVisually_Left");

	ABogSpider_Character_BP_C_CreateWebVisually_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebVisually_Right
// ()

void ABogSpider_Character_BP_C::CreateWebVisually_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebVisually_Right");

	ABogSpider_Character_BP_C_CreateWebVisually_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BreakWebVisually_Left
// ()

void ABogSpider_Character_BP_C::BreakWebVisually_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BreakWebVisually_Left");

	ABogSpider_Character_BP_C_BreakWebVisually_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BreakWebVisually_Right
// ()

void ABogSpider_Character_BP_C::BreakWebVisually_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BreakWebVisually_Right");

	ABogSpider_Character_BP_C_BreakWebVisually_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncSpiderClimbingInputs
// ()
// Parameters:
// struct FVector2D               Inputs                         (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Server_SyncSpiderClimbingInputs(const struct FVector2D& Inputs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncSpiderClimbingInputs");

	ABogSpider_Character_BP_C_Server_SyncSpiderClimbingInputs_Params params;
	params.Inputs = Inputs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision_Play
// ()

void ABogSpider_Character_BP_C::BlendSpiderVision_Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision_Play");

	ABogSpider_Character_BP_C_BlendSpiderVision_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision_Reverse
// ()

void ABogSpider_Character_BP_C::BlendSpiderVision_Reverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision_Reverse");

	ABogSpider_Character_BP_C_BlendSpiderVision_Reverse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.RefreshWaterWalkState
// ()

void ABogSpider_Character_BP_C::RefreshWaterWalkState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.RefreshWaterWalkState");

	ABogSpider_Character_BP_C_RefreshWaterWalkState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnQuickFireWebs
// ()

void ABogSpider_Character_BP_C::Multi_OnQuickFireWebs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnQuickFireWebs");

	ABogSpider_Character_BP_C_Multi_OnQuickFireWebs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartWebSprintToggle
// ()

void ABogSpider_Character_BP_C::StartWebSprintToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartWebSprintToggle");

	ABogSpider_Character_BP_C_StartWebSprintToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_StartChargeJump
// ()
// Parameters:
// double                         ClientTimestamp                (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Server_StartChargeJump(double ClientTimestamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_StartChargeJump");

	ABogSpider_Character_BP_C_Server_StartChargeJump_Params params;
	params.ClientTimestamp = ClientTimestamp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_DoChargeJump
// ()
// Parameters:
// double                         ClientTimestamp                (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::Server_DoChargeJump(double ClientTimestamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_DoChargeJump");

	ABogSpider_Character_BP_C_Server_DoChargeJump_Params params;
	params.ClientTimestamp = ClientTimestamp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderVisionBlendTime
// ()

void ABogSpider_Character_BP_C::SetSpiderVisionBlendTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderVisionBlendTime");

	ABogSpider_Character_BP_C_SetSpiderVisionBlendTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetSpiderTamingVars
// ()

void ABogSpider_Character_BP_C::ResetSpiderTamingVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetSpiderTamingVars");

	ABogSpider_Character_BP_C_ResetSpiderTamingVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetTamerAsRider
// ()

void ABogSpider_Character_BP_C::SetTamerAsRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetTamerAsRider");

	ABogSpider_Character_BP_C_SetTamerAsRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BogSpider_Character_BP.BogSpider_Character_BP_C.ExecuteUbergraph_BogSpider_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABogSpider_Character_BP_C::ExecuteUbergraph_BogSpider_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpider_Character_BP.BogSpider_Character_BP_C.ExecuteUbergraph_BogSpider_Character_BP");

	ABogSpider_Character_BP_C_ExecuteUbergraph_BogSpider_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

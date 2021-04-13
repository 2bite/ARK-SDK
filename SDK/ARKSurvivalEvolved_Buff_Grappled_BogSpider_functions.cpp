// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Grappled_BogSpider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanUpdateTetherLength
// ()
// Parameters:
// struct FGrappleTether          ForTether                      (Parm, OutParm, ReferenceParm)
// float*                         WithLength                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Grappled_BogSpider_C::CanUpdateTetherLength(float* WithLength, struct FGrappleTether* ForTether)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanUpdateTetherLength");

	ABuff_Grappled_BogSpider_C_CanUpdateTetherLength_Params params;
	params.WithLength = WithLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForTether != nullptr)
		*ForTether = params.ForTether;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldUseDynamicTetherTension
// ()
// Parameters:
// struct FGrappleTether          ForTether                      (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Grappled_BogSpider_C::ShouldUseDynamicTetherTension(struct FGrappleTether* ForTether)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldUseDynamicTetherTension");

	ABuff_Grappled_BogSpider_C_ShouldUseDynamicTetherTension_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForTether != nullptr)
		*ForTether = params.ForTether;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanDrawSpiderVisionOutlines
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::CanDrawSpiderVisionOutlines(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanDrawSpiderVisionOutlines");

	ABuff_Grappled_BogSpider_C_CanDrawSpiderVisionOutlines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.DisplayGrappleSystemHudNotification
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 FromActor                      (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NotificationType               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NotificationID                 (Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 ReasonString                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Grappled_BogSpider_C::DisplayGrappleSystemHudNotification(class AShooterPlayerController** ForPC, class AActor** FromActor, unsigned char* NotificationType, int* NotificationID, class FString* ReasonString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.DisplayGrappleSystemHudNotification");

	ABuff_Grappled_BogSpider_C_DisplayGrappleSystemHudNotification_Params params;
	params.ForPC = ForPC;
	params.FromActor = FromActor;
	params.NotificationType = NotificationType;
	params.NotificationID = NotificationID;
	params.ReasonString = ReasonString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldReturnToIdleGrappleState
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Grappled_BogSpider_C::ShouldReturnToIdleGrappleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldReturnToIdleGrappleState");

	ABuff_Grappled_BogSpider_C_ShouldReturnToIdleGrappleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsOwnerLookingAtAgainstSurface
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Grappled_BogSpider_C::IsOwnerLookingAtAgainstSurface()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsOwnerLookingAtAgainstSurface");

	ABuff_Grappled_BogSpider_C_IsOwnerLookingAtAgainstSurface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanTraceForSwingCollisions
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::CanTraceForSwingCollisions(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanTraceForSwingCollisions");

	ABuff_Grappled_BogSpider_C_CanTraceForSwingCollisions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ResetOwnerClientPositionErrorTolerance
// ()

void ABuff_Grappled_BogSpider_C::ResetOwnerClientPositionErrorTolerance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ResetOwnerClientPositionErrorTolerance");

	ABuff_Grappled_BogSpider_C_ResetOwnerClientPositionErrorTolerance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetPullingSlingshotRatio
// ()
// Parameters:
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::GetPullingSlingshotRatio(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetPullingSlingshotRatio");

	ABuff_Grappled_BogSpider_C_GetPullingSlingshotRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsGrappledCharHardAttached
// ()
// Parameters:
// class APrimalCharacter**       forChar                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Grappled_BogSpider_C::IsGrappledCharHardAttached(class APrimalCharacter** forChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsGrappledCharHardAttached");

	ABuff_Grappled_BogSpider_C_IsGrappledCharHardAttached_Params params;
	params.forChar = forChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleTetherReleaseMaxVelocity
// ()
// Parameters:
// class APrimalCharacter**       ForReleasingChar               (Parm, ZeroConstructor, IsPlainOldData)
// struct FGrappleTether          ForTether                      (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Grappled_BogSpider_C::GetGrappleTetherReleaseMaxVelocity(class APrimalCharacter** ForReleasingChar, struct FGrappleTether* ForTether)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleTetherReleaseMaxVelocity");

	ABuff_Grappled_BogSpider_C_GetGrappleTetherReleaseMaxVelocity_Params params;
	params.ForReleasingChar = ForReleasingChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForTether != nullptr)
		*ForTether = params.ForTether;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetMaxTetherLength
// ()
// Parameters:
// struct FGrappleTether          ForTether                      (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Grappled_BogSpider_C::GetMaxTetherLength(struct FGrappleTether* ForTether)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetMaxTetherLength");

	ABuff_Grappled_BogSpider_C_GetMaxTetherLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForTether != nullptr)
		*ForTether = params.ForTether;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetIdealSwingHeightAboveFloor
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Grappled_BogSpider_C::GetIdealSwingHeightAboveFloor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetIdealSwingHeightAboveFloor");

	ABuff_Grappled_BogSpider_C_GetIdealSwingHeightAboveFloor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanSyncGrappleTetherLengths
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Grappled_BogSpider_C::CanSyncGrappleTetherLengths()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanSyncGrappleTetherLengths");

	ABuff_Grappled_BogSpider_C_CanSyncGrappleTetherLengths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BPOverrideCharacterNewFallVelocity
// (NetRequest, Private, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_Grappled_BogSpider_C::BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BPOverrideCharacterNewFallVelocity");

	ABuff_Grappled_BogSpider_C_BPOverrideCharacterNewFallVelocity_Params params;
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


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnSwingTracePredictedHitFound
// (NetReliable, Native, Event, Private, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 AtHitLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::OnSwingTracePredictedHitFound(const struct FVector& AtHitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnSwingTracePredictedHitFound");

	ABuff_Grappled_BogSpider_C_OnSwingTracePredictedHitFound_Params params;
	params.AtHitLocation = AtHitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanUseWebSlingshot
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::CanUseWebSlingshot(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanUseWebSlingshot");

	ABuff_Grappled_BogSpider_C_CanUseWebSlingshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ResetOwnerVars
// ()

void ABuff_Grappled_BogSpider_C::ResetOwnerVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ResetOwnerVars");

	ABuff_Grappled_BogSpider_C_ResetOwnerVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappledCharDeath
// ()
// Parameters:
// class APrimalCharacter**       DyingChar                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::OnGrappledCharDeath(class APrimalCharacter** DyingChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappledCharDeath");

	ABuff_Grappled_BogSpider_C_OnGrappledCharDeath_Params params;
	params.DyingChar = DyingChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanBeGrappledAgainstSurface
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Grappled_BogSpider_C::CanBeGrappledAgainstSurface()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanBeGrappledAgainstSurface");

	ABuff_Grappled_BogSpider_C_CanBeGrappledAgainstSurface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SetActorComponentsCustomDepthStencilValue
// ()
// Parameters:
// class AActor*                  forActor                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::SetActorComponentsCustomDepthStencilValue(class AActor* forActor, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SetActorComponentsCustomDepthStencilValue");

	ABuff_Grappled_BogSpider_C_SetActorComponentsCustomDepthStencilValue_Params params;
	params.forActor = forActor;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SetActorComponentsRenderCustomDepth
// ()
// Parameters:
// class AActor*                  forActor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRender                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::SetActorComponentsRenderCustomDepth(class AActor* forActor, bool bRender)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SetActorComponentsRenderCustomDepth");

	ABuff_Grappled_BogSpider_C_SetActorComponentsRenderCustomDepth_Params params;
	params.forActor = forActor;
	params.bRender = bRender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UpdateSpiderVisionActorBounds
// ()
// Parameters:
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::UpdateSpiderVisionActorBounds(bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UpdateSpiderVisionActorBounds");

	ABuff_Grappled_BogSpider_C_UpdateSpiderVisionActorBounds_Params params;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SetSpiderVisionEnabled
// ()
// Parameters:
// class APlayerController*       ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::SetSpiderVisionEnabled(class APlayerController* ForController, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SetSpiderVisionEnabled");

	ABuff_Grappled_BogSpider_C_SetSpiderVisionEnabled_Params params;
	params.ForController = ForController;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Tick_CheckForDeactivate
// ()

void ABuff_Grappled_BogSpider_C::Tick_CheckForDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Tick_CheckForDeactivate");

	ABuff_Grappled_BogSpider_C_Tick_CheckForDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BPDeactivated");

	ABuff_Grappled_BogSpider_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UpdateSpiderVisionPostProcess
// ()

void ABuff_Grappled_BogSpider_C::UpdateSpiderVisionPostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UpdateSpiderVisionPostProcess");

	ABuff_Grappled_BogSpider_C_UpdateSpiderVisionPostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanPullChar
// ()
// Parameters:
// class APrimalCharacter**       PullChar                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForStart                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Grappled_BogSpider_C::CanPullChar(class APrimalCharacter** PullChar, bool* bForStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanPullChar");

	ABuff_Grappled_BogSpider_C_CanPullChar_Params params;
	params.PullChar = PullChar;
	params.bForStart = bForStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsPullingBioGrappledChar
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::IsPullingBioGrappledChar(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsPullingBioGrappledChar");

	ABuff_Grappled_BogSpider_C_IsPullingBioGrappledChar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UpdateOwnerMovementSpeed
// ()
// Parameters:
// struct FVector                 WithCharVelocity               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::UpdateOwnerMovementSpeed(struct FVector* WithCharVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UpdateOwnerMovementSpeed");

	ABuff_Grappled_BogSpider_C_UpdateOwnerMovementSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WithCharVelocity != nullptr)
		*WithCharVelocity = params.WithCharVelocity;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleTetherRemoved
// ()
// Parameters:
// struct FGrappleTether          RemovedTether                  (Parm, OutParm, ReferenceParm)

void ABuff_Grappled_BogSpider_C::OnGrappleTetherRemoved(struct FGrappleTether* RemovedTether)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleTetherRemoved");

	ABuff_Grappled_BogSpider_C_OnGrappleTetherRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RemovedTether != nullptr)
		*RemovedTether = params.RemovedTether;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleTetherAdded
// ()
// Parameters:
// struct FGrappleTether          AddedTether                    (Parm, OutParm, ReferenceParm)

void ABuff_Grappled_BogSpider_C::OnGrappleTetherAdded(struct FGrappleTether* AddedTether)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleTetherAdded");

	ABuff_Grappled_BogSpider_C_OnGrappleTetherAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AddedTether != nullptr)
		*AddedTether = params.AddedTether;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.RotateSwingingVelocityWithLookDir
// ()
// Parameters:
// struct FVector                 CurrentVelDir                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RotatedVelDir                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetVelDir                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::RotateSwingingVelocityWithLookDir(const struct FVector& CurrentVelDir, float DeltaTime, struct FVector* RotatedVelDir, struct FVector* TargetVelDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.RotateSwingingVelocityWithLookDir");

	ABuff_Grappled_BogSpider_C_RotateSwingingVelocityWithLookDir_Params params;
	params.CurrentVelDir = CurrentVelDir;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RotatedVelDir != nullptr)
		*RotatedVelDir = params.RotatedVelDir;
	if (TargetVelDir != nullptr)
		*TargetVelDir = params.TargetVelDir;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.AddAntiGravityPullVelocity
// ()
// Parameters:
// struct FVector                 ToVelocity                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class APrimalCharacter*        forChar                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::AddAntiGravityPullVelocity(class APrimalCharacter* forChar, struct FVector* ToVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.AddAntiGravityPullVelocity");

	ABuff_Grappled_BogSpider_C_AddAntiGravityPullVelocity_Params params;
	params.forChar = forChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ToVelocity != nullptr)
		*ToVelocity = params.ToVelocity;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CheckForAutoBreakTether
// (NetReliable, Event, Static, NetMulticast, Private, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGrappleTether          CheckTether                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Grappled_BogSpider_C::STATIC_CheckForAutoBreakTether(struct FGrappleTether* CheckTether)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CheckForAutoBreakTether");

	ABuff_Grappled_BogSpider_C_CheckForAutoBreakTether_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CheckTether != nullptr)
		*CheckTether = params.CheckTether;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldReplicateOwnerInputs
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Grappled_BogSpider_C::ShouldReplicateOwnerInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldReplicateOwnerInputs");

	ABuff_Grappled_BogSpider_C_ShouldReplicateOwnerInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetCurrentTetherMoveDir
// ()
// Parameters:
// struct FGrappleTether          ForTether                      (Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_Grappled_BogSpider_C::GetCurrentTetherMoveDir(struct FGrappleTether* ForTether)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetCurrentTetherMoveDir");

	ABuff_Grappled_BogSpider_C_GetCurrentTetherMoveDir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForTether != nullptr)
		*ForTether = params.ForTether;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ApplyTetherMoveVelocity
// (NetReliable, NetRequest, Native, Static, Public, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 CurrentVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::STATIC_ApplyTetherMoveVelocity(float* DeltaTime, struct FVector* CurrentVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ApplyTetherMoveVelocity");

	ABuff_Grappled_BogSpider_C_ApplyTetherMoveVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentVelocity != nullptr)
		*CurrentVelocity = params.CurrentVelocity;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SyncSlingshotRatios
// ()
// Parameters:
// bool                           bForceSync                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::SyncSlingshotRatios(bool bForceSync)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SyncSlingshotRatios");

	ABuff_Grappled_BogSpider_C_SyncSlingshotRatios_Params params;
	params.bForceSync = bForceSync;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ForceStopSlingshot
// ()

void ABuff_Grappled_BogSpider_C::ForceStopSlingshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ForceStopSlingshot");

	ABuff_Grappled_BogSpider_C_ForceStopSlingshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsSlingshotLaunching
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::IsSlingshotLaunching(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsSlingshotLaunching");

	ABuff_Grappled_BogSpider_C_IsSlingshotLaunching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsSlingshotLaunchingPure
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::IsSlingshotLaunchingPure(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsSlingshotLaunchingPure");

	ABuff_Grappled_BogSpider_C_IsSlingshotLaunchingPure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ClampGrappleVelocity
// ()
// Parameters:
// struct FVector                 ClampVelocity                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::ClampGrappleVelocity(struct FVector* ClampVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ClampGrappleVelocity");

	ABuff_Grappled_BogSpider_C_ClampGrappleVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClampVelocity != nullptr)
		*ClampVelocity = params.ClampVelocity;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetTetherBreakLimit_OwnerPastCurrentLengthDelta
// ()
// Parameters:
// struct FGrappleTether          ForTether                      (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Grappled_BogSpider_C::GetTetherBreakLimit_OwnerPastCurrentLengthDelta(struct FGrappleTether* ForTether)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetTetherBreakLimit_OwnerPastCurrentLengthDelta");

	ABuff_Grappled_BogSpider_C_GetTetherBreakLimit_OwnerPastCurrentLengthDelta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForTether != nullptr)
		*ForTether = params.ForTether;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldTetherBreak
// (NetReliable, NetRequest, Event, NetMulticast, Public, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGrappleTether          ForTether                      (Parm, OutParm, ReferenceParm)
// class APrimalCharacter**       forChar                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OverrideBreakPastDist          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Grappled_BogSpider_C::ShouldTetherBreak(class APrimalCharacter** forChar, float* OverrideBreakPastDist, struct FGrappleTether* ForTether)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldTetherBreak");

	ABuff_Grappled_BogSpider_C_ShouldTetherBreak_Params params;
	params.forChar = forChar;
	params.OverrideBreakPastDist = OverrideBreakPastDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForTether != nullptr)
		*ForTether = params.ForTether;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsSpiderTryingToSlingshot
// ()
// Parameters:
// struct FGrappleTether          ForTether                      (Parm, OutParm, ReferenceParm)
// struct FVector                 WithVelocity                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::IsSpiderTryingToSlingshot(const struct FVector& WithVelocity, struct FGrappleTether* ForTether, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsSpiderTryingToSlingshot");

	ABuff_Grappled_BogSpider_C_IsSpiderTryingToSlingshot_Params params;
	params.WithVelocity = WithVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForTether != nullptr)
		*ForTether = params.ForTether;
	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SimulateTautTetherForces
// (Event, Static, NetMulticast, Public, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 WithCharVelocity               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         LastGravityZ                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::STATIC_SimulateTautTetherForces(float* DeltaTime, float* LastGravityZ, struct FVector* WithCharVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SimulateTautTetherForces");

	ABuff_Grappled_BogSpider_C_SimulateTautTetherForces_Params params;
	params.DeltaTime = DeltaTime;
	params.LastGravityZ = LastGravityZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WithCharVelocity != nullptr)
		*WithCharVelocity = params.WithCharVelocity;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BPGetGravityZScale
// ()
// Parameters:
// float*                         currentScale                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Grappled_BogSpider_C::BPGetGravityZScale(float* currentScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BPGetGravityZScale");

	ABuff_Grappled_BogSpider_C_BPGetGravityZScale_Params params;
	params.currentScale = currentScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsTetherLeftWeb
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGrappleTether          Tether                         (Parm, OutParm, ReferenceParm)
// bool                           bIsWebTether                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsLeftWeb                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::STATIC_IsTetherLeftWeb(struct FGrappleTether* Tether, bool* bIsWebTether, bool* bIsLeftWeb)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsTetherLeftWeb");

	ABuff_Grappled_BogSpider_C_IsTetherLeftWeb_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tether != nullptr)
		*Tether = params.Tether;
	if (bIsWebTether != nullptr)
		*bIsWebTether = params.bIsWebTether;
	if (bIsLeftWeb != nullptr)
		*bIsLeftWeb = params.bIsLeftWeb;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.WhichWebIsOnRightSideOfView
// (NetReliable, NetRequest, Exec, Public, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FRotator                withViewRot                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLeft                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::WhichWebIsOnRightSideOfView(const struct FRotator& withViewRot, bool* bLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.WhichWebIsOnRightSideOfView");

	ABuff_Grappled_BogSpider_C_WhichWebIsOnRightSideOfView_Params params;
	params.withViewRot = withViewRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLeft != nullptr)
		*bLeft = params.bLeft;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanOwnerGrappleSwing
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Grappled_BogSpider_C::CanOwnerGrappleSwing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanOwnerGrappleSwing");

	ABuff_Grappled_BogSpider_C_CanOwnerGrappleSwing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetCurrentGrappleState
// ()
// Parameters:
// struct FGrappleTether          ForTether                      (Parm, OutParm, ReferenceParm)
// TEnumAsByte<EGrappleState>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EGrappleState> ABuff_Grappled_BogSpider_C::GetCurrentGrappleState(struct FGrappleTether* ForTether)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetCurrentGrappleState");

	ABuff_Grappled_BogSpider_C_GetCurrentGrappleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForTether != nullptr)
		*ForTether = params.ForTether;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanRotateCharVelocity
// (NetRequest, Event, Static, Public, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::STATIC_CanRotateCharVelocity(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanRotateCharVelocity");

	ABuff_Grappled_BogSpider_C_CanRotateCharVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ModifyOverriddenCharVelocity
// ()
// Parameters:
// struct FVector                 CurrentCharVelocity            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::ModifyOverriddenCharVelocity(float* DeltaTime, struct FVector* CurrentCharVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ModifyOverriddenCharVelocity");

	ABuff_Grappled_BogSpider_C_ModifyOverriddenCharVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentCharVelocity != nullptr)
		*CurrentCharVelocity = params.CurrentCharVelocity;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnReleasedPrimalChar
// ()
// Parameters:
// class APrimalCharacter**       ReleasedChar                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::OnReleasedPrimalChar(class APrimalCharacter** ReleasedChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnReleasedPrimalChar");

	ABuff_Grappled_BogSpider_C_OnReleasedPrimalChar_Params params;
	params.ReleasedChar = ReleasedChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappledPrimalChar
// ()
// Parameters:
// class APrimalCharacter**       GrappledChar                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGrappleTether          WithMasterTether               (Parm, OutParm, ReferenceParm)

void ABuff_Grappled_BogSpider_C::OnGrappledPrimalChar(class APrimalCharacter** GrappledChar, struct FGrappleTether* WithMasterTether)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappledPrimalChar");

	ABuff_Grappled_BogSpider_C_OnGrappledPrimalChar_Params params;
	params.GrappledChar = GrappledChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WithMasterTether != nullptr)
		*WithMasterTether = params.WithMasterTether;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsValidSwingHit
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Public, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FHitResult              CheckHit                       (Parm, OutParm, ReferenceParm)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::IsValidSwingHit(struct FHitResult* CheckHit, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsValidSwingHit");

	ABuff_Grappled_BogSpider_C_IsValidSwingHit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CheckHit != nullptr)
		*CheckHit = params.CheckHit;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ReceiveBeginPlay
// ()

void ABuff_Grappled_BogSpider_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ReceiveBeginPlay");

	ABuff_Grappled_BogSpider_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ModifyTetherMoveVelocity
// ()
// Parameters:
// struct FVector                 CurrentMoveVelocity            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FGrappleTether          ForTether                      (Parm, OutParm, ReferenceParm)

void ABuff_Grappled_BogSpider_C::ModifyTetherMoveVelocity(struct FVector* CurrentMoveVelocity, struct FGrappleTether* ForTether)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ModifyTetherMoveVelocity");

	ABuff_Grappled_BogSpider_C_ModifyTetherMoveVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentMoveVelocity != nullptr)
		*CurrentMoveVelocity = params.CurrentMoveVelocity;
	if (ForTether != nullptr)
		*ForTether = params.ForTether;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BuffTickServer");

	ABuff_Grappled_BogSpider_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CheckForSwingCollision
// (NetReliable, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 AtProjectedLocation            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           foundHit                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              swingHit                       (Parm, OutParm)

void ABuff_Grappled_BogSpider_C::STATIC_CheckForSwingCollision(const struct FVector& AtProjectedLocation, bool* foundHit, struct FHitResult* swingHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CheckForSwingCollision");

	ABuff_Grappled_BogSpider_C_CheckForSwingCollision_Params params;
	params.AtProjectedLocation = AtProjectedLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (foundHit != nullptr)
		*foundHit = params.foundHit;
	if (swingHit != nullptr)
		*swingHit = params.swingHit;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BuffTickClient");

	ABuff_Grappled_BogSpider_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Tick_TraceForSwingCollisions
// (Exec, Public, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)

void ABuff_Grappled_BogSpider_C::Tick_TraceForSwingCollisions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Tick_TraceForSwingCollisions");

	ABuff_Grappled_BogSpider_C_Tick_TraceForSwingCollisions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleTetherPullMaxVelocity
// ()
// Parameters:
// class APrimalCharacter**       ForPullingChar                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FGrappleTether          ForTether                      (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Grappled_BogSpider_C::GetGrappleTetherPullMaxVelocity(class APrimalCharacter** ForPullingChar, struct FGrappleTether* ForTether)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleTetherPullMaxVelocity");

	ABuff_Grappled_BogSpider_C_GetGrappleTetherPullMaxVelocity_Params params;
	params.ForPullingChar = ForPullingChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForTether != nullptr)
		*ForTether = params.ForTether;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleTetherPullAcceleration
// ()
// Parameters:
// class APrimalCharacter**       ForPullingChar                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FGrappleTether          ForTether                      (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Grappled_BogSpider_C::GetGrappleTetherPullAcceleration(class APrimalCharacter** ForPullingChar, struct FGrappleTether* ForTether)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleTetherPullAcceleration");

	ABuff_Grappled_BogSpider_C_GetGrappleTetherPullAcceleration_Params params;
	params.ForPullingChar = ForPullingChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForTether != nullptr)
		*ForTether = params.ForTether;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleVelocityDampingRate
// ()
// Parameters:
// class APrimalCharacter**       forChar                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FGrappleTether          ForTether                      (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Grappled_BogSpider_C::GetGrappleVelocityDampingRate(class APrimalCharacter** forChar, struct FGrappleTether* ForTether)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleVelocityDampingRate");

	ABuff_Grappled_BogSpider_C_GetGrappleVelocityDampingRate_Params params;
	params.forChar = forChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForTether != nullptr)
		*ForTether = params.ForTether;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanChangeGrappleState
// ()
// Parameters:
// unsigned char*                 DesiredGrappleState            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Grappled_BogSpider_C::CanChangeGrappleState(unsigned char* DesiredGrappleState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanChangeGrappleState");

	ABuff_Grappled_BogSpider_C_CanChangeGrappleState_Params params;
	params.DesiredGrappleState = DesiredGrappleState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldForceOwnerIntoFallingState
// (Event, NetMulticast, Public, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGrappleTether          ForTether                      (Parm, OutParm, ReferenceParm)
// struct FVector                 WithOwnerVelocity              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    CheckMovementModeOverride      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Grappled_BogSpider_C::ShouldForceOwnerIntoFallingState(TEnumAsByte<EMovementMode>* CheckMovementModeOverride, struct FGrappleTether* ForTether, struct FVector* WithOwnerVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldForceOwnerIntoFallingState");

	ABuff_Grappled_BogSpider_C_ShouldForceOwnerIntoFallingState_Params params;
	params.CheckMovementModeOverride = CheckMovementModeOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForTether != nullptr)
		*ForTether = params.ForTether;
	if (WithOwnerVelocity != nullptr)
		*WithOwnerVelocity = params.WithOwnerVelocity;

	return params.ReturnValue;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleTethersChanged
// (NetRequest, Exec, Native, Event, NetMulticast, Public, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)

void ABuff_Grappled_BogSpider_C::OnGrappleTethersChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleTethersChanged");

	ABuff_Grappled_BogSpider_C_OnGrappleTethersChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.EndGrapple
// ()

void ABuff_Grappled_BogSpider_C::EndGrapple()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.EndGrapple");

	ABuff_Grappled_BogSpider_C_EndGrapple_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleStateChangedNotify
// ()
// Parameters:
// unsigned char                  NewGrappleState                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bIsEarlyNotify                 (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::OnGrappleStateChangedNotify(bool* bIsEarlyNotify, unsigned char* NewGrappleState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleStateChangedNotify");

	ABuff_Grappled_BogSpider_C_OnGrappleStateChangedNotify_Params params;
	params.bIsEarlyNotify = bIsEarlyNotify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewGrappleState != nullptr)
		*NewGrappleState = params.NewGrappleState;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UserConstructionScript
// ()

void ABuff_Grappled_BogSpider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UserConstructionScript");

	ABuff_Grappled_BogSpider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Server_OnSwingTracePredictedHitFound
// ()
// Parameters:
// struct FVector                 AtProjectedLocation            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::Server_OnSwingTracePredictedHitFound(const struct FVector& AtProjectedLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Server_OnSwingTracePredictedHitFound");

	ABuff_Grappled_BogSpider_C_Server_OnSwingTracePredictedHitFound_Params params;
	params.AtProjectedLocation = AtProjectedLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Multi_ForceStopSlingshot
// ()

void ABuff_Grappled_BogSpider_C::Multi_ForceStopSlingshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Multi_ForceStopSlingshot");

	ABuff_Grappled_BogSpider_C_Multi_ForceStopSlingshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Multi_SyncSlingshotRatios
// ()
// Parameters:
// struct FVector2D               Ratios                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::Multi_SyncSlingshotRatios(const struct FVector2D& Ratios)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Multi_SyncSlingshotRatios");

	ABuff_Grappled_BogSpider_C_Multi_SyncSlingshotRatios_Params params;
	params.Ratios = Ratios;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ExecuteUbergraph_Buff_Grappled_BogSpider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_BogSpider_C::ExecuteUbergraph_Buff_Grappled_BogSpider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ExecuteUbergraph_Buff_Grappled_BogSpider");

	ABuff_Grappled_BogSpider_C_ExecuteUbergraph_Buff_Grappled_BogSpider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

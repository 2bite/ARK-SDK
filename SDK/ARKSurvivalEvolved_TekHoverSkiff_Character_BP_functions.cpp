// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekHoverSkiff_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.safely release carried character
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// bool                           skip_clearing_call             (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        overridden_set_character       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::STATIC_safely_release_carried_character(bool skip_clearing_call, class APrimalCharacter* overridden_set_character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.safely release carried character");

	ATekHoverSkiff_Character_BP_C_safely_release_carried_character_Params params;
	params.skip_clearing_call = skip_clearing_call;
	params.overridden_set_character = overridden_set_character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Closest Beam Location Not Blocked
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Did_Hit                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           line_trace_hit                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           box_trace_hit                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           keep_momentum_upon_release     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::STATIC_Get_Closest_Beam_Location_Not_Blocked(const struct FVector& End, const struct FVector& Offset, struct FVector* Location, bool* Did_Hit, bool* line_trace_hit, bool* box_trace_hit, bool* keep_momentum_upon_release)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Closest Beam Location Not Blocked");

	ATekHoverSkiff_Character_BP_C_Get_Closest_Beam_Location_Not_Blocked_Params params;
	params.End = End;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Did_Hit != nullptr)
		*Did_Hit = params.Did_Hit;
	if (line_trace_hit != nullptr)
		*line_trace_hit = params.line_trace_hit;
	if (box_trace_hit != nullptr)
		*box_trace_hit = params.box_trace_hit;
	if (keep_momentum_upon_release != nullptr)
		*keep_momentum_upon_release = params.keep_momentum_upon_release;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ModifySkiffHorizontalInputs
// ()
// Parameters:
// struct FVector                 Input                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewInput                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::ModifySkiffHorizontalInputs(const struct FVector& Input, struct FVector* NewInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ModifySkiffHorizontalInputs");

	ATekHoverSkiff_Character_BP_C_ModifySkiffHorizontalInputs_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewInput != nullptr)
		*NewInput = params.NewInput;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCurrentHoverFloorZ
// ()
// Parameters:
// bool                           bUseAverage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValidFloor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FloorZ                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::GetCurrentHoverFloorZ(bool bUseAverage, bool* bValidFloor, float* FloorZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCurrentHoverFloorZ");

	ATekHoverSkiff_Character_BP_C_GetCurrentHoverFloorZ_Params params;
	params.bUseAverage = bUseAverage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValidFloor != nullptr)
		*bValidFloor = params.bValidFloor;
	if (FloorZ != nullptr)
		*FloorZ = params.FloorZ;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetHoverSlopeDeltaRatio_PURE
// ()
// Parameters:
// bool                           bAdjustWithMax                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::GetHoverSlopeDeltaRatio_PURE(bool bAdjustWithMax, float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetHoverSlopeDeltaRatio_PURE");

	ATekHoverSkiff_Character_BP_C_GetHoverSlopeDeltaRatio_PURE_Params params;
	params.bAdjustWithMax = bAdjustWithMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetHoverSlopeDeltaRatio
// ()
// Parameters:
// bool                           bAdjustWithMax                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::GetHoverSlopeDeltaRatio(bool bAdjustWithMax, float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetHoverSlopeDeltaRatio");

	ATekHoverSkiff_Character_BP_C_GetHoverSlopeDeltaRatio_Params params;
	params.bAdjustWithMax = bAdjustWithMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoHoverSlopeCheck
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, BlueprintEvent)

void ATekHoverSkiff_Character_BP_C::STATIC_DoHoverSlopeCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoHoverSlopeCheck");

	ATekHoverSkiff_Character_BP_C_DoHoverSlopeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPCanCryo");

	ATekHoverSkiff_Character_BP_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffRepairModeCooldownActive
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPost                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RemainingTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::IsSkiffRepairModeCooldownActive(bool* bResult, bool* bIsPost, float* RemainingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffRepairModeCooldownActive");

	ATekHoverSkiff_Character_BP_C_IsSkiffRepairModeCooldownActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (bIsPost != nullptr)
		*bIsPost = params.bIsPost;
	if (RemainingTime != nullptr)
		*RemainingTime = params.RemainingTime;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffRepairDisabledFromDamage
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RemainingTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::IsSkiffRepairDisabledFromDamage(bool* bResult, float* RemainingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffRepairDisabledFromDamage");

	ATekHoverSkiff_Character_BP_C_IsSkiffRepairDisabledFromDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (RemainingTime != nullptr)
		*RemainingTime = params.RemainingTime;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPAcknowledgeServerCorrection
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

bool ATekHoverSkiff_Character_BP_C::BPAcknowledgeServerCorrection(float* TimeStamp, struct FVector* NewLoc, struct FVector* NewVel, class UPrimitiveComponent** NewBase, struct FName* NewBaseBoneName, bool* bHasBase, bool* bBaseRelativePosition, unsigned char* ServerMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPAcknowledgeServerCorrection");

	ATekHoverSkiff_Character_BP_C_BPAcknowledgeServerCorrection_Params params;
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


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnStopJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_C::BPOnStopJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnStopJump");

	ATekHoverSkiff_Character_BP_C_BPOnStopJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnStartJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_C::BPOnStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnStartJump");

	ATekHoverSkiff_Character_BP_C_BPOnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifyToggleHUD
// ()
// Parameters:
// bool*                          bHudHidden                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::BPNotifyToggleHUD(bool* bHudHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifyToggleHUD");

	ATekHoverSkiff_Character_BP_C_BPNotifyToggleHUD_Params params;
	params.bHudHidden = bHudHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CalculateTotalAlternateFuel
// ()
// Parameters:
// float                          TotalAltFuel                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::CalculateTotalAlternateFuel(float* TotalAltFuel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CalculateTotalAlternateFuel");

	ATekHoverSkiff_Character_BP_C_CalculateTotalAlternateFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalAltFuel != nullptr)
		*TotalAltFuel = params.TotalAltFuel;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetRepairModeHudMessage
// (NetRequest, Exec, Static, NetMulticast, MulticastDelegate, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class FString                  Message                        (Parm, OutParm, ZeroConstructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::STATIC_GetRepairModeHudMessage(class FString* Message, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetRepairModeHudMessage");

	ATekHoverSkiff_Character_BP_C_GetRepairModeHudMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;
	if (Color != nullptr)
		*Color = params.Color;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageDamageFX
// ()

void ATekHoverSkiff_Character_BP_C::Tick_ManageDamageFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageDamageFX");

	ATekHoverSkiff_Character_BP_C_Tick_ManageDamageFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetCachedLandedRootRotationOffset
// ()
// Parameters:
// struct FRotator                NewOffset                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::NetSetCachedLandedRootRotationOffset(const struct FRotator& NewOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetCachedLandedRootRotationOffset");

	ATekHoverSkiff_Character_BP_C_NetSetCachedLandedRootRotationOffset_Params params;
	params.NewOffset = NewOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnBasedPawnRemovedNotify
// ()
// Parameters:
// class AActor**                 RemovedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::BP_OnBasedPawnRemovedNotify(class AActor** RemovedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnBasedPawnRemovedNotify");

	ATekHoverSkiff_Character_BP_C_BP_OnBasedPawnRemovedNotify_Params params;
	params.RemovedActor = RemovedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnBasedPawnAddedNotify
// ()
// Parameters:
// class AActor**                 AddedActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::BP_OnBasedPawnAddedNotify(class AActor** AddedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnBasedPawnAddedNotify");

	ATekHoverSkiff_Character_BP_C_BP_OnBasedPawnAddedNotify_Params params;
	params.AddedActor = AddedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetFuelConversionRateForClass
// ()
// Parameters:
// class UClass*                  ForClass                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::GetFuelConversionRateForClass(class UClass* ForClass, float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetFuelConversionRateForClass");

	ATekHoverSkiff_Character_BP_C_GetFuelConversionRateForClass_Params params;
	params.ForClass = ForClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rate != nullptr)
		*Rate = params.Rate;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffRepairModeStateChanged
// ()
// Parameters:
// bool                           bNewState                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::OnSkiffRepairModeStateChanged(bool bNewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffRepairModeStateChanged");

	ATekHoverSkiff_Character_BP_C_OnSkiffRepairModeStateChanged_Params params;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetSkiffRepairModeActive
// ()
// Parameters:
// bool                           bNewActive                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::NetSetSkiffRepairModeActive(bool bNewActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetSkiffRepairModeActive");

	ATekHoverSkiff_Character_BP_C_NetSetSkiffRepairModeActive_Params params;
	params.bNewActive = bNewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanSkiffUseRepairMode
// ()
// Parameters:
// bool                           bForStart                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::CanSkiffUseRepairMode(bool bForStart, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanSkiffUseRepairMode");

	ATekHoverSkiff_Character_BP_C_CanSkiffUseRepairMode_Params params;
	params.bForStart = bForStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPTryMultiUse");

	ATekHoverSkiff_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Repair Mode Hud Message_PURE
// ()
// Parameters:
// class FString                  Message                        (Parm, OutParm, ZeroConstructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Get_Repair_Mode_Hud_Message_PURE(class FString* Message, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Repair Mode Hud Message_PURE");

	ATekHoverSkiff_Character_BP_C_Get_Repair_Mode_Hud_Message_PURE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;
	if (Color != nullptr)
		*Color = params.Color;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BlueprintDrawFloatingHUD
// (NetRequest, Exec, Native, MulticastDelegate, Private, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BlueprintDrawFloatingHUD");

	ATekHoverSkiff_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetMultiUseEntries
// (Event, NetResponse, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ATekHoverSkiff_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetMultiUseEntries");

	ATekHoverSkiff_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageAutoRepair
// ()

void ATekHoverSkiff_Character_BP_C::Tick_ManageAutoRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageAutoRepair");

	ATekHoverSkiff_Character_BP_C_Tick_ManageAutoRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_ForceAllowAddBuff
// ()
// Parameters:
// class UClass**                 BuffClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_C::BP_ForceAllowAddBuff(class UClass** BuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_ForceAllowAddBuff");

	ATekHoverSkiff_Character_BP_C_BP_ForceAllowAddBuff_Params params;
	params.BuffClass = BuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BlueprintPlayDying
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::BlueprintPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BlueprintPlayDying");

	ATekHoverSkiff_Character_BP_C_BlueprintPlayDying_Params params;
	params.KillingDamage = KillingDamage;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsCharAttachedToSkiffMesh
// ()
// Parameters:
// class APrimalCharacter*        forChar                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::IsCharAttachedToSkiffMesh(class APrimalCharacter* forChar, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsCharAttachedToSkiffMesh");

	ATekHoverSkiff_Character_BP_C_IsCharAttachedToSkiffMesh_Params params;
	params.forChar = forChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OverrideCarriedCharacterTransform
// (NetRequest, Exec, Event, MulticastDelegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class APrimalCharacter**       ForCarriedChar                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_C::BP_OverrideCarriedCharacterTransform(class APrimalCharacter** ForCarriedChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OverrideCarriedCharacterTransform");

	ATekHoverSkiff_Character_BP_C_BP_OverrideCarriedCharacterTransform_Params params;
	params.ForCarriedChar = ForCarriedChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DestroySkiffHudWidget
// ()
// Parameters:
// bool                           bDestroyNow                    (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::DestroySkiffHudWidget(bool bDestroyNow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DestroySkiffHudWidget");

	ATekHoverSkiff_Character_BP_C_DestroySkiffHudWidget_Params params;
	params.bDestroyNow = bDestroyNow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPServerHandleNetExecCommand");

	ATekHoverSkiff_Character_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamCameraCeilingZ
// ()
// Parameters:
// float                          CeilingZ                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::GetBeamCameraCeilingZ(float* CeilingZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamCameraCeilingZ");

	ATekHoverSkiff_Character_BP_C_GetBeamCameraCeilingZ_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CeilingZ != nullptr)
		*CeilingZ = params.CeilingZ;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanFireBeam
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::CanFireBeam(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanFireBeam");

	ATekHoverSkiff_Character_BP_C_CanFireBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ConsumeFuel
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           MulticastFuel                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::ConsumeFuel(float amount, bool MulticastFuel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ConsumeFuel");

	ATekHoverSkiff_Character_BP_C_ConsumeFuel_Params params;
	params.amount = amount;
	params.MulticastFuel = MulticastFuel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.HasEnoughFuel
// ()
// Parameters:
// float                          RequiredFuel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::HasEnoughFuel(float RequiredFuel, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.HasEnoughFuel");

	ATekHoverSkiff_Character_BP_C_HasEnoughFuel_Params params;
	params.RequiredFuel = RequiredFuel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TryRefillCurrentFuelUnit
// ()
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::TryRefillCurrentFuelUnit(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TryRefillCurrentFuelUnit");

	ATekHoverSkiff_Character_BP_C_TryRefillCurrentFuelUnit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.HasAnyFuel
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CurrentFuel                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::HasAnyFuel(bool* bResult, float* CurrentFuel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.HasAnyFuel");

	ATekHoverSkiff_Character_BP_C_HasAnyFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (CurrentFuel != nullptr)
		*CurrentFuel = params.CurrentFuel;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPInventoryItemDropped
// ()
// Parameters:
// class UObject**                InventoryItemObject            (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::BPInventoryItemDropped(class UObject** InventoryItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPInventoryItemDropped");

	ATekHoverSkiff_Character_BP_C_BPInventoryItemDropped_Params params;
	params.InventoryItemObject = InventoryItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifyInventoryItemChange");

	ATekHoverSkiff_Character_BP_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffInventoryUpdated
// ()
// Parameters:
// class UPrimalItem*             UpdatedItem                    (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::OnSkiffInventoryUpdated(class UPrimalItem* UpdatedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffInventoryUpdated");

	ATekHoverSkiff_Character_BP_C_OnSkiffInventoryUpdated_Params params;
	params.UpdatedItem = UpdatedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPSetupTamed");

	ATekHoverSkiff_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DisableLevelUps
// ()

void ATekHoverSkiff_Character_BP_C::DisableLevelUps()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DisableLevelUps");

	ATekHoverSkiff_Character_BP_C_DisableLevelUps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BSetupDinoTameable
// ()

void ATekHoverSkiff_Character_BP_C::BSetupDinoTameable()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BSetupDinoTameable");

	ATekHoverSkiff_Character_BP_C_BSetupDinoTameable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ShowDropDinoIndicator
// (NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent)

void ATekHoverSkiff_Character_BP_C::STATIC_Tick_ShowDropDinoIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ShowDropDinoIndicator");

	ATekHoverSkiff_Character_BP_C_Tick_ShowDropDinoIndicator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetupSkiffThrusters
// (Event, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent)

void ATekHoverSkiff_Character_BP_C::SetupSkiffThrusters()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetupSkiffThrusters");

	ATekHoverSkiff_Character_BP_C_SetupSkiffThrusters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetSkiffAcceleration
// ()
// Parameters:
// struct FVector                 NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::GetSkiffAcceleration(struct FVector* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetSkiffAcceleration");

	ATekHoverSkiff_Character_BP_C_GetSkiffAcceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateSkiffThruster
// (Native, Event, NetResponse, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FStruct_HoverSkiffThrusterData WithThrusterData               (Parm, OutParm, ReferenceParm)
// int                            DataIntex                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Tick_UpdateSkiffThruster(int DataIntex, struct FStruct_HoverSkiffThrusterData* WithThrusterData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateSkiffThruster");

	ATekHoverSkiff_Character_BP_C_Tick_UpdateSkiffThruster_Params params;
	params.DataIntex = DataIntex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WithThrusterData != nullptr)
		*WithThrusterData = params.WithThrusterData;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateBeamSFX
// ()

void ATekHoverSkiff_Character_BP_C::Tick_UpdateBeamSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateBeamSFX");

	ATekHoverSkiff_Character_BP_C_Tick_UpdateBeamSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsValidHoverTraceHit
// ()
// Parameters:
// struct FHitResult              ForHit                         (Parm, OutParm, ReferenceParm)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::IsValidHoverTraceHit(struct FHitResult* ForHit, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsValidHoverTraceHit");

	ATekHoverSkiff_Character_BP_C_IsValidHoverTraceHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForHit != nullptr)
		*ForHit = params.ForHit;
	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffRunning
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::IsSkiffRunning(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffRunning");

	ATekHoverSkiff_Character_BP_C_IsSkiffRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoesSkiffWantToRun
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::DoesSkiffWantToRun(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoesSkiffWantToRun");

	ATekHoverSkiff_Character_BP_C_DoesSkiffWantToRun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnSetRunning
// ()
// Parameters:
// bool*                          bNewIsRunning                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::BP_OnSetRunning(bool* bNewIsRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnSetRunning");

	ATekHoverSkiff_Character_BP_C_BP_OnSetRunning_Params params;
	params.bNewIsRunning = bNewIsRunning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCurrentBeamChar_
// ()
// Parameters:
// class APrimalCharacter*        Char                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::GetCurrentBeamChar_(class APrimalCharacter** Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCurrentBeamChar_");

	ATekHoverSkiff_Character_BP_C_GetCurrentBeamChar__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Char != nullptr)
		*Char = params.Char;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnTriedBeamGrab
// ()
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::OnTriedBeamGrab(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnTriedBeamGrab");

	ATekHoverSkiff_Character_BP_C_OnTriedBeamGrab_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.AttachCharToBeam
// ()
// Parameters:
// class APrimalCharacter*        CharToAttach                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::AttachCharToBeam(class APrimalCharacter* CharToAttach, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.AttachCharToBeam");

	ATekHoverSkiff_Character_BP_C_AttachCharToBeam_Params params;
	params.CharToAttach = CharToAttach;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TryBeamGrab
// ()
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::TryBeamGrab(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TryBeamGrab");

	ATekHoverSkiff_Character_BP_C_TryBeamGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ResetBeam
// ()

void ATekHoverSkiff_Character_BP_C::ResetBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ResetBeam");

	ATekHoverSkiff_Character_BP_C_ResetBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanActivateBeamCamera
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::CanActivateBeamCamera(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanActivateBeamCamera");

	ATekHoverSkiff_Character_BP_C_CanActivateBeamCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnReceiveSkiff2dMovementInput
// ()
// Parameters:
// float                          InputAxisVal                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bright                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShouldIntercept               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::OnReceiveSkiff2dMovementInput(float InputAxisVal, bool bright, bool* bShouldIntercept)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnReceiveSkiff2dMovementInput");

	ATekHoverSkiff_Character_BP_C_OnReceiveSkiff2dMovementInput_Params params;
	params.InputAxisVal = InputAxisVal;
	params.bright = bright;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldIntercept != nullptr)
		*bShouldIntercept = params.bShouldIntercept;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanUseHeadlights
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::CanUseHeadlights(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanUseHeadlights");

	ATekHoverSkiff_Character_BP_C_CanUseHeadlights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPCanBeBaseForCharacter
// ()
// Parameters:
// class APawn**                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_C::BPCanBeBaseForCharacter(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPCanBeBaseForCharacter");

	ATekHoverSkiff_Character_BP_C_BPCanBeBaseForCharacter_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetRiderUnboardDirection
// ()
// Parameters:
// class APrimalCharacter**       RidingCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ATekHoverSkiff_Character_BP_C::BPGetRiderUnboardDirection(class APrimalCharacter** RidingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetRiderUnboardDirection");

	ATekHoverSkiff_Character_BP_C_BPGetRiderUnboardDirection_Params params;
	params.RidingCharacter = RidingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetRiderUnboardLocation
// ()
// Parameters:
// class APrimalCharacter**       RidingCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ATekHoverSkiff_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter** RidingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetRiderUnboardLocation");

	ATekHoverSkiff_Character_BP_C_BPGetRiderUnboardLocation_Params params;
	params.RidingCharacter = RidingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanHover
// ()
// Parameters:
// bool                           bForStart                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::CanHover(bool bForStart, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanHover");

	ATekHoverSkiff_Character_BP_C_CanHover_Params params;
	params.bForStart = bForStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnTamedOrderReceived
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::BP_OnTamedOrderReceived(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnTamedOrderReceived");

	ATekHoverSkiff_Character_BP_C_BP_OnTamedOrderReceived_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.WantsToFlyUp
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::WantsToFlyUp(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.WantsToFlyUp");

	ATekHoverSkiff_Character_BP_C_WantsToFlyUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_ShouldDisableBasedCharactersCameraInterpolation
// ()
// Parameters:
// class APrimalCharacter**       ForBasedChar                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_C::BP_ShouldDisableBasedCharactersCameraInterpolation(class APrimalCharacter** ForBasedChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_ShouldDisableBasedCharactersCameraInterpolation");

	ATekHoverSkiff_Character_BP_C_BP_ShouldDisableBasedCharactersCameraInterpolation_Params params;
	params.ForBasedChar = ForBasedChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateBeamCharManipulation
// ()

void ATekHoverSkiff_Character_BP_C::UpdateBeamCharManipulation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateBeamCharManipulation");

	ATekHoverSkiff_Character_BP_C_UpdateBeamCharManipulation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_CheckSkiffInputs
// ()

void ATekHoverSkiff_Character_BP_C::Tick_CheckSkiffInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_CheckSkiffInputs");

	ATekHoverSkiff_Character_BP_C_Tick_CheckSkiffInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateSyncedFuelAmount
// ()
// Parameters:
// bool                           bWasChanged                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::UpdateSyncedFuelAmount(bool* bWasChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateSyncedFuelAmount");

	ATekHoverSkiff_Character_BP_C_UpdateSyncedFuelAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWasChanged != nullptr)
		*bWasChanged = params.bWasChanged;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetSkiffBlockersTraceIgnoreActors
// ()
// Parameters:
// TArray<class AActor*>          IgnoreActors                   (Parm, OutParm, ZeroConstructor)

void ATekHoverSkiff_Character_BP_C::GetSkiffBlockersTraceIgnoreActors(TArray<class AActor*>* IgnoreActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetSkiffBlockersTraceIgnoreActors");

	ATekHoverSkiff_Character_BP_C_GetSkiffBlockersTraceIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IgnoreActors != nullptr)
		*IgnoreActors = params.IgnoreActors;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageSkiffCamera
// ()

void ATekHoverSkiff_Character_BP_C::Tick_ManageSkiffCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageSkiffCamera");

	ATekHoverSkiff_Character_BP_C_Tick_ManageSkiffCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OverrideBasedCharactersCameraInterpSpeed
// ()
// Parameters:
// class APrimalCharacter**       ForBasedChar                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DefaultTPVCameraSpeedInterpMultiplier (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DefaultTPVOffsetInterpSpeed    (Parm, ZeroConstructor, IsPlainOldData)
// float                          TPVCameraSpeedInterpMultiplier (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TPVOffsetInterpSpeed           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::BP_OverrideBasedCharactersCameraInterpSpeed(class APrimalCharacter** ForBasedChar, float* DefaultTPVCameraSpeedInterpMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpMultiplier, float* TPVOffsetInterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OverrideBasedCharactersCameraInterpSpeed");

	ATekHoverSkiff_Character_BP_C_BP_OverrideBasedCharactersCameraInterpSpeed_Params params;
	params.ForBasedChar = ForBasedChar;
	params.DefaultTPVCameraSpeedInterpMultiplier = DefaultTPVCameraSpeedInterpMultiplier;
	params.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TPVCameraSpeedInterpMultiplier != nullptr)
		*TPVCameraSpeedInterpMultiplier = params.TPVCameraSpeedInterpMultiplier;
	if (TPVOffsetInterpSpeed != nullptr)
		*TPVOffsetInterpSpeed = params.TPVOffsetInterpSpeed;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsPhysicsVolumeLava
// ()
// Parameters:
// class APhysicsVolume*          CheckVolume                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsLava                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::IsPhysicsVolumeLava(class APhysicsVolume* CheckVolume, bool* bIsLava)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsPhysicsVolumeLava");

	ATekHoverSkiff_Character_BP_C_IsPhysicsVolumeLava_Params params;
	params.CheckVolume = CheckVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsLava != nullptr)
		*bIsLava = params.bIsLava;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanSkiffTryToTrulyLand
// ()
// Parameters:
// struct FVector                 WithFlyingVelocity             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::CanSkiffTryToTrulyLand(const struct FVector& WithFlyingVelocity, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanSkiffTryToTrulyLand");

	ATekHoverSkiff_Character_BP_C_CanSkiffTryToTrulyLand_Params params;
	params.WithFlyingVelocity = WithFlyingVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnStartLandFailed
// ()
// Parameters:
// int*                           ReasonIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::BP_OnStartLandFailed(int* ReasonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnStartLandFailed");

	ATekHoverSkiff_Character_BP_C_BP_OnStartLandFailed_Params params;
	params.ReasonIndex = ReasonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ResetSkiffInputs
// ()

void ATekHoverSkiff_Character_BP_C::ResetSkiffInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ResetSkiffInputs");

	ATekHoverSkiff_Character_BP_C_ResetSkiffInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.InitHeadlights
// ()

void ATekHoverSkiff_Character_BP_C::InitHeadlights()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.InitHeadlights");

	ATekHoverSkiff_Character_BP_C_InitHeadlights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ActivateSkiffBeamVfxByState
// ()
// Parameters:
// TEnumAsByte<E_HoverSkiffBeamState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::ActivateSkiffBeamVfxByState(TEnumAsByte<E_HoverSkiffBeamState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ActivateSkiffBeamVfxByState");

	ATekHoverSkiff_Character_BP_C_ActivateSkiffBeamVfxByState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageBeamFX
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// bool                           bForceClearAll                 (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::STATIC_Tick_ManageBeamFX(bool bForceClearAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageBeamFX");

	ATekHoverSkiff_Character_BP_C_Tick_ManageBeamFX_Params params;
	params.bForceClearAll = bForceClearAll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCurrentBeamChar_Pure
// ()
// Parameters:
// class APrimalCharacter*        Char                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::GetCurrentBeamChar_Pure(class APrimalCharacter** Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCurrentBeamChar_Pure");

	ATekHoverSkiff_Character_BP_C_GetCurrentBeamChar_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Char != nullptr)
		*Char = params.Char;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetEnvironmentalParticleTraceDistance
// ()
// Parameters:
// struct FName                   ForSocketName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          TraceDist                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::GetEnvironmentalParticleTraceDistance(const struct FName& ForSocketName, float* TraceDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetEnvironmentalParticleTraceDistance");

	ATekHoverSkiff_Character_BP_C_GetEnvironmentalParticleTraceDistance_Params params;
	params.ForSocketName = ForSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TraceDist != nullptr)
		*TraceDist = params.TraceDist;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveDestroyed
// ()

void ATekHoverSkiff_Character_BP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveDestroyed");

	ATekHoverSkiff_Character_BP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageHoverGroundFX
// (Exec, Native, Event, NetResponse, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintEvent)

void ATekHoverSkiff_Character_BP_C::Tick_ManageHoverGroundFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageHoverGroundFX");

	ATekHoverSkiff_Character_BP_C_Tick_ManageHoverGroundFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateHeadlights
// ()

void ATekHoverSkiff_Character_BP_C::Tick_UpdateHeadlights()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateHeadlights");

	ATekHoverSkiff_Character_BP_C_Tick_UpdateHeadlights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetHeadlightsOn
// ()
// Parameters:
// bool                           On                             (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::SetHeadlightsOn(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetHeadlightsOn");

	ATekHoverSkiff_Character_BP_C_SetHeadlightsOn_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ToggleHeadlights
// ()

void ATekHoverSkiff_Character_BP_C::ToggleHeadlights()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ToggleHeadlights");

	ATekHoverSkiff_Character_BP_C_ToggleHeadlights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffFailedTakeoff
// ()

void ATekHoverSkiff_Character_BP_C::OnSkiffFailedTakeoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffFailedTakeoff");

	ATekHoverSkiff_Character_BP_C_OnSkiffFailedTakeoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.AllowSkiffBeamInputs
// ()
// Parameters:
// bool                           bAllow                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::AllowSkiffBeamInputs(bool* bAllow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.AllowSkiffBeamInputs");

	ATekHoverSkiff_Character_BP_C_AllowSkiffBeamInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAllow != nullptr)
		*bAllow = params.bAllow;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetTargetHoverHeight
// ()
// Parameters:
// float                          NewHeight                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::SetTargetHoverHeight(float NewHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetTargetHoverHeight");

	ATekHoverSkiff_Character_BP_C_SetTargetHoverHeight_Params params;
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateSkiffHoverState
// ()

void ATekHoverSkiff_Character_BP_C::UpdateSkiffHoverState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateSkiffHoverState");

	ATekHoverSkiff_Character_BP_C_UpdateSkiffHoverState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffHoverStateChanged
// ()
// Parameters:
// TEnumAsByte<E_HoverSkiffHoverState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_HoverSkiffHoverState> PreviousState                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::OnSkiffHoverStateChanged(TEnumAsByte<E_HoverSkiffHoverState> NewState, TEnumAsByte<E_HoverSkiffHoverState> PreviousState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffHoverStateChanged");

	ATekHoverSkiff_Character_BP_C_OnSkiffHoverStateChanged_Params params;
	params.NewState = NewState;
	params.PreviousState = PreviousState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetSkiffHoverState
// ()
// Parameters:
// TEnumAsByte<E_HoverSkiffHoverState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::NetSetSkiffHoverState(TEnumAsByte<E_HoverSkiffHoverState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetSkiffHoverState");

	ATekHoverSkiff_Character_BP_C_NetSetSkiffHoverState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_GetCustomModifier_MaxSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekHoverSkiff_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_GetCustomModifier_MaxSpeed");

	ATekHoverSkiff_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TraceForBeamCharBlockers
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintEvent)

void ATekHoverSkiff_Character_BP_C::STATIC_TraceForBeamCharBlockers()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TraceForBeamCharBlockers");

	ATekHoverSkiff_Character_BP_C_TraceForBeamCharBlockers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetMinHoverHeight
// ()
// Parameters:
// float                          MinHeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::GetMinHoverHeight(float* MinHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetMinHoverHeight");

	ATekHoverSkiff_Character_BP_C_GetMinHoverHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinHeight != nullptr)
		*MinHeight = params.MinHeight;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffChangingHoverHeight
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::IsSkiffChangingHoverHeight(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsSkiffChangingHoverHeight");

	ATekHoverSkiff_Character_BP_C_IsSkiffChangingHoverHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamCharGrabOffsetZ
// ()
// Parameters:
// float                          OffsetZ                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::GetBeamCharGrabOffsetZ(float* OffsetZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamCharGrabOffsetZ");

	ATekHoverSkiff_Character_BP_C_GetBeamCharGrabOffsetZ_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OffsetZ != nullptr)
		*OffsetZ = params.OffsetZ;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartedGrabbingChar
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintEvent)

void ATekHoverSkiff_Character_BP_C::STATIC_OnBeamStartedGrabbingChar()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartedGrabbingChar");

	ATekHoverSkiff_Character_BP_C_OnBeamStartedGrabbingChar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_CanFly
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_C::BP_CanFly()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_CanFly");

	ATekHoverSkiff_Character_BP_C_BP_CanFly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateBeamEndPoint
// ()

void ATekHoverSkiff_Character_BP_C::UpdateBeamEndPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateBeamEndPoint");

	ATekHoverSkiff_Character_BP_C_UpdateBeamEndPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateBeam
// ()

void ATekHoverSkiff_Character_BP_C::Tick_UpdateBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_UpdateBeam");

	ATekHoverSkiff_Character_BP_C_Tick_UpdateBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageFuel
// ()

void ATekHoverSkiff_Character_BP_C::Tick_ManageFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageFuel");

	ATekHoverSkiff_Character_BP_C_Tick_ManageFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ATekHoverSkiff_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetHUDElements");

	ATekHoverSkiff_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamCharStruggle
// ()

void ATekHoverSkiff_Character_BP_C::OnBeamCharStruggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamCharStruggle");

	ATekHoverSkiff_Character_BP_C_OnBeamCharStruggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamCharBreakFree
// ()

void ATekHoverSkiff_Character_BP_C::OnBeamCharBreakFree()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamCharBreakFree");

	ATekHoverSkiff_Character_BP_C_OnBeamCharBreakFree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveAnyDamage");

	ATekHoverSkiff_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OverrideTerminalVelocity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekHoverSkiff_Character_BP_C::BP_OverrideTerminalVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OverrideTerminalVelocity");

	ATekHoverSkiff_Character_BP_C_BP_OverrideTerminalVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoThrusterEngineBurst
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// TArray<class UParticleSystemComponent*> ForThrusterParticles           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UParticleSystem*         OverrideBurstParticle          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreventAutoScaling            (Parm, ZeroConstructor, IsPlainOldData)
// class USoundCue*               OverrideBurstSound             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               OverrideVolumeAndPitch         (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::STATIC_DoThrusterEngineBurst(class UParticleSystem* OverrideBurstParticle, bool bPreventAutoScaling, class USoundCue* OverrideBurstSound, const struct FVector2D& OverrideVolumeAndPitch, TArray<class UParticleSystemComponent*>* ForThrusterParticles)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoThrusterEngineBurst");

	ATekHoverSkiff_Character_BP_C_DoThrusterEngineBurst_Params params;
	params.OverrideBurstParticle = OverrideBurstParticle;
	params.bPreventAutoScaling = bPreventAutoScaling;
	params.OverrideBurstSound = OverrideBurstSound;
	params.OverrideVolumeAndPitch = OverrideVolumeAndPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForThrusterParticles != nullptr)
		*ForThrusterParticles = params.ForThrusterParticles;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.KillSkiff
// (NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintEvent)

void ATekHoverSkiff_Character_BP_C::KillSkiff()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.KillSkiff");

	ATekHoverSkiff_Character_BP_C_KillSkiff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffCrash
// (NetReliable, NetRequest, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// bool                           bFromImpact                    (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::STATIC_OnSkiffCrash(bool bFromImpact)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffCrash");

	ATekHoverSkiff_Character_BP_C_OnSkiffCrash_Params params;
	params.bFromImpact = bFromImpact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_PreventMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_C::BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_PreventMovementMode");

	ATekHoverSkiff_Character_BP_C_BP_PreventMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_Crashing
// ()

void ATekHoverSkiff_Character_BP_C::Tick_Crashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_Crashing");

	ATekHoverSkiff_Character_BP_C_Tick_Crashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffStartedCrashing
// ()

void ATekHoverSkiff_Character_BP_C::OnSkiffStartedCrashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffStartedCrashing");

	ATekHoverSkiff_Character_BP_C_OnSkiffStartedCrashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekHoverSkiff_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPAdjustDamage");

	ATekHoverSkiff_Character_BP_C_BPAdjustDamage_Params params;
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


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifySetRider");

	ATekHoverSkiff_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetBeamCameraActive
// ()
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::SetBeamCameraActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetBeamCameraActive");

	ATekHoverSkiff_Character_BP_C_SetBeamCameraActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartMoving
// ()

void ATekHoverSkiff_Character_BP_C::OnBeamStartMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartMoving");

	ATekHoverSkiff_Character_BP_C_OnBeamStartMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartRetracting
// ()

void ATekHoverSkiff_Character_BP_C::OnBeamStartRetracting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartRetracting");

	ATekHoverSkiff_Character_BP_C_OnBeamStartRetracting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamTurretOpened
// ()

void ATekHoverSkiff_Character_BP_C::OnBeamTurretOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamTurretOpened");

	ATekHoverSkiff_Character_BP_C_OnBeamTurretOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnStartOpeningBeam
// ()
// Parameters:
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::OnStartOpeningBeam(bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnStartOpeningBeam");

	ATekHoverSkiff_Character_BP_C_OnStartOpeningBeam_Params params;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateOwningClientReplicatedInputs
// ()

void ATekHoverSkiff_Character_BP_C::UpdateOwningClientReplicatedInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UpdateOwningClientReplicatedInputs");

	ATekHoverSkiff_Character_BP_C_UpdateOwningClientReplicatedInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetSkiffMovementInputAxisValue
// ()
// Parameters:
// int                            Axis                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Newval                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::SetSkiffMovementInputAxisValue(int Axis, float Newval)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetSkiffMovementInputAxisValue");

	ATekHoverSkiff_Character_BP_C_SetSkiffMovementInputAxisValue_Params params;
	params.Axis = Axis;
	params.Newval = Newval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamLocked
// ()

void ATekHoverSkiff_Character_BP_C::OnBeamLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamLocked");

	ATekHoverSkiff_Character_BP_C_OnBeamLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamEndPointRelative
// (NetReliable, Exec, Native, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 LaserEndPoint                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::STATIC_GetBeamEndPointRelative(struct FVector* LaserEndPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamEndPointRelative");

	ATekHoverSkiff_Character_BP_C_GetBeamEndPointRelative_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LaserEndPoint != nullptr)
		*LaserEndPoint = params.LaserEndPoint;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamStartPointRelative
// (NetRequest, Event, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// bool                           bAdjustForCarriedChar          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LaserStartPoint                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::STATIC_GetBeamStartPointRelative(bool bAdjustForCarriedChar, struct FVector* LaserStartPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamStartPointRelative");

	ATekHoverSkiff_Character_BP_C_GetBeamStartPointRelative_Params params;
	params.bAdjustForCarriedChar = bAdjustForCarriedChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LaserStartPoint != nullptr)
		*LaserStartPoint = params.LaserStartPoint;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamGrabbedChar
// ()
// Parameters:
// struct FVector                 GrabbedCharLocation            (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::OnBeamGrabbedChar(const struct FVector& GrabbedCharLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamGrabbedChar");

	ATekHoverSkiff_Character_BP_C_OnBeamGrabbedChar_Params params;
	params.GrabbedCharLocation = GrabbedCharLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPAllowCarryCharacter
// ()
// Parameters:
// class APrimalCharacter**       checkCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_C::BPAllowCarryCharacter(class APrimalCharacter** checkCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPAllowCarryCharacter");

	ATekHoverSkiff_Character_BP_C_BPAllowCarryCharacter_Params params;
	params.checkCharacter = checkCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPDidClearCarriedCharacter
// (NetRequest, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::STATIC_BPDidClearCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPDidClearCarriedCharacter");

	ATekHoverSkiff_Character_BP_C_BPDidClearCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPDidSetCarriedCharacter
// (NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::STATIC_BPDidSetCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPDidSetCarriedCharacter");

	ATekHoverSkiff_Character_BP_C_BPDidSetCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamBeingManipulated
// ()
// Parameters:
// bool                           IsBeamMoving                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::IsBeamBeingManipulated(bool* IsBeamMoving)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamBeingManipulated");

	ATekHoverSkiff_Character_BP_C_IsBeamBeingManipulated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsBeamMoving != nullptr)
		*IsBeamMoving = params.IsBeamMoving;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_InterceptMoveRight
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_C::BP_InterceptMoveRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_InterceptMoveRight");

	ATekHoverSkiff_Character_BP_C_BP_InterceptMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_InterceptMoveForward");

	ATekHoverSkiff_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsMovingAllyWithBeam
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::IsMovingAllyWithBeam(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsMovingAllyWithBeam");

	ATekHoverSkiff_Character_BP_C_IsMovingAllyWithBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPModifyRightDirectionInput
// ()
// Parameters:
// struct FVector                 directionInput                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ATekHoverSkiff_Character_BP_C::BPModifyRightDirectionInput(struct FVector* directionInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPModifyRightDirectionInput");

	ATekHoverSkiff_Character_BP_C_BPModifyRightDirectionInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (directionInput != nullptr)
		*directionInput = params.directionInput;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPShouldLimitRightDirection
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_C::BPShouldLimitRightDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPShouldLimitRightDirection");

	ATekHoverSkiff_Character_BP_C_BPShouldLimitRightDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_AllowWalkableSlopeOverride
// ()
// Parameters:
// class UPrimitiveComponent**    ForComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_C::BP_AllowWalkableSlopeOverride(class UPrimitiveComponent** ForComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_AllowWalkableSlopeOverride");

	ATekHoverSkiff_Character_BP_C_BP_AllowWalkableSlopeOverride_Params params;
	params.ForComponent = ForComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnMovementModeChangedNotify");

	ATekHoverSkiff_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageThrusterFX
// (NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintEvent)

void ATekHoverSkiff_Character_BP_C::Tick_ManageThrusterFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManageThrusterFX");

	ATekHoverSkiff_Character_BP_C_Tick_ManageThrusterFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetThrustersActive
// (NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// bool                           bNewActive                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::SetThrustersActive(bool bNewActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetThrustersActive");

	ATekHoverSkiff_Character_BP_C_SetThrustersActive_Params params;
	params.bNewActive = bNewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffSetFlight
// ()
// Parameters:
// bool                           bFly                           (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::OnSkiffSetFlight(bool bFly)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffSetFlight");

	ATekHoverSkiff_Character_BP_C_OnSkiffSetFlight_Params params;
	params.bFly = bFly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnSetFlight
// ()
// Parameters:
// bool*                          bFly                           (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::BPOnSetFlight(bool* bFly)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOnSetFlight");

	ATekHoverSkiff_Character_BP_C_BPOnSetFlight_Params params;
	params.bFly = bFly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveHit
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

void ATekHoverSkiff_Character_BP_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveHit");

	ATekHoverSkiff_Character_BP_C_ReceiveHit_Params params;
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


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoSkiffHoverTraces
// (Native, Event, Private, Delegate, NetServer, HasDefaults, BlueprintEvent)
// Parameters:
// bool                           bForceTraces                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::DoSkiffHoverTraces(bool bForceTraces)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DoSkiffHoverTraces");

	ATekHoverSkiff_Character_BP_C_DoSkiffHoverTraces_Params params;
	params.bForceTraces = bForceTraces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnLanded
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ATekHoverSkiff_Character_BP_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnLanded");

	ATekHoverSkiff_Character_BP_C_OnLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffLandingStageChanged
// ()
// Parameters:
// bool                           bLanding                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::OnSkiffLandingStageChanged(bool bLanding)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffLandingStageChanged");

	ATekHoverSkiff_Character_BP_C_OnSkiffLandingStageChanged_Params params;
	params.bLanding = bLanding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnStartLandingNotify
// ()

void ATekHoverSkiff_Character_BP_C::BP_OnStartLandingNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_OnStartLandingNotify");

	ATekHoverSkiff_Character_BP_C_BP_OnStartLandingNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsCharBeamFriendly
// ()
// Parameters:
// class APrimalCharacter*        forChar                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::IsCharBeamFriendly(class APrimalCharacter* forChar, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsCharBeamFriendly");

	ATekHoverSkiff_Character_BP_C_IsCharBeamFriendly_Params params;
	params.forChar = forChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnStartClosingBeamTurret
// ()

void ATekHoverSkiff_Character_BP_C::OnStartClosingBeamTurret()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnStartClosingBeamTurret");

	ATekHoverSkiff_Character_BP_C_OnStartClosingBeamTurret_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanSendInputRPC
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::CanSendInputRPC(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanSendInputRPC");

	ATekHoverSkiff_Character_BP_C_CanSendInputRPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffBeamStateChanged
// ()
// Parameters:
// TEnumAsByte<E_HoverSkiffBeamState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_HoverSkiffBeamState> PreviousState                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::OnSkiffBeamStateChanged(TEnumAsByte<E_HoverSkiffBeamState> NewState, TEnumAsByte<E_HoverSkiffBeamState> PreviousState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnSkiffBeamStateChanged");

	ATekHoverSkiff_Character_BP_C_OnSkiffBeamStateChanged_Params params;
	params.NewState = NewState;
	params.PreviousState = PreviousState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetSkiffBeamState
// ()
// Parameters:
// TEnumAsByte<E_HoverSkiffBeamState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::NetSetSkiffBeamState(TEnumAsByte<E_HoverSkiffBeamState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.NetSetSkiffBeamState");

	ATekHoverSkiff_Character_BP_C_NetSetSkiffBeamState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOverrideCameraViewTarget
// (NetReliable, NetRequest, Event, NetResponse, Static, Private, Delegate, NetServer, HasDefaults, BlueprintEvent)
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

void ATekHoverSkiff_Character_BP_C::STATIC_BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOverrideCameraViewTarget");

	ATekHoverSkiff_Character_BP_C_BPOverrideCameraViewTarget_Params params;
	params.CurrentCameraMode = CurrentCameraMode;
	params.DesiredCameraLocation = DesiredCameraLocation;
	params.DesiredCameraRotation = DesiredCameraRotation;
	params.DesiredFOV = DesiredFOV;

	auto flags = fn->FunctionFlags;

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


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsRetractBeamPressed
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::IsRetractBeamPressed(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsRetractBeamPressed");

	ATekHoverSkiff_Character_BP_C_IsRetractBeamPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsShootBeamPressed
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::IsShootBeamPressed(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsShootBeamPressed");

	ATekHoverSkiff_Character_BP_C_IsShootBeamPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetOverrideCameraInterpSpeed
// ()
// Parameters:
// float*                         DefaultTPVCameraSpeedInterpolationMultiplier (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DefaultTPVOffsetInterpSpeed    (Parm, ZeroConstructor, IsPlainOldData)
// float                          TPVCameraSpeedInterpolationMultiplier (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TPVOffsetInterpSpeed           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetOverrideCameraInterpSpeed");

	ATekHoverSkiff_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params params;
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


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_GetCustomModifier_RotationRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATekHoverSkiff_Character_BP_C::BP_GetCustomModifier_RotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BP_GetCustomModifier_RotationRate");

	ATekHoverSkiff_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOverrideFlyingVelocity
// (NetRequest, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ATekHoverSkiff_Character_BP_C::BPOverrideFlyingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPOverrideFlyingVelocity");

	ATekHoverSkiff_Character_BP_C_BPOverrideFlyingVelocity_Params params;
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


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetCrosshairColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor ATekHoverSkiff_Character_BP_C::BPGetCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPGetCrosshairColor");

	ATekHoverSkiff_Character_BP_C_BPGetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamTurretOpening
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::IsBeamTurretOpening(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamTurretOpening");

	ATekHoverSkiff_Character_BP_C_IsBeamTurretOpening_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamActive
// ()
// Parameters:
// bool                           bIncludeActivating             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::IsBeamActive(bool bIncludeActivating, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamActive");

	ATekHoverSkiff_Character_BP_C_IsBeamActive_Params params;
	params.bIncludeActivating = bIncludeActivating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Is Beam Moving
// ()
// Parameters:
// bool                           IsBeamMoving                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Is_Beam_Moving(bool* IsBeamMoving)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Is Beam Moving");

	ATekHoverSkiff_Character_BP_C_Is_Beam_Moving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsBeamMoving != nullptr)
		*IsBeamMoving = params.IsBeamMoving;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamRetracting
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::IsBeamRetracting(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.IsBeamRetracting");

	ATekHoverSkiff_Character_BP_C_IsBeamRetracting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanBeamLock
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::CanBeamLock(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanBeamLock");

	ATekHoverSkiff_Character_BP_C_CanBeamLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_BeamSearch
// ()

void ATekHoverSkiff_Character_BP_C::Tick_BeamSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_BeamSearch");

	ATekHoverSkiff_Character_BP_C_Tick_BeamSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Can Instantly Grab Character
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanInstantlyGrab               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Can_Instantly_Grab_Character(class APrimalCharacter* Character, bool* CanInstantlyGrab)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Can Instantly Grab Character");

	ATekHoverSkiff_Character_BP_C_Can_Instantly_Grab_Character_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanInstantlyGrab != nullptr)
		*CanInstantlyGrab = params.CanInstantlyGrab;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanMoveBeam
// ()
// Parameters:
// bool                           bForStart                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::CanMoveBeam(bool bForStart, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanMoveBeam");

	ATekHoverSkiff_Character_BP_C_CanMoveBeam_Params params;
	params.bForStart = bForStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Beam StartPointExternal
// ()
// Parameters:
// bool                           bAdjustForCarriedChar          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BeamStartPoint                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Get_Beam_StartPointExternal(bool bAdjustForCarriedChar, struct FVector* BeamStartPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Beam StartPointExternal");

	ATekHoverSkiff_Character_BP_C_Get_Beam_StartPointExternal_Params params;
	params.bAdjustForCarriedChar = bAdjustForCarriedChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BeamStartPoint != nullptr)
		*BeamStartPoint = params.BeamStartPoint;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamEndPoint_External
// ()
// Parameters:
// struct FVector                 BeamEndPoint                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::GetBeamEndPoint_External(struct FVector* BeamEndPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetBeamEndPoint_External");

	ATekHoverSkiff_Character_BP_C_GetBeamEndPoint_External_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BeamEndPoint != nullptr)
		*BeamEndPoint = params.BeamEndPoint;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Update Beam Visuals
// (NetReliable, Exec, Native, Event, NetResponse, Private, Delegate, NetServer, HasDefaults, BlueprintEvent)

void ATekHoverSkiff_Character_BP_C::Update_Beam_Visuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Update Beam Visuals");

	ATekHoverSkiff_Character_BP_C_Update_Beam_Visuals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanLookForTargets
// ()
// Parameters:
// bool                           canLook                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::CanLookForTargets(bool* canLook)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanLookForTargets");

	ATekHoverSkiff_Character_BP_C_CanLookForTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canLook != nullptr)
		*canLook = params.canLook;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanUseBeam
// ()
// Parameters:
// bool                           bForStart                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanUse                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::CanUseBeam(bool bForStart, bool* bCanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanUseBeam");

	ATekHoverSkiff_Character_BP_C_CanUseBeam_Params params;
	params.bForStart = bForStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanUse != nullptr)
		*bCanUse = params.bCanUse;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPModifyDesiredRotation
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                InDesiredRotation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                OutDesiredRotation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_C::BPModifyDesiredRotation(float* DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPModifyDesiredRotation");

	ATekHoverSkiff_Character_BP_C_BPModifyDesiredRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InDesiredRotation != nullptr)
		*InDesiredRotation = params.InDesiredRotation;
	if (OutDesiredRotation != nullptr)
		*OutDesiredRotation = params.OutDesiredRotation;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCharacterAttachedToBeam
// ()
// Parameters:
// class APrimalCharacter*        theChar                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bHasCharAttached               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::GetCharacterAttachedToBeam(class APrimalCharacter** theChar, bool* bHasCharAttached)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.GetCharacterAttachedToBeam");

	ATekHoverSkiff_Character_BP_C_GetCharacterAttachedToBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (theChar != nullptr)
		*theChar = params.theChar;
	if (bHasCharAttached != nullptr)
		*bHasCharAttached = params.bHasCharAttached;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetForceSkiffDescend
// ()
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::SetForceSkiffDescend(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetForceSkiffDescend");

	ATekHoverSkiff_Character_BP_C_SetForceSkiffDescend_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetBeamCharLocation
// (NetReliable, Exec, NetMulticast, Private, Delegate, NetServer, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRelativeSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplicate                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::SetBeamCharLocation(const struct FVector& Location, bool bRelativeSpace, bool bReplicate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetBeamCharLocation");

	ATekHoverSkiff_Character_BP_C_SetBeamCharLocation_Params params;
	params.Location = Location;
	params.bRelativeSpace = bRelativeSpace;
	params.bReplicate = bReplicate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TraceForBeamEndPoint
// (NetReliable, Native, Event, NetMulticast, Private, Delegate, NetServer, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 NewBeamEnd                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bHitObstacle                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::TraceForBeamEndPoint(struct FVector* NewBeamEnd, bool* bHitObstacle)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.TraceForBeamEndPoint");

	ATekHoverSkiff_Character_BP_C_TraceForBeamEndPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewBeamEnd != nullptr)
		*NewBeamEnd = params.NewBeamEnd;
	if (bHitObstacle != nullptr)
		*bHitObstacle = params.bHitObstacle;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManipulateBeam
// ()

void ATekHoverSkiff_Character_BP_C::Tick_ManipulateBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Tick_ManipulateBeam");

	ATekHoverSkiff_Character_BP_C_Tick_ManipulateBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get BeamEndPoint
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Private, Delegate, NetServer, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 LaserEndPoint                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::STATIC_Get_BeamEndPoint(struct FVector* LaserEndPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get BeamEndPoint");

	ATekHoverSkiff_Character_BP_C_Get_BeamEndPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LaserEndPoint != nullptr)
		*LaserEndPoint = params.LaserEndPoint;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Update Beam Particles End Point
// ()

void ATekHoverSkiff_Character_BP_C::Update_Beam_Particles_End_Point()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Update Beam Particles End Point");

	ATekHoverSkiff_Character_BP_C_Update_Beam_Particles_End_Point_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Find BeamTarget
// (Exec, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasDefaults, BlueprintEvent)
// Parameters:
// class APrimalCharacter*        foundPawn                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::STATIC_Find_BeamTarget(class APrimalCharacter** foundPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Find BeamTarget");

	ATekHoverSkiff_Character_BP_C_Find_BeamTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (foundPawn != nullptr)
		*foundPawn = params.foundPawn;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.StopHovering
// ()

void ATekHoverSkiff_Character_BP_C::StopHovering()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.StopHovering");

	ATekHoverSkiff_Character_BP_C_StopHovering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetTimerIntervals
// ()
// Parameters:
// bool                           Fast                           (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::SetTimerIntervals(bool Fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.SetTimerIntervals");

	ATekHoverSkiff_Character_BP_C_SetTimerIntervals_Params params;
	params.Fast = Fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPShouldLimitForwardDirection
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_C::BPShouldLimitForwardDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPShouldLimitForwardDirection");

	ATekHoverSkiff_Character_BP_C_BPShouldLimitForwardDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPModifyForwardDirectionInput
// ()
// Parameters:
// struct FVector                 directionInput                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ATekHoverSkiff_Character_BP_C::BPModifyForwardDirectionInput(struct FVector* directionInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPModifyForwardDirectionInput");

	ATekHoverSkiff_Character_BP_C_BPModifyForwardDirectionInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (directionInput != nullptr)
		*directionInput = params.directionInput;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPNotifyClearRider");

	ATekHoverSkiff_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Update Beam BoneRotation
// ()
// Parameters:
// struct FVector                 NewEndPoint                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reset                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ResetRotation                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Update_Beam_BoneRotation(const struct FVector& NewEndPoint, bool Reset, const struct FRotator& ResetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Update Beam BoneRotation");

	ATekHoverSkiff_Character_BP_C_Update_Beam_BoneRotation_Params params;
	params.NewEndPoint = NewEndPoint;
	params.Reset = Reset;
	params.ResetRotation = ResetRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Beam Start Point
// (NetReliable, NetResponse, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// bool                           bAdjustForCarriedChar          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LaserStartPoint                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Get_Beam_Start_Point(bool bAdjustForCarriedChar, struct FVector* LaserStartPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Get Beam Start Point");

	ATekHoverSkiff_Character_BP_C_Get_Beam_Start_Point_Params params;
	params.bAdjustForCarriedChar = bAdjustForCarriedChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LaserStartPoint != nullptr)
		*LaserStartPoint = params.LaserStartPoint;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartSearching
// ()

void ATekHoverSkiff_Character_BP_C::OnBeamStartSearching()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnBeamStartSearching");

	ATekHoverSkiff_Character_BP_C_OnBeamStartSearching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CalculateBeamViewTracePoints
// ()
// Parameters:
// bool                           bUseCurrentBeamLength          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ViewStart                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ViewEnd                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::CalculateBeamViewTracePoints(bool bUseCurrentBeamLength, struct FVector* ViewStart, struct FVector* ViewEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CalculateBeamViewTracePoints");

	ATekHoverSkiff_Character_BP_C_CalculateBeamViewTracePoints_Params params;
	params.bUseCurrentBeamLength = bUseCurrentBeamLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewStart != nullptr)
		*ViewStart = params.ViewStart;
	if (ViewEnd != nullptr)
		*ViewEnd = params.ViewEnd;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ClearAllBeamChars
// ()
// Parameters:
// bool                           bOnlyClearBeamingChar          (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::ClearAllBeamChars(bool bOnlyClearBeamingChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ClearAllBeamChars");

	ATekHoverSkiff_Character_BP_C_ClearAllBeamChars_Params params;
	params.bOnlyClearBeamingChar = bOnlyClearBeamingChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanBeamGrabCharacter
// (NetRequest, Native, Event, Static, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class APrimalCharacter*        forChar                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreventTraces                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::STATIC_CanBeamGrabCharacter(class APrimalCharacter* forChar, bool bPreventTraces, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CanBeamGrabCharacter");

	ATekHoverSkiff_Character_BP_C_CanBeamGrabCharacter_Params params;
	params.forChar = forChar;
	params.bPreventTraces = bPreventTraces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPTimerServer
// ()

void ATekHoverSkiff_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPTimerServer");

	ATekHoverSkiff_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPTimerNonDedicated
// ()

void ATekHoverSkiff_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPTimerNonDedicated");

	ATekHoverSkiff_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnStartActivatingBeam
// ()

void ATekHoverSkiff_Character_BP_C::OnStartActivatingBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnStartActivatingBeam");

	ATekHoverSkiff_Character_BP_C_OnStartActivatingBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnCloseBeamTurret
// ()

void ATekHoverSkiff_Character_BP_C::OnCloseBeamTurret()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.OnCloseBeamTurret");

	ATekHoverSkiff_Character_BP_C_OnCloseBeamTurret_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UserConstructionScript
// ()

void ATekHoverSkiff_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.UserConstructionScript");

	ATekHoverSkiff_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181");

	ATekHoverSkiff_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.InterceptInputEvent
// ()
// Parameters:
// class FString*                 InputName                      (Parm, ZeroConstructor)

void ATekHoverSkiff_Character_BP_C::InterceptInputEvent(class FString* InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.InterceptInputEvent");

	ATekHoverSkiff_Character_BP_C_InterceptInputEvent_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_RequestBraking
// ()

void ATekHoverSkiff_Character_BP_C::Server_RequestBraking()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_RequestBraking");

	ATekHoverSkiff_Character_BP_C_Server_RequestBraking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveBeginPlay
// ()

void ATekHoverSkiff_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ReceiveBeginPlay");

	ATekHoverSkiff_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPUnstasis
// ()

void ATekHoverSkiff_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.BPUnstasis");

	ATekHoverSkiff_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffBeamStateChanged
// ()
// Parameters:
// TEnumAsByte<E_HoverSkiffBeamState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_HoverSkiffBeamState> PreviousState                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Multi_OnSkiffBeamStateChanged(TEnumAsByte<E_HoverSkiffBeamState> NewState, TEnumAsByte<E_HoverSkiffBeamState> PreviousState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffBeamStateChanged");

	ATekHoverSkiff_Character_BP_C_Multi_OnSkiffBeamStateChanged_Params params;
	params.NewState = NewState;
	params.PreviousState = PreviousState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetSkiffBeamState
// ()
// Parameters:
// TEnumAsByte<E_HoverSkiffBeamState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Server_SetSkiffBeamState(TEnumAsByte<E_HoverSkiffBeamState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetSkiffBeamState");

	ATekHoverSkiff_Character_BP_C_Server_SetSkiffBeamState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Timer_DoActivateBeam
// ()

void ATekHoverSkiff_Character_BP_C::Timer_DoActivateBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Timer_DoActivateBeam");

	ATekHoverSkiff_Character_BP_C_Timer_DoActivateBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Timer_DoDeactivateBeam
// ()

void ATekHoverSkiff_Character_BP_C::Timer_DoDeactivateBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Timer_DoDeactivateBeam");

	ATekHoverSkiff_Character_BP_C_Timer_DoDeactivateBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnStartSkiffLanding
// ()
// Parameters:
// bool                           bLanding                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Multi_OnStartSkiffLanding(bool bLanding)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnStartSkiffLanding");

	ATekHoverSkiff_Character_BP_C_Multi_OnStartSkiffLanding_Params params;
	params.bLanding = bLanding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffSetFlight
// ()
// Parameters:
// bool                           bFly                           (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Multi_OnSkiffSetFlight(bool bFly)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffSetFlight");

	ATekHoverSkiff_Character_BP_C_Multi_OnSkiffSetFlight_Params params;
	params.bFly = bFly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SyncMovementInputs
// ()
// Parameters:
// struct FVector                 MoveInputs                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Server_SyncMovementInputs(const struct FVector& MoveInputs)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SyncMovementInputs");

	ATekHoverSkiff_Character_BP_C_Server_SyncMovementInputs_Params params;
	params.MoveInputs = MoveInputs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetBeamCameraLockState
// ()
// Parameters:
// bool                           bLocked                        (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Server_SetBeamCameraLockState(bool bLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetBeamCameraLockState");

	ATekHoverSkiff_Character_BP_C_Server_SetBeamCameraLockState_Params params;
	params.bLocked = bLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnBeamGrabCharacter
// ()
// Parameters:
// struct FVector                 GrabRelativeLocation           (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Multi_OnBeamGrabCharacter(const struct FVector& GrabRelativeLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnBeamGrabCharacter");

	ATekHoverSkiff_Character_BP_C_Multi_OnBeamGrabCharacter_Params params;
	params.GrabRelativeLocation = GrabRelativeLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Timer_DoOpenBeam
// ()

void ATekHoverSkiff_Character_BP_C::Timer_DoOpenBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Timer_DoOpenBeam");

	ATekHoverSkiff_Character_BP_C_Timer_DoOpenBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_ToggleCameraLocked
// ()
// Parameters:
// bool                           IsCameraLocked                 (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Multi_ToggleCameraLocked(bool IsCameraLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_ToggleCameraLocked");

	ATekHoverSkiff_Character_BP_C_Multi_ToggleCameraLocked_Params params;
	params.IsCameraLocked = IsCameraLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_OnFireInputPressed
// ()
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Server_OnFireInputPressed(bool bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_OnFireInputPressed");

	ATekHoverSkiff_Character_BP_C_Server_OnFireInputPressed_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_OnTargetingInputPressed
// ()
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Server_OnTargetingInputPressed(bool bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_OnTargetingInputPressed");

	ATekHoverSkiff_Character_BP_C_Server_OnTargetingInputPressed_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffStartedCrashing
// ()

void ATekHoverSkiff_Character_BP_C::Multi_OnSkiffStartedCrashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffStartedCrashing");

	ATekHoverSkiff_Character_BP_C_Multi_OnSkiffStartedCrashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffCrash
// ()
// Parameters:
// bool                           bFromImpact                    (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Multi_OnSkiffCrash(bool bFromImpact)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffCrash");

	ATekHoverSkiff_Character_BP_C_Multi_OnSkiffCrash_Params params;
	params.bFromImpact = bFromImpact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DestroySkiff
// ()

void ATekHoverSkiff_Character_BP_C::DestroySkiff()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.DestroySkiff");

	ATekHoverSkiff_Character_BP_C_DestroySkiff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CrashTimeout
// ()

void ATekHoverSkiff_Character_BP_C::CrashTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.CrashTimeout");

	ATekHoverSkiff_Character_BP_C_CrashTimeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnBeamStartGrabbingChar
// ()

void ATekHoverSkiff_Character_BP_C::Multi_OnBeamStartGrabbingChar()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnBeamStartGrabbingChar");

	ATekHoverSkiff_Character_BP_C_Multi_OnBeamStartGrabbingChar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_SetBeamCharLocation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRelativeSpace                 (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Multi_SetBeamCharLocation(const struct FVector& Location, bool bRelativeSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_SetBeamCharLocation");

	ATekHoverSkiff_Character_BP_C_Multi_SetBeamCharLocation_Params params;
	params.Location = Location;
	params.bRelativeSpace = bRelativeSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffHoverStateChanged
// ()
// Parameters:
// TEnumAsByte<E_HoverSkiffHoverState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_HoverSkiffHoverState> PreviousState                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Multi_OnSkiffHoverStateChanged(TEnumAsByte<E_HoverSkiffHoverState> NewState, TEnumAsByte<E_HoverSkiffHoverState> PreviousState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffHoverStateChanged");

	ATekHoverSkiff_Character_BP_C_Multi_OnSkiffHoverStateChanged_Params params;
	params.NewState = NewState;
	params.PreviousState = PreviousState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetSkiffHoverState
// ()
// Parameters:
// TEnumAsByte<E_HoverSkiffHoverState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Server_SetSkiffHoverState(TEnumAsByte<E_HoverSkiffHoverState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetSkiffHoverState");

	ATekHoverSkiff_Character_BP_C_Server_SetSkiffHoverState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffFailedTakeoff
// ()

void ATekHoverSkiff_Character_BP_C::Multi_OnSkiffFailedTakeoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffFailedTakeoff");

	ATekHoverSkiff_Character_BP_C_Multi_OnSkiffFailedTakeoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_ToggleHeadlights
// ()

void ATekHoverSkiff_Character_BP_C::Server_ToggleHeadlights()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_ToggleHeadlights");

	ATekHoverSkiff_Character_BP_C_Server_ToggleHeadlights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_ToggleHeadlights
// ()

void ATekHoverSkiff_Character_BP_C::Multi_ToggleHeadlights()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_ToggleHeadlights");

	ATekHoverSkiff_Character_BP_C_Multi_ToggleHeadlights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_TryBeamGrab
// ()

void ATekHoverSkiff_Character_BP_C::Server_TryBeamGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_TryBeamGrab");

	ATekHoverSkiff_Character_BP_C_Server_TryBeamGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnTriedBeamGrab
// ()
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Multi_OnTriedBeamGrab(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnTriedBeamGrab");

	ATekHoverSkiff_Character_BP_C_Multi_OnTriedBeamGrab_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.FlashBeam
// ()

void ATekHoverSkiff_Character_BP_C::FlashBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.FlashBeam");

	ATekHoverSkiff_Character_BP_C_FlashBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_OnTriedBeamGrab
// ()
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Server_OnTriedBeamGrab(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_OnTriedBeamGrab");

	ATekHoverSkiff_Character_BP_C_Server_OnTriedBeamGrab_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffRepairModeStateChanged
// ()
// Parameters:
// bool                           bNewState                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Multi_OnSkiffRepairModeStateChanged(bool bNewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_OnSkiffRepairModeStateChanged");

	ATekHoverSkiff_Character_BP_C_Multi_OnSkiffRepairModeStateChanged_Params params;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_SyncFuelPercent
// ()
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Multi_SyncFuelPercent(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Multi_SyncFuelPercent");

	ATekHoverSkiff_Character_BP_C_Multi_SyncFuelPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetSkiffFlight
// ()
// Parameters:
// bool                           NewFlight                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::Server_SetSkiffFlight(bool NewFlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_SetSkiffFlight");

	ATekHoverSkiff_Character_BP_C_Server_SetSkiffFlight_Params params;
	params.NewFlight = NewFlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_StartSkiffLanding
// ()

void ATekHoverSkiff_Character_BP_C::Server_StartSkiffLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.Server_StartSkiffLanding");

	ATekHoverSkiff_Character_BP_C_Server_StartSkiffLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ExecuteUbergraph_TekHoverSkiff_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_C::ExecuteUbergraph_TekHoverSkiff_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C.ExecuteUbergraph_TekHoverSkiff_Character_BP");

	ATekHoverSkiff_Character_BP_C_ExecuteUbergraph_TekHoverSkiff_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

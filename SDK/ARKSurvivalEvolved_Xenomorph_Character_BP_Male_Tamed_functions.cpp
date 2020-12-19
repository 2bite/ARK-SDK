// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Character_BP_Male_Tamed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_Tamed_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPNotifySetRider");

	AXenomorph_Character_BP_Male_Tamed_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPTimerNonDedicated
// ()

void AXenomorph_Character_BP_Male_Tamed_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPTimerNonDedicated");

	AXenomorph_Character_BP_Male_Tamed_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPCharacterSleeped
// ()

void AXenomorph_Character_BP_Male_Tamed_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPCharacterSleeped");

	AXenomorph_Character_BP_Male_Tamed_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_Tamed_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPOnMovementModeChangedNotify");

	AXenomorph_Character_BP_Male_Tamed_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_Tamed_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPNotifyClearRider");

	AXenomorph_Character_BP_Male_Tamed_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Server Stop Jump
// ()

void AXenomorph_Character_BP_Male_Tamed_C::Server_Stop_Jump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Server Stop Jump");

	AXenomorph_Character_BP_Male_Tamed_C_Server_Stop_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_Tamed_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BPDoAttack");

	AXenomorph_Character_BP_Male_Tamed_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.GetLaunchDirection
// ()
// Parameters:
// class AActor*                  CalcActor                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AXenomorph_Character_BP_Male_Tamed_C::GetLaunchDirection(class AActor* CalcActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.GetLaunchDirection");

	AXenomorph_Character_BP_Male_Tamed_C_GetLaunchDirection_Params params;
	params.CalcActor = CalcActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.LaunchAtTracePoint
// ()

void AXenomorph_Character_BP_Male_Tamed_C::LaunchAtTracePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.LaunchAtTracePoint");

	AXenomorph_Character_BP_Male_Tamed_C_LaunchAtTracePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Process Launch
// ()

void AXenomorph_Character_BP_Male_Tamed_C::Process_Launch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Process Launch");

	AXenomorph_Character_BP_Male_Tamed_C_Process_Launch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ProcessJump
// ()

void AXenomorph_Character_BP_Male_Tamed_C::ProcessJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ProcessJump");

	AXenomorph_Character_BP_Male_Tamed_C_ProcessJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Jump Trace
// (NetReliable, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)

void AXenomorph_Character_BP_Male_Tamed_C::STATIC_Jump_Trace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Jump Trace");

	AXenomorph_Character_BP_Male_Tamed_C_Jump_Trace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ShouldStopJumpRotation
// ()
// Parameters:
// bool                           return_value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_Tamed_C::ShouldStopJumpRotation(bool* return_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ShouldStopJumpRotation");

	AXenomorph_Character_BP_Male_Tamed_C_ShouldStopJumpRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (return_value != nullptr)
		*return_value = params.return_value;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ShortestAngleDistance
// ()
// Parameters:
// float                          AngleCurrent                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Difference                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_Tamed_C::ShortestAngleDistance(float AngleCurrent, float AngleTarget, float* Difference)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ShortestAngleDistance");

	AXenomorph_Character_BP_Male_Tamed_C_ShortestAngleDistance_Params params;
	params.AngleCurrent = AngleCurrent;
	params.AngleTarget = AngleTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difference != nullptr)
		*Difference = params.Difference;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.GetClampedLookDir
// ()
// Parameters:
// bool                           LimitLowerPitch                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AXenomorph_Character_BP_Male_Tamed_C::GetClampedLookDir(bool LimitLowerPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.GetClampedLookDir");

	AXenomorph_Character_BP_Male_Tamed_C_GetClampedLookDir_Params params;
	params.LimitLowerPitch = LimitLowerPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.UserConstructionScript
// ()

void AXenomorph_Character_BP_Male_Tamed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.UserConstructionScript");

	AXenomorph_Character_BP_Male_Tamed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BP_OnJumpPressed
// ()

void AXenomorph_Character_BP_Male_Tamed_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BP_OnJumpPressed");

	AXenomorph_Character_BP_Male_Tamed_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BP_OnJumpReleased
// ()

void AXenomorph_Character_BP_Male_Tamed_C::BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.BP_OnJumpReleased");

	AXenomorph_Character_BP_Male_Tamed_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.DelayedPress
// ()

void AXenomorph_Character_BP_Male_Tamed_C::DelayedPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.DelayedPress");

	AXenomorph_Character_BP_Male_Tamed_C_DelayedPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Request Jump Response
// ()
// Parameters:
// bool                           isHoldingJump                  (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_Tamed_C::Request_Jump_Response(bool isHoldingJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Request Jump Response");

	AXenomorph_Character_BP_Male_Tamed_C_Request_Jump_Response_Params params;
	params.isHoldingJump = isHoldingJump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Multi_SetPreventMovement
// ()
// Parameters:
// bool                           NewPreventMovement             (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_Tamed_C::Multi_SetPreventMovement(bool NewPreventMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Multi_SetPreventMovement");

	AXenomorph_Character_BP_Male_Tamed_C_Multi_SetPreventMovement_Params params;
	params.NewPreventMovement = NewPreventMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.DelayedClearJumping
// ()

void AXenomorph_Character_BP_Male_Tamed_C::DelayedClearJumping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.DelayedClearJumping");

	AXenomorph_Character_BP_Male_Tamed_C_DelayedClearJumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Server_TraceTargetDir
// ()
// Parameters:
// struct FVector                 AimLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AimHit                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           JumpInstant                    (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_Tamed_C::Server_TraceTargetDir(const struct FVector& AimLoc, bool AimHit, bool JumpInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Server_TraceTargetDir");

	AXenomorph_Character_BP_Male_Tamed_C_Server_TraceTargetDir_Params params;
	params.AimLoc = AimLoc;
	params.AimHit = AimHit;
	params.JumpInstant = JumpInstant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.StartJumpIdle
// ()

void AXenomorph_Character_BP_Male_Tamed_C::StartJumpIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.StartJumpIdle");

	AXenomorph_Character_BP_Male_Tamed_C_StartJumpIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ClearJump
// ()
// Parameters:
// bool                           ForceImmediateClear            (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_Tamed_C::ClearJump(bool ForceImmediateClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ClearJump");

	AXenomorph_Character_BP_Male_Tamed_C_ClearJump_Params params;
	params.ForceImmediateClear = ForceImmediateClear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Multi_TraceTargetDir
// ()
// Parameters:
// struct FVector                 AimLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AimHit                         (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_Tamed_C::Multi_TraceTargetDir(const struct FVector& AimLoc, bool AimHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.Multi_TraceTargetDir");

	AXenomorph_Character_BP_Male_Tamed_C_Multi_TraceTargetDir_Params params;
	params.AimLoc = AimLoc;
	params.AimHit = AimHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.UpdateAllJumpRotation
// ()

void AXenomorph_Character_BP_Male_Tamed_C::UpdateAllJumpRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.UpdateAllJumpRotation");

	AXenomorph_Character_BP_Male_Tamed_C_UpdateAllJumpRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.UpdateJumpRotation
// ()

void AXenomorph_Character_BP_Male_Tamed_C::UpdateJumpRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.UpdateJumpRotation");

	AXenomorph_Character_BP_Male_Tamed_C_UpdateJumpRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.AnimNotify_JumpStart
// ()

void AXenomorph_Character_BP_Male_Tamed_C::AnimNotify_JumpStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.AnimNotify_JumpStart");

	AXenomorph_Character_BP_Male_Tamed_C_AnimNotify_JumpStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ServerArrestMovement
// ()

void AXenomorph_Character_BP_Male_Tamed_C::ServerArrestMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ServerArrestMovement");

	AXenomorph_Character_BP_Male_Tamed_C_ServerArrestMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ResetArrestMovement
// ()

void AXenomorph_Character_BP_Male_Tamed_C::ResetArrestMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ResetArrestMovement");

	AXenomorph_Character_BP_Male_Tamed_C_ResetArrestMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_Tamed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_Tamed_C::ExecuteUbergraph_Xenomorph_Character_BP_Male_Tamed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Tamed.Xenomorph_Character_BP_Male_Tamed_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_Tamed");

	AXenomorph_Character_BP_Male_Tamed_C_ExecuteUbergraph_Xenomorph_Character_BP_Male_Tamed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

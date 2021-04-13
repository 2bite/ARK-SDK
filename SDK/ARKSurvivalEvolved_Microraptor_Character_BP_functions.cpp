// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Microraptor_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.CheckForTargetOrDino
// (NetReliable, Native, NetResponse, Static, Private, HasDefaults, NetClient)

void AMicroraptor_Character_BP_C::STATIC_CheckForTargetOrDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.CheckForTargetOrDino");

	AMicroraptor_Character_BP_C_CheckForTargetOrDino_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMicroraptor_Character_BP_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPShouldForceFlee");

	AMicroraptor_Character_BP_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.ReturnToPlayer
// ()

void AMicroraptor_Character_BP_C::ReturnToPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.ReturnToPlayer");

	AMicroraptor_Character_BP_C_ReturnToPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMicroraptor_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.BlueprintCanRiderAttack");

	AMicroraptor_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.Add Z Velocity Toward Target
// ()

void AMicroraptor_Character_BP_C::Add_Z_Velocity_Toward_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.Add Z Velocity Toward Target");

	AMicroraptor_Character_BP_C_Add_Z_Velocity_Toward_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.SwapToCorrectAttackAnim
// (NetReliable, NetResponse, NetMulticast, Private, HasDefaults, NetClient)
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AMicroraptor_Character_BP_C::SwapToCorrectAttackAnim(int AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.SwapToCorrectAttackAnim");

	AMicroraptor_Character_BP_C_SwapToCorrectAttackAnim_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPCanTargetCorpse
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMicroraptor_Character_BP_C::BPCanTargetCorpse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPCanTargetCorpse");

	AMicroraptor_Character_BP_C_BPCanTargetCorpse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AMicroraptor_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPDoAttack");

	AMicroraptor_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPUnstasis
// ()

void AMicroraptor_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPUnstasis");

	AMicroraptor_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPOnSetMountedDino
// ()

void AMicroraptor_Character_BP_C::BPOnSetMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPOnSetMountedDino");

	AMicroraptor_Character_BP_C_BPOnSetMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.DinoShoulderMountedLaunch
// (NetReliable, Static, NetMulticast, Private, HasDefaults, NetClient)
// Parameters:
// struct FVector*                launchDir                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      throwingCharacter              (Parm, ZeroConstructor, IsPlainOldData)

void AMicroraptor_Character_BP_C::STATIC_DinoShoulderMountedLaunch(struct FVector* launchDir, class AShooterCharacter** throwingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.DinoShoulderMountedLaunch");

	AMicroraptor_Character_BP_C_DinoShoulderMountedLaunch_Params params;
	params.launchDir = launchDir;
	params.throwingCharacter = throwingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.Get Height Difference To Target
// ()
// Parameters:
// float                          HeightDifference               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsTargetValid                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMicroraptor_Character_BP_C::Get_Height_Difference_To_Target(float* HeightDifference, bool* IsTargetValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.Get Height Difference To Target");

	AMicroraptor_Character_BP_C_Get_Height_Difference_To_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HeightDifference != nullptr)
		*HeightDifference = params.HeightDifference;
	if (IsTargetValid != nullptr)
		*IsTargetValid = params.IsTargetValid;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMicroraptor_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.BlueprintCanAttack");

	AMicroraptor_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.OnLaunched
// ()
// Parameters:
// struct FVector*                LaunchVelocity                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bXYOverride                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bZOverride                     (Parm, ZeroConstructor, IsPlainOldData)

void AMicroraptor_Character_BP_C::OnLaunched(struct FVector* LaunchVelocity, bool* bXYOverride, bool* bZOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.OnLaunched");

	AMicroraptor_Character_BP_C_OnLaunched_Params params;
	params.LaunchVelocity = LaunchVelocity;
	params.bXYOverride = bXYOverride;
	params.bZOverride = bZOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.BlueprintAdjustOutputDamage
// (NetReliable, Exec, Native, MulticastDelegate, HasDefaults, NetClient)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMicroraptor_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.BlueprintAdjustOutputDamage");

	AMicroraptor_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
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


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.UserConstructionScript
// ()

void AMicroraptor_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.UserConstructionScript");

	AMicroraptor_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.EndGlide
// ()
// Parameters:
// bool                           Don_tSetPhysicsState           (Parm, ZeroConstructor, IsPlainOldData)

void AMicroraptor_Character_BP_C::EndGlide(bool Don_tSetPhysicsState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.EndGlide");

	AMicroraptor_Character_BP_C_EndGlide_Params params;
	params.Don_tSetPhysicsState = Don_tSetPhysicsState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.StartGlide
// ()

void AMicroraptor_Character_BP_C::StartGlide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.StartGlide");

	AMicroraptor_Character_BP_C_StartGlide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPTimerServer
// ()

void AMicroraptor_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPTimerServer");

	AMicroraptor_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.StartGlideAfterDelay
// ()
// Parameters:
// float                          DelayTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMicroraptor_Character_BP_C::StartGlideAfterDelay(float DelayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.StartGlideAfterDelay");

	AMicroraptor_Character_BP_C_StartGlideAfterDelay_Params params;
	params.DelayTime = DelayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.ResetAndAllowJump
// ()

void AMicroraptor_Character_BP_C::ResetAndAllowJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.ResetAndAllowJump");

	AMicroraptor_Character_BP_C_ResetAndAllowJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.StartRaptorJump
// ()

void AMicroraptor_Character_BP_C::StartRaptorJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.StartRaptorJump");

	AMicroraptor_Character_BP_C_StartRaptorJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.DelayedImpulse
// ()
// Parameters:
// class APrimalCharacter*        ImpulseTarget                  (Parm, ZeroConstructor, IsPlainOldData)

void AMicroraptor_Character_BP_C::DelayedImpulse(class APrimalCharacter* ImpulseTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.DelayedImpulse");

	AMicroraptor_Character_BP_C_DelayedImpulse_Params params;
	params.ImpulseTarget = ImpulseTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.AnimNotify_NonGlideJump
// ()

void AMicroraptor_Character_BP_C::AnimNotify_NonGlideJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.AnimNotify_NonGlideJump");

	AMicroraptor_Character_BP_C_AnimNotify_NonGlideJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Microraptor_Character_BP.Microraptor_Character_BP_C.ExecuteUbergraph_Microraptor_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMicroraptor_Character_BP_C::ExecuteUbergraph_Microraptor_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Microraptor_Character_BP.Microraptor_Character_BP_C.ExecuteUbergraph_Microraptor_Character_BP");

	AMicroraptor_Character_BP_C_ExecuteUbergraph_Microraptor_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deinonychus_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Los
// (NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::Los(const struct FVector& Start, const struct FVector& End, float Radius, class APrimalCharacter* Target, bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Los");

	ADeinonychus_Character_BP_C_Los_Params params;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnRep_UberpounceServerState
// ()

void ADeinonychus_Character_BP_C::OnRep_UberpounceServerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnRep_UberpounceServerState");

	ADeinonychus_Character_BP_C_OnRep_UberpounceServerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceSurface Normal Allows Sliding
// ()
// Parameters:
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           EndUberpounce                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::UberpounceSurface_Normal_Allows_Sliding(bool* Allowed, struct FVector* Direction, bool* EndUberpounce)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceSurface Normal Allows Sliding");

	ADeinonychus_Character_BP_C_UberpounceSurface_Normal_Allows_Sliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
	if (Direction != nullptr)
		*Direction = params.Direction;
	if (EndUberpounce != nullptr)
		*EndUberpounce = params.EndUberpounce;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPDoAttack");

	ADeinonychus_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsGroundRotation
// ()
// Parameters:
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsCeiling                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::IsGroundRotation(const struct FRotator& Rotation, bool* Result, bool* IsCeiling)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsGroundRotation");

	ADeinonychus_Character_BP_C_IsGroundRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (IsCeiling != nullptr)
		*IsCeiling = params.IsCeiling;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsPounceTarget
// ()
// Parameters:
// class APrimalCharacter**       Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::IsPounceTarget(class APrimalCharacter** Target, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsPounceTarget");

	ADeinonychus_Character_BP_C_IsPounceTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceCollisionCheck
// ()
// Parameters:
// bool                           RetHitSomething                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::UberpounceCollisionCheck(bool* RetHitSomething)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceCollisionCheck");

	ADeinonychus_Character_BP_C_UberpounceCollisionCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetHitSomething != nullptr)
		*RetHitSomething = params.RetHitSomething;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SpawnNestEgg
// (Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)

void ADeinonychus_Character_BP_C::STATIC_SpawnNestEgg()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SpawnNestEgg");

	ADeinonychus_Character_BP_C_SpawnNestEgg_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceLocationOffsetForSocket
// ()
// Parameters:
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::GetUberpounceLocationOffsetForSocket(const struct FRotator& Rotation, struct FVector* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceLocationOffsetForSocket");

	ADeinonychus_Character_BP_C_GetUberpounceLocationOffsetForSocket_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TerrainCheck
// (NetRequest, Exec, Native, NetResponse, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HitSomething                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::TerrainCheck(const struct FVector& Start, const struct FVector& End, float Radius, bool* HitSomething)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TerrainCheck");

	ADeinonychus_Character_BP_C_TerrainCheck_Params params;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitSomething != nullptr)
		*HitSomething = params.HitSomething;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsAnotherDeinonychusAttachedToSocket
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Socket                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::IsAnotherDeinonychusAttachedToSocket(class APrimalCharacter* Target, const struct FName& Socket, bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsAnotherDeinonychusAttachedToSocket");

	ADeinonychus_Character_BP_C_IsAnotherDeinonychusAttachedToSocket_Params params;
	params.Target = Target;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.AllowPlayMontage
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeinonychus_Character_BP_C::AllowPlayMontage(class UAnimMontage** AnimMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.AllowPlayMontage");

	ADeinonychus_Character_BP_C_AllowPlayMontage_Params params;
	params.AnimMontage = AnimMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnPounceTargetDodged
// ()
// Parameters:
// class APrimalCharacter**       Target                         (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::OnPounceTargetDodged(class APrimalCharacter** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnPounceTargetDodged");

	ADeinonychus_Character_BP_C_OnPounceTargetDodged_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPModifyAimOffsetNoTarget
// ()
// Parameters:
// struct FRotator                Aim                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ADeinonychus_Character_BP_C::BPModifyAimOffsetNoTarget(struct FRotator* Aim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPModifyAimOffsetNoTarget");

	ADeinonychus_Character_BP_C_BPModifyAimOffsetNoTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Aim != nullptr)
		*Aim = params.Aim;

	return params.ReturnValue;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Uberpounce Position Offset Curves
// ()
// Parameters:
// class UCurveFloat*             RetZOffset                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             RetXYMult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::Get_Uberpounce_Position_Offset_Curves(class UCurveFloat** RetZOffset, class UCurveFloat** RetXYMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Uberpounce Position Offset Curves");

	ADeinonychus_Character_BP_C_Get_Uberpounce_Position_Offset_Curves_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetZOffset != nullptr)
		*RetZOffset = params.RetZOffset;
	if (RetXYMult != nullptr)
		*RetXYMult = params.RetXYMult;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Has Latchable Surface in FrontOfDeinonychus
// (Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           RetSucccess                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FUberpounceData         RetResultUberpounceData        (Parm, OutParm)

void ADeinonychus_Character_BP_C::Has_Latchable_Surface_in_FrontOfDeinonychus(bool* RetSucccess, struct FUberpounceData* RetResultUberpounceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Has Latchable Surface in FrontOfDeinonychus");

	ADeinonychus_Character_BP_C_Has_Latchable_Surface_in_FrontOfDeinonychus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetSucccess != nullptr)
		*RetSucccess = params.RetSucccess;
	if (RetResultUberpounceData != nullptr)
		*RetResultUberpounceData = params.RetResultUberpounceData;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetInitialDamageOnUberpounceLatch
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::GetInitialDamageOnUberpounceLatch(class APrimalCharacter* Target, float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetInitialDamageOnUberpounceLatch");

	ADeinonychus_Character_BP_C_GetInitialDamageOnUberpounceLatch_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpunceStaminaCostOverTime
// ()
// Parameters:
// float                          StaminaCost                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::GetUberpunceStaminaCostOverTime(float* StaminaCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpunceStaminaCostOverTime");

	ADeinonychus_Character_BP_C_GetUberpunceStaminaCostOverTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaminaCost != nullptr)
		*StaminaCost = params.StaminaCost;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.DeductStamina
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SuccessfullyRemovedStamina     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::DeductStamina(float amount, bool* SuccessfullyRemovedStamina)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.DeductStamina");

	ADeinonychus_Character_BP_C_DeductStamina_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SuccessfullyRemovedStamina != nullptr)
		*SuccessfullyRemovedStamina = params.SuccessfullyRemovedStamina;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnPinnedBuffEnded
// ()
// Parameters:
// class APrimalCharacter**       BuffTarget                     (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::OnPinnedBuffEnded(class APrimalCharacter** BuffTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnPinnedBuffEnded");

	ADeinonychus_Character_BP_C_OnPinnedBuffEnded_Params params;
	params.BuffTarget = BuffTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ComputeJumpVector
// ()
// Parameters:
// struct FVector                 Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::ComputeJumpVector(struct FVector* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ComputeJumpVector");

	ADeinonychus_Character_BP_C_ComputeJumpVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.PushbackAfterPounceFn
// ()

void ADeinonychus_Character_BP_C::PushbackAfterPounceFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.PushbackAfterPounceFn");

	ADeinonychus_Character_BP_C_PushbackAfterPounceFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Latched Jump Launched
// ()

void ADeinonychus_Character_BP_C::Latched_Jump_Launched()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Latched Jump Launched");

	ADeinonychus_Character_BP_C_Latched_Jump_Launched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.LatchedJumpStart
// ()

void ADeinonychus_Character_BP_C::LatchedJumpStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.LatchedJumpStart");

	ADeinonychus_Character_BP_C_LatchedJumpStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ResetMeshRelativeRotation
// ()

void ADeinonychus_Character_BP_C::ResetMeshRelativeRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ResetMeshRelativeRotation");

	ADeinonychus_Character_BP_C_ResetMeshRelativeRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.JumpPressedAndHeldFn
// ()

void ADeinonychus_Character_BP_C::JumpPressedAndHeldFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.JumpPressedAndHeldFn");

	ADeinonychus_Character_BP_C_JumpPressedAndHeldFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CheckForFallingLatchFn
// (NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           AutoJumpAfterLatch             (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::STATIC_CheckForFallingLatchFn(bool AutoJumpAfterLatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CheckForFallingLatchFn");

	ADeinonychus_Character_BP_C_CheckForFallingLatchFn_Params params;
	params.AutoJumpAfterLatch = AutoJumpAfterLatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnDeinonychusLatchedAttack
// ()

void ADeinonychus_Character_BP_C::OnDeinonychusLatchedAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnDeinonychusLatchedAttack");

	ADeinonychus_Character_BP_C_OnDeinonychusLatchedAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.AllowSurfaceNormalForUberpounce
// ()
// Parameters:
// struct FVector                 SurfaceNormal                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::AllowSurfaceNormalForUberpounce(const struct FVector& SurfaceNormal, bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.AllowSurfaceNormalForUberpounce");

	ADeinonychus_Character_BP_C_AllowSurfaceNormalForUberpounce_Params params;
	params.SurfaceNormal = SurfaceNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TryAIBufferedUberpounce
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)

void ADeinonychus_Character_BP_C::STATIC_TryAIBufferedUberpounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TryAIBufferedUberpounce");

	ADeinonychus_Character_BP_C_TryAIBufferedUberpounce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SetQueuedUberpounceData
// ()
// Parameters:
// struct FUberpounceData         Data                           (Parm)

void ADeinonychus_Character_BP_C::SetQueuedUberpounceData(const struct FUberpounceData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SetQueuedUberpounceData");

	ADeinonychus_Character_BP_C_SetQueuedUberpounceData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Uberpounce Transform Public
// ()
// Parameters:
// struct FUberpounceData         UberpounceData                 (Parm)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsGroundSurface                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::Get_Uberpounce_Transform_Public(const struct FUberpounceData& UberpounceData, struct FVector* Location, struct FRotator* Rotation, bool* IsGroundSurface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Uberpounce Transform Public");

	ADeinonychus_Character_BP_C_Get_Uberpounce_Transform_Public_Params params;
	params.UberpounceData = UberpounceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (IsGroundSurface != nullptr)
		*IsGroundSurface = params.IsGroundSurface;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnUberpounceStateChanged
// ()
// Parameters:
// TEnumAsByte<EUberpounceState>  NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUberpounceState>  PrevState                      (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::OnUberpounceStateChanged(TEnumAsByte<EUberpounceState> NewState, TEnumAsByte<EUberpounceState> PrevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnUberpounceStateChanged");

	ADeinonychus_Character_BP_C_OnUberpounceStateChanged_Params params;
	params.NewState = NewState;
	params.PrevState = PrevState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SetUberpounceState
// ()
// Parameters:
// TEnumAsByte<EUberpounceState>  NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::SetUberpounceState(TEnumAsByte<EUberpounceState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SetUberpounceState");

	ADeinonychus_Character_BP_C_SetUberpounceState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.LatchedJump
// ()
// Parameters:
// float                          JumpStrength                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLatchedAutoJump              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WallHugDirection               (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::LatchedJump(float JumpStrength, bool IsLatchedAutoJump, const struct FVector& WallHugDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.LatchedJump");

	ADeinonychus_Character_BP_C_LatchedJump_Params params;
	params.JumpStrength = JumpStrength;
	params.IsLatchedAutoJump = IsLatchedAutoJump;
	params.WallHugDirection = WallHugDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsNonAuthoritativeClient
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::IsNonAuthoritativeClient(bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsNonAuthoritativeClient");

	ADeinonychus_Character_BP_C_IsNonAuthoritativeClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SendClientMovementAdjustments
// ()

void ADeinonychus_Character_BP_C::SendClientMovementAdjustments()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SendClientMovementAdjustments");

	ADeinonychus_Character_BP_C_SendClientMovementAdjustments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsDebugModeNonAuthoritativeClient
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::IsDebugModeNonAuthoritativeClient(bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsDebugModeNonAuthoritativeClient");

	ADeinonychus_Character_BP_C_IsDebugModeNonAuthoritativeClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ReceiveTick
// (NetReliable, Native, Event, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ReceiveTick");

	ADeinonychus_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StartUberpounceFromFalling
// ()
// Parameters:
// struct FUberpounceData         Data                           (Parm)

void ADeinonychus_Character_BP_C::StartUberpounceFromFalling(const struct FUberpounceData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StartUberpounceFromFalling");

	ADeinonychus_Character_BP_C_StartUberpounceFromFalling_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ClearQueuedData
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)

void ADeinonychus_Character_BP_C::ClearQueuedData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ClearQueuedData");

	ADeinonychus_Character_BP_C_ClearQueuedData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.DeinonychusOnJumpReleased
// (Native, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           QueryOnly                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FUberpounceData         UberpounceData                 (Parm, OutParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        RaptorPounceTarget             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::STATIC_DeinonychusOnJumpReleased(bool QueryOnly, struct FUberpounceData* UberpounceData, bool* Result, class APrimalCharacter** RaptorPounceTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.DeinonychusOnJumpReleased");

	ADeinonychus_Character_BP_C_DeinonychusOnJumpReleased_Params params;
	params.QueryOnly = QueryOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UberpounceData != nullptr)
		*UberpounceData = params.UberpounceData;
	if (Result != nullptr)
		*Result = params.Result;
	if (RaptorPounceTarget != nullptr)
		*RaptorPounceTarget = params.RaptorPounceTarget;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeinonychus_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPHandleControllerInitiatedAttack");

	ADeinonychus_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidGeoTypeForUberpounce
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::IsValidGeoTypeForUberpounce(class AActor* Actor, class UPrimitiveComponent* HitComponent, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidGeoTypeForUberpounce");

	ADeinonychus_Character_BP_C_IsValidGeoTypeForUberpounce_Params params;
	params.Actor = Actor;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPAdjustAttackIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADeinonychus_Character_BP_C::BPAdjustAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPAdjustAttackIndex");

	ADeinonychus_Character_BP_C_BPAdjustAttackIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CanTryUberpounce
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::CanTryUberpounce(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CanTryUberpounce");

	ADeinonychus_Character_BP_C_CanTryUberpounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ResetMeshRelativeLocation
// (NetReliable, NetRequest, Native, Event, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)

void ADeinonychus_Character_BP_C::ResetMeshRelativeLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ResetMeshRelativeLocation");

	ADeinonychus_Character_BP_C_ResetMeshRelativeLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    newMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 newCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* newMovementMode, unsigned char* PrevCustomMode, unsigned char* newCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.K2_OnMovementModeChanged");

	ADeinonychus_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.newMovementMode = newMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.newCustomMode = newCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_OnJumpPressed
// ()

void ADeinonychus_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_OnJumpPressed");

	ADeinonychus_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceFanTrace
// (NetReliable, NetRequest, Exec, Native, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// TArray<float>                  FanAngles                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FUberpounceData         ResultData                     (Parm, OutParm)

void ADeinonychus_Character_BP_C::STATIC_UberpounceFanTrace(const struct FVector& Direction, const struct FVector& Start, const struct FRotator& Rotation, TArray<float>* FanAngles, struct FUberpounceData* ResultData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceFanTrace");

	ADeinonychus_Character_BP_C_UberpounceFanTrace_Params params;
	params.Direction = Direction;
	params.Start = Start;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FanAngles != nullptr)
		*FanAngles = params.FanAngles;
	if (ResultData != nullptr)
		*ResultData = params.ResultData;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnError
// (Exec, Event, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class FString                  Msg                            (Parm, ZeroConstructor)

void ADeinonychus_Character_BP_C::OnError(const class FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnError");

	ADeinonychus_Character_BP_C_OnError_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ComputeBufferedUberpounce
// (Exec, Event, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FUberpounceData         CurrentUberpounceData          (Parm)
// struct FVector                 PreviousUberpounceStartLocation (Parm, ZeroConstructor, IsPlainOldData)
// struct FUberpounceData         ResultData                     (Parm, OutParm)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::STATIC_ComputeBufferedUberpounce(const struct FUberpounceData& CurrentUberpounceData, const struct FVector& PreviousUberpounceStartLocation, struct FUberpounceData* ResultData, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ComputeBufferedUberpounce");

	ADeinonychus_Character_BP_C_ComputeBufferedUberpounce_Params params;
	params.CurrentUberpounceData = CurrentUberpounceData;
	params.PreviousUberpounceStartLocation = PreviousUberpounceStartLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultData != nullptr)
		*ResultData = params.ResultData;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPOnDinoCheat
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPOnDinoCheat");

	ADeinonychus_Character_BP_C_BPOnDinoCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsUberpounceDataNearlyEqual
// ()
// Parameters:
// struct FUberpounceData         L                              (Parm)
// struct FUberpounceData         R                              (Parm)
// float                          FloatErrorTolerance            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::IsUberpounceDataNearlyEqual(const struct FUberpounceData& L, const struct FUberpounceData& R, float FloatErrorTolerance, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsUberpounceDataNearlyEqual");

	ADeinonychus_Character_BP_C_IsUberpounceDataNearlyEqual_Params params;
	params.L = L;
	params.R = R;
	params.FloatErrorTolerance = FloatErrorTolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.RidingTick
// (NetRequest, Exec, Native, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::RidingTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.RidingTick");

	ADeinonychus_Character_BP_C_RidingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPOverrideGetAttackAnimationIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADeinonychus_Character_BP_C::BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	ADeinonychus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CanJumpInternal
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeinonychus_Character_BP_C::CanJumpInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CanJumpInternal");

	ADeinonychus_Character_BP_C_CanJumpInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_OnJumpReleased
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)

void ADeinonychus_Character_BP_C::BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_OnJumpReleased");

	ADeinonychus_Character_BP_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnLanded
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ADeinonychus_Character_BP_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnLanded");

	ADeinonychus_Character_BP_C_OnLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C. Uberpounce Trace
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          InClosestTargetDistance        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TraceForLocations              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DeinonychusLocation            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                DeinonychusRotation            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DebugMode                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  TraceRadii                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           CheckDinoDotProduct            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DotProductCompareVector        (Parm, ZeroConstructor, IsPlainOldData)
// float                          DotProductThreshold            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DotProductLocation             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TraceForCharacters             (Parm, ZeroConstructor, IsPlainOldData)
// struct FUberpounceData         Result                         (Parm, OutParm)
// bool                           RetFoundTarget                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           RetTargetOutOfRange            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RetClosestTargetDistance       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            RetFoundIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::STATIC__Uberpounce_Trace(const struct FVector& Start, const struct FVector& End, float InClosestTargetDistance, bool TraceForLocations, const struct FVector& DeinonychusLocation, const struct FRotator& DeinonychusRotation, bool DebugMode, bool CheckDinoDotProduct, const struct FVector& DotProductCompareVector, float DotProductThreshold, const struct FVector& DotProductLocation, bool TraceForCharacters, TArray<float>* TraceRadii, struct FUberpounceData* Result, bool* RetFoundTarget, bool* RetTargetOutOfRange, float* RetClosestTargetDistance, int* RetFoundIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C. Uberpounce Trace");

	ADeinonychus_Character_BP_C__Uberpounce_Trace_Params params;
	params.Start = Start;
	params.End = End;
	params.InClosestTargetDistance = InClosestTargetDistance;
	params.TraceForLocations = TraceForLocations;
	params.DeinonychusLocation = DeinonychusLocation;
	params.DeinonychusRotation = DeinonychusRotation;
	params.DebugMode = DebugMode;
	params.CheckDinoDotProduct = CheckDinoDotProduct;
	params.DotProductCompareVector = DotProductCompareVector;
	params.DotProductThreshold = DotProductThreshold;
	params.DotProductLocation = DotProductLocation;
	params.TraceForCharacters = TraceForCharacters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TraceRadii != nullptr)
		*TraceRadii = params.TraceRadii;
	if (Result != nullptr)
		*Result = params.Result;
	if (RetFoundTarget != nullptr)
		*RetFoundTarget = params.RetFoundTarget;
	if (RetTargetOutOfRange != nullptr)
		*RetTargetOutOfRange = params.RetTargetOutOfRange;
	if (RetClosestTargetDistance != nullptr)
		*RetClosestTargetDistance = params.RetClosestTargetDistance;
	if (RetFoundIndex != nullptr)
		*RetFoundIndex = params.RetFoundIndex;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintDrawFloatingHUD");

	ADeinonychus_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetCurrentSocketLevel
// ()
// Parameters:
// class APrimalCharacter*        forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutLevel                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::GetCurrentSocketLevel(class APrimalCharacter* forCharacter, int* OutLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetCurrentSocketLevel");

	ADeinonychus_Character_BP_C_GetCurrentSocketLevel_Params params;
	params.forCharacter = forCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLevel != nullptr)
		*OutLevel = params.OutLevel;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Socket Level
// (Net, NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class FString                  SocketName                     (Parm, ZeroConstructor)
// int                            OutLevel                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::STATIC_Get_Socket_Level(const class FString& SocketName, int* OutLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Socket Level");

	ADeinonychus_Character_BP_C_Get_Socket_Level_Params params;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLevel != nullptr)
		*OutLevel = params.OutLevel;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.EnableTurnToFaceRotation
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeinonychus_Character_BP_C::EnableTurnToFaceRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.EnableTurnToFaceRotation");

	ADeinonychus_Character_BP_C_EnableTurnToFaceRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.FindScreenEdgeLocation
// (Net, NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EdgeMarginPct                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::STATIC_FindScreenEdgeLocation(const struct FVector& WorldLocation, float EdgeMarginPct, struct FVector2D* ScreenPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.FindScreenEdgeLocation");

	ADeinonychus_Character_BP_C_FindScreenEdgeLocation_Params params;
	params.WorldLocation = WorldLocation;
	params.EdgeMarginPct = EdgeMarginPct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenPosition != nullptr)
		*ScreenPosition = params.ScreenPosition;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetBleed HUDData for Character
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               WorldLocToScreenLoc            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenLoc                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ProgressBar                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  RetBuffCountString             (Parm, OutParm, ZeroConstructor)
// class FString                  DinoName                       (Parm, OutParm, ZeroConstructor)
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TextColor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::GetBleed_HUDData_for_Character(class APrimalCharacter* Character, int index, struct FVector2D* WorldLocToScreenLoc, struct FVector2D* ScreenLoc, float* ProgressBar, class FString* RetBuffCountString, class FString* DinoName, float* Scale, struct FLinearColor* TextColor, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetBleed HUDData for Character");

	ADeinonychus_Character_BP_C_GetBleed_HUDData_for_Character_Params params;
	params.Character = Character;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldLocToScreenLoc != nullptr)
		*WorldLocToScreenLoc = params.WorldLocToScreenLoc;
	if (ScreenLoc != nullptr)
		*ScreenLoc = params.ScreenLoc;
	if (ProgressBar != nullptr)
		*ProgressBar = params.ProgressBar;
	if (RetBuffCountString != nullptr)
		*RetBuffCountString = params.RetBuffCountString;
	if (DinoName != nullptr)
		*DinoName = params.DinoName;
	if (Scale != nullptr)
		*Scale = params.Scale;
	if (TextColor != nullptr)
		*TextColor = params.TextColor;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPDrawToRiderHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::BPDrawToRiderHUD(class AShooterHUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPDrawToRiderHUD");

	ADeinonychus_Character_BP_C_BPDrawToRiderHUD_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.RemoveBleed
// ()
// Parameters:
// class APrimalCharacter*        Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::RemoveBleed(class APrimalCharacter* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.RemoveBleed");

	ADeinonychus_Character_BP_C_RemoveBleed_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.AddBleed
// ()
// Parameters:
// class APrimalCharacter*        Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::AddBleed(class APrimalCharacter* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.AddBleed");

	ADeinonychus_Character_BP_C_AddBleed_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetDebugString
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class FString                  Output                         (Parm, OutParm, ZeroConstructor)

void ADeinonychus_Character_BP_C::GetDebugString(class FString* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetDebugString");

	ADeinonychus_Character_BP_C_GetDebugString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get RotationAndLocation for UberpounceOnSurface
// (NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SurfaceNormal                  (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DeinonychusLocation            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                RetRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RetLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::STATIC_Get_RotationAndLocation_for_UberpounceOnSurface(const struct FVector& Location, const struct FVector& SurfaceNormal, class UPrimitiveComponent* HitComponent, const struct FVector& DeinonychusLocation, struct FRotator* RetRotation, struct FVector* RetLocation, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get RotationAndLocation for UberpounceOnSurface");

	ADeinonychus_Character_BP_C_Get_RotationAndLocation_for_UberpounceOnSurface_Params params;
	params.Location = Location;
	params.SurfaceNormal = SurfaceNormal;
	params.HitComponent = HitComponent;
	params.DeinonychusLocation = DeinonychusLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetRotation != nullptr)
		*RetRotation = params.RetRotation;
	if (RetLocation != nullptr)
		*RetLocation = params.RetLocation;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidGeoLocationForUberpounce
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SurfaceNormal                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DeinonychusLocation            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                DeinonychusRotation            (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsGround                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::IsValidGeoLocationForUberpounce(const struct FVector& Location, const struct FVector& SurfaceNormal, class AActor* Actor, const struct FVector& DeinonychusLocation, const struct FRotator& DeinonychusRotation, class UPrimitiveComponent* HitComponent, bool* Result, bool* IsGround)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidGeoLocationForUberpounce");

	ADeinonychus_Character_BP_C_IsValidGeoLocationForUberpounce_Params params;
	params.Location = Location;
	params.SurfaceNormal = SurfaceNormal;
	params.Actor = Actor;
	params.DeinonychusLocation = DeinonychusLocation;
	params.DeinonychusRotation = DeinonychusRotation;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (IsGround != nullptr)
		*IsGround = params.IsGround;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_InterceptTurnInput
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeinonychus_Character_BP_C::BP_InterceptTurnInput(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_InterceptTurnInput");

	ADeinonychus_Character_BP_C_BP_InterceptTurnInput_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsUberpounceActive
// ()
// Parameters:
// bool                           Active                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::IsUberpounceActive(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsUberpounceActive");

	ADeinonychus_Character_BP_C_IsUberpounceActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Active != nullptr)
		*Active = params.Active;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPOverrideCameraViewTarget
// ()
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

void ADeinonychus_Character_BP_C::BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPOverrideCameraViewTarget");

	ADeinonychus_Character_BP_C_BPOverrideCameraViewTarget_Params params;
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


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceTransform
// ()
// Parameters:
// struct FUberpounceData         UberpounceData                 (Parm)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsGroundSurface                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::GetUberpounceTransform(const struct FUberpounceData& UberpounceData, struct FVector* Location, struct FRotator* Rotation, bool* IsGroundSurface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceTransform");

	ADeinonychus_Character_BP_C_GetUberpounceTransform_Params params;
	params.UberpounceData = UberpounceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (IsGroundSurface != nullptr)
		*IsGroundSurface = params.IsGroundSurface;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateAttachedUberpounceFn
// ()

void ADeinonychus_Character_BP_C::UpdateAttachedUberpounceFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateAttachedUberpounceFn");

	ADeinonychus_Character_BP_C_UpdateAttachedUberpounceFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SetUberpounceCollision
// ()
// Parameters:
// bool                           UberpounceActive               (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::SetUberpounceCollision(bool UberpounceActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SetUberpounceCollision");

	ADeinonychus_Character_BP_C_SetUberpounceCollision_Params params;
	params.UberpounceActive = UberpounceActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.DebugDrawRotator
// ()
// Parameters:
// struct FRotator                Rotator                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location_                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thinkness                      (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::DebugDrawRotator(const struct FRotator& Rotator, float DrawScale, const struct FVector& Location_, float Duration, float Thinkness)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.DebugDrawRotator");

	ADeinonychus_Character_BP_C_DebugDrawRotator_Params params;
	params.Rotator = Rotator;
	params.DrawScale = DrawScale;
	params.Location_ = Location_;
	params.Duration = Duration;
	params.Thinkness = Thinkness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceRotationFromSocket
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Socket                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::GetUberpounceRotationFromSocket(class APrimalCharacter* Target, const struct FName& Socket, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceRotationFromSocket");

	ADeinonychus_Character_BP_C_GetUberpounceRotationFromSocket_Params params;
	params.Target = Target;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StopUberpounceTargeting
// ()

void ADeinonychus_Character_BP_C::StopUberpounceTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StopUberpounceTargeting");

	ADeinonychus_Character_BP_C_StopUberpounceTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPNotifyClearRider");

	ADeinonychus_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPGetHUDElements
// (NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ADeinonychus_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPGetHUDElements");

	ADeinonychus_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.EndUberpounce
// (NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            MontageToPlayOnNonZeroVelocity (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::STATIC_EndUberpounce(const struct FVector& Velocity, class UAnimMontage* MontageToPlayOnNonZeroVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.EndUberpounce");

	ADeinonychus_Character_BP_C_EndUberpounce_Params params;
	params.Velocity = Velocity;
	params.MontageToPlayOnNonZeroVelocity = MontageToPlayOnNonZeroVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeinonychus_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_InterceptMoveForward");

	ADeinonychus_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_InterceptMoveRight
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeinonychus_Character_BP_C::BP_InterceptMoveRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_InterceptMoveRight");

	ADeinonychus_Character_BP_C_BP_InterceptMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberpounceFn
// (NetRequest, Native, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)

void ADeinonychus_Character_BP_C::STATIC_UpdateUberpounceFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberpounceFn");

	ADeinonychus_Character_BP_C_UpdateUberpounceFn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StartUberPounce
// (NetReliable, Event, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FUberpounceData         Data                           (Parm)

void ADeinonychus_Character_BP_C::StartUberPounce(const struct FUberpounceData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StartUberPounce");

	ADeinonychus_Character_BP_C_StartUberPounce_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Find BestUberpounce Socket on Character
// (NetReliable, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndTrace                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentClosestSocketDistance   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewClosestSocketDistance       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   RetTargetSocket                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMeshComponent*          RetTargetMesh                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           RetFoundSocket                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                RetTargetRotation              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::Find_BestUberpounce_Socket_on_Character(class APrimalCharacter* Character, const struct FVector& StartTrace, const struct FVector& EndTrace, float CurrentClosestSocketDistance, const struct FVector& ImpactLocation, float* NewClosestSocketDistance, struct FName* RetTargetSocket, class UMeshComponent** RetTargetMesh, bool* RetFoundSocket, struct FRotator* RetTargetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Find BestUberpounce Socket on Character");

	ADeinonychus_Character_BP_C_Find_BestUberpounce_Socket_on_Character_Params params;
	params.Character = Character;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;
	params.CurrentClosestSocketDistance = CurrentClosestSocketDistance;
	params.ImpactLocation = ImpactLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewClosestSocketDistance != nullptr)
		*NewClosestSocketDistance = params.NewClosestSocketDistance;
	if (RetTargetSocket != nullptr)
		*RetTargetSocket = params.RetTargetSocket;
	if (RetTargetMesh != nullptr)
		*RetTargetMesh = params.RetTargetMesh;
	if (RetFoundSocket != nullptr)
		*RetFoundSocket = params.RetFoundSocket;
	if (RetTargetRotation != nullptr)
		*RetTargetRotation = params.RetTargetRotation;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberPounceTargetingFn
// (NetRequest, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)

void ADeinonychus_Character_BP_C::STATIC_UpdateUberPounceTargetingFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberPounceTargetingFn");

	ADeinonychus_Character_BP_C_UpdateUberPounceTargetingFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPNotifySetRider");

	ADeinonychus_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TryStartUberPounceTargeting
// ()

void ADeinonychus_Character_BP_C::TryStartUberPounceTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TryStartUberPounceTargeting");

	ADeinonychus_Character_BP_C_TryStartUberPounceTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeinonychus_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintCanAttack");

	ADeinonychus_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeinonychus_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintCanRiderAttack");

	ADeinonychus_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintAnimNotifyCustomEvent
// (NetRequest, Exec, Event, NetResponse, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ADeinonychus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UserConstructionScript
// ()

void ADeinonychus_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UserConstructionScript");

	ADeinonychus_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_190
// ()

void ADeinonychus_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_190()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_190");

	ADeinonychus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_190_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_189
// ()

void ADeinonychus_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_189()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_189");

	ADeinonychus_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_189_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberPounceTargeting
// ()

void ADeinonychus_Character_BP_C::UpdateUberPounceTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberPounceTargeting");

	ADeinonychus_Character_BP_C_UpdateUberPounceTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberpounce
// ()

void ADeinonychus_Character_BP_C::UpdateUberpounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberpounce");

	ADeinonychus_Character_BP_C_UpdateUberpounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerEndUberpounce
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            MontageToPlayOnNonZeroVelocity (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::ServerEndUberpounce(const struct FVector& Velocity, class UAnimMontage* MontageToPlayOnNonZeroVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerEndUberpounce");

	ADeinonychus_Character_BP_C_ServerEndUberpounce_Params params;
	params.Velocity = Velocity;
	params.MontageToPlayOnNonZeroVelocity = MontageToPlayOnNonZeroVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateAttachedUberpounce
// ()

void ADeinonychus_Character_BP_C::UpdateAttachedUberpounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateAttachedUberpounce");

	ADeinonychus_Character_BP_C_UpdateAttachedUberpounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestUberpounce
// ()
// Parameters:
// struct FUberpounceData         QueuedUberpounceData           (Parm)
// bool                           QuickUberpounce                (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::ServerRequestUberpounce(const struct FUberpounceData& QueuedUberpounceData, bool QuickUberpounce)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestUberpounce");

	ADeinonychus_Character_BP_C_ServerRequestUberpounce_Params params;
	params.QueuedUberpounceData = QueuedUberpounceData;
	params.QuickUberpounce = QuickUberpounce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiEndUberpounce
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            MontageToPlayOnNonZeroVelocity (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::MultiEndUberpounce(const struct FVector& Velocity, class UAnimMontage* MontageToPlayOnNonZeroVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiEndUberpounce");

	ADeinonychus_Character_BP_C_MultiEndUberpounce_Params params;
	params.Velocity = Velocity;
	params.MontageToPlayOnNonZeroVelocity = MontageToPlayOnNonZeroVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.JumpPressedAndHeld
// ()

void ADeinonychus_Character_BP_C::JumpPressedAndHeld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.JumpPressedAndHeld");

	ADeinonychus_Character_BP_C_JumpPressedAndHeld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestPounce
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::ServerRequestPounce(class APrimalCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestPounce");

	ADeinonychus_Character_BP_C_ServerRequestPounce_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ClearPounceEvent
// ()

void ADeinonychus_Character_BP_C::ClearPounceEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ClearPounceEvent");

	ADeinonychus_Character_BP_C_ClearPounceEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestJump
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::ServerRequestJump(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestJump");

	ADeinonychus_Character_BP_C_ServerRequestJump_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiRequestJump
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::MultiRequestJump(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiRequestJump");

	ADeinonychus_Character_BP_C_MultiRequestJump_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiSetLocation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::MultiSetLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiSetLocation");

	ADeinonychus_Character_BP_C_MultiSetLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiUpdateCurrentDataLocation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUberpounceState>  VerifiedState                  (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::MultiUpdateCurrentDataLocation(const struct FVector& Location, TEnumAsByte<EUberpounceState> VerifiedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiUpdateCurrentDataLocation");

	ADeinonychus_Character_BP_C_MultiUpdateCurrentDataLocation_Params params;
	params.Location = Location;
	params.VerifiedState = VerifiedState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerStartUberpounceFromFalling
// ()
// Parameters:
// struct FUberpounceData         Data                           (Parm)

void ADeinonychus_Character_BP_C::ServerStartUberpounceFromFalling(const struct FUberpounceData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerStartUberpounceFromFalling");

	ADeinonychus_Character_BP_C_ServerStartUberpounceFromFalling_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiStartUberpounceFromFalling
// ()
// Parameters:
// struct FUberpounceData         Data                           (Parm)

void ADeinonychus_Character_BP_C::MultiStartUberpounceFromFalling(const struct FUberpounceData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiStartUberpounceFromFalling");

	ADeinonychus_Character_BP_C_MultiStartUberpounceFromFalling_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.QueuedUberpounce
// ()

void ADeinonychus_Character_BP_C::QueuedUberpounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.QueuedUberpounce");

	ADeinonychus_Character_BP_C_QueuedUberpounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ReceiveBeginPlay
// ()

void ADeinonychus_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ReceiveBeginPlay");

	ADeinonychus_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StartCheckingForFallingLatch
// ()

void ADeinonychus_Character_BP_C::StartCheckingForFallingLatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StartCheckingForFallingLatch");

	ADeinonychus_Character_BP_C_StartCheckingForFallingLatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestLatchedAutoJump
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::ServerRequestLatchedAutoJump(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestLatchedAutoJump");

	ADeinonychus_Character_BP_C_ServerRequestLatchedAutoJump_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CheckForFallingLatch
// ()

void ADeinonychus_Character_BP_C::CheckForFallingLatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CheckForFallingLatch");

	ADeinonychus_Character_BP_C_CheckForFallingLatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestLatchedJump
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::ServerRequestLatchedJump(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestLatchedJump");

	ADeinonychus_Character_BP_C_ServerRequestLatchedJump_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiOnPounceStarted
// ()

void ADeinonychus_Character_BP_C::MultiOnPounceStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiOnPounceStarted");

	ADeinonychus_Character_BP_C_MultiOnPounceStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerEndPouncing
// ()

void ADeinonychus_Character_BP_C::ServerEndPouncing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerEndPouncing");

	ADeinonychus_Character_BP_C_ServerEndPouncing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MULTI_ApplyAtCliffTopVelocity
// ()

void ADeinonychus_Character_BP_C::MULTI_ApplyAtCliffTopVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MULTI_ApplyAtCliffTopVelocity");

	ADeinonychus_Character_BP_C_MULTI_ApplyAtCliffTopVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MULTI_TargetDodgedUberPounce
// ()
// Parameters:
// struct FVector                 newTargetLocation              (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewTargetRotation              (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        oldTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::MULTI_TargetDodgedUberPounce(const struct FVector& newTargetLocation, const struct FRotator& NewTargetRotation, class APrimalCharacter* oldTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MULTI_TargetDodgedUberPounce");

	ADeinonychus_Character_BP_C_MULTI_TargetDodgedUberPounce_Params params;
	params.newTargetLocation = newTargetLocation;
	params.NewTargetRotation = NewTargetRotation;
	params.oldTarget = oldTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPUnstasis
// ()

void ADeinonychus_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPUnstasis");

	ADeinonychus_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Multi_SetLocation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::Multi_SetLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Multi_SetLocation");

	ADeinonychus_Character_BP_C_Multi_SetLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceDesyncDetected
// ()

void ADeinonychus_Character_BP_C::UberpounceDesyncDetected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceDesyncDetected");

	ADeinonychus_Character_BP_C_UberpounceDesyncDetected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerSetLoc
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::ServerSetLoc(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerSetLoc");

	ADeinonychus_Character_BP_C_ServerSetLoc_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ExecuteUbergraph_Deinonychus_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_Character_BP_C::ExecuteUbergraph_Deinonychus_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ExecuteUbergraph_Deinonychus_Character_BP");

	ADeinonychus_Character_BP_C_ExecuteUbergraph_Deinonychus_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.NewEventDispatcher__DelegateSignature
// ()

void ADeinonychus_Character_BP_C::NewEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.NewEventDispatcher__DelegateSignature");

	ADeinonychus_Character_BP_C_NewEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

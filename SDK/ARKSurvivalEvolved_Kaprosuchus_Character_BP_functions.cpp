// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Kaprosuchus_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKaprosuchus_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPTryMultiUse");

	AKaprosuchus_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AKaprosuchus_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPGetMultiUseEntries");

	AKaprosuchus_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.Play Leap FX
// ()
// Parameters:
// int                            MovementMode                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLeapStart                    (Parm, ZeroConstructor, IsPlainOldData)

void AKaprosuchus_Character_BP_C::Play_Leap_FX(int MovementMode, bool IsLeapStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.Play Leap FX");

	AKaprosuchus_Character_BP_C_Play_Leap_FX_Params params;
	params.MovementMode = MovementMode;
	params.IsLeapStart = IsLeapStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.EvaluateHeightInWater
// (NetRequest, Exec, Native, Static, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// bool                           NearSurface                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKaprosuchus_Character_BP_C::STATIC_EvaluateHeightInWater(bool* NearSurface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.EvaluateHeightInWater");

	AKaprosuchus_Character_BP_C_EvaluateHeightInWater_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NearSurface != nullptr)
		*NearSurface = params.NearSurface;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPShouldLimitForwardDirection
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKaprosuchus_Character_BP_C::BPShouldLimitForwardDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPShouldLimitForwardDirection");

	AKaprosuchus_Character_BP_C_BPShouldLimitForwardDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPModifyForwardDirectionInput
// ()
// Parameters:
// struct FVector                 directionInput                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AKaprosuchus_Character_BP_C::BPModifyForwardDirectionInput(struct FVector* directionInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPModifyForwardDirectionInput");

	AKaprosuchus_Character_BP_C_BPModifyForwardDirectionInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (directionInput != nullptr)
		*directionInput = params.directionInput;

	return params.ReturnValue;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPTimerServer
// ()

void AKaprosuchus_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPTimerServer");

	AKaprosuchus_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BlueprintCanRiderAttack
// (Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKaprosuchus_Character_BP_C::STATIC_BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BlueprintCanRiderAttack");

	AKaprosuchus_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.CalcLeapImpulse
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// struct FVector                 RetImpulse                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AKaprosuchus_Character_BP_C::STATIC_CalcLeapImpulse(struct FVector* RetImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.CalcLeapImpulse");

	AKaprosuchus_Character_BP_C_CalcLeapImpulse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetImpulse != nullptr)
		*RetImpulse = params.RetImpulse;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKaprosuchus_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BlueprintCanAttack");

	AKaprosuchus_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ChangeGroundSwimAttackAnims
// (Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// int                            NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AKaprosuchus_Character_BP_C::ChangeGroundSwimAttackAnims(int NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ChangeGroundSwimAttackAnims");

	AKaprosuchus_Character_BP_C_ChangeGroundSwimAttackAnims_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPTimerNonDedicated
// ()

void AKaprosuchus_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPTimerNonDedicated");

	AKaprosuchus_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void AKaprosuchus_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPOnMovementModeChangedNotify");

	AKaprosuchus_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.SetLeapRotation
// ()

void AKaprosuchus_Character_BP_C::SetLeapRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.SetLeapRotation");

	AKaprosuchus_Character_BP_C_SetLeapRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.UserConstructionScript
// ()

void AKaprosuchus_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.UserConstructionScript");

	AKaprosuchus_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.AnimNotify_StartLeapAttack
// ()

void AKaprosuchus_Character_BP_C::AnimNotify_StartLeapAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.AnimNotify_StartLeapAttack");

	AKaprosuchus_Character_BP_C_AnimNotify_StartLeapAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.AnimNotify_StartLeapGrab
// ()

void AKaprosuchus_Character_BP_C::AnimNotify_StartLeapGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.AnimNotify_StartLeapGrab");

	AKaprosuchus_Character_BP_C_AnimNotify_StartLeapGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.AnimNotify_EndLeap
// ()

void AKaprosuchus_Character_BP_C::AnimNotify_EndLeap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.AnimNotify_EndLeap");

	AKaprosuchus_Character_BP_C_AnimNotify_EndLeap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ClearLeapAttack
// ()
// Parameters:
// int                            LandingInMovementMode          (Parm, ZeroConstructor, IsPlainOldData)

void AKaprosuchus_Character_BP_C::ClearLeapAttack(int LandingInMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ClearLeapAttack");

	AKaprosuchus_Character_BP_C_ClearLeapAttack_Params params;
	params.LandingInMovementMode = LandingInMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.Multi_ClearLeap
// ()
// Parameters:
// bool                           IsWalking                      (Parm, ZeroConstructor, IsPlainOldData)

void AKaprosuchus_Character_BP_C::Multi_ClearLeap(bool IsWalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.Multi_ClearLeap");

	AKaprosuchus_Character_BP_C_Multi_ClearLeap_Params params;
	params.IsWalking = IsWalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ResetStartLeap
// ()

void AKaprosuchus_Character_BP_C::ResetStartLeap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ResetStartLeap");

	AKaprosuchus_Character_BP_C_ResetStartLeap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.StopHoldingCharacter
// ()

void AKaprosuchus_Character_BP_C::StopHoldingCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.StopHoldingCharacter");

	AKaprosuchus_Character_BP_C_StopHoldingCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.StartGrab
// ()

void AKaprosuchus_Character_BP_C::StartGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.StartGrab");

	AKaprosuchus_Character_BP_C_StartGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.Multi_StopHoldingCharacter
// ()

void AKaprosuchus_Character_BP_C::Multi_StopHoldingCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.Multi_StopHoldingCharacter");

	AKaprosuchus_Character_BP_C_Multi_StopHoldingCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.SetIgnoreMoveInput
// ()

void AKaprosuchus_Character_BP_C::SetIgnoreMoveInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.SetIgnoreMoveInput");

	AKaprosuchus_Character_BP_C_SetIgnoreMoveInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ContinueMomentum
// ()

void AKaprosuchus_Character_BP_C::ContinueMomentum()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ContinueMomentum");

	AKaprosuchus_Character_BP_C_ContinueMomentum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ExecuteUbergraph_Kaprosuchus_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AKaprosuchus_Character_BP_C::ExecuteUbergraph_Kaprosuchus_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ExecuteUbergraph_Kaprosuchus_Character_BP");

	AKaprosuchus_Character_BP_C_ExecuteUbergraph_Kaprosuchus_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

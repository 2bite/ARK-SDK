// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Raptor_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Raptor_Character_BP.Raptor_Character_BP_C.IsPounceTarget
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARaptor_Character_BP_C::IsPounceTarget(class APrimalCharacter* Target, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.IsPounceTarget");

	ARaptor_Character_BP_C_IsPounceTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.OnPounceTargetDodged
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)

void ARaptor_Character_BP_C::OnPounceTargetDodged(class APrimalCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.OnPounceTargetDodged");

	ARaptor_Character_BP_C_OnPounceTargetDodged_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.OnPinnedBuffEnded
// ()
// Parameters:
// class APrimalCharacter*        BuffTarget                     (Parm, ZeroConstructor, IsPlainOldData)

void ARaptor_Character_BP_C::OnPinnedBuffEnded(class APrimalCharacter* BuffTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.OnPinnedBuffEnded");

	ARaptor_Character_BP_C_OnPinnedBuffEnded_Params params;
	params.BuffTarget = BuffTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.PushbackAfterPounceFn
// ()

void ARaptor_Character_BP_C::PushbackAfterPounceFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.PushbackAfterPounceFn");

	ARaptor_Character_BP_C_PushbackAfterPounceFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.HasPouncePreventionBuff
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARaptor_Character_BP_C::HasPouncePreventionBuff(class APrimalCharacter* Target, bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.HasPouncePreventionBuff");

	ARaptor_Character_BP_C_HasPouncePreventionBuff_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.Add Dodge Buff to PounceTarget
// ()

void ARaptor_Character_BP_C::Add_Dodge_Buff_to_PounceTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.Add Dodge Buff to PounceTarget");

	ARaptor_Character_BP_C_Add_Dodge_Buff_to_PounceTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ARaptor_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.BPDoAttack");

	ARaptor_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.Try Pounce Target
// ()

void ARaptor_Character_BP_C::Try_Pounce_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.Try Pounce Target");

	ARaptor_Character_BP_C_Try_Pounce_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.SetCurrentTarget
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)

void ARaptor_Character_BP_C::SetCurrentTarget(class APrimalCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.SetCurrentTarget");

	ARaptor_Character_BP_C_SetCurrentTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.InterpToGround
// ()

void ARaptor_Character_BP_C::InterpToGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.InterpToGround");

	ARaptor_Character_BP_C_InterpToGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.OnPounceLand
// ()

void ARaptor_Character_BP_C::OnPounceLand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.OnPounceLand");

	ARaptor_Character_BP_C_OnPounceLand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.Set Amount Of Time to Pin
// ()

void ARaptor_Character_BP_C::Set_Amount_Of_Time_to_Pin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.Set Amount Of Time to Pin");

	ARaptor_Character_BP_C_Set_Amount_Of_Time_to_Pin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARaptor_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.BlueprintCanAttack");

	ARaptor_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.CanJumpInternal
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARaptor_Character_BP_C::CanJumpInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.CanJumpInternal");

	ARaptor_Character_BP_C_CanJumpInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.ApplyPackBuff
// ()

void ARaptor_Character_BP_C::ApplyPackBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.ApplyPackBuff");

	ARaptor_Character_BP_C_ApplyPackBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.InterpToCharacter
// ()

void ARaptor_Character_BP_C::InterpToCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.InterpToCharacter");

	ARaptor_Character_BP_C_InterpToCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.OnRep_bCanMaul
// ()

void ARaptor_Character_BP_C::OnRep_bCanMaul()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.OnRep_bCanMaul");

	ARaptor_Character_BP_C_OnRep_bCanMaul_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.BlueprintCanRiderAttack
// (Exec, Static, MulticastDelegate, Public, Private, NetClient, BlueprintCallable, Const)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARaptor_Character_BP_C::STATIC_BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.BlueprintCanRiderAttack");

	ARaptor_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.BPTimerServer
// ()

void ARaptor_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.BPTimerServer");

	ARaptor_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.CheckForPounceTarget
// (NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalCharacter*        RetTarget                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARaptor_Character_BP_C::STATIC_CheckForPounceTarget(class APrimalCharacter** RetTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.CheckForPounceTarget");

	ARaptor_Character_BP_C_CheckForPounceTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetTarget != nullptr)
		*RetTarget = params.RetTarget;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.PlayRaptorIdle
// ()

void ARaptor_Character_BP_C::PlayRaptorIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.PlayRaptorIdle");

	ARaptor_Character_BP_C_PlayRaptorIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.ImmobilizeTarget
// ()
// Parameters:
// class APrimalCharacter*        Char                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bImmobilize                    (Parm, ZeroConstructor, IsPlainOldData)

void ARaptor_Character_BP_C::ImmobilizeTarget(class APrimalCharacter* Char, bool bImmobilize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.ImmobilizeTarget");

	ARaptor_Character_BP_C_ImmobilizeTarget_Params params;
	params.Char = Char;
	params.bImmobilize = bImmobilize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ARaptor_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ARaptor_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.UserConstructionScript
// ()

void ARaptor_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.UserConstructionScript");

	ARaptor_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.ClearPounceIdle
// ()

void ARaptor_Character_BP_C::ClearPounceIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.ClearPounceIdle");

	ARaptor_Character_BP_C_ClearPounceIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.ClearPouncing
// ()

void ARaptor_Character_BP_C::ClearPouncing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.ClearPouncing");

	ARaptor_Character_BP_C_ClearPouncing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.WarpToCharacter
// ()

void ARaptor_Character_BP_C::WarpToCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.WarpToCharacter");

	ARaptor_Character_BP_C_WarpToCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.ImmobilizeWithDelay
// ()

void ARaptor_Character_BP_C::ImmobilizeWithDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.ImmobilizeWithDelay");

	ARaptor_Character_BP_C_ImmobilizeWithDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.ClearInterpToTimer
// ()

void ARaptor_Character_BP_C::ClearInterpToTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.ClearInterpToTimer");

	ARaptor_Character_BP_C_ClearInterpToTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.PreventCharacterMovementInput
// ()
// Parameters:
// bool                           bPrevent                       (Parm, ZeroConstructor, IsPlainOldData)

void ARaptor_Character_BP_C::PreventCharacterMovementInput(bool bPrevent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.PreventCharacterMovementInput");

	ARaptor_Character_BP_C_PreventCharacterMovementInput_Params params;
	params.bPrevent = bPrevent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.SetBuffDeactivateTime
// ()
// Parameters:
// class APrimalBuff*             PrimalBuff                     (Parm, ZeroConstructor, IsPlainOldData)

void ARaptor_Character_BP_C::SetBuffDeactivateTime(class APrimalBuff* PrimalBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.SetBuffDeactivateTime");

	ARaptor_Character_BP_C_SetBuffDeactivateTime_Params params;
	params.PrimalBuff = PrimalBuff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.LandDelay
// ()

void ARaptor_Character_BP_C::LandDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.LandDelay");

	ARaptor_Character_BP_C_LandDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.MovePouncedDino
// ()

void ARaptor_Character_BP_C::MovePouncedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.MovePouncedDino");

	ARaptor_Character_BP_C_MovePouncedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.ForceMoveRider
// ()

void ARaptor_Character_BP_C::ForceMoveRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.ForceMoveRider");

	ARaptor_Character_BP_C_ForceMoveRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.PushbackAfterPounce
// ()

void ARaptor_Character_BP_C::PushbackAfterPounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.PushbackAfterPounce");

	ARaptor_Character_BP_C_PushbackAfterPounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.Do RandomPackRoar
// ()

void ARaptor_Character_BP_C::Do_RandomPackRoar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.Do RandomPackRoar");

	ARaptor_Character_BP_C_Do_RandomPackRoar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.DrawDebugInfo
// ()
// Parameters:
// struct FVector                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void ARaptor_Character_BP_C::DrawDebugInfo(const struct FVector& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.DrawDebugInfo");

	ARaptor_Character_BP_C_DrawDebugInfo_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.CheckInterpToLocations
// ()

void ARaptor_Character_BP_C::CheckInterpToLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.CheckInterpToLocations");

	ARaptor_Character_BP_C_CheckInterpToLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.ServerStartPouncing
// ()

void ARaptor_Character_BP_C::ServerStartPouncing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.ServerStartPouncing");

	ARaptor_Character_BP_C_ServerStartPouncing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Raptor_Character_BP.Raptor_Character_BP_C.ExecuteUbergraph_Raptor_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARaptor_Character_BP_C::ExecuteUbergraph_Raptor_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Raptor_Character_BP.Raptor_Character_BP_C.ExecuteUbergraph_Raptor_Character_BP");

	ARaptor_Character_BP_C_ExecuteUbergraph_Raptor_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tusoteuthis_Character_BP_CaveBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATusoteuthis_Character_BP_CaveBase_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPTryMultiUse");

	ATusoteuthis_Character_BP_CaveBase_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPGetMultiUseEntries
// (Native, Static, Protected, Delegate, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ATusoteuthis_Character_BP_CaveBase_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPGetMultiUseEntries");

	ATusoteuthis_Character_BP_CaveBase_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.PrepareForCrushingPrey
// ()

void ATusoteuthis_Character_BP_CaveBase_C::PrepareForCrushingPrey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.PrepareForCrushingPrey");

	ATusoteuthis_Character_BP_CaveBase_C_PrepareForCrushingPrey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ATusoteuthis_Character_BP_CaveBase_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPNotifySetRider");

	ATusoteuthis_Character_BP_CaveBase_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ATusoteuthis_Character_BP_CaveBase_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPNotifyClearRider");

	ATusoteuthis_Character_BP_CaveBase_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ATusoteuthis_Character_BP_CaveBase_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPSetupTamed");

	ATusoteuthis_Character_BP_CaveBase_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.DoesPreyEscape
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATusoteuthis_Character_BP_CaveBase_C::DoesPreyEscape(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.DoesPreyEscape");

	ATusoteuthis_Character_BP_CaveBase_C_DoesPreyEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.CanGrab
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATusoteuthis_Character_BP_CaveBase_C::CanGrab(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.CanGrab");

	ATusoteuthis_Character_BP_CaveBase_C_CanGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPFedWakingTameEvent
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void ATusoteuthis_Character_BP_CaveBase_C::BPFedWakingTameEvent(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPFedWakingTameEvent");

	ATusoteuthis_Character_BP_CaveBase_C_BPFedWakingTameEvent_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.GetDefaultDino
// ()
// Parameters:
// class ATusoteuthis_Character_BP_C* ref                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATusoteuthis_Character_BP_CaveBase_C::GetDefaultDino(class ATusoteuthis_Character_BP_C** ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.GetDefaultDino");

	ATusoteuthis_Character_BP_CaveBase_C_GetDefaultDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ref != nullptr)
		*ref = params.ref;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.OnRep_UTurnTargetRot
// ()

void ATusoteuthis_Character_BP_CaveBase_C::OnRep_UTurnTargetRot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.OnRep_UTurnTargetRot");

	ATusoteuthis_Character_BP_CaveBase_C_OnRep_UTurnTargetRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ATusoteuthis_Character_BP_CaveBase_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BlueprintAnimNotifyCustomEvent");

	ATusoteuthis_Character_BP_CaveBase_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.CheckForIsCrushingPrey
// ()

void ATusoteuthis_Character_BP_CaveBase_C::CheckForIsCrushingPrey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.CheckForIsCrushingPrey");

	ATusoteuthis_Character_BP_CaveBase_C_CheckForIsCrushingPrey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.Update MovementByTurnState
// ()

void ATusoteuthis_Character_BP_CaveBase_C::Update_MovementByTurnState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.Update MovementByTurnState");

	ATusoteuthis_Character_BP_CaveBase_C_Update_MovementByTurnState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.OnRep_bIsCrushingPrey
// ()

void ATusoteuthis_Character_BP_CaveBase_C::OnRep_bIsCrushingPrey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.OnRep_bIsCrushingPrey");

	ATusoteuthis_Character_BP_CaveBase_C_OnRep_bIsCrushingPrey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ATusoteuthis_Character_BP_CaveBase_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPDoAttack");

	ATusoteuthis_Character_BP_CaveBase_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.CheckForResetTurn
// ()

void ATusoteuthis_Character_BP_CaveBase_C::CheckForResetTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.CheckForResetTurn");

	ATusoteuthis_Character_BP_CaveBase_C_CheckForResetTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPTimerServer
// (Exec, Private, Protected, HasDefaults, DLLImport)

void ATusoteuthis_Character_BP_CaveBase_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPTimerServer");

	ATusoteuthis_Character_BP_CaveBase_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.CanTargetBeCrushed
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATusoteuthis_Character_BP_CaveBase_C::CanTargetBeCrushed(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.CanTargetBeCrushed");

	ATusoteuthis_Character_BP_CaveBase_C_CanTargetBeCrushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.ResetTurnState
// ()
// Parameters:
// bool                           ForceReset                     (Parm, ZeroConstructor, IsPlainOldData)

void ATusoteuthis_Character_BP_CaveBase_C::ResetTurnState(bool ForceReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.ResetTurnState");

	ATusoteuthis_Character_BP_CaveBase_C_ResetTurnState_Params params;
	params.ForceReset = ForceReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TurnAround
// ()
// Parameters:
// bool                           newTurnState                   (Parm, ZeroConstructor, IsPlainOldData)

void ATusoteuthis_Character_BP_CaveBase_C::TurnAround(bool newTurnState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TurnAround");

	ATusoteuthis_Character_BP_CaveBase_C_TurnAround_Params params;
	params.newTurnState = newTurnState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.NetSetIsTurnedAround
// ()
// Parameters:
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           forceSuccess                   (Parm, ZeroConstructor, IsPlainOldData)

void ATusoteuthis_Character_BP_CaveBase_C::NetSetIsTurnedAround(bool NewValue, bool forceSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.NetSetIsTurnedAround");

	ATusoteuthis_Character_BP_CaveBase_C_NetSetIsTurnedAround_Params params;
	params.NewValue = NewValue;
	params.forceSuccess = forceSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.OnRep_bIsTurnedAround
// ()

void ATusoteuthis_Character_BP_CaveBase_C::OnRep_bIsTurnedAround()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.OnRep_bIsTurnedAround");

	ATusoteuthis_Character_BP_CaveBase_C_OnRep_bIsTurnedAround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TryCrushingPrey
// ()

void ATusoteuthis_Character_BP_CaveBase_C::TryCrushingPrey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TryCrushingPrey");

	ATusoteuthis_Character_BP_CaveBase_C_TryCrushingPrey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.RemoveCarryBuffFromPrey
// ()

void ATusoteuthis_Character_BP_CaveBase_C::RemoveCarryBuffFromPrey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.RemoveCarryBuffFromPrey");

	ATusoteuthis_Character_BP_CaveBase_C_RemoveCarryBuffFromPrey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.SyphonHealthFromPrey
// (NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void ATusoteuthis_Character_BP_CaveBase_C::SyphonHealthFromPrey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.SyphonHealthFromPrey");

	ATusoteuthis_Character_BP_CaveBase_C_SyphonHealthFromPrey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.DropPrey
// ()
// Parameters:
// bool                           playDropAnim                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           forceSuccess                   (Parm, ZeroConstructor, IsPlainOldData)

void ATusoteuthis_Character_BP_CaveBase_C::DropPrey(bool playDropAnim, bool forceSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.DropPrey");

	ATusoteuthis_Character_BP_CaveBase_C_DropPrey_Params params;
	params.playDropAnim = playDropAnim;
	params.forceSuccess = forceSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.IsCrushingValidCharacter
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATusoteuthis_Character_BP_CaveBase_C::IsCrushingValidCharacter(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.IsCrushingValidCharacter");

	ATusoteuthis_Character_BP_CaveBase_C_IsCrushingValidCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATusoteuthis_Character_BP_CaveBase_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BlueprintCanAttack");

	ATusoteuthis_Character_BP_CaveBase_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATusoteuthis_Character_BP_CaveBase_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BlueprintCanRiderAttack");

	ATusoteuthis_Character_BP_CaveBase_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ATusoteuthis_Character_BP_CaveBase_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.ReceiveAnyDamage");

	ATusoteuthis_Character_BP_CaveBase_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.UserConstructionScript
// ()

void ATusoteuthis_Character_BP_CaveBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.UserConstructionScript");

	ATusoteuthis_Character_BP_CaveBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TurnMeshAround__FinishedFunc
// ()

void ATusoteuthis_Character_BP_CaveBase_C::TurnMeshAround__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TurnMeshAround__FinishedFunc");

	ATusoteuthis_Character_BP_CaveBase_C_TurnMeshAround__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TurnMeshAround__UpdateFunc
// ()

void ATusoteuthis_Character_BP_CaveBase_C::TurnMeshAround__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TurnMeshAround__UpdateFunc");

	ATusoteuthis_Character_BP_CaveBase_C_TurnMeshAround__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TurnMeshAround__Turnt__EventFunc
// ()

void ATusoteuthis_Character_BP_CaveBase_C::TurnMeshAround__Turnt__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TurnMeshAround__Turnt__EventFunc");

	ATusoteuthis_Character_BP_CaveBase_C_TurnMeshAround__Turnt__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TurnActorAround__FinishedFunc
// ()

void ATusoteuthis_Character_BP_CaveBase_C::TurnActorAround__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TurnActorAround__FinishedFunc");

	ATusoteuthis_Character_BP_CaveBase_C_TurnActorAround__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TurnActorAround__UpdateFunc
// ()

void ATusoteuthis_Character_BP_CaveBase_C::TurnActorAround__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TurnActorAround__UpdateFunc");

	ATusoteuthis_Character_BP_CaveBase_C_TurnActorAround__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.InpActEvt_Jump_K2Node_InputActionEvent_228
// ()

void ATusoteuthis_Character_BP_CaveBase_C::InpActEvt_Jump_K2Node_InputActionEvent_228()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.InpActEvt_Jump_K2Node_InputActionEvent_228");

	ATusoteuthis_Character_BP_CaveBase_C_InpActEvt_Jump_K2Node_InputActionEvent_228_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.AnimNotify_ParalyzePrey
// ()

void ATusoteuthis_Character_BP_CaveBase_C::AnimNotify_ParalyzePrey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.AnimNotify_ParalyzePrey");

	ATusoteuthis_Character_BP_CaveBase_C_AnimNotify_ParalyzePrey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.InkAttackFX
// ()

void ATusoteuthis_Character_BP_CaveBase_C::InkAttackFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.InkAttackFX");

	ATusoteuthis_Character_BP_CaveBase_C_InkAttackFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.PlayAttackTurnTimeline
// ()

void ATusoteuthis_Character_BP_CaveBase_C::PlayAttackTurnTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.PlayAttackTurnTimeline");

	ATusoteuthis_Character_BP_CaveBase_C_PlayAttackTurnTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.ReceiveBeginPlay
// ()

void ATusoteuthis_Character_BP_CaveBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.ReceiveBeginPlay");

	ATusoteuthis_Character_BP_CaveBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.Multi_UpdateMovementByTurnState
// ()

void ATusoteuthis_Character_BP_CaveBase_C::Multi_UpdateMovementByTurnState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.Multi_UpdateMovementByTurnState");

	ATusoteuthis_Character_BP_CaveBase_C_Multi_UpdateMovementByTurnState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.AnimNotify_DamagePrey
// ()

void ATusoteuthis_Character_BP_CaveBase_C::AnimNotify_DamagePrey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.AnimNotify_DamagePrey");

	ATusoteuthis_Character_BP_CaveBase_C_AnimNotify_DamagePrey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.PlayUTurnTimeline
// ()

void ATusoteuthis_Character_BP_CaveBase_C::PlayUTurnTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.PlayUTurnTimeline");

	ATusoteuthis_Character_BP_CaveBase_C_PlayUTurnTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.Server_JumpPressed
// ()

void ATusoteuthis_Character_BP_CaveBase_C::Server_JumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.Server_JumpPressed");

	ATusoteuthis_Character_BP_CaveBase_C_Server_JumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.UpdateMovementAfterDelay
// ()

void ATusoteuthis_Character_BP_CaveBase_C::UpdateMovementAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.UpdateMovementAfterDelay");

	ATusoteuthis_Character_BP_CaveBase_C_UpdateMovementAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.AnimNotify_GrabAllies
// ()

void ATusoteuthis_Character_BP_CaveBase_C::AnimNotify_GrabAllies()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.AnimNotify_GrabAllies");

	ATusoteuthis_Character_BP_CaveBase_C_AnimNotify_GrabAllies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.ExecuteUbergraph_Tusoteuthis_Character_BP_CaveBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATusoteuthis_Character_BP_CaveBase_C::ExecuteUbergraph_Tusoteuthis_Character_BP_CaveBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.ExecuteUbergraph_Tusoteuthis_Character_BP_CaveBase");

	ATusoteuthis_Character_BP_CaveBase_C_ExecuteUbergraph_Tusoteuthis_Character_BP_CaveBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

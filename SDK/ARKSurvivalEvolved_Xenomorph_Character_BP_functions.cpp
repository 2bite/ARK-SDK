// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.GetNumBatteries
// ()
// Parameters:
// int                            numBatteries                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::GetNumBatteries(int* numBatteries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.GetNumBatteries");

	AXenomorph_Character_BP_C_GetNumBatteries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (numBatteries != nullptr)
		*numBatteries = params.numBatteries;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Get Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ivalue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::Get_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float* fValue, double* dValue, bool* bBValue, int* ivalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Get Charge Variable Interface");

	AXenomorph_Character_BP_C_Get_Charge_Variable_Interface_Params params;
	params.variableType = variableType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (fValue != nullptr)
		*fValue = params.fValue;
	if (dValue != nullptr)
		*dValue = params.dValue;
	if (bBValue != nullptr)
		*bBValue = params.bBValue;
	if (ivalue != nullptr)
		*ivalue = params.ivalue;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPPreventAttachments
// ()
// Parameters:
// class UObject**                ForItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Character_BP_C::BPPreventAttachments(class UObject** ForItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPPreventAttachments");

	AXenomorph_Character_BP_C_BPPreventAttachments_Params params;
	params.ForItem = ForItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.RefreshTamedAttachments
// ()

void AXenomorph_Character_BP_C::RefreshTamedAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.RefreshTamedAttachments");

	AXenomorph_Character_BP_C_RefreshTamedAttachments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AllowPlayMontage
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Character_BP_C::AllowPlayMontage(class UAnimMontage** AnimMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AllowPlayMontage");

	AXenomorph_Character_BP_C_AllowPlayMontage_Params params;
	params.AnimMontage = AnimMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.GetDinoLevelUpAnimation
// ()
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* AXenomorph_Character_BP_C::GetDinoLevelUpAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.GetDinoLevelUpAnimation");

	AXenomorph_Character_BP_C_GetDinoLevelUpAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AXenomorph_Character_BP_C::GetSocketForMeleeTraceForHitBlockers(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.GetSocketForMeleeTraceForHitBlockers");

	AXenomorph_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPIsHidden
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Character_BP_C::BPIsHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPIsHidden");

	AXenomorph_Character_BP_C_BPIsHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPSetupTamed");

	AXenomorph_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ShouldBury
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::ShouldBury(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ShouldBury");

	AXenomorph_Character_BP_C_ShouldBury_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ShouldUnbury
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Character_BP_C::ShouldUnbury()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ShouldUnbury");

	AXenomorph_Character_BP_C_ShouldUnbury_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.OnRep_isUnderground
// ()

void AXenomorph_Character_BP_C::OnRep_isUnderground()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.OnRep_isUnderground");

	AXenomorph_Character_BP_C_OnRep_isUnderground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.OnRep_bIsOffspringMode
// ()

void AXenomorph_Character_BP_C::OnRep_bIsOffspringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.OnRep_bIsOffspringMode");

	AXenomorph_Character_BP_C_OnRep_bIsOffspringMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DisableEyeGlow
// ()

void AXenomorph_Character_BP_C::DisableEyeGlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DisableEyeGlow");

	AXenomorph_Character_BP_C_DisableEyeGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.UpdateBuryMound
// (Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// bool                           ShouldShow                     (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::STATIC_UpdateBuryMound(bool ShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.UpdateBuryMound");

	AXenomorph_Character_BP_C_UpdateBuryMound_Params params;
	params.ShouldShow = ShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPTryMultiUse");

	AXenomorph_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.OnChargeEvent
// ()

void AXenomorph_Character_BP_C::OnChargeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.OnChargeEvent");

	AXenomorph_Character_BP_C_OnChargeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.CreateChargeManager
// ()

void AXenomorph_Character_BP_C::CreateChargeManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.CreateChargeManager");

	AXenomorph_Character_BP_C_CreateChargeManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InitializeDive
// ()

void AXenomorph_Character_BP_C::InitializeDive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InitializeDive");

	AXenomorph_Character_BP_C_InitializeDive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DiveEnd
// ()

void AXenomorph_Character_BP_C::DiveEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DiveEnd");

	AXenomorph_Character_BP_C_DiveEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BuriedWithNoTarget
// ()

void AXenomorph_Character_BP_C::BuriedWithNoTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BuriedWithNoTarget");

	AXenomorph_Character_BP_C_BuriedWithNoTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPAllowCarryCharacter
// ()
// Parameters:
// class APrimalCharacter**       checkCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Character_BP_C::BPAllowCarryCharacter(class APrimalCharacter** checkCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPAllowCarryCharacter");

	AXenomorph_Character_BP_C_BPAllowCarryCharacter_Params params;
	params.checkCharacter = checkCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.TimeSinceLastAttackForIndex
// (NetReliable, Native, MulticastDelegate, Public, Private, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AXenomorph_Character_BP_C::TimeSinceLastAttackForIndex(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.TimeSinceLastAttackForIndex");

	AXenomorph_Character_BP_C_TimeSinceLastAttackForIndex_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPDidClearCarriedCharacter
// ()
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::BPDidClearCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPDidClearCarriedCharacter");

	AXenomorph_Character_BP_C_BPDidClearCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.HasValidAggroTarget
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Character_BP_C::HasValidAggroTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.HasValidAggroTarget");

	AXenomorph_Character_BP_C_HasValidAggroTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.CancelImpregnateGrab
// ()

void AXenomorph_Character_BP_C::CancelImpregnateGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.CancelImpregnateGrab");

	AXenomorph_Character_BP_C_CancelImpregnateGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.IncreaseTameAffinity
// ()
// Parameters:
// float                          AffinityToAdd                  (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       PlayerChar                     (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::IncreaseTameAffinity(float AffinityToAdd, class AShooterCharacter* PlayerChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.IncreaseTameAffinity");

	AXenomorph_Character_BP_C_IncreaseTameAffinity_Params params;
	params.AffinityToAdd = AffinityToAdd;
	params.PlayerChar = PlayerChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPOnTamedProcessOrder
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::BPOnTamedProcessOrder(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPOnTamedProcessOrder");

	AXenomorph_Character_BP_C_BPOnTamedProcessOrder_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AXenomorph_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPGetMultiUseEntries");

	AXenomorph_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.K2_OnMovementModeChanged");

	AXenomorph_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPDoAttack");

	AXenomorph_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BlueprintCanRiderAttack");

	AXenomorph_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Can Dive
// (NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Public, Private, Delegate, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// bool                           _return                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::STATIC_Can_Dive(bool* _return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Can Dive");

	AXenomorph_Character_BP_C_Can_Dive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_return != nullptr)
		*_return = params._return;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Tamed Has Valid Enemy
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Character_BP_C::Tamed_Has_Valid_Enemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Tamed Has Valid Enemy");

	AXenomorph_Character_BP_C_Tamed_Has_Valid_Enemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AcidDamageEvent
// ()
// Parameters:
// struct FVector                 OriginLoc                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SprayDir                       (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::AcidDamageEvent(const struct FVector& OriginLoc, const struct FVector& SprayDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AcidDamageEvent");

	AXenomorph_Character_BP_C_AcidDamageEvent_Params params;
	params.OriginLoc = OriginLoc;
	params.SprayDir = SprayDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DiveSetup
// ()

void AXenomorph_Character_BP_C::DiveSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DiveSetup");

	AXenomorph_Character_BP_C_DiveSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DiveIdle
// ()

void AXenomorph_Character_BP_C::DiveIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DiveIdle");

	AXenomorph_Character_BP_C_DiveIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Is Animation Playing
// ()
// Parameters:
// TArray<class UAnimMontage*>    Montage                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::Is_Animation_Playing(TArray<class UAnimMontage*>* Montage, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Is Animation Playing");

	AXenomorph_Character_BP_C_Is_Animation_Playing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BlueprintGetAttackWeight
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         inputWeight                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AXenomorph_Character_BP_C::BlueprintGetAttackWeight(int* AttackIndex, float* inputWeight, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BlueprintGetAttackWeight");

	AXenomorph_Character_BP_C_BlueprintGetAttackWeight_Params params;
	params.AttackIndex = AttackIndex;
	params.inputWeight = inputWeight;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AXenomorph_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPAdjustDamage");

	AXenomorph_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BlueprintOverrideWantsToRun
// ()
// Parameters:
// bool*                          bInputWantsToRun               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Character_BP_C::BlueprintOverrideWantsToRun(bool* bInputWantsToRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BlueprintOverrideWantsToRun");

	AXenomorph_Character_BP_C_BlueprintOverrideWantsToRun_Params params;
	params.bInputWantsToRun = bInputWantsToRun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Update Underground Trail
// ()

void AXenomorph_Character_BP_C::Update_Underground_Trail()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Update Underground Trail");

	AXenomorph_Character_BP_C_Update_Underground_Trail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.SetDinoCollisionState
// ()
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::SetDinoCollisionState(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.SetDinoCollisionState");

	AXenomorph_Character_BP_C_SetDinoCollisionState_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DetachChildren
// ()

void AXenomorph_Character_BP_C::DetachChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DetachChildren");

	AXenomorph_Character_BP_C_DetachChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPTimerNonDedicated
// ()

void AXenomorph_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPTimerNonDedicated");

	AXenomorph_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPTimerServer
// ()

void AXenomorph_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPTimerServer");

	AXenomorph_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BlueprintCanAttack");

	AXenomorph_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.UserConstructionScript
// ()

void AXenomorph_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.UserConstructionScript");

	AXenomorph_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_71
// ()

void AXenomorph_Character_BP_C::InpActEvt_AltFire_K2Node_InputActionEvent_71()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_71");

	AXenomorph_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_71_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InpActEvt_Reload_K2Node_InputActionEvent_70
// ()

void AXenomorph_Character_BP_C::InpActEvt_Reload_K2Node_InputActionEvent_70()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InpActEvt_Reload_K2Node_InputActionEvent_70");

	AXenomorph_Character_BP_C_InpActEvt_Reload_K2Node_InputActionEvent_70_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_69
// ()

void AXenomorph_Character_BP_C::InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_69()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_69");

	AXenomorph_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_69_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_68
// ()

void AXenomorph_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_68()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_68");

	AXenomorph_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_68_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Interface Check for Batteries and Update Multicast
// ()

void AXenomorph_Character_BP_C::Interface_Check_for_Batteries_and_Update_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Interface Check for Batteries and Update Multicast");

	AXenomorph_Character_BP_C_Interface_Check_for_Batteries_and_Update_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Boolean MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::Charge_Variable_Event_Boolean_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Boolean MulticastInterface");

	AXenomorph_Character_BP_C_Charge_Variable_Event_Boolean_MulticastInterface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Float Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::Charge_Variable_Event_Float_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Float Multicast Interface");

	AXenomorph_Character_BP_C_Charge_Variable_Event_Float_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Double MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::Charge_Variable_Event_Double_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Double MulticastInterface");

	AXenomorph_Character_BP_C_Charge_Variable_Event_Double_MulticastInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Boolean Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::Charge_Variable_Event_Boolean_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Boolean Interface");

	AXenomorph_Character_BP_C_Charge_Variable_Event_Boolean_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEventFloatInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::ChargeVariableEventFloatInterface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEventFloatInterface");

	AXenomorph_Character_BP_C_ChargeVariableEventFloatInterface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEventDoubleInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::ChargeVariableEventDoubleInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEventDoubleInterface");

	AXenomorph_Character_BP_C_ChargeVariableEventDoubleInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEventIntInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ivalue                         (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::ChargeVariableEventIntInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int ivalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEventIntInterface");

	AXenomorph_Character_BP_C_ChargeVariableEventIntInterface_Params params;
	params.variableType = variableType;
	params.ivalue = ivalue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEventIntMulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ivalue                         (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::ChargeVariableEventIntMulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int ivalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEventIntMulticastInterface");

	AXenomorph_Character_BP_C_ChargeVariableEventIntMulticastInterface_Params params;
	params.variableType = variableType;
	params.ivalue = ivalue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ReceiveBeginPlay
// ()

void AXenomorph_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ReceiveBeginPlay");

	AXenomorph_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.StartAcidSpray
// ()
// Parameters:
// struct FVector                 hitLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitDir                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   HitBone                        (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::StartAcidSpray(const struct FVector& hitLoc, const struct FVector& HitDir, const struct FName& HitBone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.StartAcidSpray");

	AXenomorph_Character_BP_C_StartAcidSpray_Params params;
	params.hitLoc = hitLoc;
	params.HitDir = HitDir;
	params.HitBone = HitBone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_StartAcidSpray
// ()
// Parameters:
// struct FVector                 hitLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitDir                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   HitBone                        (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::Server_StartAcidSpray(const struct FVector& hitLoc, const struct FVector& HitDir, const struct FName& HitBone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_StartAcidSpray");

	AXenomorph_Character_BP_C_Server_StartAcidSpray_Params params;
	params.hitLoc = hitLoc;
	params.HitDir = HitDir;
	params.HitBone = HitBone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_TryDive
// ()
// Parameters:
// bool                           NewUnderground                 (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::Server_TryDive(bool NewUnderground)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_TryDive");

	AXenomorph_Character_BP_C_Server_TryDive_Params params;
	params.NewUnderground = NewUnderground;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AnimNotify_StartBury
// ()

void AXenomorph_Character_BP_C::AnimNotify_StartBury()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AnimNotify_StartBury");

	AXenomorph_Character_BP_C_AnimNotify_StartBury_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AnimNotify_EndBury
// ()

void AXenomorph_Character_BP_C::AnimNotify_EndBury()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AnimNotify_EndBury");

	AXenomorph_Character_BP_C_AnimNotify_EndBury_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Multi_DiveOut
// ()

void AXenomorph_Character_BP_C::Multi_DiveOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Multi_DiveOut");

	AXenomorph_Character_BP_C_Multi_DiveOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AttemptDiveOut
// ()

void AXenomorph_Character_BP_C::AttemptDiveOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AttemptDiveOut");

	AXenomorph_Character_BP_C_AttemptDiveOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Attempt Dive In
// ()

void AXenomorph_Character_BP_C::Attempt_Dive_In()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Attempt Dive In");

	AXenomorph_Character_BP_C_Attempt_Dive_In_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Multi_DiveIn
// ()

void AXenomorph_Character_BP_C::Multi_DiveIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Multi_DiveIn");

	AXenomorph_Character_BP_C_Multi_DiveIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPUnstasis
// ()

void AXenomorph_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPUnstasis");

	AXenomorph_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPDinoPostBeginPlay
// ()

void AXenomorph_Character_BP_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BPDinoPostBeginPlay");

	AXenomorph_Character_BP_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.StartBuried
// ()

void AXenomorph_Character_BP_C::StartBuried()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.StartBuried");

	AXenomorph_Character_BP_C_StartBuried_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AnimNotify_Death
// ()

void AXenomorph_Character_BP_C::AnimNotify_Death()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.AnimNotify_Death");

	AXenomorph_Character_BP_C_AnimNotify_Death_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.UpdateHurtFX
// ()

void AXenomorph_Character_BP_C::UpdateHurtFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.UpdateHurtFX");

	AXenomorph_Character_BP_C_UpdateHurtFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DelayUpdateHurtFX
// ()

void AXenomorph_Character_BP_C::DelayUpdateHurtFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.DelayUpdateHurtFX");

	AXenomorph_Character_BP_C_DelayUpdateHurtFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ForceDiveEnd
// ()

void AXenomorph_Character_BP_C::ForceDiveEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ForceDiveEnd");

	AXenomorph_Character_BP_C_ForceDiveEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Multi_ForceDiveEnd
// ()

void AXenomorph_Character_BP_C::Multi_ForceDiveEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Multi_ForceDiveEnd");

	AXenomorph_Character_BP_C_Multi_ForceDiveEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_Roar
// ()

void AXenomorph_Character_BP_C::Server_Roar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_Roar");

	AXenomorph_Character_BP_C_Server_Roar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BP_OnJumpPressed
// ()

void AXenomorph_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.BP_OnJumpPressed");

	AXenomorph_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_TailWeb
// ()

void AXenomorph_Character_BP_C::Server_TailWeb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_TailWeb");

	AXenomorph_Character_BP_C_Server_TailWeb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_ImpregnateAttack
// ()

void AXenomorph_Character_BP_C::Server_ImpregnateAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Server_ImpregnateAttack");

	AXenomorph_Character_BP_C_Server_ImpregnateAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Proxy_RefreshAttachments
// ()

void AXenomorph_Character_BP_C::Proxy_RefreshAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Proxy_RefreshAttachments");

	AXenomorph_Character_BP_C_Proxy_RefreshAttachments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.StopDissolveVisuals_Multicast
// ()

void AXenomorph_Character_BP_C::StopDissolveVisuals_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.StopDissolveVisuals_Multicast");

	AXenomorph_Character_BP_C_StopDissolveVisuals_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.StartDissolveVisuals_Multicast
// ()

void AXenomorph_Character_BP_C::StartDissolveVisuals_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.StartDissolveVisuals_Multicast");

	AXenomorph_Character_BP_C_StartDissolveVisuals_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Double
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::ChargeVariableEvent_Double(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Double");

	AXenomorph_Character_BP_C_ChargeVariableEvent_Double_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Float
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::ChargeVariableEvent_Float(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Float");

	AXenomorph_Character_BP_C_ChargeVariableEvent_Float_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Boolean
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::ChargeVariableEvent_Boolean(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Boolean");

	AXenomorph_Character_BP_C_ChargeVariableEvent_Boolean_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Double_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::ChargeVariableEvent_Double_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Double_Multicast");

	AXenomorph_Character_BP_C_ChargeVariableEvent_Double_Multicast_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Float_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::ChargeVariableEvent_Float_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Float_Multicast");

	AXenomorph_Character_BP_C_ChargeVariableEvent_Float_Multicast_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Boolean_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::ChargeVariableEvent_Boolean_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent_Boolean_Multicast");

	AXenomorph_Character_BP_C_ChargeVariableEvent_Boolean_Multicast_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ChargeVariableEvent");

	AXenomorph_Character_BP_C_ChargeVariableEvent_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Trigger Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iVariable                      (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::Charge_Variable_Event_Trigger_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iVariable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Trigger Multicast Interface");

	AXenomorph_Character_BP_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iVariable = iVariable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ivalue                         (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::Charge_Variable_Event_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int ivalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Charge Variable Event Interface");

	AXenomorph_Character_BP_C_Charge_Variable_Event_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.ivalue = ivalue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Set Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicast                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           triggerEvent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ivalue                         (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::Set_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int ivalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.Set Charge Variable Interface");

	AXenomorph_Character_BP_C_Set_Charge_Variable_Interface_Params params;
	params.variableType = variableType;
	params.multicast = multicast;
	params.fValue = fValue;
	params.dValue = dValue;
	params.bBValue = bBValue;
	params.triggerEvent = triggerEvent;
	params.multicastEvent = multicastEvent;
	params.ivalue = ivalue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.PlayGroundParticleVFX
// ()
// Parameters:
// bool                           orientToGround                 (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ParticleSystem                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OffsetFromRoot                 (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::PlayGroundParticleVFX(bool orientToGround, class UParticleSystem* ParticleSystem, const struct FVector& OffsetFromRoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.PlayGroundParticleVFX");

	AXenomorph_Character_BP_C_PlayGroundParticleVFX_Params params;
	params.orientToGround = orientToGround;
	params.ParticleSystem = ParticleSystem;
	params.OffsetFromRoot = OffsetFromRoot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ExecuteUbergraph_Xenomorph_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_C::ExecuteUbergraph_Xenomorph_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP.Xenomorph_Character_BP_C.ExecuteUbergraph_Xenomorph_Character_BP");

	AXenomorph_Character_BP_C_ExecuteUbergraph_Xenomorph_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

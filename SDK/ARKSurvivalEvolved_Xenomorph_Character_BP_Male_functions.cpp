// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Character_BP_Male_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DiveEnd
// ()

void AXenomorph_Character_BP_Male_C::DiveEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DiveEnd");

	AXenomorph_Character_BP_Male_C_DiveEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPNotifyClaimed
// ()

void AXenomorph_Character_BP_Male_C::BPNotifyClaimed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPNotifyClaimed");

	AXenomorph_Character_BP_Male_C_BPNotifyClaimed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPChangedActorTeam
// ()

void AXenomorph_Character_BP_Male_C::BPChangedActorTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPChangedActorTeam");

	AXenomorph_Character_BP_Male_C_BPChangedActorTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPPreventOrderAllowed
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Character_BP_Male_C::BPPreventOrderAllowed(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPPreventOrderAllowed");

	AXenomorph_Character_BP_Male_C_BPPreventOrderAllowed_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BlueprintExtraBabyScaling
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AXenomorph_Character_BP_Male_C::BlueprintExtraBabyScaling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BlueprintExtraBabyScaling");

	AXenomorph_Character_BP_Male_C_BlueprintExtraBabyScaling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Character_BP_Male_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPShouldForceFlee");

	AXenomorph_Character_BP_Male_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPAllowClaiming
// ()
// Parameters:
// class AShooterPlayerController** ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Character_BP_Male_C::BPAllowClaiming(class AShooterPlayerController** ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPAllowClaiming");

	AXenomorph_Character_BP_Male_C_BPAllowClaiming_Params params;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Delegate, HasOutParms, DLLImport, BlueprintCallable)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AXenomorph_Character_BP_Male_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPGetMultiUseEntries");

	AXenomorph_Character_BP_Male_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DiveSetup
// ()

void AXenomorph_Character_BP_Male_C::DiveSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DiveSetup");

	AXenomorph_Character_BP_Male_C_DiveSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DiveIdle
// ()

void AXenomorph_Character_BP_Male_C::DiveIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DiveIdle");

	AXenomorph_Character_BP_Male_C_DiveIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.OnRep_isUnderground
// ()

void AXenomorph_Character_BP_Male_C::OnRep_isUnderground()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.OnRep_isUnderground");

	AXenomorph_Character_BP_Male_C_OnRep_isUnderground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPAdjustAttackIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AXenomorph_Character_BP_Male_C::BPAdjustAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPAdjustAttackIndex");

	AXenomorph_Character_BP_Male_C_BPAdjustAttackIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.OnRep_bIsOffspringMode
// ()

void AXenomorph_Character_BP_Male_C::OnRep_bIsOffspringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.OnRep_bIsOffspringMode");

	AXenomorph_Character_BP_Male_C_OnRep_bIsOffspringMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BlueprintGetAttackWeight
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         inputWeight                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AXenomorph_Character_BP_Male_C::BlueprintGetAttackWeight(int* AttackIndex, float* inputWeight, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BlueprintGetAttackWeight");

	AXenomorph_Character_BP_Male_C_BlueprintGetAttackWeight_Params params;
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


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPNotifyBabyAgeIncrement
// ()
// Parameters:
// float*                         PreviousAge                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewAge                         (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_C::BPNotifyBabyAgeIncrement(float* PreviousAge, float* NewAge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPNotifyBabyAgeIncrement");

	AXenomorph_Character_BP_Male_C_BPNotifyBabyAgeIncrement_Params params;
	params.PreviousAge = PreviousAge;
	params.NewAge = NewAge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.GetDefaultMaleXeno
// ()
// Parameters:
// class AXenomorph_Character_BP_Male_C* AsXenomorph_Character_BP_Male_C (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_C::GetDefaultMaleXeno(class AXenomorph_Character_BP_Male_C** AsXenomorph_Character_BP_Male_C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.GetDefaultMaleXeno");

	AXenomorph_Character_BP_Male_C_GetDefaultMaleXeno_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsXenomorph_Character_BP_Male_C != nullptr)
		*AsXenomorph_Character_BP_Male_C = params.AsXenomorph_Character_BP_Male_C;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.SetupOffspringMeshAndSettings
// ()
// Parameters:
// bool                           OffspringMode                  (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_C::SetupOffspringMeshAndSettings(bool OffspringMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.SetupOffspringMeshAndSettings");

	AXenomorph_Character_BP_Male_C_SetupOffspringMeshAndSettings_Params params;
	params.OffspringMode = OffspringMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.InitializeDive
// ()

void AXenomorph_Character_BP_Male_C::InitializeDive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.InitializeDive");

	AXenomorph_Character_BP_Male_C_InitializeDive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPBecomeAdult
// ()

void AXenomorph_Character_BP_Male_C::BPBecomeAdult()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPBecomeAdult");

	AXenomorph_Character_BP_Male_C_BPBecomeAdult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.Can Dive
// ()
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_C::Can_Dive(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.Can Dive");

	AXenomorph_Character_BP_Male_C_Can_Dive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.UserConstructionScript
// ()

void AXenomorph_Character_BP_Male_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.UserConstructionScript");

	AXenomorph_Character_BP_Male_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DelayedUnbury
// ()
// Parameters:
// float                          DelayTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_C::DelayedUnbury(float DelayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DelayedUnbury");

	AXenomorph_Character_BP_Male_C_DelayedUnbury_Params params;
	params.DelayTime = DelayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BornDiveOut
// ()

void AXenomorph_Character_BP_Male_C::BornDiveOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BornDiveOut");

	AXenomorph_Character_BP_Male_C_BornDiveOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.AnimNotify_EndBury
// ()

void AXenomorph_Character_BP_Male_C::AnimNotify_EndBury()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.AnimNotify_EndBury");

	AXenomorph_Character_BP_Male_C_AnimNotify_EndBury_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BeginMaturationTransform
// ()

void AXenomorph_Character_BP_Male_C::BeginMaturationTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BeginMaturationTransform");

	AXenomorph_Character_BP_Male_C_BeginMaturationTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.AnimNotify_ChestBurst
// ()

void AXenomorph_Character_BP_Male_C::AnimNotify_ChestBurst()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.AnimNotify_ChestBurst");

	AXenomorph_Character_BP_Male_C_AnimNotify_ChestBurst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.ExecuteUbergraph_Xenomorph_Character_BP_Male
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_C::ExecuteUbergraph_Xenomorph_Character_BP_Male(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.ExecuteUbergraph_Xenomorph_Character_BP_Male");

	AXenomorph_Character_BP_Male_C_ExecuteUbergraph_Xenomorph_Character_BP_Male_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

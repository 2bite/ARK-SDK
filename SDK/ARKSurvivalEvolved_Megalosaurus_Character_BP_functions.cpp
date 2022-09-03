// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megalosaurus_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AMegalosaurus_Character_BP_C::GetSocketForMeleeTraceForHitBlockers(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.GetSocketForMeleeTraceForHitBlockers");

	AMegalosaurus_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.UpdateSeverTimerLimits
// ()
// Parameters:
// float                          newMIN                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          newMax                         (Parm, ZeroConstructor, IsPlainOldData)

void AMegalosaurus_Character_BP_C::UpdateSeverTimerLimits(float newMIN, float newMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.UpdateSeverTimerLimits");

	AMegalosaurus_Character_BP_C_UpdateSeverTimerLimits_Params params;
	params.newMIN = newMIN;
	params.newMax = newMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.InitNocturnalDino
// ()

void AMegalosaurus_Character_BP_C::InitNocturnalDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.InitNocturnalDino");

	AMegalosaurus_Character_BP_C_InitNocturnalDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.SetupRefs
// ()

void AMegalosaurus_Character_BP_C::SetupRefs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.SetupRefs");

	AMegalosaurus_Character_BP_C_SetupRefs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPUnstasis
// ()

void AMegalosaurus_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPUnstasis");

	AMegalosaurus_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPNotifyStructurePlacedNearby
// ()
// Parameters:
// class APrimalStructure**       NewStructure                   (Parm, ZeroConstructor, IsPlainOldData)

void AMegalosaurus_Character_BP_C::BPNotifyStructurePlacedNearby(class APrimalStructure** NewStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPNotifyStructurePlacedNearby");

	AMegalosaurus_Character_BP_C_BPNotifyStructurePlacedNearby_Params params;
	params.NewStructure = NewStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPTimerServer
// ()

void AMegalosaurus_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPTimerServer");

	AMegalosaurus_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPGetMultiUseEntries
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AMegalosaurus_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPGetMultiUseEntries");

	AMegalosaurus_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMegalosaurus_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BPTryMultiUse");

	AMegalosaurus_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnWakeUp
// ()

void AMegalosaurus_Character_BP_C::OnWakeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnWakeUp");

	AMegalosaurus_Character_BP_C_OnWakeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnRep_bIsDaytime
// ()

void AMegalosaurus_Character_BP_C::OnRep_bIsDaytime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnRep_bIsDaytime");

	AMegalosaurus_Character_BP_C_OnRep_bIsDaytime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnFallAsleep
// ()

void AMegalosaurus_Character_BP_C::OnFallAsleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnFallAsleep");

	AMegalosaurus_Character_BP_C_OnFallAsleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.Howl
// ()

void AMegalosaurus_Character_BP_C::Howl()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.Howl");

	AMegalosaurus_Character_BP_C_Howl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.UpdateAppearance
// ()

void AMegalosaurus_Character_BP_C::UpdateAppearance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.UpdateAppearance");

	AMegalosaurus_Character_BP_C_UpdateAppearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnRep_bIsNaturallySleeping
// ()

void AMegalosaurus_Character_BP_C::OnRep_bIsNaturallySleeping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnRep_bIsNaturallySleeping");

	AMegalosaurus_Character_BP_C_OnRep_bIsNaturallySleeping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CheckPrey
// ()

void AMegalosaurus_Character_BP_C::CheckPrey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CheckPrey");

	AMegalosaurus_Character_BP_C_CheckPrey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CanSleep
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMegalosaurus_Character_BP_C::CanSleep(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CanSleep");

	AMegalosaurus_Character_BP_C_CanSleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CanWake
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMegalosaurus_Character_BP_C::CanWake(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CanWake");

	AMegalosaurus_Character_BP_C_CanWake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CheckForSleep
// ()

void AMegalosaurus_Character_BP_C::CheckForSleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CheckForSleep");

	AMegalosaurus_Character_BP_C_CheckForSleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CheckForWake
// ()

void AMegalosaurus_Character_BP_C::CheckForWake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.CheckForWake");

	AMegalosaurus_Character_BP_C_CheckForWake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.RemoveCarryBuffFromPrey
// ()

void AMegalosaurus_Character_BP_C::RemoveCarryBuffFromPrey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.RemoveCarryBuffFromPrey");

	AMegalosaurus_Character_BP_C_RemoveCarryBuffFromPrey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMegalosaurus_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.ReceiveAnyDamage");

	AMegalosaurus_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.IsSleepDeprived
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMegalosaurus_Character_BP_C::IsSleepDeprived(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.IsSleepDeprived");

	AMegalosaurus_Character_BP_C_IsSleepDeprived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.DropPrey
// ()
// Parameters:
// bool                           PlayAnim                       (Parm, ZeroConstructor, IsPlainOldData)

void AMegalosaurus_Character_BP_C::DropPrey(bool PlayAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.DropPrey");

	AMegalosaurus_Character_BP_C_DropPrey_Params params;
	params.PlayAnim = PlayAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.FoodTriesToEscape
// ()
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMegalosaurus_Character_BP_C::FoodTriesToEscape(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.FoodTriesToEscape");

	AMegalosaurus_Character_BP_C_FoodTriesToEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMegalosaurus_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BlueprintCanRiderAttack");

	AMegalosaurus_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.IsCarryingValidLivingCharacter
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMegalosaurus_Character_BP_C::IsCarryingValidLivingCharacter(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.IsCarryingValidLivingCharacter");

	AMegalosaurus_Character_BP_C_IsCarryingValidLivingCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.TryShakePreyAttack
// ()

void AMegalosaurus_Character_BP_C::TryShakePreyAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.TryShakePreyAttack");

	AMegalosaurus_Character_BP_C_TryShakePreyAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMegalosaurus_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.BlueprintCanAttack");

	AMegalosaurus_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.UserConstructionScript
// ()

void AMegalosaurus_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.UserConstructionScript");

	AMegalosaurus_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.AnimNotify_DamagePrey
// ()

void AMegalosaurus_Character_BP_C::AnimNotify_DamagePrey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.AnimNotify_DamagePrey");

	AMegalosaurus_Character_BP_C_AnimNotify_DamagePrey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.AnimNotify_ThrowPrey
// ()

void AMegalosaurus_Character_BP_C::AnimNotify_ThrowPrey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.AnimNotify_ThrowPrey");

	AMegalosaurus_Character_BP_C_AnimNotify_ThrowPrey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.AnimNotify_CheckForPrey
// ()

void AMegalosaurus_Character_BP_C::AnimNotify_CheckForPrey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.AnimNotify_CheckForPrey");

	AMegalosaurus_Character_BP_C_AnimNotify_CheckForPrey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnCarriedCharacterDeath
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void AMegalosaurus_Character_BP_C::OnCarriedCharacterDeath(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnCarriedCharacterDeath");

	AMegalosaurus_Character_BP_C_OnCarriedCharacterDeath_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnIsDaytime
// ()

void AMegalosaurus_Character_BP_C::OnIsDaytime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnIsDaytime");

	AMegalosaurus_Character_BP_C_OnIsDaytime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnIsNighttime
// ()

void AMegalosaurus_Character_BP_C::OnIsNighttime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.OnIsNighttime");

	AMegalosaurus_Character_BP_C_OnIsNighttime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.ReceiveBeginPlay
// ()

void AMegalosaurus_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.ReceiveBeginPlay");

	AMegalosaurus_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.FirstHowl
// ()

void AMegalosaurus_Character_BP_C::FirstHowl()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.FirstHowl");

	AMegalosaurus_Character_BP_C_FirstHowl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.ExecuteUbergraph_Megalosaurus_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMegalosaurus_Character_BP_C::ExecuteUbergraph_Megalosaurus_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP.Megalosaurus_Character_BP_C.ExecuteUbergraph_Megalosaurus_Character_BP");

	AMegalosaurus_Character_BP_C_ExecuteUbergraph_Megalosaurus_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

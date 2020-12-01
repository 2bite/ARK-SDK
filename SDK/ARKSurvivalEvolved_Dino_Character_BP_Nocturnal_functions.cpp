// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_Nocturnal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPBecomeAdult
// ()

void ADino_Character_BP_Nocturnal_C::BPBecomeAdult()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPBecomeAdult");

	ADino_Character_BP_Nocturnal_C_BPBecomeAdult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPBecomeBaby
// ()

void ADino_Character_BP_Nocturnal_C::BPBecomeBaby()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPBecomeBaby");

	ADino_Character_BP_Nocturnal_C_BPBecomeBaby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.AllowNocturnalLogic
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::AllowNocturnalLogic(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.AllowNocturnalLogic");

	ADino_Character_BP_Nocturnal_C_AllowNocturnalLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsDinoInShallowWater
// ()
// Parameters:
// bool                           shallowWaters                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::IsDinoInShallowWater(bool* shallowWaters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsDinoInShallowWater");

	ADino_Character_BP_Nocturnal_C_IsDinoInShallowWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shallowWaters != nullptr)
		*shallowWaters = params.shallowWaters;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.Is Target Attacking Ally
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::Is_Target_Attacking_Ally(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.Is Target Attacking Ally");

	ADino_Character_BP_Nocturnal_C_Is_Target_Attacking_Ally_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsPossibleToSleep
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::IsPossibleToSleep(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsPossibleToSleep");

	ADino_Character_BP_Nocturnal_C_IsPossibleToSleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPPreventRiding
// ()
// Parameters:
// class AShooterCharacter**      ByPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDontCheckDistance             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADino_Character_BP_Nocturnal_C::BPPreventRiding(class AShooterCharacter** ByPawn, bool* bDontCheckDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPPreventRiding");

	ADino_Character_BP_Nocturnal_C_BPPreventRiding_Params params;
	params.ByPawn = ByPawn;
	params.bDontCheckDistance = bDontCheckDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.SetupRefs
// ()

void ADino_Character_BP_Nocturnal_C::SetupRefs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.SetupRefs");

	ADino_Character_BP_Nocturnal_C_SetupRefs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsDaytime
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::IsDaytime(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsDaytime");

	ADino_Character_BP_Nocturnal_C_IsDaytime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.Check Time Of Day
// ()
// Parameters:
// bool                           ForceUpdate                    (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::Check_Time_Of_Day(bool ForceUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.Check Time Of Day");

	ADino_Character_BP_Nocturnal_C_Check_Time_Of_Day_Params params;
	params.ForceUpdate = ForceUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsTamedFollowing
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::IsTamedFollowing(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsTamedFollowing");

	ADino_Character_BP_Nocturnal_C_IsTamedFollowing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ADino_Character_BP_Nocturnal_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPGetMultiUseEntries");

	ADino_Character_BP_Nocturnal_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADino_Character_BP_Nocturnal_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPTryMultiUse");

	ADino_Character_BP_Nocturnal_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPTimerServer
// ()

void ADino_Character_BP_Nocturnal_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPTimerServer");

	ADino_Character_BP_Nocturnal_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.PrintStringWithAuth
// ()
// Parameters:
// class FString                  string                         (Parm, ZeroConstructor)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::PrintStringWithAuth(const class FString& string, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.PrintStringWithAuth");

	ADino_Character_BP_Nocturnal_C_PrintStringWithAuth_Params params;
	params.string = string;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPUnstasis
// ()

void ADino_Character_BP_Nocturnal_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPUnstasis");

	ADino_Character_BP_Nocturnal_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnRep_bIsDaytime
// ()

void ADino_Character_BP_Nocturnal_C::OnRep_bIsDaytime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnRep_bIsDaytime");

	ADino_Character_BP_Nocturnal_C_OnRep_bIsDaytime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.InitNocturnalDino
// ()

void ADino_Character_BP_Nocturnal_C::InitNocturnalDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.InitNocturnalDino");

	ADino_Character_BP_Nocturnal_C_InitNocturnalDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BlueprintDrawFloatingHUD");

	ADino_Character_BP_Nocturnal_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPNotifyStructurePlacedNearby
// ()
// Parameters:
// class APrimalStructure**       NewStructure                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::BPNotifyStructurePlacedNearby(class APrimalStructure** NewStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPNotifyStructurePlacedNearby");

	ADino_Character_BP_Nocturnal_C_BPNotifyStructurePlacedNearby_Params params;
	params.NewStructure = NewStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.SetTorpidity
// ()
// Parameters:
// float                          newTorpidity                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::SetTorpidity(float newTorpidity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.SetTorpidity");

	ADino_Character_BP_Nocturnal_C_SetTorpidity_Params params;
	params.newTorpidity = newTorpidity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnRep_bIsNaturallySleeping
// ()

void ADino_Character_BP_Nocturnal_C::OnRep_bIsNaturallySleeping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnRep_bIsNaturallySleeping");

	ADino_Character_BP_Nocturnal_C_OnRep_bIsNaturallySleeping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.PlayNaturalSleepingAnims
// ()
// Parameters:
// bool                           isFallingAsleep                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isAlerted                      (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::PlayNaturalSleepingAnims(bool isFallingAsleep, bool isAlerted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.PlayNaturalSleepingAnims");

	ADino_Character_BP_Nocturnal_C_PlayNaturalSleepingAnims_Params params;
	params.isFallingAsleep = isFallingAsleep;
	params.isAlerted = isAlerted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.GetIsFullyAwake
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::GetIsFullyAwake(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.GetIsFullyAwake");

	ADino_Character_BP_Nocturnal_C_GetIsFullyAwake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.DinoNeedsToSleep
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::DinoNeedsToSleep(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.DinoNeedsToSleep");

	ADino_Character_BP_Nocturnal_C_DinoNeedsToSleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.HasSleepDebt
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::HasSleepDebt(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.HasSleepDebt");

	ADino_Character_BP_Nocturnal_C_HasSleepDebt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.HasValidTarget
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::HasValidTarget(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.HasValidTarget");

	ADino_Character_BP_Nocturnal_C_HasValidTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPCharacterSleeped
// ()

void ADino_Character_BP_Nocturnal_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPCharacterSleeped");

	ADino_Character_BP_Nocturnal_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPCharacterUnsleeped
// ()

void ADino_Character_BP_Nocturnal_C::BPCharacterUnsleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BPCharacterUnsleeped");

	ADino_Character_BP_Nocturnal_C_BPCharacterUnsleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.GetSleepDebtToDeprivedRatio
// ()
// Parameters:
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::GetSleepDebtToDeprivedRatio(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.GetSleepDebtToDeprivedRatio");

	ADino_Character_BP_Nocturnal_C_GetSleepDebtToDeprivedRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.UpdateSleepDebt
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::UpdateSleepDebt(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.UpdateSleepDebt");

	ADino_Character_BP_Nocturnal_C_UpdateSleepDebt_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsDinoGrounded
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::IsDinoGrounded(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.IsDinoGrounded");

	ADino_Character_BP_Nocturnal_C_IsDinoGrounded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.ReceiveAnyDamage");

	ADino_Character_BP_Nocturnal_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.UpdateSleepRelatedActions
// ()

void ADino_Character_BP_Nocturnal_C::UpdateSleepRelatedActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.UpdateSleepRelatedActions");

	ADino_Character_BP_Nocturnal_C_UpdateSleepRelatedActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.CanWake
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::CanWake(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.CanWake");

	ADino_Character_BP_Nocturnal_C_CanWake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.CanSleep
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::CanSleep(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.CanSleep");

	ADino_Character_BP_Nocturnal_C_CanSleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.Net_Set Natural Sleep State
// ()
// Parameters:
// bool                           isAsleep                       (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::Net_Set_Natural_Sleep_State(bool isAsleep)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.Net_Set Natural Sleep State");

	ADino_Character_BP_Nocturnal_C_Net_Set_Natural_Sleep_State_Params params;
	params.isAsleep = isAsleep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.CheckForWake
// ()

void ADino_Character_BP_Nocturnal_C::CheckForWake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.CheckForWake");

	ADino_Character_BP_Nocturnal_C_CheckForWake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.CheckForSleep
// ()

void ADino_Character_BP_Nocturnal_C::CheckForSleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.CheckForSleep");

	ADino_Character_BP_Nocturnal_C_CheckForSleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnFallAsleep
// ()

void ADino_Character_BP_Nocturnal_C::OnFallAsleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnFallAsleep");

	ADino_Character_BP_Nocturnal_C_OnFallAsleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnWakeUp
// ()

void ADino_Character_BP_Nocturnal_C::OnWakeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnWakeUp");

	ADino_Character_BP_Nocturnal_C_OnWakeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.WakeUp
// ()
// Parameters:
// bool                           forceSuccess                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::WakeUp(bool forceSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.WakeUp");

	ADino_Character_BP_Nocturnal_C_WakeUp_Params params;
	params.forceSuccess = forceSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.FallAsleep
// ()
// Parameters:
// bool                           forceSuccess                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ignoreIsPossible               (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::FallAsleep(bool forceSuccess, bool ignoreIsPossible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.FallAsleep");

	ADino_Character_BP_Nocturnal_C_FallAsleep_Params params;
	params.forceSuccess = forceSuccess;
	params.ignoreIsPossible = ignoreIsPossible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.UserConstructionScript
// ()

void ADino_Character_BP_Nocturnal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.UserConstructionScript");

	ADino_Character_BP_Nocturnal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnIsDaytime
// ()

void ADino_Character_BP_Nocturnal_C::OnIsDaytime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnIsDaytime");

	ADino_Character_BP_Nocturnal_C_OnIsDaytime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnIsNighttime
// ()

void ADino_Character_BP_Nocturnal_C::OnIsNighttime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.OnIsNighttime");

	ADino_Character_BP_Nocturnal_C_OnIsNighttime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.EnableMovementAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::EnableMovementAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.EnableMovementAfterDelay");

	ADino_Character_BP_Nocturnal_C_EnableMovementAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.DisableMovementAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::DisableMovementAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.DisableMovementAfterDelay");

	ADino_Character_BP_Nocturnal_C_DisableMovementAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.ReceiveBeginPlay
// ()

void ADino_Character_BP_Nocturnal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.ReceiveBeginPlay");

	ADino_Character_BP_Nocturnal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ADino_Character_BP_Nocturnal_C::BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature");

	ADino_Character_BP_Nocturnal_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.ReInitializeNocturnalDino
// ()

void ADino_Character_BP_Nocturnal_C::ReInitializeNocturnalDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.ReInitializeNocturnalDino");

	ADino_Character_BP_Nocturnal_C_ReInitializeNocturnalDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.ExecuteUbergraph_Dino_Character_BP_Nocturnal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Nocturnal_C::ExecuteUbergraph_Dino_Character_BP_Nocturnal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Nocturnal.Dino_Character_BP_Nocturnal_C.ExecuteUbergraph_Dino_Character_BP_Nocturnal");

	ADino_Character_BP_Nocturnal_C_ExecuteUbergraph_Dino_Character_BP_Nocturnal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

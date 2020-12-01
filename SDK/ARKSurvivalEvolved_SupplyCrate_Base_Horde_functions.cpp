// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Base_Horde_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetMaxSplineDistance
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// float                          MaxDistanceFromCrate           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::GetMaxSplineDistance(float* MaxDistanceFromCrate)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetMaxSplineDistance");

	ASupplyCrate_Base_Horde_C_GetMaxSplineDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxDistanceFromCrate != nullptr)
		*MaxDistanceFromCrate = params.MaxDistanceFromCrate;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.PlayHordeAudio
// ()
// Parameters:
// class USoundBase*              audio                          (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::PlayHordeAudio(class USoundBase* audio)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.PlayHordeAudio");

	ASupplyCrate_Base_Horde_C_PlayHordeAudio_Params params;
	params.audio = audio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPPlayDying
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPPlayDying");

	ASupplyCrate_Base_Horde_C_BPPlayDying_Params params;
	params.KillingDamage = KillingDamage;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPPostInitializeComponents
// ()

void ASupplyCrate_Base_Horde_C::BPPostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPPostInitializeComponents");

	ASupplyCrate_Base_Horde_C_BPPostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.IntermissionEnd
// ()

void ASupplyCrate_Base_Horde_C::IntermissionEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.IntermissionEnd");

	ASupplyCrate_Base_Horde_C_IntermissionEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.OnRep_CurrentWave
// ()

void ASupplyCrate_Base_Horde_C::OnRep_CurrentWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.OnRep_CurrentWave");

	ASupplyCrate_Base_Horde_C_OnRep_CurrentWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CanForceComplete
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASupplyCrate_Base_Horde_C::CanForceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CanForceComplete");

	ASupplyCrate_Base_Horde_C_CanForceComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASupplyCrate_Base_Horde_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPAdjustDamage");

	ASupplyCrate_Base_Horde_C_BPAdjustDamage_Params params;
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


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.PushAllDinosOutward
// ()

void ASupplyCrate_Base_Horde_C::PushAllDinosOutward()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.PushAllDinosOutward");

	ASupplyCrate_Base_Horde_C_PushAllDinosOutward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPUnstasis
// ()

void ASupplyCrate_Base_Horde_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPUnstasis");

	ASupplyCrate_Base_Horde_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPPreventStasis
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASupplyCrate_Base_Horde_C::BPPreventStasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPPreventStasis");

	ASupplyCrate_Base_Horde_C_BPPreventStasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPTriggerStasisEvent
// ()

void ASupplyCrate_Base_Horde_C::BPTriggerStasisEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPTriggerStasisEvent");

	ASupplyCrate_Base_Horde_C_BPTriggerStasisEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.RunLandSequence
// ()

void ASupplyCrate_Base_Horde_C::RunLandSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.RunLandSequence");

	ASupplyCrate_Base_Horde_C_RunLandSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GenerateLoot
// ()

void ASupplyCrate_Base_Horde_C::GenerateLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GenerateLoot");

	ASupplyCrate_Base_Horde_C_GenerateLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetNPCsLeft
// ()
// Parameters:
// int                            NPCleft                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::GetNPCsLeft(int* NPCleft)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetNPCsLeft");

	ASupplyCrate_Base_Horde_C_GetNPCsLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NPCleft != nullptr)
		*NPCleft = params.NPCleft;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ActivateHordeBarrier
// ()
// Parameters:
// int                            RadiusUnits                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ShieldHealth                   (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::ActivateHordeBarrier(int RadiusUnits, float ShieldHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ActivateHordeBarrier");

	ASupplyCrate_Base_Horde_C_ActivateHordeBarrier_Params params;
	params.RadiusUnits = RadiusUnits;
	params.ShieldHealth = ShieldHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.OnRep_bOpenSeqInitiated
// ()

void ASupplyCrate_Base_Horde_C::OnRep_bOpenSeqInitiated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.OnRep_bOpenSeqInitiated");

	ASupplyCrate_Base_Horde_C_OnRep_bOpenSeqInitiated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetQualityParticleTemplate
// ()
// Parameters:
// unsigned char                  AQuality                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ATemplate                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::GetQualityParticleTemplate(unsigned char AQuality, class UClass** ATemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetQualityParticleTemplate");

	ASupplyCrate_Base_Horde_C_GetQualityParticleTemplate_Params params;
	params.AQuality = AQuality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ATemplate != nullptr)
		*ATemplate = params.ATemplate;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.OpenCrate
// ()

void ASupplyCrate_Base_Horde_C::OpenCrate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.OpenCrate");

	ASupplyCrate_Base_Horde_C_OpenCrate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.AddToAggro
// ()
// Parameters:
// TArray<class APrimalDinoCharacter*> DinosToAggro                   (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ASupplyCrate_Base_Horde_C::AddToAggro(TArray<class APrimalDinoCharacter*>* DinosToAggro)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.AddToAggro");

	ASupplyCrate_Base_Horde_C_AddToAggro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DinosToAggro != nullptr)
		*DinosToAggro = params.DinosToAggro;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetNPCSCloseToCrate
// ()
// Parameters:
// TArray<class APrimalDinoCharacter*> NPCsAtCrate                    (Parm, OutParm, ZeroConstructor)

void ASupplyCrate_Base_Horde_C::GetNPCSCloseToCrate(TArray<class APrimalDinoCharacter*>* NPCsAtCrate)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetNPCSCloseToCrate");

	ASupplyCrate_Base_Horde_C_GetNPCSCloseToCrate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NPCsAtCrate != nullptr)
		*NPCsAtCrate = params.NPCsAtCrate;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CheatEndWave
// ()

void ASupplyCrate_Base_Horde_C::CheatEndWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CheatEndWave");

	ASupplyCrate_Base_Horde_C_CheatEndWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CheatEndHordeMode
// ()

void ASupplyCrate_Base_Horde_C::CheatEndHordeMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CheatEndHordeMode");

	ASupplyCrate_Base_Horde_C_CheatEndHordeMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASupplyCrate_Base_Horde_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPTryMultiUse");

	ASupplyCrate_Base_Horde_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPClientDoMultiUse");

	ASupplyCrate_Base_Horde_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPGetMultiUseEntries
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ASupplyCrate_Base_Horde_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BPGetMultiUseEntries");

	ASupplyCrate_Base_Horde_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.KillExistingNPCS
// ()

void ASupplyCrate_Base_Horde_C::KillExistingNPCS()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.KillExistingNPCS");

	ASupplyCrate_Base_Horde_C_KillExistingNPCS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.RemoveHordeDino
// ()
// Parameters:
// class APrimalDinoCharacter*    APrimalDino                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RemoveFromArray                (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::RemoveHordeDino(class APrimalDinoCharacter* APrimalDino, bool RemoveFromArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.RemoveHordeDino");

	ASupplyCrate_Base_Horde_C_RemoveHordeDino_Params params;
	params.APrimalDino = APrimalDino;
	params.RemoveFromArray = RemoveFromArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.DestroyExistingStructures
// ()
// Parameters:
// float                          FRadius                        (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::DestroyExistingStructures(float FRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.DestroyExistingStructures");

	ASupplyCrate_Base_Horde_C_DestroyExistingStructures_Params params;
	params.FRadius = FRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.SendClientNotification
// ()
// Parameters:
// class FString                  Message                        (Parm, ZeroConstructor)

void ASupplyCrate_Base_Horde_C::SendClientNotification(const class FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.SendClientNotification");

	ASupplyCrate_Base_Horde_C_SendClientNotification_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.RemoveBarrierActive
// ()

void ASupplyCrate_Base_Horde_C::RemoveBarrierActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.RemoveBarrierActive");

	ASupplyCrate_Base_Horde_C_RemoveBarrierActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.RemoveBarrierAttack
// ()
// Parameters:
// bool                           bIsDestroyed                   (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::RemoveBarrierAttack(bool bIsDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.RemoveBarrierAttack");

	ASupplyCrate_Base_Horde_C_RemoveBarrierAttack_Params params;
	params.bIsDestroyed = bIsDestroyed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetQualityInfo
// ()
// Parameters:
// int                            intTier                        (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  StringQuality                  (Parm, OutParm, ZeroConstructor)
// struct FLinearColor            ReturnVarColor                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::GetQualityInfo(int intTier, class FString* StringQuality, struct FLinearColor* ReturnVarColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetQualityInfo");

	ASupplyCrate_Base_Horde_C_GetQualityInfo_Params params;
	params.intTier = intTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StringQuality != nullptr)
		*StringQuality = params.StringQuality;
	if (ReturnVarColor != nullptr)
		*ReturnVarColor = params.ReturnVarColor;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.Initiate Horde Mode
// ()

void ASupplyCrate_Base_Horde_C::Initiate_Horde_Mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.Initiate Horde Mode");

	ASupplyCrate_Base_Horde_C_Initiate_Horde_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CrateCleanup
// (NetRequest, Native, Event, Static, Private, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)

void ASupplyCrate_Base_Horde_C::STATIC_CrateCleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CrateCleanup");

	ASupplyCrate_Base_Horde_C_CrateCleanup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.NPCAttackCrate
// ()

void ASupplyCrate_Base_Horde_C::NPCAttackCrate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.NPCAttackCrate");

	ASupplyCrate_Base_Horde_C_NPCAttackCrate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetNumOfNPCAtCrate
// ()
// Parameters:
// int                            NumNPC                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::GetNumOfNPCAtCrate(int* NumNPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetNumOfNPCAtCrate");

	ASupplyCrate_Base_Horde_C_GetNumOfNPCAtCrate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumNPC != nullptr)
		*NumNPC = params.NumNPC;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BlueprintDrawHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BlueprintDrawHUD");

	ASupplyCrate_Base_Horde_C_BlueprintDrawHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.EndHordeMode
// ()

void ASupplyCrate_Base_Horde_C::EndHordeMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.EndHordeMode");

	ASupplyCrate_Base_Horde_C_EndHordeMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetOctreeNPCs
// ()

void ASupplyCrate_Base_Horde_C::GetOctreeNPCs()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetOctreeNPCs");

	ASupplyCrate_Base_Horde_C_GetOctreeNPCs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.PrepareNPCForRouting
// ()
// Parameters:
// class APrimalDinoCharacter*    APrimalDino                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSpawned                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FSpawnPointStruct       LocationNode                   (Parm)
// class AHorde_Spline_Path_C*    WorldSpline                    (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::PrepareNPCForRouting(class APrimalDinoCharacter* APrimalDino, bool bIsSpawned, const struct FSpawnPointStruct& LocationNode, class AHorde_Spline_Path_C* WorldSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.PrepareNPCForRouting");

	ASupplyCrate_Base_Horde_C_PrepareNPCForRouting_Params params;
	params.APrimalDino = APrimalDino;
	params.bIsSpawned = bIsSpawned;
	params.LocationNode = LocationNode;
	params.WorldSpline = WorldSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ConfigureWaves
// (NetRequest, Event, Private, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)

void ASupplyCrate_Base_Horde_C::ConfigureWaves()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ConfigureWaves");

	ASupplyCrate_Base_Horde_C_ConfigureWaves_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.IsReadyForNextWave
// ()
// Parameters:
// bool                           bIsReady                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFinished                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::IsReadyForNextWave(bool* bIsReady, bool* bIsFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.IsReadyForNextWave");

	ASupplyCrate_Base_Horde_C_IsReadyForNextWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsReady != nullptr)
		*bIsReady = params.bIsReady;
	if (bIsFinished != nullptr)
		*bIsFinished = params.bIsFinished;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.UserConstructionScript
// ()

void ASupplyCrate_Base_Horde_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.UserConstructionScript");

	ASupplyCrate_Base_Horde_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CheckProgress
// ()

void ASupplyCrate_Base_Horde_C::CheckProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CheckProgress");

	ASupplyCrate_Base_Horde_C_CheckProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BeginWaveSpawnTimer
// ()

void ASupplyCrate_Base_Horde_C::BeginWaveSpawnTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.BeginWaveSpawnTimer");

	ASupplyCrate_Base_Horde_C_BeginWaveSpawnTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.SpawnWave
// ()

void ASupplyCrate_Base_Horde_C::SpawnWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.SpawnWave");

	ASupplyCrate_Base_Horde_C_SpawnWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.RouteExistingActors
// ()

void ASupplyCrate_Base_Horde_C::RouteExistingActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.RouteExistingActors");

	ASupplyCrate_Base_Horde_C_RouteExistingActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ReceiveBeginPlay
// ()

void ASupplyCrate_Base_Horde_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ReceiveBeginPlay");

	ASupplyCrate_Base_Horde_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ReceiveDestroyed
// ()

void ASupplyCrate_Base_Horde_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ReceiveDestroyed");

	ASupplyCrate_Base_Horde_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CheckHordeInitiation
// ()

void ASupplyCrate_Base_Horde_C::CheckHordeInitiation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CheckHordeInitiation");

	ASupplyCrate_Base_Horde_C_CheckHordeInitiation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.DeployHordeBarrier
// ()
// Parameters:
// int                            ShieldRadiusUnits              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ShieldHealth                   (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::DeployHordeBarrier(int ShieldRadiusUnits, float ShieldHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.DeployHordeBarrier");

	ASupplyCrate_Base_Horde_C_DeployHordeBarrier_Params params;
	params.ShieldRadiusUnits = ShieldRadiusUnits;
	params.ShieldHealth = ShieldHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.SpawnInitiationParticles
// ()

void ASupplyCrate_Base_Horde_C::SpawnInitiationParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.SpawnInitiationParticles");

	ASupplyCrate_Base_Horde_C_SpawnInitiationParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.DeactivateHordeShield
// ()

void ASupplyCrate_Base_Horde_C::DeactivateHordeShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.DeactivateHordeShield");

	ASupplyCrate_Base_Horde_C_DeactivateHordeShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CancelIntermission
// ()

void ASupplyCrate_Base_Horde_C::CancelIntermission()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CancelIntermission");

	ASupplyCrate_Base_Horde_C_CancelIntermission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetDinoCount
// ()

void ASupplyCrate_Base_Horde_C::GetDinoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetDinoCount");

	ASupplyCrate_Base_Horde_C_GetDinoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GiveItems
// ()

void ASupplyCrate_Base_Horde_C::GiveItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GiveItems");

	ASupplyCrate_Base_Horde_C_GiveItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.SetShieldColor
// ()
// Parameters:
// class AStorageBox_HordeShield_C* TekShield                      (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::SetShieldColor(class AStorageBox_HordeShield_C* TekShield)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.SetShieldColor");

	ASupplyCrate_Base_Horde_C_SetShieldColor_Params params;
	params.TekShield = TekShield;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.SetClientTime
// ()
// Parameters:
// float                          IntermissionSeconds            (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::SetClientTime(float IntermissionSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.SetClientTime");

	ASupplyCrate_Base_Horde_C_SetClientTime_Params params;
	params.IntermissionSeconds = IntermissionSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CheckHiding
// ()

void ASupplyCrate_Base_Horde_C::CheckHiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.CheckHiding");

	ASupplyCrate_Base_Horde_C_CheckHiding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.PlayCameraShake
// ()

void ASupplyCrate_Base_Horde_C::PlayCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.PlayCameraShake");

	ASupplyCrate_Base_Horde_C_PlayCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetClientTime
// ()

void ASupplyCrate_Base_Horde_C::GetClientTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.GetClientTime");

	ASupplyCrate_Base_Horde_C_GetClientTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.EjectItems
// ()

void ASupplyCrate_Base_Horde_C::EjectItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.EjectItems");

	ASupplyCrate_Base_Horde_C_EjectItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ShowLostIndicator
// ()

void ASupplyCrate_Base_Horde_C::ShowLostIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ShowLostIndicator");

	ASupplyCrate_Base_Horde_C_ShowLostIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.MC_HasLanded
// ()

void ASupplyCrate_Base_Horde_C::MC_HasLanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.MC_HasLanded");

	ASupplyCrate_Base_Horde_C_MC_HasLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.MC_ToggleRelevancy
// ()

void ASupplyCrate_Base_Horde_C::MC_ToggleRelevancy()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.MC_ToggleRelevancy");

	ASupplyCrate_Base_Horde_C_MC_ToggleRelevancy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ActivateLowHealthVFX
// ()
// Parameters:
// int                            DmgLevel                       (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::ActivateLowHealthVFX(int DmgLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ActivateLowHealthVFX");

	ASupplyCrate_Base_Horde_C_ActivateLowHealthVFX_Params params;
	params.DmgLevel = DmgLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.MULTI_WaveEnd
// ()

void ASupplyCrate_Base_Horde_C::MULTI_WaveEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.MULTI_WaveEnd");

	ASupplyCrate_Base_Horde_C_MULTI_WaveEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.MULTI_IntermissionEnd
// ()

void ASupplyCrate_Base_Horde_C::MULTI_IntermissionEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.MULTI_IntermissionEnd");

	ASupplyCrate_Base_Horde_C_MULTI_IntermissionEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.MULTI_HordeWin
// ()

void ASupplyCrate_Base_Horde_C::MULTI_HordeWin()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.MULTI_HordeWin");

	ASupplyCrate_Base_Horde_C_MULTI_HordeWin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.PlayHordeStartAudio
// ()

void ASupplyCrate_Base_Horde_C::PlayHordeStartAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.PlayHordeStartAudio");

	ASupplyCrate_Base_Horde_C_PlayHordeStartAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.AssignCrateToTribe
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::AssignCrateToTribe(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.AssignCrateToTribe");

	ASupplyCrate_Base_Horde_C_AssignCrateToTribe_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ExecuteUbergraph_SupplyCrate_Base_Horde
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Base_Horde_C::ExecuteUbergraph_SupplyCrate_Base_Horde(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C.ExecuteUbergraph_SupplyCrate_Base_Horde");

	ASupplyCrate_Base_Horde_C_ExecuteUbergraph_SupplyCrate_Base_Horde_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

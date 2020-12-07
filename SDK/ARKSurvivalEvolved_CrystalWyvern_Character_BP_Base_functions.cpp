// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvern_Character_BP_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BP_OverrideDinoName
// ()
// Parameters:
// class FString*                 CurrentDinoName                (Parm, ZeroConstructor)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ACrystalWyvern_Character_BP_Base_C::BP_OverrideDinoName(class FString* CurrentDinoName, class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BP_OverrideDinoName");

	ACrystalWyvern_Character_BP_Base_C_BP_OverrideDinoName_Params params;
	params.CurrentDinoName = CurrentDinoName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.OnRep_bIsAggressiveOverride
// ()

void ACrystalWyvern_Character_BP_Base_C::OnRep_bIsAggressiveOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.OnRep_bIsAggressiveOverride");

	ACrystalWyvern_Character_BP_Base_C_OnRep_bIsAggressiveOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UpdateAggressiveOverride
// ()

void ACrystalWyvern_Character_BP_Base_C::UpdateAggressiveOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UpdateAggressiveOverride");

	ACrystalWyvern_Character_BP_Base_C_UpdateAggressiveOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.AllowGrappling
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACrystalWyvern_Character_BP_Base_C::AllowGrappling()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.AllowGrappling");

	ACrystalWyvern_Character_BP_Base_C_AllowGrappling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.TamingBasedCharsCheck
// ()

void ACrystalWyvern_Character_BP_Base_C::TamingBasedCharsCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.TamingBasedCharsCheck");

	ACrystalWyvern_Character_BP_Base_C_TamingBasedCharsCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DelayClearIsTamingFlyingHigh
// ()

void ACrystalWyvern_Character_BP_Base_C::DelayClearIsTamingFlyingHigh()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DelayClearIsTamingFlyingHigh");

	ACrystalWyvern_Character_BP_Base_C_DelayClearIsTamingFlyingHigh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.SetIsTamingFlyingHigh
// (NetReliable, NetRequest, Exec, Event, Static, Private, Delegate, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           IsTamingFlyingHigh             (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_Character_BP_Base_C::STATIC_SetIsTamingFlyingHigh(bool IsTamingFlyingHigh)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.SetIsTamingFlyingHigh");

	ACrystalWyvern_Character_BP_Base_C_SetIsTamingFlyingHigh_Params params;
	params.IsTamingFlyingHigh = IsTamingFlyingHigh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPRemoveCharacterSnapshot
// ()
// Parameters:
// class UPrimalItem**            Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 From                           (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_Character_BP_Base_C::BPRemoveCharacterSnapshot(class UPrimalItem** Item, class AActor** From)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPRemoveCharacterSnapshot");

	ACrystalWyvern_Character_BP_Base_C_BPRemoveCharacterSnapshot_Params params;
	params.Item = Item;
	params.From = From;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPApplyCharacterSnapshot
// (NetRequest, Event, NetMulticast, Private, Delegate, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimalItem**            Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 To                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxExtent                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Pose                           (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_Character_BP_Base_C::BPApplyCharacterSnapshot(class UPrimalItem** Item, class AActor** To, struct FVector* Offset, float* MaxExtent, int* Pose)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPApplyCharacterSnapshot");

	ACrystalWyvern_Character_BP_Base_C_BPApplyCharacterSnapshot_Params params;
	params.Item = Item;
	params.To = To;
	params.Offset = Offset;
	params.MaxExtent = MaxExtent;
	params.Pose = Pose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPUntamedConsumeFoodItem
// ()
// Parameters:
// class UPrimalItem**            foodItem                       (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_Character_BP_Base_C::BPUntamedConsumeFoodItem(class UPrimalItem** foodItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPUntamedConsumeFoodItem");

	ACrystalWyvern_Character_BP_Base_C_BPUntamedConsumeFoodItem_Params params;
	params.foodItem = foodItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPFedWakingTameEvent
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_Character_BP_Base_C::BPFedWakingTameEvent(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPFedWakingTameEvent");

	ACrystalWyvern_Character_BP_Base_C_BPFedWakingTameEvent_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.GetCrystalMeshes
// ()
// Parameters:
// TArray<class UStaticMeshComponent*> CrystalMeshComps               (Parm, OutParm, ZeroConstructor)

void ACrystalWyvern_Character_BP_Base_C::GetCrystalMeshes(TArray<class UStaticMeshComponent*>* CrystalMeshComps)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.GetCrystalMeshes");

	ACrystalWyvern_Character_BP_Base_C_GetCrystalMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CrystalMeshComps != nullptr)
		*CrystalMeshComps = params.CrystalMeshComps;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DelayDissolveCrystalMesh
// ()

void ACrystalWyvern_Character_BP_Base_C::DelayDissolveCrystalMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DelayDissolveCrystalMesh");

	ACrystalWyvern_Character_BP_Base_C_DelayDissolveCrystalMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ExtraFlameFXSetup
// ()
// Parameters:
// class UParticleSystemComponent* ParticleSystem                 (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_Character_BP_Base_C::ExtraFlameFXSetup(class UParticleSystemComponent* ParticleSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ExtraFlameFXSetup");

	ACrystalWyvern_Character_BP_Base_C_ExtraFlameFXSetup_Params params;
	params.ParticleSystem = ParticleSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_Character_BP_Base_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPClientDoMultiUse");

	ACrystalWyvern_Character_BP_Base_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DelayAggroToMilkingChar
// ()

void ACrystalWyvern_Character_BP_Base_C::DelayAggroToMilkingChar()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DelayAggroToMilkingChar");

	ACrystalWyvern_Character_BP_Base_C_DelayAggroToMilkingChar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACrystalWyvern_Character_BP_Base_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPTryMultiUse");

	ACrystalWyvern_Character_BP_Base_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPGetMultiUseEntries
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ACrystalWyvern_Character_BP_Base_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPGetMultiUseEntries");

	ACrystalWyvern_Character_BP_Base_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BP_OnSetDeath
// ()

void ACrystalWyvern_Character_BP_Base_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BP_OnSetDeath");

	ACrystalWyvern_Character_BP_Base_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPTimerNonDedicated
// ()

void ACrystalWyvern_Character_BP_Base_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPTimerNonDedicated");

	ACrystalWyvern_Character_BP_Base_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPModifyAimOffsetTargetLocation
// ()
// Parameters:
// struct FVector                 AimTargetLocation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ACrystalWyvern_Character_BP_Base_C::BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPModifyAimOffsetTargetLocation");

	ACrystalWyvern_Character_BP_Base_C_BPModifyAimOffsetTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AimTargetLocation != nullptr)
		*AimTargetLocation = params.AimTargetLocation;

	return params.ReturnValue;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPDinoPostBeginPlay
// ()

void ACrystalWyvern_Character_BP_Base_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPDinoPostBeginPlay");

	ACrystalWyvern_Character_BP_Base_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UpdateCrystalsAndParticles
// ()

void ACrystalWyvern_Character_BP_Base_C::UpdateCrystalsAndParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UpdateCrystalsAndParticles");

	ACrystalWyvern_Character_BP_Base_C_UpdateCrystalsAndParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UpdateAnimBP
// ()

void ACrystalWyvern_Character_BP_Base_C::UpdateAnimBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UpdateAnimBP");

	ACrystalWyvern_Character_BP_Base_C_UpdateAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_Character_BP_Base_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPSetupTamed");

	ACrystalWyvern_Character_BP_Base_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.SpawnNestEgg
// (NetReliable, NetRequest, Exec, Native, NetResponse, Private, Delegate, HasOutParms, BlueprintCallable, BlueprintPure)

void ACrystalWyvern_Character_BP_Base_C::SpawnNestEgg()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.SpawnNestEgg");

	ACrystalWyvern_Character_BP_Base_C_SpawnNestEgg_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPCharacterUnsleeped
// ()

void ACrystalWyvern_Character_BP_Base_C::BPCharacterUnsleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPCharacterUnsleeped");

	ACrystalWyvern_Character_BP_Base_C_BPCharacterUnsleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPBecomeAdult
// ()

void ACrystalWyvern_Character_BP_Base_C::BPBecomeAdult()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPBecomeAdult");

	ACrystalWyvern_Character_BP_Base_C_BPBecomeAdult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPBecomeBaby
// ()

void ACrystalWyvern_Character_BP_Base_C::BPBecomeBaby()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPBecomeBaby");

	ACrystalWyvern_Character_BP_Base_C_BPBecomeBaby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UserConstructionScript
// ()

void ACrystalWyvern_Character_BP_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UserConstructionScript");

	ACrystalWyvern_Character_BP_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_ManualDissolve__FinishedFunc
// ()

void ACrystalWyvern_Character_BP_Base_C::Timeline_ManualDissolve__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_ManualDissolve__FinishedFunc");

	ACrystalWyvern_Character_BP_Base_C_Timeline_ManualDissolve__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_ManualDissolve__UpdateFunc
// ()

void ACrystalWyvern_Character_BP_Base_C::Timeline_ManualDissolve__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_ManualDissolve__UpdateFunc");

	ACrystalWyvern_Character_BP_Base_C_Timeline_ManualDissolve__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_DissolveSkull__FinishedFunc
// ()

void ACrystalWyvern_Character_BP_Base_C::Timeline_DissolveSkull__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_DissolveSkull__FinishedFunc");

	ACrystalWyvern_Character_BP_Base_C_Timeline_DissolveSkull__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_DissolveSkull__UpdateFunc
// ()

void ACrystalWyvern_Character_BP_Base_C::Timeline_DissolveSkull__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_DissolveSkull__UpdateFunc");

	ACrystalWyvern_Character_BP_Base_C_Timeline_DissolveSkull__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPUnstasis
// ()

void ACrystalWyvern_Character_BP_Base_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPUnstasis");

	ACrystalWyvern_Character_BP_Base_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.AnimNotify_FlameFXStart
// ()

void ACrystalWyvern_Character_BP_Base_C::AnimNotify_FlameFXStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.AnimNotify_FlameFXStart");

	ACrystalWyvern_Character_BP_Base_C_AnimNotify_FlameFXStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.AnimNotify_FXTakeOff
// ()

void ACrystalWyvern_Character_BP_Base_C::AnimNotify_FXTakeOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.AnimNotify_FXTakeOff");

	ACrystalWyvern_Character_BP_Base_C_AnimNotify_FXTakeOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ManualDissolve
// ()

void ACrystalWyvern_Character_BP_Base_C::ManualDissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ManualDissolve");

	ACrystalWyvern_Character_BP_Base_C_ManualDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ReceiveBeginPlay
// ()

void ACrystalWyvern_Character_BP_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ReceiveBeginPlay");

	ACrystalWyvern_Character_BP_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DissolveSkull
// ()

void ACrystalWyvern_Character_BP_Base_C::DissolveSkull()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DissolveSkull");

	ACrystalWyvern_Character_BP_Base_C_DissolveSkull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ExecuteUbergraph_CrystalWyvern_Character_BP_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_Character_BP_Base_C::ExecuteUbergraph_CrystalWyvern_Character_BP_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ExecuteUbergraph_CrystalWyvern_Character_BP_Base");

	ACrystalWyvern_Character_BP_Base_C_ExecuteUbergraph_CrystalWyvern_Character_BP_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

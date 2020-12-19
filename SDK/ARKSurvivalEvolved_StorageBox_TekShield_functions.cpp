// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_TekShield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StorageBox_TekShield.StorageBox_TekShield_C.CheckCharactersInsideWhenActive
// ()

void AStorageBox_TekShield_C::CheckCharactersInsideWhenActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.CheckCharactersInsideWhenActive");

	AStorageBox_TekShield_C_CheckCharactersInsideWhenActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.ReceiveBeginPlay
// ()

void AStorageBox_TekShield_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.ReceiveBeginPlay");

	AStorageBox_TekShield_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.CheckChargeEffect
// ()

void AStorageBox_TekShield_C::CheckChargeEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.CheckChargeEffect");

	AStorageBox_TekShield_C_CheckChargeEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.OnRep_PowerUpCompletionTime
// ()

void AStorageBox_TekShield_C::OnRep_PowerUpCompletionTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.OnRep_PowerUpCompletionTime");

	AStorageBox_TekShield_C_OnRep_PowerUpCompletionTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_TekShield_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.BPClientDoMultiUse");

	AStorageBox_TekShield_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.BlueprintDrawHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_TekShield_C::BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.BlueprintDrawHUD");

	AStorageBox_TekShield_C_BlueprintDrawHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.BPImpactEffect
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FHitResult              HitRes                         (Parm, OutParm, ReferenceParm)
// struct FVector                 ShootDirection                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_TekShield_C::BPImpactEffect(struct FHitResult* HitRes, struct FVector* ShootDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.BPImpactEffect");

	AStorageBox_TekShield_C_BPImpactEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitRes != nullptr)
		*HitRes = params.HitRes;
	if (ShootDirection != nullptr)
		*ShootDirection = params.ShootDirection;

	return params.ReturnValue;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.BPHitEffect
// (NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float*                         DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsLocalPath                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DamageLoc                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_TekShield_C::BPHitEffect(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, class UPrimitiveComponent** HitComponent, struct FVector* DamageLoc, struct FRotator* HitNormal, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.BPHitEffect");

	AStorageBox_TekShield_C_BPHitEffect_Params params;
	params.DamageTaken = DamageTaken;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsLocalPath = bIsLocalPath;
	params.HitComponent = HitComponent;
	params.DamageLoc = DamageLoc;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.BPSupressImpactEffects
// ()
// Parameters:
// float*                         DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsLocalPath                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_TekShield_C::BPSupressImpactEffects(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, class UPrimitiveComponent** HitComponent, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.BPSupressImpactEffects");

	AStorageBox_TekShield_C_BPSupressImpactEffects_Params params;
	params.DamageTaken = DamageTaken;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsLocalPath = bIsLocalPath;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;

	return params.ReturnValue;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.BPRefreshedStructureColors
// ()

void AStorageBox_TekShield_C::BPRefreshedStructureColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.BPRefreshedStructureColors");

	AStorageBox_TekShield_C_BPRefreshedStructureColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.AllowIgnoreCharacterEncroachment
// ()
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 EncroachingCharacter           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_TekShield_C::AllowIgnoreCharacterEncroachment(class UPrimitiveComponent** HitComponent, class AActor** EncroachingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.AllowIgnoreCharacterEncroachment");

	AStorageBox_TekShield_C_AllowIgnoreCharacterEncroachment_Params params;
	params.HitComponent = HitComponent;
	params.EncroachingCharacter = EncroachingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.BPGetFuelConsumptionMultiplier
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AStorageBox_TekShield_C::BPGetFuelConsumptionMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.BPGetFuelConsumptionMultiplier");

	AStorageBox_TekShield_C_BPGetFuelConsumptionMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.BPCanBeActivatedByPlayer
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_TekShield_C::BPCanBeActivatedByPlayer(class AShooterPlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.BPCanBeActivatedByPlayer");

	AStorageBox_TekShield_C_BPCanBeActivatedByPlayer_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.BPOverrideAllowStructureAccess
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsAccessAllowed               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_TekShield_C::BPOverrideAllowStructureAccess(class AShooterPlayerController** ForPC, bool* bIsAccessAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.BPOverrideAllowStructureAccess");

	AStorageBox_TekShield_C_BPOverrideAllowStructureAccess_Params params;
	params.ForPC = ForPC;
	params.bIsAccessAllowed = bIsAccessAllowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.GetDesiredRadiusMultiplier
// ()
// Parameters:
// int                            IncrementAmount                (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutRadiusMultiplier            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStorageBox_TekShield_C::GetDesiredRadiusMultiplier(int IncrementAmount, float* OutRadiusMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.GetDesiredRadiusMultiplier");

	AStorageBox_TekShield_C_GetDesiredRadiusMultiplier_Params params;
	params.IncrementAmount = IncrementAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRadiusMultiplier != nullptr)
		*OutRadiusMultiplier = params.OutRadiusMultiplier;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_TekShield_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.BPTryMultiUse");

	AStorageBox_TekShield_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.BPGetMultiUseEntries
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AStorageBox_TekShield_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.BPGetMultiUseEntries");

	AStorageBox_TekShield_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.CheckForExtraIgnorePawnPushers
// ()

void AStorageBox_TekShield_C::CheckForExtraIgnorePawnPushers()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.CheckForExtraIgnorePawnPushers");

	AStorageBox_TekShield_C_CheckForExtraIgnorePawnPushers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.BPPostInitializeComponents
// ()

void AStorageBox_TekShield_C::BPPostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.BPPostInitializeComponents");

	AStorageBox_TekShield_C_BPPostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.BPPostSetStructureCollisionChannels
// ()

void AStorageBox_TekShield_C::BPPostSetStructureCollisionChannels()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.BPPostSetStructureCollisionChannels");

	AStorageBox_TekShield_C_BPPostSetStructureCollisionChannels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.SetShieldActive
// ()
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_TekShield_C::SetShieldActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.SetShieldActive");

	AStorageBox_TekShield_C_SetShieldActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.BPContainerDeactivated
// ()

void AStorageBox_TekShield_C::BPContainerDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.BPContainerDeactivated");

	AStorageBox_TekShield_C_BPContainerDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.BPContainerActivated
// ()

void AStorageBox_TekShield_C::BPContainerActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.BPContainerActivated");

	AStorageBox_TekShield_C_BPContainerActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.IsPushablePawn
// ()
// Parameters:
// class APrimalCharacter*        PawnToPush                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPushable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStorageBox_TekShield_C::IsPushablePawn(class APrimalCharacter* PawnToPush, bool* IsPushable)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.IsPushablePawn");

	AStorageBox_TekShield_C_IsPushablePawn_Params params;
	params.PawnToPush = PawnToPush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPushable != nullptr)
		*IsPushable = params.IsPushable;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.DoPawnPushing
// ()

void AStorageBox_TekShield_C::DoPawnPushing()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.DoPawnPushing");

	AStorageBox_TekShield_C_DoPawnPushing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.UserConstructionScript
// ()

void AStorageBox_TekShield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.UserConstructionScript");

	AStorageBox_TekShield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_156_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AStorageBox_TekShield_C::BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_156_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_156_ComponentBeginOverlapSignature__DelegateSignature");

	AStorageBox_TekShield_C_BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_156_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepResult != nullptr)
		*SweepResult = params.SweepResult;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.CheckForPawnPushing
// ()

void AStorageBox_TekShield_C::CheckForPawnPushing()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.CheckForPawnPushing");

	AStorageBox_TekShield_C_CheckForPawnPushing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_TekShield_C::BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature");

	AStorageBox_TekShield_C_BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.NetRefreshRadiusScale
// ()
// Parameters:
// int                            NewUserRadiusValue             (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_TekShield_C::NetRefreshRadiusScale(int NewUserRadiusValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.NetRefreshRadiusScale");

	AStorageBox_TekShield_C_NetRefreshRadiusScale_Params params;
	params.NewUserRadiusValue = NewUserRadiusValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.UpdateShieldInterp
// ()

void AStorageBox_TekShield_C::UpdateShieldInterp()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.UpdateShieldInterp");

	AStorageBox_TekShield_C_UpdateShieldInterp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.UpdateShieldOpacity
// ()

void AStorageBox_TekShield_C::UpdateShieldOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.UpdateShieldOpacity");

	AStorageBox_TekShield_C_UpdateShieldOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.FinishPowerUp
// ()

void AStorageBox_TekShield_C::FinishPowerUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.FinishPowerUp");

	AStorageBox_TekShield_C_FinishPowerUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekShield.StorageBox_TekShield_C.ExecuteUbergraph_StorageBox_TekShield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_TekShield_C::ExecuteUbergraph_StorageBox_TekShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekShield.StorageBox_TekShield_C.ExecuteUbergraph_StorageBox_TekShield");

	AStorageBox_TekShield_C_ExecuteUbergraph_StorageBox_TekShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

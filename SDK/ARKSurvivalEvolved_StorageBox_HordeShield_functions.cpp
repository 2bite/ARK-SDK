// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_HordeShield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StorageBox_HordeShield.StorageBox_HordeShield_C.ColorShield
// ()

void AStorageBox_HordeShield_C::ColorShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.ColorShield");

	AStorageBox_HordeShield_C_ColorShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.ReceiveBeginPlay
// ()

void AStorageBox_HordeShield_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.ReceiveBeginPlay");

	AStorageBox_HordeShield_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.ReceiveDestroyed
// ()

void AStorageBox_HordeShield_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.ReceiveDestroyed");

	AStorageBox_HordeShield_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_HordeShield_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.ReceiveAnyDamage");

	AStorageBox_HordeShield_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.CheckChargeEffect
// ()

void AStorageBox_HordeShield_C::CheckChargeEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.CheckChargeEffect");

	AStorageBox_HordeShield_C_CheckChargeEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.OnRep_PowerUpCompletionTime
// ()

void AStorageBox_HordeShield_C::OnRep_PowerUpCompletionTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.OnRep_PowerUpCompletionTime");

	AStorageBox_HordeShield_C_OnRep_PowerUpCompletionTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_HordeShield_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPClientDoMultiUse");

	AStorageBox_HordeShield_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.BlueprintDrawHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_HordeShield_C::BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.BlueprintDrawHUD");

	AStorageBox_HordeShield_C_BlueprintDrawHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPImpactEffect
// (NetRequest, Native, Static, Public, Private, Protected, Delegate, NetServer, HasDefaults)
// Parameters:
// struct FHitResult              HitRes                         (Parm, OutParm, ReferenceParm)
// struct FVector                 ShootDirection                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_HordeShield_C::STATIC_BPImpactEffect(struct FHitResult* HitRes, struct FVector* ShootDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPImpactEffect");

	AStorageBox_HordeShield_C_BPImpactEffect_Params params;

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


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPHitEffect
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasDefaults)
// Parameters:
// float*                         DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsLocalPath                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DamageLoc                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_HordeShield_C::BPHitEffect(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, class UPrimitiveComponent** HitComponent, struct FVector* DamageLoc, struct FRotator* HitNormal, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPHitEffect");

	AStorageBox_HordeShield_C_BPHitEffect_Params params;
	params.DamageTaken = DamageTaken;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsLocalPath = bIsLocalPath;
	params.HitComponent = HitComponent;
	params.DamageLoc = DamageLoc;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPSupressImpactEffects
// ()
// Parameters:
// float*                         DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsLocalPath                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_HordeShield_C::BPSupressImpactEffects(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, class UPrimitiveComponent** HitComponent, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPSupressImpactEffects");

	AStorageBox_HordeShield_C_BPSupressImpactEffects_Params params;
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


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPRefreshedStructureColors
// ()

void AStorageBox_HordeShield_C::BPRefreshedStructureColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPRefreshedStructureColors");

	AStorageBox_HordeShield_C_BPRefreshedStructureColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.AllowIgnoreCharacterEncroachment
// ()
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 EncroachingCharacter           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_HordeShield_C::AllowIgnoreCharacterEncroachment(class UPrimitiveComponent** HitComponent, class AActor** EncroachingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.AllowIgnoreCharacterEncroachment");

	AStorageBox_HordeShield_C_AllowIgnoreCharacterEncroachment_Params params;
	params.HitComponent = HitComponent;
	params.EncroachingCharacter = EncroachingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPGetFuelConsumptionMultiplier
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AStorageBox_HordeShield_C::BPGetFuelConsumptionMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPGetFuelConsumptionMultiplier");

	AStorageBox_HordeShield_C_BPGetFuelConsumptionMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPCanBeActivatedByPlayer
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_HordeShield_C::BPCanBeActivatedByPlayer(class AShooterPlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPCanBeActivatedByPlayer");

	AStorageBox_HordeShield_C_BPCanBeActivatedByPlayer_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPOverrideAllowStructureAccess
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsAccessAllowed               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_HordeShield_C::BPOverrideAllowStructureAccess(class AShooterPlayerController** ForPC, bool* bIsAccessAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPOverrideAllowStructureAccess");

	AStorageBox_HordeShield_C_BPOverrideAllowStructureAccess_Params params;
	params.ForPC = ForPC;
	params.bIsAccessAllowed = bIsAccessAllowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.GetDesiredRadiusMultiplier
// ()
// Parameters:
// int                            IncrementAmount                (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutRadiusMultiplier            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStorageBox_HordeShield_C::GetDesiredRadiusMultiplier(int IncrementAmount, float* OutRadiusMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.GetDesiredRadiusMultiplier");

	AStorageBox_HordeShield_C_GetDesiredRadiusMultiplier_Params params;
	params.IncrementAmount = IncrementAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRadiusMultiplier != nullptr)
		*OutRadiusMultiplier = params.OutRadiusMultiplier;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_HordeShield_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPTryMultiUse");

	AStorageBox_HordeShield_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPGetMultiUseEntries
// (Exec, Native, Public, Protected, Delegate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AStorageBox_HordeShield_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPGetMultiUseEntries");

	AStorageBox_HordeShield_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.CheckForExtraIgnorePawnPushers
// ()

void AStorageBox_HordeShield_C::CheckForExtraIgnorePawnPushers()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.CheckForExtraIgnorePawnPushers");

	AStorageBox_HordeShield_C_CheckForExtraIgnorePawnPushers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPPostInitializeComponents
// ()

void AStorageBox_HordeShield_C::BPPostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPPostInitializeComponents");

	AStorageBox_HordeShield_C_BPPostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPPostSetStructureCollisionChannels
// ()

void AStorageBox_HordeShield_C::BPPostSetStructureCollisionChannels()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPPostSetStructureCollisionChannels");

	AStorageBox_HordeShield_C_BPPostSetStructureCollisionChannels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.SetShieldActive
// ()
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_HordeShield_C::SetShieldActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.SetShieldActive");

	AStorageBox_HordeShield_C_SetShieldActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPContainerDeactivated
// ()

void AStorageBox_HordeShield_C::BPContainerDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPContainerDeactivated");

	AStorageBox_HordeShield_C_BPContainerDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPContainerActivated
// ()

void AStorageBox_HordeShield_C::BPContainerActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.BPContainerActivated");

	AStorageBox_HordeShield_C_BPContainerActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.IsPushablePawn
// ()
// Parameters:
// class APrimalCharacter*        PawnToPush                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPushable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStorageBox_HordeShield_C::IsPushablePawn(class APrimalCharacter* PawnToPush, bool* IsPushable)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.IsPushablePawn");

	AStorageBox_HordeShield_C_IsPushablePawn_Params params;
	params.PawnToPush = PawnToPush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPushable != nullptr)
		*IsPushable = params.IsPushable;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.DoPawnPushing
// ()

void AStorageBox_HordeShield_C::DoPawnPushing()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.DoPawnPushing");

	AStorageBox_HordeShield_C_DoPawnPushing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.UserConstructionScript
// ()

void AStorageBox_HordeShield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.UserConstructionScript");

	AStorageBox_HordeShield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_156_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AStorageBox_HordeShield_C::BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_156_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_156_ComponentBeginOverlapSignature__DelegateSignature");

	AStorageBox_HordeShield_C_BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_156_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.CheckForPawnPushing
// ()

void AStorageBox_HordeShield_C::CheckForPawnPushing()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.CheckForPawnPushing");

	AStorageBox_HordeShield_C_CheckForPawnPushing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_HordeShield_C::BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature");

	AStorageBox_HordeShield_C_BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.NetRefreshRadiusScale
// ()
// Parameters:
// int                            NewUserRadiusValue             (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_HordeShield_C::NetRefreshRadiusScale(int NewUserRadiusValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.NetRefreshRadiusScale");

	AStorageBox_HordeShield_C_NetRefreshRadiusScale_Params params;
	params.NewUserRadiusValue = NewUserRadiusValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.UpdateShieldInterp
// ()

void AStorageBox_HordeShield_C::UpdateShieldInterp()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.UpdateShieldInterp");

	AStorageBox_HordeShield_C_UpdateShieldInterp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.UpdateShieldOpacity
// ()

void AStorageBox_HordeShield_C::UpdateShieldOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.UpdateShieldOpacity");

	AStorageBox_HordeShield_C_UpdateShieldOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.FinishPowerUp
// ()

void AStorageBox_HordeShield_C::FinishPowerUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.FinishPowerUp");

	AStorageBox_HordeShield_C_FinishPowerUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.Attack_ForceField
// ()
// Parameters:
// class AActor*                  AActor                         (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_HordeShield_C::Attack_ForceField(class AActor* AActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.Attack_ForceField");

	AStorageBox_HordeShield_C_Attack_ForceField_Params params;
	params.AActor = AActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield.StorageBox_HordeShield_C.ExecuteUbergraph_StorageBox_HordeShield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_HordeShield_C::ExecuteUbergraph_StorageBox_HordeShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield.StorageBox_HordeShield_C.ExecuteUbergraph_StorageBox_HordeShield");

	AStorageBox_HordeShield_C_ExecuteUbergraph_StorageBox_HordeShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

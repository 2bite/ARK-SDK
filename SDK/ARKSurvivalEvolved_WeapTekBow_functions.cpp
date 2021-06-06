// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekBow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTekBow.WeapTekBow_C.GetAmmoMultiuseEntries
// (NetRequest, Exec, Native, Event, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FMultiUseEntry>  AmmoWheelEntries               (Parm, OutParm, ZeroConstructor)

void AWeapTekBow_C::GetAmmoMultiuseEntries(TArray<struct FMultiUseEntry>* AmmoWheelEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.GetAmmoMultiuseEntries");

	AWeapTekBow_C_GetAmmoMultiuseEntries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoWheelEntries != nullptr)
		*AmmoWheelEntries = params.AmmoWheelEntries;
}


// Function WeapTekBow.WeapTekBow_C.GetHudData
// (NetReliable, Native, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  AmmoName                       (Parm, OutParm, ZeroConstructor)
// class UTexture2D*              AmmoIcon                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CurrentAmmoCount               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CurrentAmmoCost                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AmmoPerClip                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AmmoTypeIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            CurrentAmmoTypeColor           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsAccessoryActive              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekBow_C::GetHudData(class FString* AmmoName, class UTexture2D** AmmoIcon, int* CurrentAmmoCount, int* CurrentAmmoCost, int* AmmoPerClip, int* AmmoTypeIndex, struct FLinearColor* CurrentAmmoTypeColor, bool* IsAccessoryActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.GetHudData");

	AWeapTekBow_C_GetHudData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoName != nullptr)
		*AmmoName = params.AmmoName;
	if (AmmoIcon != nullptr)
		*AmmoIcon = params.AmmoIcon;
	if (CurrentAmmoCount != nullptr)
		*CurrentAmmoCount = params.CurrentAmmoCount;
	if (CurrentAmmoCost != nullptr)
		*CurrentAmmoCost = params.CurrentAmmoCost;
	if (AmmoPerClip != nullptr)
		*AmmoPerClip = params.AmmoPerClip;
	if (AmmoTypeIndex != nullptr)
		*AmmoTypeIndex = params.AmmoTypeIndex;
	if (CurrentAmmoTypeColor != nullptr)
		*CurrentAmmoTypeColor = params.CurrentAmmoTypeColor;
	if (IsAccessoryActive != nullptr)
		*IsAccessoryActive = params.IsAccessoryActive;
}


// Function WeapTekBow.WeapTekBow_C.BPGetMultiUseEntries
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AWeapTekBow_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.BPGetMultiUseEntries");

	AWeapTekBow_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function WeapTekBow.WeapTekBow_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekBow_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.BPClientDoMultiUse");

	AWeapTekBow_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.CycleAmmoTimer
// ()

void AWeapTekBow_C::CycleAmmoTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.CycleAmmoTimer");

	AWeapTekBow_C_CycleAmmoTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.BPGetCrosshairColor
// ()
// Parameters:
// struct FColor                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FColor AWeapTekBow_C::BPGetCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.BPGetCrosshairColor");

	AWeapTekBow_C_BPGetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekBow.WeapTekBow_C.BPStartEquippedNotify
// ()

void AWeapTekBow_C::BPStartEquippedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.BPStartEquippedNotify");

	AWeapTekBow_C_BPStartEquippedNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.StartUnequipEvent
// ()

void AWeapTekBow_C::StartUnequipEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.StartUnequipEvent");

	AWeapTekBow_C_StartUnequipEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.ReceiveDestroyed
// (NetRequest, Exec, Native, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AWeapTekBow_C::STATIC_ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.ReceiveDestroyed");

	AWeapTekBow_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.OnHideProjectile
// ()

void AWeapTekBow_C::OnHideProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.OnHideProjectile");

	AWeapTekBow_C_OnHideProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.SpawnFiredFX
// (NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 EndLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWasInstantHit                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekBow_C::STATIC_SpawnFiredFX(const struct FVector& EndLocation, bool bWasInstantHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.SpawnFiredFX");

	AWeapTekBow_C_SpawnFiredFX_Params params;
	params.EndLocation = EndLocation;
	params.bWasInstantHit = bWasInstantHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.GetAmmoCountForAmmoType
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWeapTekBow_C::STATIC_GetAmmoCountForAmmoType(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.GetAmmoCountForAmmoType");

	AWeapTekBow_C_GetAmmoCountForAmmoType_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekBow.WeapTekBow_C.BPCanStartFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapTekBow_C::BPCanStartFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.BPCanStartFire");

	AWeapTekBow_C_BPCanStartFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekBow.WeapTekBow_C.BPWeaponCanFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapTekBow_C::BPWeaponCanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.BPWeaponCanFire");

	AWeapTekBow_C_BPWeaponCanFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekBow.WeapTekBow_C.BPAdjustAmmoPerShot
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWeapTekBow_C::STATIC_BPAdjustAmmoPerShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.BPAdjustAmmoPerShot");

	AWeapTekBow_C_BPAdjustAmmoPerShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekBow.WeapTekBow_C.UpdateMaxPowerFX
// (NetReliable, NetRequest, Native, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AWeapTekBow_C::UpdateMaxPowerFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.UpdateMaxPowerFX");

	AWeapTekBow_C_UpdateMaxPowerFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.UpdateArrowVisibility
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekBow_C::UpdateArrowVisibility(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.UpdateArrowVisibility");

	AWeapTekBow_C_UpdateArrowVisibility_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.UpdateArrowMesh
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AWeapTekBow_C::UpdateArrowMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.UpdateArrowMesh");

	AWeapTekBow_C_UpdateArrowMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.Show Ammo Wheel
// (NetRequest, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AWeapTekBow_C::STATIC_Show_Ammo_Wheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.Show Ammo Wheel");

	AWeapTekBow_C_Show_Ammo_Wheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.SetupProjectileInstantHit
// (NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AShooterProjectile*      Projectile                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekBow_C::STATIC_SetupProjectileInstantHit(class AShooterProjectile* Projectile, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.SetupProjectileInstantHit");

	AWeapTekBow_C_SetupProjectileInstantHit_Params params;
	params.Projectile = Projectile;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.AmmoSelected
// ()
// Parameters:
// int                            AmmoTypeIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekBow_C::AmmoSelected(int AmmoTypeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.AmmoSelected");

	AWeapTekBow_C_AmmoSelected_Params params;
	params.AmmoTypeIndex = AmmoTypeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.GetAmmoWheelEntries
// (Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FCustomWheelEntry> Entries                        (Parm, OutParm, ZeroConstructor)

void AWeapTekBow_C::STATIC_GetAmmoWheelEntries(TArray<struct FCustomWheelEntry>* Entries)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.GetAmmoWheelEntries");

	AWeapTekBow_C_GetAmmoWheelEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Entries != nullptr)
		*Entries = params.Entries;
}


// Function WeapTekBow.WeapTekBow_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekBow_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.ReceiveTick");

	AWeapTekBow_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.BPOnSpawnedProjectile
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AShooterProjectile**     Projectile                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekBow_C::STATIC_BPOnSpawnedProjectile(class AShooterProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.BPOnSpawnedProjectile");

	AWeapTekBow_C_BPOnSpawnedProjectile_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.BPFiredWeapon
// ()

void AWeapTekBow_C::BPFiredWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.BPFiredWeapon");

	AWeapTekBow_C_BPFiredWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.BPSelectProjectileToFire
// (NetRequest, Exec, Public, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  ProjectileClassOverride        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USoundCue*               FireSoundOverride              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bSpawnOnClient                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OverrideMaxSpeed               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekBow_C::BPSelectProjectileToFire(class UClass** ProjectileClassOverride, class USoundCue** FireSoundOverride, bool* bSpawnOnClient, float* OverrideMaxSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.BPSelectProjectileToFire");

	AWeapTekBow_C_BPSelectProjectileToFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProjectileClassOverride != nullptr)
		*ProjectileClassOverride = params.ProjectileClassOverride;
	if (FireSoundOverride != nullptr)
		*FireSoundOverride = params.FireSoundOverride;
	if (bSpawnOnClient != nullptr)
		*bSpawnOnClient = params.bSpawnOnClient;
	if (OverrideMaxSpeed != nullptr)
		*OverrideMaxSpeed = params.OverrideMaxSpeed;
}


// Function WeapTekBow.WeapTekBow_C.CycleAmmoType
// ()
// Parameters:
// bool                           bBackwards                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekBow_C::CycleAmmoType(bool bBackwards)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.CycleAmmoType");

	AWeapTekBow_C_CycleAmmoType_Params params;
	params.bBackwards = bBackwards;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.BPDrawHud
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekBow_C::BPDrawHud(class AShooterHUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.BPDrawHud");

	AWeapTekBow_C_BPDrawHud_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.UserConstructionScript
// ()

void AWeapTekBow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.UserConstructionScript");

	AWeapTekBow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.ReceiveBeginPlay
// ()

void AWeapTekBow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.ReceiveBeginPlay");

	AWeapTekBow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.RunOnServer_CycleAmmo
// ()
// Parameters:
// bool                           bBackwards                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekBow_C::RunOnServer_CycleAmmo(bool bBackwards)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.RunOnServer_CycleAmmo");

	AWeapTekBow_C_RunOnServer_CycleAmmo_Params params;
	params.bBackwards = bBackwards;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.RunOnServer_InstantHit
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm)
// struct FVector                 StartLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekBow_C::RunOnServer_InstantHit(const struct FHitResult& Hit, const struct FVector& StartLocation, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.RunOnServer_InstantHit");

	AWeapTekBow_C_RunOnServer_InstantHit_Params params;
	params.Hit = Hit;
	params.StartLocation = StartLocation;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.HoldReloadTimer
// ()

void AWeapTekBow_C::HoldReloadTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.HoldReloadTimer");

	AWeapTekBow_C_HoldReloadTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.RunOnServer_SetAmmo
// ()
// Parameters:
// int                            AmmoIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekBow_C::RunOnServer_SetAmmo(int AmmoIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.RunOnServer_SetAmmo");

	AWeapTekBow_C_RunOnServer_SetAmmo_Params params;
	params.AmmoIndex = AmmoIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.MultiCast_FiredFX
// ()
// Parameters:
// struct FVector                 EndLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWasInstantHit                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekBow_C::MultiCast_FiredFX(const struct FVector& EndLocation, bool bWasInstantHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.MultiCast_FiredFX");

	AWeapTekBow_C_MultiCast_FiredFX_Params params;
	params.EndLocation = EndLocation;
	params.bWasInstantHit = bWasInstantHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.DelayedEnableInput
// ()

void AWeapTekBow_C::DelayedEnableInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.DelayedEnableInput");

	AWeapTekBow_C_DelayedEnableInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.InitItemData
// ()

void AWeapTekBow_C::InitItemData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.InitItemData");

	AWeapTekBow_C_InitItemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.NotifyInputEvent_Event
// ()
// Parameters:
// class APrimalCharacter*        ForPrimalCharacter             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalCharacterInputType> inputType                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekBow_C::NotifyInputEvent_Event(class APrimalCharacter* ForPrimalCharacter, TEnumAsByte<EPrimalCharacterInputType> inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.NotifyInputEvent_Event");

	AWeapTekBow_C_NotifyInputEvent_Event_Params params;
	params.ForPrimalCharacter = ForPrimalCharacter;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.UnbindDelegates
// ()

void AWeapTekBow_C::UnbindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.UnbindDelegates");

	AWeapTekBow_C_UnbindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekBow.WeapTekBow_C.ExecuteUbergraph_WeapTekBow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekBow_C::ExecuteUbergraph_WeapTekBow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekBow.WeapTekBow_C.ExecuteUbergraph_WeapTekBow");

	AWeapTekBow_C_ExecuteUbergraph_WeapTekBow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekGrenadeLauncher_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetSlotDifference
// ()
// Parameters:
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Difference                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::GetSlotDifference(int A, int B, int* Difference)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetSlotDifference");

	AWeapTekGrenadeLauncher_C_GetSlotDifference_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difference != nullptr)
		*Difference = params.Difference;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetCurrentSlotAdvancement
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CurrentSlot                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Remainder                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::STATIC_GetCurrentSlotAdvancement(int* CurrentSlot, float* Remainder)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetCurrentSlotAdvancement");

	AWeapTekGrenadeLauncher_C_GetCurrentSlotAdvancement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentSlot != nullptr)
		*CurrentSlot = params.CurrentSlot;
	if (Remainder != nullptr)
		*Remainder = params.Remainder;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.FinishedFullReload
// ()

void AWeapTekGrenadeLauncher_C::FinishedFullReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.FinishedFullReload");

	AWeapTekGrenadeLauncher_C_FinishedFullReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.CanReloadLauncher
// (NetReliable, NetRequest, Native, Event, NetMulticast, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bCanReload                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::CanReloadLauncher(bool* bCanReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.CanReloadLauncher");

	AWeapTekGrenadeLauncher_C_CanReloadLauncher_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanReload != nullptr)
		*bCanReload = params.bCanReload;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPOverrideRootRotationOffset
// ()
// Parameters:
// struct FRotator*               InRootRotation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator AWeapTekGrenadeLauncher_C::BPOverrideRootRotationOffset(struct FRotator* InRootRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPOverrideRootRotationOffset");

	AWeapTekGrenadeLauncher_C_BPOverrideRootRotationOffset_Params params;
	params.InRootRotation = InRootRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPCanEquip
// ()
// Parameters:
// class AShooterCharacter**      ByCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapTekGrenadeLauncher_C::BPCanEquip(class AShooterCharacter** ByCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPCanEquip");

	AWeapTekGrenadeLauncher_C_BPCanEquip_Params params;
	params.ByCharacter = ByCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPOnSpawnedProjectile
// ()
// Parameters:
// class AShooterProjectile**     Projectile                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::BPOnSpawnedProjectile(class AShooterProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPOnSpawnedProjectile");

	AWeapTekGrenadeLauncher_C_BPOnSpawnedProjectile_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReceiveDestroyed
// ()

void AWeapTekGrenadeLauncher_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReceiveDestroyed");

	AWeapTekGrenadeLauncher_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientInit
// (Exec, Native, NetResponse, NetMulticast, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AWeapTekGrenadeLauncher_C::ClientInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientInit");

	AWeapTekGrenadeLauncher_C_ClientInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.FinishedReloadSequence
// ()

void AWeapTekGrenadeLauncher_C::FinishedReloadSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.FinishedReloadSequence");

	AWeapTekGrenadeLauncher_C_FinishedReloadSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ModifyHeatLevel
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::ModifyHeatLevel(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ModifyHeatLevel");

	AWeapTekGrenadeLauncher_C_ModifyHeatLevel_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetReloadAnim
// ()
// Parameters:
// int                            FromSlot                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FWeaponAnim             Anim                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::GetReloadAnim(int FromSlot, struct FWeaponAnim* Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetReloadAnim");

	AWeapTekGrenadeLauncher_C_GetReloadAnim_Params params;
	params.FromSlot = FromSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Anim != nullptr)
		*Anim = params.Anim;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SetProjectileArcVisibility
// ()
// Parameters:
// bool                           IsVisible                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::SetProjectileArcVisibility(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SetProjectileArcVisibility");

	AWeapTekGrenadeLauncher_C_SetProjectileArcVisibility_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.UpdateProjectileArc
// (NetReliable, NetRequest, Native, Static, NetMulticast, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::STATIC_UpdateProjectileArc(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.UpdateProjectileArc");

	AWeapTekGrenadeLauncher_C_UpdateProjectileArc_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPGetTPVCameraOffset
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AWeapTekGrenadeLauncher_C::BPGetTPVCameraOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPGetTPVCameraOffset");

	AWeapTekGrenadeLauncher_C_BPGetTPVCameraOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPOverrideAimDirection
// ()
// Parameters:
// struct FVector                 DesiredAimDirection            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AWeapTekGrenadeLauncher_C::BPOverrideAimDirection(struct FVector* DesiredAimDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPOverrideAimDirection");

	AWeapTekGrenadeLauncher_C_BPOverrideAimDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredAimDirection != nullptr)
		*DesiredAimDirection = params.DesiredAimDirection;

	return params.ReturnValue;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.UpdateSlotMeshes
// (NetReliable, Native, NetResponse, MulticastDelegate, Private, Protected, NetClient, DLLImport, BlueprintCallable, Const)

void AWeapTekGrenadeLauncher_C::UpdateSlotMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.UpdateSlotMeshes");

	AWeapTekGrenadeLauncher_C_UpdateSlotMeshes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SyncAmmoInClipValue
// (NetReliable, Exec, Native, Event, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AWeapTekGrenadeLauncher_C::SyncAmmoInClipValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SyncAmmoInClipValue");

	AWeapTekGrenadeLauncher_C_SyncAmmoInClipValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReceiveTick");

	AWeapTekGrenadeLauncher_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetSlotInfo
// (NetReliable, Exec, NetResponse, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SlotIdx                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           GotValidSlotData               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  AmmoType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         LastFiredNetworkTime           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AmmoLoaded                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::GetSlotInfo(int SlotIdx, bool* GotValidSlotData, class UClass** AmmoType, double* LastFiredNetworkTime, bool* AmmoLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetSlotInfo");

	AWeapTekGrenadeLauncher_C_GetSlotInfo_Params params;
	params.SlotIdx = SlotIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GotValidSlotData != nullptr)
		*GotValidSlotData = params.GotValidSlotData;
	if (AmmoType != nullptr)
		*AmmoType = params.AmmoType;
	if (LastFiredNetworkTime != nullptr)
		*LastFiredNetworkTime = params.LastFiredNetworkTime;
	if (AmmoLoaded != nullptr)
		*AmmoLoaded = params.AmmoLoaded;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SaveAmmoToItem
// (NetRequest, Native, NetResponse, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AWeapTekGrenadeLauncher_C::SaveAmmoToItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SaveAmmoToItem");

	AWeapTekGrenadeLauncher_C_SaveAmmoToItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.LoadAmmoFromItem
// (NetReliable, Exec, Native, Event, NetResponse, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::LoadAmmoFromItem(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.LoadAmmoFromItem");

	AWeapTekGrenadeLauncher_C_LoadAmmoFromItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SetProjectileSlotType
// (NetReliable, NetRequest, Exec, Native, Static, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SlotIdx                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ItemType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::STATIC_SetProjectileSlotType(int SlotIdx, class UClass* ItemType, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SetProjectileSlotType");

	AWeapTekGrenadeLauncher_C_SetProjectileSlotType_Params params;
	params.SlotIdx = SlotIdx;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetProjectileTypeFromItem
// ()
// Parameters:
// class UClass*                  ItemType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ProjectileType                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::GetProjectileTypeFromItem(class UClass* ItemType, bool* IsValid, class UClass** ProjectileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetProjectileTypeFromItem");

	AWeapTekGrenadeLauncher_C_GetProjectileTypeFromItem_Params params;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (ProjectileType != nullptr)
		*ProjectileType = params.ProjectileType;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.StartSecondaryActionEvent
// ()

void AWeapTekGrenadeLauncher_C::StartSecondaryActionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.StartSecondaryActionEvent");

	AWeapTekGrenadeLauncher_C_StartSecondaryActionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BP_OnReloadNotify
// ()

void AWeapTekGrenadeLauncher_C::BP_OnReloadNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BP_OnReloadNotify");

	AWeapTekGrenadeLauncher_C_BP_OnReloadNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ModifyAmmoQuantityInInventory
// ()
// Parameters:
// class UClass*                  AmmoType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Delta                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AddAmmo                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::ModifyAmmoQuantityInInventory(class UClass* AmmoType, int Delta, bool AddAmmo, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ModifyAmmoQuantityInInventory");

	AWeapTekGrenadeLauncher_C_ModifyAmmoQuantityInInventory_Params params;
	params.AmmoType = AmmoType;
	params.Delta = Delta;
	params.AddAmmo = AddAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReceiveBeginPlay
// (NetRequest, Exec, Event, NetResponse, Static, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AWeapTekGrenadeLauncher_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReceiveBeginPlay");

	AWeapTekGrenadeLauncher_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetAmmoCountOfType
// ()
// Parameters:
// class UClass*                  AmmoType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            AvailableAmmo                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::GetAmmoCountOfType(class UClass* AmmoType, int* AvailableAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetAmmoCountOfType");

	AWeapTekGrenadeLauncher_C_GetAmmoCountOfType_Params params;
	params.AmmoType = AmmoType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableAmmo != nullptr)
		*AvailableAmmo = params.AvailableAmmo;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetNextAvailableSlot
// (Native, NetMulticast, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           SlotIsValid                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SlotIdx                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TimeToAdvance                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::GetNextAvailableSlot(bool* SlotIsValid, int* SlotIdx, float* TimeToAdvance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetNextAvailableSlot");

	AWeapTekGrenadeLauncher_C_GetNextAvailableSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotIsValid != nullptr)
		*SlotIsValid = params.SlotIsValid;
	if (SlotIdx != nullptr)
		*SlotIdx = params.SlotIdx;
	if (TimeToAdvance != nullptr)
		*TimeToAdvance = params.TimeToAdvance;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPWeaponCanFire
// (NetRequest, Exec, Native, NetMulticast, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapTekGrenadeLauncher_C::BPWeaponCanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPWeaponCanFire");

	AWeapTekGrenadeLauncher_C_BPWeaponCanFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReloadProjectiles
// (NetRequest, Event, NetMulticast, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            NumReloadedSlots               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::ReloadProjectiles(int* NumReloadedSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReloadProjectiles");

	AWeapTekGrenadeLauncher_C_ReloadProjectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumReloadedSlots != nullptr)
		*NumReloadedSlots = params.NumReloadedSlots;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPFiredWeapon
// ()

void AWeapTekGrenadeLauncher_C::BPFiredWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPFiredWeapon");

	AWeapTekGrenadeLauncher_C_BPFiredWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPSelectProjectileToFire
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  ProjectileClassOverride        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USoundCue*               FireSoundOverride              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bSpawnOnClient                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OverrideMaxSpeed               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::BPSelectProjectileToFire(class UClass** ProjectileClassOverride, class USoundCue** FireSoundOverride, bool* bSpawnOnClient, float* OverrideMaxSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPSelectProjectileToFire");

	AWeapTekGrenadeLauncher_C_BPSelectProjectileToFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

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


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.StartUnequipEvent
// ()

void AWeapTekGrenadeLauncher_C::StartUnequipEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.StartUnequipEvent");

	AWeapTekGrenadeLauncher_C_StartUnequipEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPStartEquippedNotify
// ()

void AWeapTekGrenadeLauncher_C::BPStartEquippedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPStartEquippedNotify");

	AWeapTekGrenadeLauncher_C_BPStartEquippedNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.UserConstructionScript
// ()

void AWeapTekGrenadeLauncher_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.UserConstructionScript");

	AWeapTekGrenadeLauncher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientUpdateSlots
// ()
// Parameters:
// TArray<struct FTekGrenadeLauncherSlot> UpdatedSlots                   (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWeapTekGrenadeLauncher_C::ClientUpdateSlots(TArray<struct FTekGrenadeLauncherSlot>* UpdatedSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientUpdateSlots");

	AWeapTekGrenadeLauncher_C_ClientUpdateSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpdatedSlots != nullptr)
		*UpdatedSlots = params.UpdatedSlots;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SyncSlots
// ()
// Parameters:
// bool                           bJustFiredGrenade              (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::SyncSlots(bool bJustFiredGrenade)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SyncSlots");

	AWeapTekGrenadeLauncher_C_SyncSlots_Params params;
	params.bJustFiredGrenade = bJustFiredGrenade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerRequestSwitchAmmoType
// ()
// Parameters:
// int                            SlotIdx                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  NewAmmoType                    (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::ServerRequestSwitchAmmoType(int SlotIdx, class UClass* NewAmmoType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerRequestSwitchAmmoType");

	AWeapTekGrenadeLauncher_C_ServerRequestSwitchAmmoType_Params params;
	params.SlotIdx = SlotIdx;
	params.NewAmmoType = NewAmmoType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientPlayReloadAnim
// ()

void AWeapTekGrenadeLauncher_C::ClientPlayReloadAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientPlayReloadAnim");

	AWeapTekGrenadeLauncher_C_ClientPlayReloadAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerNotifySetArcDisplay
// ()
// Parameters:
// bool                           ShowArcDisplay                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::ServerNotifySetArcDisplay(bool ShowArcDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerNotifySetArcDisplay");

	AWeapTekGrenadeLauncher_C_ServerNotifySetArcDisplay_Params params;
	params.ShowArcDisplay = ShowArcDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ToggleArcDisplay
// ()

void AWeapTekGrenadeLauncher_C::ToggleArcDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ToggleArcDisplay");

	AWeapTekGrenadeLauncher_C_ToggleArcDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerRequestAdvanceSlot
// ()

void AWeapTekGrenadeLauncher_C::ServerRequestAdvanceSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerRequestAdvanceSlot");

	AWeapTekGrenadeLauncher_C_ServerRequestAdvanceSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientUpdateSlotMeshes
// ()

void AWeapTekGrenadeLauncher_C::ClientUpdateSlotMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientUpdateSlotMeshes");

	AWeapTekGrenadeLauncher_C_ClientUpdateSlotMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerNotifyReplicationReady
// ()

void AWeapTekGrenadeLauncher_C::ServerNotifyReplicationReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerNotifyReplicationReady");

	AWeapTekGrenadeLauncher_C_ServerNotifyReplicationReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BndEvt__TickingHelper1_K2Node_ComponentBoundEvent_252_TickingHelperDelegate__DelegateSignature
// ()
// Parameters:
// class UTickingHelperComponent* TickingComponent               (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::BndEvt__TickingHelper1_K2Node_ComponentBoundEvent_252_TickingHelperDelegate__DelegateSignature(class UTickingHelperComponent* TickingComponent, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BndEvt__TickingHelper1_K2Node_ComponentBoundEvent_252_TickingHelperDelegate__DelegateSignature");

	AWeapTekGrenadeLauncher_C_BndEvt__TickingHelper1_K2Node_ComponentBoundEvent_252_TickingHelperDelegate__DelegateSignature_Params params;
	params.TickingComponent = TickingComponent;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerRequestUnloadSlot
// ()
// Parameters:
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::ServerRequestUnloadSlot(int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerRequestUnloadSlot");

	AWeapTekGrenadeLauncher_C_ServerRequestUnloadSlot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ExecuteUbergraph_WeapTekGrenadeLauncher
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekGrenadeLauncher_C::ExecuteUbergraph_WeapTekGrenadeLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ExecuteUbergraph_WeapTekGrenadeLauncher");

	AWeapTekGrenadeLauncher_C_ExecuteUbergraph_WeapTekGrenadeLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

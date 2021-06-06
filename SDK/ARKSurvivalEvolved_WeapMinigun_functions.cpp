// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMinigun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMinigun.WeapMinigun_C.GetHudData
// ()
// Parameters:
// class UTexture2D*              AmmoIcon                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CurrentAmmoCount               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AmmoPerClip                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsInTurretMode                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HideAmmoCountHUDElement        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  AmmoItemTemplate               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapMinigun_C::GetHudData(class UTexture2D** AmmoIcon, int* CurrentAmmoCount, int* AmmoPerClip, bool* IsInTurretMode, bool* HideAmmoCountHUDElement, class UClass** AmmoItemTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.GetHudData");

	AWeapMinigun_C_GetHudData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoIcon != nullptr)
		*AmmoIcon = params.AmmoIcon;
	if (CurrentAmmoCount != nullptr)
		*CurrentAmmoCount = params.CurrentAmmoCount;
	if (AmmoPerClip != nullptr)
		*AmmoPerClip = params.AmmoPerClip;
	if (IsInTurretMode != nullptr)
		*IsInTurretMode = params.IsInTurretMode;
	if (HideAmmoCountHUDElement != nullptr)
		*HideAmmoCountHUDElement = params.HideAmmoCountHUDElement;
	if (AmmoItemTemplate != nullptr)
		*AmmoItemTemplate = params.AmmoItemTemplate;
}


// Function WeapMinigun.WeapMinigun_C.BPSpawnImpactEffects
// ()
// Parameters:
// struct FHitResult              Impact                         (Parm, OutParm, ReferenceParm)
// struct FVector                 ShootDir                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bIsEntryHit                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         WeaponMaxRange                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMinigun_C::BPSpawnImpactEffects(bool* bIsEntryHit, float* WeaponMaxRange, struct FHitResult* Impact, struct FVector* ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.BPSpawnImpactEffects");

	AWeapMinigun_C_BPSpawnImpactEffects_Params params;
	params.bIsEntryHit = bIsEntryHit;
	params.WeaponMaxRange = WeaponMaxRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Impact != nullptr)
		*Impact = params.Impact;
	if (ShootDir != nullptr)
		*ShootDir = params.ShootDir;
}


// Function WeapMinigun.WeapMinigun_C.BPOnBurstStarted
// ()

void AWeapMinigun_C::BPOnBurstStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.BPOnBurstStarted");

	AWeapMinigun_C_BPOnBurstStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.HasAnyAmmo
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapMinigun_C::HasAnyAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.HasAnyAmmo");

	AWeapMinigun_C_HasAnyAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapMinigun.WeapMinigun_C.UpdateSpinState
// ()

void AWeapMinigun_C::UpdateSpinState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.UpdateSpinState");

	AWeapMinigun_C_UpdateSpinState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.BPOnStartTargeting
// ()
// Parameters:
// bool*                          bFromGamepadLeft               (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMinigun_C::BPOnStartTargeting(bool* bFromGamepadLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.BPOnStartTargeting");

	AWeapMinigun_C_BPOnStartTargeting_Params params;
	params.bFromGamepadLeft = bFromGamepadLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.UpdateItemData
// (NetReliable, Event, NetResponse, Static, NetMulticast, Public, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AWeapMinigun_C::STATIC_UpdateItemData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.UpdateItemData");

	AWeapMinigun_C_UpdateItemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.OnAttachedToPawn
// ()

void AWeapMinigun_C::OnAttachedToPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.OnAttachedToPawn");

	AWeapMinigun_C_OnAttachedToPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.CreateDynamicMats
// ()

void AWeapMinigun_C::CreateDynamicMats()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.CreateDynamicMats");

	AWeapMinigun_C_CreateDynamicMats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.UpdateMaterials
// ()

void AWeapMinigun_C::UpdateMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.UpdateMaterials");

	AWeapMinigun_C_UpdateMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.AllowTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapMinigun_C::AllowTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.AllowTargeting");

	AWeapMinigun_C_AllowTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapMinigun.WeapMinigun_C.AnimAllowsFire
// ()
// Parameters:
// bool                           AllowsFire                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapMinigun_C::AnimAllowsFire(bool* AllowsFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.AnimAllowsFire");

	AWeapMinigun_C_AnimAllowsFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllowsFire != nullptr)
		*AllowsFire = params.AllowsFire;
}


// Function WeapMinigun.WeapMinigun_C.BPAppliedPrimalItemToWeapon
// (NetReliable, NetRequest, Event, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport)

void AWeapMinigun_C::BPAppliedPrimalItemToWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.BPAppliedPrimalItemToWeapon");

	AWeapMinigun_C_BPAppliedPrimalItemToWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.BPAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWeapMinigun_C::BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.BPAnimNotifyCustomEvent");

	AWeapMinigun_C_BPAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.InitPlayerController
// ()

void AWeapMinigun_C::InitPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.InitPlayerController");

	AWeapMinigun_C_InitPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.BPWeaponCanFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapMinigun_C::BPWeaponCanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.BPWeaponCanFire");

	AWeapMinigun_C_BPWeaponCanFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapMinigun.WeapMinigun_C.BPFiredWeapon
// (NetReliable, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport)

void AWeapMinigun_C::BPFiredWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.BPFiredWeapon");

	AWeapMinigun_C_BPFiredWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.StartSecondaryActionEvent
// ()

void AWeapMinigun_C::StartSecondaryActionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.StartSecondaryActionEvent");

	AWeapMinigun_C_StartSecondaryActionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.BPTryFireWeapon
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapMinigun_C::BPTryFireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.BPTryFireWeapon");

	AWeapMinigun_C_BPTryFireWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapMinigun.WeapMinigun_C.BPOnBurstFinished
// ()

void AWeapMinigun_C::BPOnBurstFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.BPOnBurstFinished");

	AWeapMinigun_C_BPOnBurstFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.BPGetCurrentSpread
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeapMinigun_C::BPGetCurrentSpread()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.BPGetCurrentSpread");

	AWeapMinigun_C_BPGetCurrentSpread_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapMinigun.WeapMinigun_C.UserConstructionScript
// ()

void AWeapMinigun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.UserConstructionScript");

	AWeapMinigun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMinigun_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.ReceiveTick");

	AWeapMinigun_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.Tick_ApplyMovementRestrictions
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMinigun_C::Tick_ApplyMovementRestrictions(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.Tick_ApplyMovementRestrictions");

	AWeapMinigun_C_Tick_ApplyMovementRestrictions_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.Tick_SetIsUpToSpeed
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMinigun_C::Tick_SetIsUpToSpeed(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.Tick_SetIsUpToSpeed");

	AWeapMinigun_C_Tick_SetIsUpToSpeed_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.Server_SetIsAttemptingToFire
// ()
// Parameters:
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMinigun_C::Server_SetIsAttemptingToFire(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.Server_SetIsAttemptingToFire");

	AWeapMinigun_C_Server_SetIsAttemptingToFire_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.TickOverheat
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMinigun_C::TickOverheat(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.TickOverheat");

	AWeapMinigun_C_TickOverheat_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.ReceiveBeginPlay
// ()

void AWeapMinigun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.ReceiveBeginPlay");

	AWeapMinigun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.ReceiveDestroyed
// ()

void AWeapMinigun_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.ReceiveDestroyed");

	AWeapMinigun_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.SecondaryAction
// ()

void AWeapMinigun_C::SecondaryAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.SecondaryAction");

	AWeapMinigun_C_SecondaryAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.FinishReload
// ()

void AWeapMinigun_C::FinishReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.FinishReload");

	AWeapMinigun_C_FinishReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.StartReload
// ()

void AWeapMinigun_C::StartReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.StartReload");

	AWeapMinigun_C_StartReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.SetAnimIsFiring
// ()

void AWeapMinigun_C::SetAnimIsFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.SetAnimIsFiring");

	AWeapMinigun_C_SetAnimIsFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.ClearAnimStates
// ()

void AWeapMinigun_C::ClearAnimStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.ClearAnimStates");

	AWeapMinigun_C_ClearAnimStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.SetTPVFireAnim
// ()

void AWeapMinigun_C::SetTPVFireAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.SetTPVFireAnim");

	AWeapMinigun_C_SetTPVFireAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.ForceReplicateSpinValue
// ()

void AWeapMinigun_C::ForceReplicateSpinValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.ForceReplicateSpinValue");

	AWeapMinigun_C_ForceReplicateSpinValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.NetOnOverheated
// ()
// Parameters:
// bool                           Start                          (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMinigun_C::NetOnOverheated(bool Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.NetOnOverheated");

	AWeapMinigun_C_NetOnOverheated_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.NetOnThrow
// ()

void AWeapMinigun_C::NetOnThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.NetOnThrow");

	AWeapMinigun_C_NetOnThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.StartShellLoop
// ()

void AWeapMinigun_C::StartShellLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.StartShellLoop");

	AWeapMinigun_C_StartShellLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.StopShellLoop
// ()

void AWeapMinigun_C::StopShellLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.StopShellLoop");

	AWeapMinigun_C_StopShellLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMinigun.WeapMinigun_C.ExecuteUbergraph_WeapMinigun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMinigun_C::ExecuteUbergraph_WeapMinigun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMinigun.WeapMinigun_C.ExecuteUbergraph_WeapMinigun");

	AWeapMinigun_C_ExecuteUbergraph_WeapMinigun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

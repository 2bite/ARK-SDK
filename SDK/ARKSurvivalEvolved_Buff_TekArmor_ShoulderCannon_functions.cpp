// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_ShoulderCannon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPDeactivated
// (Exec, Event, Static, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintEvent, Const)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::STATIC_BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPDeactivated");

	ABuff_TekArmor_ShoulderCannon_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClampFireTransform
// (NetReliable, Exec, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintEvent, Const)
// Parameters:
// struct UObject_FTransform      InTransform                    (Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct UObject_FTransform      ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct UObject_FTransform ABuff_TekArmor_ShoulderCannon_C::STATIC_ClampFireTransform(struct UObject_FTransform* InTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClampFireTransform");

	ABuff_TekArmor_ShoulderCannon_C_ClampFireTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTransform != nullptr)
		*InTransform = params.InTransform;

	return params.ReturnValue;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.OnRep_Overheated
// ()

void ABuff_TekArmor_ShoulderCannon_C::OnRep_Overheated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.OnRep_Overheated");

	ABuff_TekArmor_ShoulderCannon_C_OnRep_Overheated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.OnRep_Activated
// ()

void ABuff_TekArmor_ShoulderCannon_C::OnRep_Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.OnRep_Activated");

	ABuff_TekArmor_ShoulderCannon_C_OnRep_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateSound
// ()
// Parameters:
// int                            ModeIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::UpdateSound(int ModeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateSound");

	ABuff_TekArmor_ShoulderCannon_C_UpdateSound_Params params;
	params.ModeIndex = ModeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.IsAllowedToFire
// (NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintEvent, Const)
// Parameters:
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::STATIC_IsAllowedToFire(bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.IsAllowedToFire");

	ABuff_TekArmor_ShoulderCannon_C_IsAllowedToFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateTarget
// (NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintEvent, Const)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::UpdateTarget(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateTarget");

	ABuff_TekArmor_ShoulderCannon_C_UpdateTarget_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateWeaponHeat
// ()
// Parameters:
// float                          A                              (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::UpdateWeaponHeat(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateWeaponHeat");

	ABuff_TekArmor_ShoulderCannon_C_UpdateWeaponHeat_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClampPitchByYaw
// ()
// Parameters:
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_TekArmor_ShoulderCannon_C::ClampPitchByYaw(float Yaw, float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClampPitchByYaw");

	ABuff_TekArmor_ShoulderCannon_C_ClampPitchByYaw_Params params;
	params.Yaw = Yaw;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateAmmo
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::UpdateAmmo(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateAmmo");

	ABuff_TekArmor_ShoulderCannon_C_UpdateAmmo_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UseAlternateSocket
// ()
// Parameters:
// bool                           UseAlt                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::UseAlternateSocket(bool* UseAlt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UseAlternateSocket");

	ABuff_TekArmor_ShoulderCannon_C_UseAlternateSocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseAlt != nullptr)
		*UseAlt = params.UseAlt;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.CanAimAtTarget
// ()
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekArmor_ShoulderCannon_C::CanAimAtTarget(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.CanAimAtTarget");

	ABuff_TekArmor_ShoulderCannon_C_CanAimAtTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Update Fire Mode
// (NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintEvent, Const)

void ABuff_TekArmor_ShoulderCannon_C::STATIC_Update_Fire_Mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Update Fire Mode");

	ABuff_TekArmor_ShoulderCannon_C_Update_Fire_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPAnimNotifyCustomEvent");

	ABuff_TekArmor_ShoulderCannon_C_BPAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.DrawBuffFloatingHUD
// ()
// Parameters:
// int*                           BuffIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.DrawBuffFloatingHUD");

	ABuff_TekArmor_ShoulderCannon_C_DrawBuffFloatingHUD_Params params;
	params.BuffIndex = BuffIndex;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Calculate Ready to Fire
// ()

void ABuff_TekArmor_ShoulderCannon_C::Calculate_Ready_to_Fire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Calculate Ready to Fire");

	ABuff_TekArmor_ShoulderCannon_C_Calculate_Ready_to_Fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.IsValidTarget
// ()
// Parameters:
// class APrimalCharacter*        TargetChar                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekArmor_ShoulderCannon_C::IsValidTarget(class APrimalCharacter* TargetChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.IsValidTarget");

	ABuff_TekArmor_ShoulderCannon_C_IsValidTarget_Params params;
	params.TargetChar = TargetChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.TryFire Weapon
// (Exec, NetResponse, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintEvent, Const)
// Parameters:
// struct UObject_FTransform      AimTransform                   (Parm, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::TryFire_Weapon(const struct UObject_FTransform& AimTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.TryFire Weapon");

	ABuff_TekArmor_ShoulderCannon_C_TryFire_Weapon_Params params;
	params.AimTransform = AimTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPClientDoMultiUse");

	ABuff_TekArmor_ShoulderCannon_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekArmor_ShoulderCannon_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPTryMultiUse");

	ABuff_TekArmor_ShoulderCannon_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintEvent, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABuff_TekArmor_ShoulderCannon_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPGetMultiUseEntries");

	ABuff_TekArmor_ShoulderCannon_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_TekArmor_ShoulderCannon_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPGetHUDElements");

	ABuff_TekArmor_ShoulderCannon_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ApplyAccuracy
// (NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintEvent, Const)
// Parameters:
// struct UObject_FTransform      InTransform                    (Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct UObject_FTransform      ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct UObject_FTransform ABuff_TekArmor_ShoulderCannon_C::ApplyAccuracy(struct UObject_FTransform* InTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ApplyAccuracy");

	ABuff_TekArmor_ShoulderCannon_C_ApplyAccuracy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTransform != nullptr)
		*InTransform = params.InTransform;

	return params.ReturnValue;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.SpawnProjectile
// ()
// Parameters:
// struct UObject_FTransform      InTransform                    (Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::SpawnProjectile(struct UObject_FTransform* InTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.SpawnProjectile");

	ABuff_TekArmor_ShoulderCannon_C_SpawnProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTransform != nullptr)
		*InTransform = params.InTransform;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.IsElectricalStormActive
// ()
// Parameters:
// bool                           _return                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::IsElectricalStormActive(bool* _return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.IsElectricalStormActive");

	ABuff_TekArmor_ShoulderCannon_C_IsElectricalStormActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_return != nullptr)
		*_return = params._return;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Update Weapon Firing
// (Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintEvent, Const)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::STATIC_Update_Weapon_Firing(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Update Weapon Firing");

	ABuff_TekArmor_ShoulderCannon_C_Update_Weapon_Firing_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPSetupForInstigator
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintEvent, Const)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::STATIC_BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPSetupForInstigator");

	ABuff_TekArmor_ShoulderCannon_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.GetTargetPos
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_TekArmor_ShoulderCannon_C::GetTargetPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.GetTargetPos");

	ABuff_TekArmor_ShoulderCannon_C_GetTargetPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Update Weapon Position
// (NetReliable, NetRequest, Native, Public, Private, Delegate, NetClient, BlueprintEvent, Const)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::Update_Weapon_Position(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Update Weapon Position");

	ABuff_TekArmor_ShoulderCannon_C_Update_Weapon_Position_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateWeaponAim
// (NetReliable, NetRequest, NetResponse, Public, Private, Delegate, NetClient, BlueprintEvent, Const)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::UpdateWeaponAim(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateWeaponAim");

	ABuff_TekArmor_ShoulderCannon_C_UpdateWeaponAim_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BuffTickServer");

	ABuff_TekArmor_ShoulderCannon_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BuffTickClient
// (NetRequest, Native, Event, NetResponse, Public, Private, Delegate, NetClient, BlueprintEvent, Const)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BuffTickClient");

	ABuff_TekArmor_ShoulderCannon_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.PreventBlockingWithShield
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekArmor_ShoulderCannon_C::PreventBlockingWithShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.PreventBlockingWithShield");

	ABuff_TekArmor_ShoulderCannon_C_PreventBlockingWithShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UserConstructionScript
// ()

void ABuff_TekArmor_ShoulderCannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UserConstructionScript");

	ABuff_TekArmor_ShoulderCannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClientSpawnProjectile
// ()
// Parameters:
// struct UObject_FTransform      SpawnTransform                 (Parm, IsPlainOldData)
// float                          NewChargeValue                 (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::ClientSpawnProjectile(const struct UObject_FTransform& SpawnTransform, float NewChargeValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClientSpawnProjectile");

	ABuff_TekArmor_ShoulderCannon_C_ClientSpawnProjectile_Params params;
	params.SpawnTransform = SpawnTransform;
	params.NewChargeValue = NewChargeValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerTryFire
// ()
// Parameters:
// struct UObject_FTransform      SpawnTranform                  (Parm, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::ServerTryFire(const struct UObject_FTransform& SpawnTranform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerTryFire");

	ABuff_TekArmor_ShoulderCannon_C_ServerTryFire_Params params;
	params.SpawnTranform = SpawnTranform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerSetAnimIdle
// ()
// Parameters:
// bool                           Idle                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::ServerSetAnimIdle(bool Idle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerSetAnimIdle");

	ABuff_TekArmor_ShoulderCannon_C_ServerSetAnimIdle_Params params;
	params.Idle = Idle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClientSetFireMode
// ()
// Parameters:
// int                            NewFireMode                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::ClientSetFireMode(int NewFireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClientSetFireMode");

	ABuff_TekArmor_ShoulderCannon_C_ClientSetFireMode_Params params;
	params.NewFireMode = NewFireMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerSetTarget
// ()
// Parameters:
// struct FVector                 TargetPos                      (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        TargetChar                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::ServerSetTarget(const struct FVector& TargetPos, class APrimalCharacter* TargetChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerSetTarget");

	ABuff_TekArmor_ShoulderCannon_C_ServerSetTarget_Params params;
	params.TargetPos = TargetPos;
	params.TargetChar = TargetChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerSetLockedTarget
// ()
// Parameters:
// class APrimalCharacter*        TargetChar                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::ServerSetLockedTarget(class APrimalCharacter* TargetChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerSetLockedTarget");

	ABuff_TekArmor_ShoulderCannon_C_ServerSetLockedTarget_Params params;
	params.TargetChar = TargetChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ExecuteUbergraph_Buff_TekArmor_ShoulderCannon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_ShoulderCannon_C::ExecuteUbergraph_Buff_TekArmor_ShoulderCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ExecuteUbergraph_Buff_TekArmor_ShoulderCannon");

	ABuff_TekArmor_ShoulderCannon_C_ExecuteUbergraph_Buff_TekArmor_ShoulderCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

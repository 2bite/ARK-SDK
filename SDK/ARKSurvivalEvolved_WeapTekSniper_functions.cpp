// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekSniper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTekSniper.WeapTekSniper_C.Try Enable XRay
// ()

void AWeapTekSniper_C::Try_Enable_XRay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.Try Enable XRay");

	AWeapTekSniper_C_Try_Enable_XRay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.Get Overheat Duration
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeapTekSniper_C::Get_Overheat_Duration()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.Get Overheat Duration");

	AWeapTekSniper_C_Get_Overheat_Duration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekSniper.WeapTekSniper_C.BPStopPenetratingAtHit
// ()
// Parameters:
// struct FHitResult              CurrentHit                     (Parm, OutParm, ReferenceParm)
// bool*                          bIsEntryHit                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CurrentDistance                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CurrentMaxDistance             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapTekSniper_C::BPStopPenetratingAtHit(bool* bIsEntryHit, float* CurrentDistance, float* CurrentMaxDistance, struct FHitResult* CurrentHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPStopPenetratingAtHit");

	AWeapTekSniper_C_BPStopPenetratingAtHit_Params params;
	params.bIsEntryHit = bIsEntryHit;
	params.CurrentDistance = CurrentDistance;
	params.CurrentMaxDistance = CurrentMaxDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentHit != nullptr)
		*CurrentHit = params.CurrentHit;

	return params.ReturnValue;
}


// Function WeapTekSniper.WeapTekSniper_C.BPWeaponDealDamage
// ()
// Parameters:
// struct FHitResult              Impact                         (Parm, OutParm, ReferenceParm)
// struct FVector                 ShootDir                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int*                           DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWeapTekSniper_C::BPWeaponDealDamage(int* DamageAmount, class UClass** DamageType, float* Impulse, struct FHitResult* Impact, struct FVector* ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPWeaponDealDamage");

	AWeapTekSniper_C_BPWeaponDealDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageType = DamageType;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Impact != nullptr)
		*Impact = params.Impact;
	if (ShootDir != nullptr)
		*ShootDir = params.ShootDir;

	return params.ReturnValue;
}


// Function WeapTekSniper.WeapTekSniper_C.BPAdjustAmmoPerShot
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWeapTekSniper_C::BPAdjustAmmoPerShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPAdjustAmmoPerShot");

	AWeapTekSniper_C_BPAdjustAmmoPerShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekSniper.WeapTekSniper_C.BPToggleAccessory
// ()

void AWeapTekSniper_C::BPToggleAccessory()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPToggleAccessory");

	AWeapTekSniper_C_BPToggleAccessory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.AllowTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapTekSniper_C::AllowTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.AllowTargeting");

	AWeapTekSniper_C_AllowTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekSniper.WeapTekSniper_C.BPSpawnImpactEffects
// ()
// Parameters:
// struct FHitResult              Impact                         (Parm, OutParm, ReferenceParm)
// struct FVector                 ShootDir                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bIsEntryHit                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         WeaponMaxRange                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekSniper_C::BPSpawnImpactEffects(bool* bIsEntryHit, float* WeaponMaxRange, struct FHitResult* Impact, struct FVector* ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPSpawnImpactEffects");

	AWeapTekSniper_C_BPSpawnImpactEffects_Params params;
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


// Function WeapTekSniper.WeapTekSniper_C.BPOnScoped
// ()

void AWeapTekSniper_C::BPOnScoped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPOnScoped");

	AWeapTekSniper_C_BPOnScoped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.BPAppliedPrimalItemToWeapon
// (Native, NetResponse, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, Const, NetValidate)

void AWeapTekSniper_C::BPAppliedPrimalItemToWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPAppliedPrimalItemToWeapon");

	AWeapTekSniper_C_BPAppliedPrimalItemToWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.ReceiveDestroyed
// (NetReliable, Exec, Native, NetResponse, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, Const, NetValidate)

void AWeapTekSniper_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.ReceiveDestroyed");

	AWeapTekSniper_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.Has Ammo
// ()
// Parameters:
// int                            MinAmount                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapTekSniper_C::Has_Ammo(int MinAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.Has Ammo");

	AWeapTekSniper_C_Has_Ammo_Params params;
	params.MinAmount = MinAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekSniper.WeapTekSniper_C.BPToggleAccessoryFailed
// ()

void AWeapTekSniper_C::BPToggleAccessoryFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPToggleAccessoryFailed");

	AWeapTekSniper_C_BPToggleAccessoryFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.BPCanToggleAccessory
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapTekSniper_C::BPCanToggleAccessory()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPCanToggleAccessory");

	AWeapTekSniper_C_BPCanToggleAccessory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekSniper.WeapTekSniper_C.UpdateMeshOverheat Effect
// ()
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekSniper_C::UpdateMeshOverheat_Effect(class USkeletalMeshComponent* Mesh, float amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.UpdateMeshOverheat Effect");

	AWeapTekSniper_C_UpdateMeshOverheat_Effect_Params params;
	params.Mesh = Mesh;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.Tick X-Ray Sound
// ()

void AWeapTekSniper_C::Tick_X_Ray_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.Tick X-Ray Sound");

	AWeapTekSniper_C_Tick_X_Ray_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.Is X-Ray Active
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekSniper_C::Is_X_Ray_Active(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.Is X-Ray Active");

	AWeapTekSniper_C_Is_X_Ray_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WeapTekSniper.WeapTekSniper_C.Show X-Ray Enabled Message
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekSniper_C::Show_X_Ray_Enabled_Message(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.Show X-Ray Enabled Message");

	AWeapTekSniper_C_Show_X_Ray_Enabled_Message_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.SniperMessage
// ()
// Parameters:
// class FString                  Message                        (Parm, ZeroConstructor)

void AWeapTekSniper_C::SniperMessage(const class FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.SniperMessage");

	AWeapTekSniper_C_SniperMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.GetOwnerCharacter
// ()
// Parameters:
// class AShooterCharacter*       AsShooterCharacter             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekSniper_C::GetOwnerCharacter(class AShooterCharacter** AsShooterCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.GetOwnerCharacter");

	AWeapTekSniper_C_GetOwnerCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsShooterCharacter != nullptr)
		*AsShooterCharacter = params.AsShooterCharacter;
}


// Function WeapTekSniper.WeapTekSniper_C.BPWeaponZoom
// ()
// Parameters:
// bool*                          bZoomingIn                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekSniper_C::BPWeaponZoom(bool* bZoomingIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPWeaponZoom");

	AWeapTekSniper_C_BPWeaponZoom_Params params;
	params.bZoomingIn = bZoomingIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.BPWeaponCanFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapTekSniper_C::BPWeaponCanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPWeaponCanFire");

	AWeapTekSniper_C_BPWeaponCanFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekSniper.WeapTekSniper_C.BPFireWeapon
// ()

void AWeapTekSniper_C::BPFireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.BPFireWeapon");

	AWeapTekSniper_C_BPFireWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekSniper_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.ReceiveTick");

	AWeapTekSniper_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.GetIs Overheated
// ()
// Parameters:
// bool                           bRetOverheated                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekSniper_C::GetIs_Overheated(bool* bRetOverheated)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.GetIs Overheated");

	AWeapTekSniper_C_GetIs_Overheated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRetOverheated != nullptr)
		*bRetOverheated = params.bRetOverheated;
}


// Function WeapTekSniper.WeapTekSniper_C.UserConstructionScript
// ()

void AWeapTekSniper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.UserConstructionScript");

	AWeapTekSniper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.FadeOutOverheatParticles__FinishedFunc
// ()

void AWeapTekSniper_C::FadeOutOverheatParticles__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.FadeOutOverheatParticles__FinishedFunc");

	AWeapTekSniper_C_FadeOutOverheatParticles__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.FadeOutOverheatParticles__UpdateFunc
// ()

void AWeapTekSniper_C::FadeOutOverheatParticles__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.FadeOutOverheatParticles__UpdateFunc");

	AWeapTekSniper_C_FadeOutOverheatParticles__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.Overheated
// ()
// Parameters:
// bool                           JustFired                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekSniper_C::Overheated(bool JustFired)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.Overheated");

	AWeapTekSniper_C_Overheated_Params params;
	params.JustFired = JustFired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.AddHeat
// ()
// Parameters:
// bool                           JustFired                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekSniper_C::AddHeat(bool JustFired)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.AddHeat");

	AWeapTekSniper_C_AddHeat_Params params;
	params.JustFired = JustFired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.NotOverheated
// ()

void AWeapTekSniper_C::NotOverheated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.NotOverheated");

	AWeapTekSniper_C_NotOverheated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.SetScoped
// ()
// Parameters:
// bool                           Scoped                         (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekSniper_C::SetScoped(bool Scoped)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.SetScoped");

	AWeapTekSniper_C_SetScoped_Params params;
	params.Scoped = Scoped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekSniper.WeapTekSniper_C.ExecuteUbergraph_WeapTekSniper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekSniper_C::ExecuteUbergraph_WeapTekSniper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekSniper.WeapTekSniper_C.ExecuteUbergraph_WeapTekSniper");

	AWeapTekSniper_C_ExecuteUbergraph_WeapTekSniper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

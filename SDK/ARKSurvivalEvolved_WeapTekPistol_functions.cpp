// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekPistol_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTekPistol.WeapTekPistol_C.ReceiveDestroyed
// ()

void AWeapTekPistol_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.ReceiveDestroyed");

	AWeapTekPistol_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.UpdateBeamSounds
// (NetRequest, Event, NetResponse, Static, NetMulticast, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AWeapTekPistol_C::STATIC_UpdateBeamSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.UpdateBeamSounds");

	AWeapTekPistol_C_UpdateBeamSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.UpdateMaterials
// (Exec, Event, NetResponse, Static, NetMulticast, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AWeapTekPistol_C::STATIC_UpdateMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.UpdateMaterials");

	AWeapTekPistol_C_UpdateMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.CreateDynamicMats
// ()

void AWeapTekPistol_C::CreateDynamicMats()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.CreateDynamicMats");

	AWeapTekPistol_C_CreateDynamicMats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.ApplyHelperBuff
// ()

void AWeapTekPistol_C::ApplyHelperBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.ApplyHelperBuff");

	AWeapTekPistol_C_ApplyHelperBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.BPKillImpactEffects
// ()

void AWeapTekPistol_C::BPKillImpactEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.BPKillImpactEffects");

	AWeapTekPistol_C_BPKillImpactEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.UpdateBeamEffect
// ()

void AWeapTekPistol_C::UpdateBeamEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.UpdateBeamEffect");

	AWeapTekPistol_C_UpdateBeamEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.BPFiredWeapon
// ()

void AWeapTekPistol_C::BPFiredWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.BPFiredWeapon");

	AWeapTekPistol_C_BPFiredWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.StartUnequipEvent
// ()

void AWeapTekPistol_C::StartUnequipEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.StartUnequipEvent");

	AWeapTekPistol_C_StartUnequipEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.BPStartEquippedNotify
// ()

void AWeapTekPistol_C::BPStartEquippedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.BPStartEquippedNotify");

	AWeapTekPistol_C_BPStartEquippedNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.BPWeaponCanFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapTekPistol_C::BPWeaponCanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.BPWeaponCanFire");

	AWeapTekPistol_C_BPWeaponCanFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekPistol.WeapTekPistol_C.Set Material Vector Parameter
// ()
// Parameters:
// class USkeletalMeshComponent*  SK                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Parameter                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekPistol_C::Set_Material_Vector_Parameter(class USkeletalMeshComponent* SK, const struct FName& Parameter, const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.Set Material Vector Parameter");

	AWeapTekPistol_C_Set_Material_Vector_Parameter_Params params;
	params.SK = SK;
	params.Parameter = Parameter;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.SetFireModeOnItem
// ()
// Parameters:
// int                            Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekPistol_C::SetFireModeOnItem(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.SetFireModeOnItem");

	AWeapTekPistol_C_SetFireModeOnItem_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.GetFireModeFromItem
// (Native, Event, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWeapTekPistol_C::GetFireModeFromItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.GetFireModeFromItem");

	AWeapTekPistol_C_GetFireModeFromItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekPistol.WeapTekPistol_C.BPAppliedPrimalItemToWeapon
// ()

void AWeapTekPistol_C::BPAppliedPrimalItemToWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.BPAppliedPrimalItemToWeapon");

	AWeapTekPistol_C_BPAppliedPrimalItemToWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.SelectBuff
// (Exec, Native, Event, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* AWeapTekPistol_C::SelectBuff(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.SelectBuff");

	AWeapTekPistol_C_SelectBuff_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekPistol.WeapTekPistol_C.BPGetCrosshairColor
// ()
// Parameters:
// struct FColor                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FColor AWeapTekPistol_C::BPGetCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.BPGetCrosshairColor");

	AWeapTekPistol_C_BPGetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekPistol.WeapTekPistol_C.BPShouldDealDamage
// ()
// Parameters:
// class AActor**                 TestActor                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapTekPistol_C::BPShouldDealDamage(class AActor** TestActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.BPShouldDealDamage");

	AWeapTekPistol_C_BPShouldDealDamage_Params params;
	params.TestActor = TestActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekPistol.WeapTekPistol_C.BPWeaponDealDamage
// ()
// Parameters:
// struct FHitResult              Impact                         (Parm, OutParm, ReferenceParm)
// struct FVector                 ShootDir                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int*                           DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWeapTekPistol_C::BPWeaponDealDamage(int* DamageAmount, class UClass** DamageType, float* Impulse, struct FHitResult* Impact, struct FVector* ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.BPWeaponDealDamage");

	AWeapTekPistol_C_BPWeaponDealDamage_Params params;
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


// Function WeapTekPistol.WeapTekPistol_C.ApplyBeamTarget
// (NetReliable, NetRequest, NetResponse, Static, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AWeapTekPistol_C::STATIC_ApplyBeamTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.ApplyBeamTarget");

	AWeapTekPistol_C_ApplyBeamTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.BPPostSpawnMuzzleEffect
// (NetReliable, NetRequest, Exec, NetResponse, Static, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UParticleSystemComponent** NewMuzzlePSC                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekPistol_C::STATIC_BPPostSpawnMuzzleEffect(class UParticleSystemComponent** NewMuzzlePSC)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.BPPostSpawnMuzzleEffect");

	AWeapTekPistol_C_BPPostSpawnMuzzleEffect_Params params;
	params.NewMuzzlePSC = NewMuzzlePSC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.GetFireModeData
// (NetReliable, NetRequest, Native, NetResponse, Static, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTekPistolFireMode_Beam Item                           (Parm, OutParm)

void AWeapTekPistol_C::STATIC_GetFireModeData(struct FTekPistolFireMode_Beam* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.GetFireModeData");

	AWeapTekPistol_C_GetFireModeData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function WeapTekPistol.WeapTekPistol_C.UpdateBeamTarget
// ()
// Parameters:
// struct FVector                 BeamTarget                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekPistol_C::UpdateBeamTarget(const struct FVector& BeamTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.UpdateBeamTarget");

	AWeapTekPistol_C_UpdateBeamTarget_Params params;
	params.BeamTarget = BeamTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.ReceiveTick
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekPistol_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.ReceiveTick");

	AWeapTekPistol_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.BPOnBurstFinished
// ()

void AWeapTekPistol_C::BPOnBurstFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.BPOnBurstFinished");

	AWeapTekPistol_C_BPOnBurstFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.BPOnBurstStarted
// ()

void AWeapTekPistol_C::BPOnBurstStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.BPOnBurstStarted");

	AWeapTekPistol_C_BPOnBurstStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.UpdateFireMode
// (NetReliable, Exec, Event, NetMulticast, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AWeapTekPistol_C::UpdateFireMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.UpdateFireMode");

	AWeapTekPistol_C_UpdateFireMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.StartSecondaryActionEvent
// ()

void AWeapTekPistol_C::StartSecondaryActionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.StartSecondaryActionEvent");

	AWeapTekPistol_C_StartSecondaryActionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.BPSpawnImpactEffects
// (NetReliable, Exec, Event, NetResponse, NetMulticast, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHitResult              Impact                         (Parm, OutParm, ReferenceParm)
// struct FVector                 ShootDir                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bIsEntryHit                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         WeaponMaxRange                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekPistol_C::BPSpawnImpactEffects(bool* bIsEntryHit, float* WeaponMaxRange, struct FHitResult* Impact, struct FVector* ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.BPSpawnImpactEffects");

	AWeapTekPistol_C_BPSpawnImpactEffects_Params params;
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


// Function WeapTekPistol.WeapTekPistol_C.UserConstructionScript
// ()

void AWeapTekPistol_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.UserConstructionScript");

	AWeapTekPistol_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.ServerSetFireMode
// ()
// Parameters:
// int                            NewMode                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekPistol_C::ServerSetFireMode(int NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.ServerSetFireMode");

	AWeapTekPistol_C_ServerSetFireMode_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.ClientSetFireMode
// ()
// Parameters:
// int                            NewMode                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekPistol_C::ClientSetFireMode(int NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.ClientSetFireMode");

	AWeapTekPistol_C_ClientSetFireMode_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.ClientBeamEffect
// ()
// Parameters:
// bool                           BeamOn                         (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekPistol_C::ClientBeamEffect(bool BeamOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.ClientBeamEffect");

	AWeapTekPistol_C_ClientBeamEffect_Params params;
	params.BeamOn = BeamOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.ServerSetBeamTarget
// ()
// Parameters:
// struct FVector                 NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekPistol_C::ServerSetBeamTarget(const struct FVector& NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.ServerSetBeamTarget");

	AWeapTekPistol_C_ServerSetBeamTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.ClientSetBeamTarget
// ()
// Parameters:
// struct FVector                 NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekPistol_C::ClientSetBeamTarget(const struct FVector& NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.ClientSetBeamTarget");

	AWeapTekPistol_C_ClientSetBeamTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.ClientNotifyHealingHit
// ()

void AWeapTekPistol_C::ClientNotifyHealingHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.ClientNotifyHealingHit");

	AWeapTekPistol_C_ClientNotifyHealingHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.PreventFireDuringModeSwitch
// ()

void AWeapTekPistol_C::PreventFireDuringModeSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.PreventFireDuringModeSwitch");

	AWeapTekPistol_C_PreventFireDuringModeSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.ClientUpdateFiringState
// ()
// Parameters:
// int                            FireMode                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           BeamOn                         (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekPistol_C::ClientUpdateFiringState(int FireMode, bool BeamOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.ClientUpdateFiringState");

	AWeapTekPistol_C_ClientUpdateFiringState_Params params;
	params.FireMode = FireMode;
	params.BeamOn = BeamOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekPistol.WeapTekPistol_C.ExecuteUbergraph_WeapTekPistol
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekPistol_C::ExecuteUbergraph_WeapTekPistol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekPistol.WeapTekPistol_C.ExecuteUbergraph_WeapTekPistol");

	AWeapTekPistol_C_ExecuteUbergraph_WeapTekPistol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

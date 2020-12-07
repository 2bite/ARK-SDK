// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Horde_MeteorBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.PulseFallDamage
// ()

void ASupplyCrate_Horde_MeteorBase_C::PulseFallDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.PulseFallDamage");

	ASupplyCrate_Horde_MeteorBase_C_PulseFallDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.RunLandSequence
// ()

void ASupplyCrate_Horde_MeteorBase_C::RunLandSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.RunLandSequence");

	ASupplyCrate_Horde_MeteorBase_C_RunLandSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.Initiate Horde Mode
// ()

void ASupplyCrate_Horde_MeteorBase_C::Initiate_Horde_Mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.Initiate Horde Mode");

	ASupplyCrate_Horde_MeteorBase_C_Initiate_Horde_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.SpawnShield
// (NetReliable, Exec, Public, Private, Protected, Delegate, NetServer, NetClient, BlueprintCallable)

void ASupplyCrate_Horde_MeteorBase_C::SpawnShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.SpawnShield");

	ASupplyCrate_Horde_MeteorBase_C_SpawnShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.OpenCrate
// ()

void ASupplyCrate_Horde_MeteorBase_C::OpenCrate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.OpenCrate");

	ASupplyCrate_Horde_MeteorBase_C_OpenCrate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.BPImpactEffect
// (NetReliable, NetRequest, Native, NetResponse, Public, Private, Protected, Delegate, NetServer, NetClient, BlueprintCallable)
// Parameters:
// struct FHitResult              HitRes                         (Parm, OutParm, ReferenceParm)
// struct FVector                 ShootDirection                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASupplyCrate_Horde_MeteorBase_C::BPImpactEffect(struct FHitResult* HitRes, struct FVector* ShootDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.BPImpactEffect");

	ASupplyCrate_Horde_MeteorBase_C_BPImpactEffect_Params params;

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


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ConfigureWaves
// ()

void ASupplyCrate_Horde_MeteorBase_C::ConfigureWaves()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ConfigureWaves");

	ASupplyCrate_Horde_MeteorBase_C_ConfigureWaves_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.OnRep_bStartingNewWave
// ()

void ASupplyCrate_Horde_MeteorBase_C::OnRep_bStartingNewWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.OnRep_bStartingNewWave");

	ASupplyCrate_Horde_MeteorBase_C_OnRep_bStartingNewWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ShouldPlayVFX
// ()
// Parameters:
// float                          NotifPct                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NotifBool                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShouldPlay                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Horde_MeteorBase_C::ShouldPlayVFX(float NotifPct, bool NotifBool, bool* bShouldPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ShouldPlayVFX");

	ASupplyCrate_Horde_MeteorBase_C_ShouldPlayVFX_Params params;
	params.NotifPct = NotifPct;
	params.NotifBool = NotifBool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldPlay != nullptr)
		*bShouldPlay = params.bShouldPlay;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Horde_MeteorBase_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ReceiveAnyDamage");

	ASupplyCrate_Horde_MeteorBase_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.OnRep_bOpenSeqInitiated
// ()

void ASupplyCrate_Horde_MeteorBase_C::OnRep_bOpenSeqInitiated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.OnRep_bOpenSeqInitiated");

	ASupplyCrate_Horde_MeteorBase_C_OnRep_bOpenSeqInitiated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.UserConstructionScript
// ()

void ASupplyCrate_Horde_MeteorBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.UserConstructionScript");

	ASupplyCrate_Horde_MeteorBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ReceiveBeginPlay
// ()

void ASupplyCrate_Horde_MeteorBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ReceiveBeginPlay");

	ASupplyCrate_Horde_MeteorBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.PlayHealthEmitter
// ()
// Parameters:
// class UParticleSystemComponent* Emitter                        (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* Emitter2                       (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Horde_MeteorBase_C::PlayHealthEmitter(class UParticleSystemComponent* Emitter, class UParticleSystemComponent* Emitter2)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.PlayHealthEmitter");

	ASupplyCrate_Horde_MeteorBase_C_PlayHealthEmitter_Params params;
	params.Emitter = Emitter;
	params.Emitter2 = Emitter2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ReceiveDestroyed
// ()

void ASupplyCrate_Horde_MeteorBase_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ReceiveDestroyed");

	ASupplyCrate_Horde_MeteorBase_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.PauseOpenSequence
// ()

void ASupplyCrate_Horde_MeteorBase_C::PauseOpenSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.PauseOpenSequence");

	ASupplyCrate_Horde_MeteorBase_C_PauseOpenSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.PopDoors
// ()

void ASupplyCrate_Horde_MeteorBase_C::PopDoors()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.PopDoors");

	ASupplyCrate_Horde_MeteorBase_C_PopDoors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.DestroySpawnEmitters
// ()

void ASupplyCrate_Horde_MeteorBase_C::DestroySpawnEmitters()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.DestroySpawnEmitters");

	ASupplyCrate_Horde_MeteorBase_C_DestroySpawnEmitters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.CloseCrate
// ()

void ASupplyCrate_Horde_MeteorBase_C::CloseCrate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.CloseCrate");

	ASupplyCrate_Horde_MeteorBase_C_CloseCrate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.CheckProgress
// ()

void ASupplyCrate_Horde_MeteorBase_C::CheckProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.CheckProgress");

	ASupplyCrate_Horde_MeteorBase_C_CheckProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.UpdateVFXProgress
// ()
// Parameters:
// float                          AmtToShow                      (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Horde_MeteorBase_C::UpdateVFXProgress(float AmtToShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.UpdateVFXProgress");

	ASupplyCrate_Horde_MeteorBase_C_UpdateVFXProgress_Params params;
	params.AmtToShow = AmtToShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.UpdateIntermissionBar
// ()

void ASupplyCrate_Horde_MeteorBase_C::UpdateIntermissionBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.UpdateIntermissionBar");

	ASupplyCrate_Horde_MeteorBase_C_UpdateIntermissionBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ProgressAnimationSequence
// ()

void ASupplyCrate_Horde_MeteorBase_C::ProgressAnimationSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ProgressAnimationSequence");

	ASupplyCrate_Horde_MeteorBase_C_ProgressAnimationSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.EjectItems
// ()

void ASupplyCrate_Horde_MeteorBase_C::EjectItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.EjectItems");

	ASupplyCrate_Horde_MeteorBase_C_EjectItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ROS_EjectItems
// ()

void ASupplyCrate_Horde_MeteorBase_C::ROS_EjectItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ROS_EjectItems");

	ASupplyCrate_Horde_MeteorBase_C_ROS_EjectItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.BeginSpinAnimation
// ()

void ASupplyCrate_Horde_MeteorBase_C::BeginSpinAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.BeginSpinAnimation");

	ASupplyCrate_Horde_MeteorBase_C_BeginSpinAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.InterpStopSpinAnimation
// ()

void ASupplyCrate_Horde_MeteorBase_C::InterpStopSpinAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.InterpStopSpinAnimation");

	ASupplyCrate_Horde_MeteorBase_C_InterpStopSpinAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.FindLandingLocations
// ()

void ASupplyCrate_Horde_MeteorBase_C::FindLandingLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.FindLandingLocations");

	ASupplyCrate_Horde_MeteorBase_C_FindLandingLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.InterpPackage
// ()
// Parameters:
// class ADroppedItemHorde_Base_C* Package                        (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Horde_MeteorBase_C::InterpPackage(class ADroppedItemHorde_Base_C* Package)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.InterpPackage");

	ASupplyCrate_Horde_MeteorBase_C_InterpPackage_Params params;
	params.Package = Package;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.SetSpin
// ()

void ASupplyCrate_Horde_MeteorBase_C::SetSpin()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.SetSpin");

	ASupplyCrate_Horde_MeteorBase_C_SetSpin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.SetSpinOff
// ()

void ASupplyCrate_Horde_MeteorBase_C::SetSpinOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.SetSpinOff");

	ASupplyCrate_Horde_MeteorBase_C_SetSpinOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.SetInterpMultiplier
// ()

void ASupplyCrate_Horde_MeteorBase_C::SetInterpMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.SetInterpMultiplier");

	ASupplyCrate_Horde_MeteorBase_C_SetInterpMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ColorizeDoors
// ()

void ASupplyCrate_Horde_MeteorBase_C::ColorizeDoors()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ColorizeDoors");

	ASupplyCrate_Horde_MeteorBase_C_ColorizeDoors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.BeginWaveSpawnTimer
// ()

void ASupplyCrate_Horde_MeteorBase_C::BeginWaveSpawnTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.BeginWaveSpawnTimer");

	ASupplyCrate_Horde_MeteorBase_C_BeginWaveSpawnTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ROC_DeactivateSmokePlume
// ()

void ASupplyCrate_Horde_MeteorBase_C::ROC_DeactivateSmokePlume()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ROC_DeactivateSmokePlume");

	ASupplyCrate_Horde_MeteorBase_C_ROC_DeactivateSmokePlume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ExecuteUbergraph_SupplyCrate_Horde_MeteorBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Horde_MeteorBase_C::ExecuteUbergraph_SupplyCrate_Horde_MeteorBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.ExecuteUbergraph_SupplyCrate_Horde_MeteorBase");

	ASupplyCrate_Horde_MeteorBase_C_ExecuteUbergraph_SupplyCrate_Horde_MeteorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.NewEventDispatcher__DelegateSignature
// ()

void ASupplyCrate_Horde_MeteorBase_C::NewEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Horde_MeteorBase.SupplyCrate_Horde_MeteorBase_C.NewEventDispatcher__DelegateSignature");

	ASupplyCrate_Horde_MeteorBase_C_NewEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Mjolnir_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.BPDeactivated");

	ABuff_TekArmor_Mjolnir_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ReceiveTick");

	ABuff_TekArmor_Mjolnir_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MC_CleanupMjolnir
// ()

void ABuff_TekArmor_Mjolnir_C::MC_CleanupMjolnir()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MC_CleanupMjolnir");

	ABuff_TekArmor_Mjolnir_C_MC_CleanupMjolnir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ThrowingMonitorTick
// ()

void ABuff_TekArmor_Mjolnir_C::ThrowingMonitorTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ThrowingMonitorTick");

	ABuff_TekArmor_Mjolnir_C_ThrowingMonitorTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CheckIsThrowBlocked
// (NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 ForThrowLocation               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBlocked                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::STATIC_CheckIsThrowBlocked(const struct FVector& ForThrowLocation, bool* IsBlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CheckIsThrowBlocked");

	ABuff_TekArmor_Mjolnir_C_CheckIsThrowBlocked_Params params;
	params.ForThrowLocation = ForThrowLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsBlocked != nullptr)
		*IsBlocked = params.IsBlocked;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ServerRequestFireProjectileMulticast
// ()
// Parameters:
// struct FVector                 ShootDir                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::ServerRequestFireProjectileMulticast(const struct FVector& ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ServerRequestFireProjectileMulticast");

	ABuff_TekArmor_Mjolnir_C_ServerRequestFireProjectileMulticast_Params params;
	params.ShootDir = ShootDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MCHitForEmitter
// ()
// Parameters:
// struct UObject_FTransform      HitTransform                   (Parm, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::MCHitForEmitter(const struct UObject_FTransform& HitTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MCHitForEmitter");

	ABuff_TekArmor_Mjolnir_C_MCHitForEmitter_Params params;
	params.HitTransform = HitTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.AuthorityProjectileRequestsSync
// ()

void ABuff_TekArmor_Mjolnir_C::AuthorityProjectileRequestsSync()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.AuthorityProjectileRequestsSync");

	ABuff_TekArmor_Mjolnir_C_AuthorityProjectileRequestsSync_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MC_SyncProjectile
// ()
// Parameters:
// bool                           bIsStuck                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::MC_SyncProjectile(bool bIsStuck, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MC_SyncProjectile");

	ABuff_TekArmor_Mjolnir_C_MC_SyncProjectile_Params params;
	params.bIsStuck = bIsStuck;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SetCastedArmorPieceRef
// ()

void ABuff_TekArmor_Mjolnir_C::SetCastedArmorPieceRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SetCastedArmorPieceRef");

	ABuff_TekArmor_Mjolnir_C_SetCastedArmorPieceRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CheckShouldHideWeapon
// ()

void ABuff_TekArmor_Mjolnir_C::CheckShouldHideWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CheckShouldHideWeapon");

	ABuff_TekArmor_Mjolnir_C_CheckShouldHideWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.AllowTekPunch
// ()
// Parameters:
// bool                           Allow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::AllowTekPunch(bool* Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.AllowTekPunch");

	ABuff_TekArmor_Mjolnir_C_AllowTekPunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allow != nullptr)
		*Allow = params.Allow;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.canThrow
// ()
// Parameters:
// bool                           IsForPostCheck                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekArmor_Mjolnir_C::canThrow(bool IsForPostCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.canThrow");

	ABuff_TekArmor_Mjolnir_C_canThrow_Params params;
	params.IsForPostCheck = IsForPostCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CanAttack
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekArmor_Mjolnir_C::CanAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CanAttack");

	ABuff_TekArmor_Mjolnir_C_CanAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CanDoLightningFan
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekArmor_Mjolnir_C::CanDoLightningFan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CanDoLightningFan");

	ABuff_TekArmor_Mjolnir_C_CanDoLightningFan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.HandleBuffAnimNotify
// ()
// Parameters:
// struct FName*                  AnimNotifyName                 (Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 AnimNotifyStringData           (Parm, ZeroConstructor)

void ABuff_TekArmor_Mjolnir_C::HandleBuffAnimNotify(struct FName* AnimNotifyName, class FString* AnimNotifyStringData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.HandleBuffAnimNotify");

	ABuff_TekArmor_Mjolnir_C_HandleBuffAnimNotify_Params params;
	params.AnimNotifyName = AnimNotifyName;
	params.AnimNotifyStringData = AnimNotifyStringData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnPulseEnd
// ()

void ABuff_TekArmor_Mjolnir_C::OnPulseEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnPulseEnd");

	ABuff_TekArmor_Mjolnir_C_OnPulseEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MulticastSetPulse
// ()
// Parameters:
// bool                           ShouldPulse                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::MulticastSetPulse(bool ShouldPulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MulticastSetPulse");

	ABuff_TekArmor_Mjolnir_C_MulticastSetPulse_Params params;
	params.ShouldPulse = ShouldPulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CanDoPulseAttack
// ()
// Parameters:
// bool                           CanPulse                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::CanDoPulseAttack(bool* CanPulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CanDoPulseAttack");

	ABuff_TekArmor_Mjolnir_C_CanDoPulseAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPulse != nullptr)
		*CanPulse = params.CanPulse;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryStartPulseAttack
// ()

void ABuff_TekArmor_Mjolnir_C::TryStartPulseAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryStartPulseAttack");

	ABuff_TekArmor_Mjolnir_C_TryStartPulseAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.IsDoingPulseAttack
// ()
// Parameters:
// bool                           IsDoingAttack                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::IsDoingPulseAttack(bool* IsDoingAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.IsDoingPulseAttack");

	ABuff_TekArmor_Mjolnir_C_IsDoingPulseAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDoingAttack != nullptr)
		*IsDoingAttack = params.IsDoingAttack;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ClientMjolnirSpawned
// ()
// Parameters:
// class AProj_Mjolnir_C*         NewMjolnirProjectile           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::ClientMjolnirSpawned(class AProj_Mjolnir_C* NewMjolnirProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ClientMjolnirSpawned");

	ABuff_TekArmor_Mjolnir_C_ClientMjolnirSpawned_Params params;
	params.NewMjolnirProjectile = NewMjolnirProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MulticastCallbackMjolnir
// ()

void ABuff_TekArmor_Mjolnir_C::MulticastCallbackMjolnir()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MulticastCallbackMjolnir");

	ABuff_TekArmor_Mjolnir_C_MulticastCallbackMjolnir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ServerRequestMjolnirCallback
// ()

void ABuff_TekArmor_Mjolnir_C::ServerRequestMjolnirCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ServerRequestMjolnirCallback");

	ABuff_TekArmor_Mjolnir_C_ServerRequestMjolnirCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnMjolnirReturned
// ()

void ABuff_TekArmor_Mjolnir_C::OnMjolnirReturned()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnMjolnirReturned");

	ABuff_TekArmor_Mjolnir_C_OnMjolnirReturned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.GetLaunchLocation
// ()
// Parameters:
// struct FVector                 LaunchLoc                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::GetLaunchLocation(struct FVector* LaunchLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.GetLaunchLocation");

	ABuff_TekArmor_Mjolnir_C_GetLaunchLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LaunchLoc != nullptr)
		*LaunchLoc = params.LaunchLoc;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.GetAdjustedAim
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::STATIC_GetAdjustedAim(struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.GetAdjustedAim");

	ABuff_TekArmor_Mjolnir_C_GetAdjustedAim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ServerRequestThrowMjolnir
// ()

void ABuff_TekArmor_Mjolnir_C::ServerRequestThrowMjolnir()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ServerRequestThrowMjolnir");

	ABuff_TekArmor_Mjolnir_C_ServerRequestThrowMjolnir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.FireProjectileMulticast
// (NetReliable, NetRequest, Native, Event, MulticastDelegate, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ShootDir                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::FireProjectileMulticast(const struct FVector& Origin, const struct FVector& ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.FireProjectileMulticast");

	ABuff_TekArmor_Mjolnir_C_FireProjectileMulticast_Params params;
	params.Origin = Origin;
	params.ShootDir = ShootDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SkillThrowMjolnir
// ()

void ABuff_TekArmor_Mjolnir_C::SkillThrowMjolnir()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SkillThrowMjolnir");

	ABuff_TekArmor_Mjolnir_C_SkillThrowMjolnir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryStopLightning
// ()

void ABuff_TekArmor_Mjolnir_C::TryStopLightning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryStopLightning");

	ABuff_TekArmor_Mjolnir_C_TryStopLightning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.UpdateMaterialAndParticles
// ()

void ABuff_TekArmor_Mjolnir_C::UpdateMaterialAndParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.UpdateMaterialAndParticles");

	ABuff_TekArmor_Mjolnir_C_UpdateMaterialAndParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.RemoveAllArcsServer
// ()

void ABuff_TekArmor_Mjolnir_C::RemoveAllArcsServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.RemoveAllArcsServer");

	ABuff_TekArmor_Mjolnir_C_RemoveAllArcsServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.DestroyTargetArcMulticast
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::DestroyTargetArcMulticast(class APrimalCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.DestroyTargetArcMulticast");

	ABuff_TekArmor_Mjolnir_C_DestroyTargetArcMulticast_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnNewActorAffectedMulticast
// ()
// Parameters:
// class AActor*                  actorAffected                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::OnNewActorAffectedMulticast(class AActor* actorAffected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnNewActorAffectedMulticast");

	ABuff_TekArmor_Mjolnir_C_OnNewActorAffectedMulticast_Params params;
	params.actorAffected = actorAffected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryAddNewArc
// ()
// Parameters:
// class AActor*                  forActor                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::TryAddNewArc(class AActor* forActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryAddNewArc");

	ABuff_TekArmor_Mjolnir_C_TryAddNewArc_Params params;
	params.forActor = forActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.RemoveArcTargetServer
// ()
// Parameters:
// class AActor*                  ArcTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::RemoveArcTargetServer(class AActor* ArcTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.RemoveArcTargetServer");

	ABuff_TekArmor_Mjolnir_C_RemoveArcTargetServer_Params params;
	params.ArcTarget = ArcTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ShouldRemoveArcForTarget
// ()
// Parameters:
// class APrimalCharacter*        forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           shouldRemove                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::ShouldRemoveArcForTarget(class APrimalCharacter* forCharacter, bool* shouldRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ShouldRemoveArcForTarget");

	ABuff_TekArmor_Mjolnir_C_ShouldRemoveArcForTarget_Params params;
	params.forCharacter = forCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldRemove != nullptr)
		*shouldRemove = params.shouldRemove;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.DestroyArcForTarget
// (Exec, Native, NetResponse, Static, MulticastDelegate, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class APrimalCharacter*        forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::STATIC_DestroyArcForTarget(class APrimalCharacter* forCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.DestroyArcForTarget");

	ABuff_TekArmor_Mjolnir_C_DestroyArcForTarget_Params params;
	params.forCharacter = forCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ConnectArcToTarget
// ()
// Parameters:
// struct FSTR_ChargeBeamInfo     ArcInfo                        (Parm)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::ConnectArcToTarget(const struct FSTR_ChargeBeamInfo& ArcInfo, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ConnectArcToTarget");

	ABuff_TekArmor_Mjolnir_C_ConnectArcToTarget_Params params;
	params.ArcInfo = ArcInfo;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.DestroyArcVisuals
// ()
// Parameters:
// struct FSTR_ChargeBeamInfo     ArcInfo                        (Parm)

void ABuff_TekArmor_Mjolnir_C::DestroyArcVisuals(const struct FSTR_ChargeBeamInfo& ArcInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.DestroyArcVisuals");

	ABuff_TekArmor_Mjolnir_C_DestroyArcVisuals_Params params;
	params.ArcInfo = ArcInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.RemoveAllArcsClient
// (NetRequest, Native, NetMulticast, MulticastDelegate, Protected, HasDefaults, BlueprintEvent)

void ABuff_TekArmor_Mjolnir_C::RemoveAllArcsClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.RemoveAllArcsClient");

	ABuff_TekArmor_Mjolnir_C_RemoveAllArcsClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SetArcIntensity
// ()
// Parameters:
// class UParticleSystemComponent* Arc                            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::SetArcIntensity(class UParticleSystemComponent* Arc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SetArcIntensity");

	ABuff_TekArmor_Mjolnir_C_SetArcIntensity_Params params;
	params.Arc = Arc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SetEndPoints
// ()
// Parameters:
// class UParticleSystemComponent* Arc                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndPoint1                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 endPoint2                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 endPoint3                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::SetEndPoints(class UParticleSystemComponent* Arc, const struct FVector& EndPoint1, const struct FVector& endPoint2, const struct FVector& endPoint3)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SetEndPoints");

	ABuff_TekArmor_Mjolnir_C_SetEndPoints_Params params;
	params.Arc = Arc;
	params.EndPoint1 = EndPoint1;
	params.endPoint2 = endPoint2;
	params.endPoint3 = endPoint3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CreateNewArc
// (NetResponse, NetMulticast, MulticastDelegate, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class AActor*                  ToActor                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::CreateNewArc(class AActor* ToActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CreateNewArc");

	ABuff_TekArmor_Mjolnir_C_CreateNewArc_Params params;
	params.ToActor = ToActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStopLightning
// ()

void ABuff_TekArmor_Mjolnir_C::OnStopLightning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStopLightning");

	ABuff_TekArmor_Mjolnir_C_OnStopLightning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStopLightningMulticast
// ()

void ABuff_TekArmor_Mjolnir_C::OnStopLightningMulticast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStopLightningMulticast");

	ABuff_TekArmor_Mjolnir_C_OnStopLightningMulticast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.LightningTickServer
// ()

void ABuff_TekArmor_Mjolnir_C::LightningTickServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.LightningTickServer");

	ABuff_TekArmor_Mjolnir_C_LightningTickServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.LightningTickClient
// (Native, Event, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, BlueprintEvent)

void ABuff_TekArmor_Mjolnir_C::STATIC_LightningTickClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.LightningTickClient");

	ABuff_TekArmor_Mjolnir_C_LightningTickClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.LightningTick
// ()

void ABuff_TekArmor_Mjolnir_C::LightningTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.LightningTick");

	ABuff_TekArmor_Mjolnir_C_LightningTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStartLightning
// ()

void ABuff_TekArmor_Mjolnir_C::OnStartLightning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStartLightning");

	ABuff_TekArmor_Mjolnir_C_OnStartLightning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStartLightningMulticast
// ()

void ABuff_TekArmor_Mjolnir_C::OnStartLightningMulticast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStartLightningMulticast");

	ABuff_TekArmor_Mjolnir_C_OnStartLightningMulticast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryStartLightning
// ()

void ABuff_TekArmor_Mjolnir_C::TryStartLightning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryStartLightning");

	ABuff_TekArmor_Mjolnir_C_TryStartLightning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.BPSetupForInstigator");

	ABuff_TekArmor_Mjolnir_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.UserConstructionScript
// ()

void ABuff_TekArmor_Mjolnir_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.UserConstructionScript");

	ABuff_TekArmor_Mjolnir_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_InputAction_AltFire
// ()
// Parameters:
// bool*                          bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::Proxy_InputAction_AltFire(bool* bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_InputAction_AltFire");

	ABuff_TekArmor_Mjolnir_C_Proxy_InputAction_AltFire_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Right_Trigger_Hold
// ()
// Parameters:
// bool*                          bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::Proxy_Gamepad_Right_Trigger_Hold(bool* bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Right_Trigger_Hold");

	ABuff_TekArmor_Mjolnir_C_Proxy_Gamepad_Right_Trigger_Hold_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Right_Trigger
// ()
// Parameters:
// bool*                          bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::Proxy_Gamepad_Right_Trigger(bool* bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Right_Trigger");

	ABuff_TekArmor_Mjolnir_C_Proxy_Gamepad_Right_Trigger_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_InputAction_Targeting_Hold
// ()
// Parameters:
// bool*                          bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::Proxy_InputAction_Targeting_Hold(bool* bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_InputAction_Targeting_Hold");

	ABuff_TekArmor_Mjolnir_C_Proxy_InputAction_Targeting_Hold_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Left_Trigger_Hold
// ()
// Parameters:
// bool*                          bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::Proxy_Gamepad_Left_Trigger_Hold(bool* bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Left_Trigger_Hold");

	ABuff_TekArmor_Mjolnir_C_Proxy_Gamepad_Left_Trigger_Hold_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_InputAction_Targeting
// ()
// Parameters:
// bool*                          bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::Proxy_InputAction_Targeting(bool* bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_InputAction_Targeting");

	ABuff_TekArmor_Mjolnir_C_Proxy_InputAction_Targeting_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Left_Trigger
// ()
// Parameters:
// bool*                          bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::Proxy_Gamepad_Left_Trigger(bool* bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Left_Trigger");

	ABuff_TekArmor_Mjolnir_C_Proxy_Gamepad_Left_Trigger_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.PlayCameraShake
// ()

void ABuff_TekArmor_Mjolnir_C::PlayCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.PlayCameraShake");

	ABuff_TekArmor_Mjolnir_C_PlayCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MC_PlayThrow
// ()

void ABuff_TekArmor_Mjolnir_C::MC_PlayThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MC_PlayThrow");

	ABuff_TekArmor_Mjolnir_C_MC_PlayThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.PlayHoldForReturn
// ()

void ABuff_TekArmor_Mjolnir_C::PlayHoldForReturn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.PlayHoldForReturn");

	ABuff_TekArmor_Mjolnir_C_PlayHoldForReturn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ExecuteUbergraph_Buff_TekArmor_Mjolnir
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Mjolnir_C::ExecuteUbergraph_Buff_TekArmor_Mjolnir(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ExecuteUbergraph_Buff_TekArmor_Mjolnir");

	ABuff_TekArmor_Mjolnir_C_ExecuteUbergraph_Buff_TekArmor_Mjolnir_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

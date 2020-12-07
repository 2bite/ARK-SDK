// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BeeHive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BeeHive.BeeHive_C.BlueprintDrawHUD
// (Net, Exec, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void ABeeHive_C::BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.BlueprintDrawHUD");

	ABeeHive_C_BlueprintDrawHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive.BeeHive_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABeeHive_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.BPAdjustDamage");

	ABeeHive_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BeeHive.BeeHive_C.ReceivePointDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotFromDirection              (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABeeHive_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.ReceivePointDamage");

	ABeeHive_C_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive.BeeHive_C.BPCanBeActivated
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABeeHive_C::BPCanBeActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.BPCanBeActivated");

	ABeeHive_C_BPCanBeActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BeeHive.BeeHive_C.TamedHealthUpdate
// ()

void ABeeHive_C::TamedHealthUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.TamedHealthUpdate");

	ABeeHive_C_TamedHealthUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive.BeeHive_C.AggroNearbyBees
// ()
// Parameters:
// class AActor*                  AggroTarget                    (Parm, ZeroConstructor, IsPlainOldData)

void ABeeHive_C::AggroNearbyBees(class AActor* AggroTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.AggroNearbyBees");

	ABeeHive_C_AggroNearbyBees_Params params;
	params.AggroTarget = AggroTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive.BeeHive_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABeeHive_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.BPTryMultiUse");

	ABeeHive_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BeeHive.BeeHive_C.BPGetMultiUseEntries
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABeeHive_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.BPGetMultiUseEntries");

	ABeeHive_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function BeeHive.BeeHive_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABeeHive_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.BPClientDoMultiUse");

	ABeeHive_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive.BeeHive_C.Get Closest Hidden Bee
// ()
// Parameters:
// class ABee_Queen_Character_BP_C* Queen                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABeeHive_C::Get_Closest_Hidden_Bee(class ABee_Queen_Character_BP_C** Queen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.Get Closest Hidden Bee");

	ABeeHive_C_Get_Closest_Hidden_Bee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Queen != nullptr)
		*Queen = params.Queen;
}


// Function BeeHive.BeeHive_C.BPUnstasis
// ()

void ABeeHive_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.BPUnstasis");

	ABeeHive_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive.BeeHive_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABeeHive_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.ReceiveAnyDamage");

	ABeeHive_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive.BeeHive_C.BPOverrideAllowStructureAccess
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsAccessAllowed               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABeeHive_C::BPOverrideAllowStructureAccess(class AShooterPlayerController** ForPC, bool* bIsAccessAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.BPOverrideAllowStructureAccess");

	ABeeHive_C_BPOverrideAllowStructureAccess_Params params;
	params.ForPC = ForPC;
	params.bIsAccessAllowed = bIsAccessAllowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BeeHive.BeeHive_C.ReceiveDestroyed
// ()

void ABeeHive_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.ReceiveDestroyed");

	ABeeHive_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive.BeeHive_C.UserConstructionScript
// ()

void ABeeHive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.UserConstructionScript");

	ABeeHive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive.BeeHive_C.ReceiveBeginPlay
// ()

void ABeeHive_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.ReceiveBeginPlay");

	ABeeHive_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive.BeeHive_C.UpdateHealthEvent
// ()

void ABeeHive_C::UpdateHealthEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.UpdateHealthEvent");

	ABeeHive_C_UpdateHealthEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive.BeeHive_C.PlayMultiCastParticle
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         Emitter                        (Parm, ZeroConstructor, IsPlainOldData)

void ABeeHive_C::PlayMultiCastParticle(const struct FVector& Location, class UParticleSystem* Emitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.PlayMultiCastParticle");

	ABeeHive_C_PlayMultiCastParticle_Params params;
	params.Location = Location;
	params.Emitter = Emitter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive.BeeHive_C.DestroyedParticle
// ()

void ABeeHive_C::DestroyedParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.DestroyedParticle");

	ABeeHive_C_DestroyedParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive.BeeHive_C.CheckUpdateStencilValues
// ()

void ABeeHive_C::CheckUpdateStencilValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.CheckUpdateStencilValues");

	ABeeHive_C_CheckUpdateStencilValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeeHive.BeeHive_C.ExecuteUbergraph_BeeHive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABeeHive_C::ExecuteUbergraph_BeeHive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeeHive.BeeHive_C.ExecuteUbergraph_BeeHive");

	ABeeHive_C_ExecuteUbergraph_BeeHive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

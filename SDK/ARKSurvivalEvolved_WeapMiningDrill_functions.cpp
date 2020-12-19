// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMiningDrill_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMiningDrill.WeapMiningDrill_C.StartUnequipEvent
// ()

void AWeapMiningDrill_C::StartUnequipEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.StartUnequipEvent");

	AWeapMiningDrill_C_StartUnequipEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMiningDrill.WeapMiningDrill_C.HandleActivation
// ()
// Parameters:
// bool*                          bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMiningDrill_C::HandleActivation(bool* bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.HandleActivation");

	AWeapMiningDrill_C_HandleActivation_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMiningDrill.WeapMiningDrill_C.ReceiveDestroyed
// ()

void AWeapMiningDrill_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.ReceiveDestroyed");

	AWeapMiningDrill_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMiningDrill.WeapMiningDrill_C.CreateDynamicMATS
// ()

void AWeapMiningDrill_C::CreateDynamicMATS()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.CreateDynamicMATS");

	AWeapMiningDrill_C_CreateDynamicMATS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMiningDrill.WeapMiningDrill_C.BPSpawnHarvestEffects
// ()
// Parameters:
// TArray<struct FVector>         Impacts                        (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWeapMiningDrill_C::BPSpawnHarvestEffects(TArray<struct FVector>* Impacts)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.BPSpawnHarvestEffects");

	AWeapMiningDrill_C_BPSpawnHarvestEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Impacts != nullptr)
		*Impacts = params.Impacts;
}


// Function WeapMiningDrill.WeapMiningDrill_C.CalculateTargetPosition
// (NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, NetClient, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AWeapMiningDrill_C::CalculateTargetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.CalculateTargetPosition");

	AWeapMiningDrill_C_CalculateTargetPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapMiningDrill.WeapMiningDrill_C.BPStartEquippedNotify
// ()

void AWeapMiningDrill_C::BPStartEquippedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.BPStartEquippedNotify");

	AWeapMiningDrill_C_BPStartEquippedNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMiningDrill.WeapMiningDrill_C.BPWeaponDealDamage
// ()
// Parameters:
// struct FHitResult              Impact                         (Parm, OutParm, ReferenceParm)
// struct FVector                 ShootDir                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int*                           DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWeapMiningDrill_C::BPWeaponDealDamage(int* DamageAmount, class UClass** DamageType, float* Impulse, struct FHitResult* Impact, struct FVector* ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.BPWeaponDealDamage");

	AWeapMiningDrill_C_BPWeaponDealDamage_Params params;
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


// Function WeapMiningDrill.WeapMiningDrill_C.BPPreFireEvent
// (Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, NetClient, Const)
// Parameters:
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShootDir                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMiningDrill_C::STATIC_BPPreFireEvent(struct FVector* Origin, struct FVector* ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.BPPreFireEvent");

	AWeapMiningDrill_C_BPPreFireEvent_Params params;
	params.Origin = Origin;
	params.ShootDir = ShootDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMiningDrill.WeapMiningDrill_C.BPWeaponCanFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapMiningDrill_C::BPWeaponCanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.BPWeaponCanFire");

	AWeapMiningDrill_C_BPWeaponCanFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapMiningDrill.WeapMiningDrill_C.OnRep_Overheated
// ()

void AWeapMiningDrill_C::OnRep_Overheated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.OnRep_Overheated");

	AWeapMiningDrill_C_OnRep_Overheated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMiningDrill.WeapMiningDrill_C.UpdateWeaponHeat
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMiningDrill_C::UpdateWeaponHeat(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.UpdateWeaponHeat");

	AWeapMiningDrill_C_UpdateWeaponHeat_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMiningDrill.WeapMiningDrill_C.BPFiredWeapon
// ()

void AWeapMiningDrill_C::BPFiredWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.BPFiredWeapon");

	AWeapMiningDrill_C_BPFiredWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMiningDrill.WeapMiningDrill_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMiningDrill_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.ReceiveTick");

	AWeapMiningDrill_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMiningDrill.WeapMiningDrill_C.UserConstructionScript
// ()

void AWeapMiningDrill_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.UserConstructionScript");

	AWeapMiningDrill_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMiningDrill.WeapMiningDrill_C.SpawnImpact
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMiningDrill_C::SpawnImpact(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.SpawnImpact");

	AWeapMiningDrill_C_SpawnImpact_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMiningDrill.WeapMiningDrill_C.TurnOffIfRiding
// ()

void AWeapMiningDrill_C::TurnOffIfRiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.TurnOffIfRiding");

	AWeapMiningDrill_C_TurnOffIfRiding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMiningDrill.WeapMiningDrill_C.ExecuteUbergraph_WeapMiningDrill
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMiningDrill_C::ExecuteUbergraph_WeapMiningDrill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMiningDrill.WeapMiningDrill_C.ExecuteUbergraph_WeapMiningDrill");

	AWeapMiningDrill_C_ExecuteUbergraph_WeapMiningDrill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

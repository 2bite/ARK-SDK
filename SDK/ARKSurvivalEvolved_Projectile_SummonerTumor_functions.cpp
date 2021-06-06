// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Projectile_SummonerTumor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.ResetDamageable
// ()

void AProjectile_SummonerTumor_C::ResetDamageable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.ResetDamageable");

	AProjectile_SummonerTumor_C_ResetDamageable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.ReceivePointDamage
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

void AProjectile_SummonerTumor_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.ReceivePointDamage");

	AProjectile_SummonerTumor_C_ReceivePointDamage_Params params;
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


// Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.OnExplode
// (NetReliable, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjectile_SummonerTumor_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.OnExplode");

	AProjectile_SummonerTumor_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.UserConstructionScript
// ()

void AProjectile_SummonerTumor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.UserConstructionScript");

	AProjectile_SummonerTumor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.Multi_SetLifeSpan
// ()

void AProjectile_SummonerTumor_C::Multi_SetLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.Multi_SetLifeSpan");

	AProjectile_SummonerTumor_C_Multi_SetLifeSpan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.ExecuteUbergraph_Projectile_SummonerTumor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_SummonerTumor_C::ExecuteUbergraph_Projectile_SummonerTumor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.ExecuteUbergraph_Projectile_SummonerTumor");

	AProjectile_SummonerTumor_C_ExecuteUbergraph_Projectile_SummonerTumor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

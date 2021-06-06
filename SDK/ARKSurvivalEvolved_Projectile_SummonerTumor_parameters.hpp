#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Projectile_SummonerTumor_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.ResetDamageable
struct AProjectile_SummonerTumor_C_ResetDamageable_Params
{
};

// Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.ReceivePointDamage
struct AProjectile_SummonerTumor_C_ReceivePointDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotFromDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.OnExplode
struct AProjectile_SummonerTumor_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.UserConstructionScript
struct AProjectile_SummonerTumor_C_UserConstructionScript_Params
{
};

// Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.Multi_SetLifeSpan
struct AProjectile_SummonerTumor_C_Multi_SetLifeSpan_Params
{
};

// Function Projectile_SummonerTumor.Projectile_SummonerTumor_C.ExecuteUbergraph_Projectile_SummonerTumor
struct AProjectile_SummonerTumor_C_ExecuteUbergraph_Projectile_SummonerTumor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

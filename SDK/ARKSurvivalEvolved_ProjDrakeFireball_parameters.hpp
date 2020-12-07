#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjDrakeFireball_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjDrakeFireball.ProjDrakeFireball_C.CalculateFragmentVectors
struct AProjDrakeFireball_C_CalculateFragmentVectors_Params
{
};

// Function ProjDrakeFireball.ProjDrakeFireball_C.ReceiveBeginPlay
struct AProjDrakeFireball_C_ReceiveBeginPlay_Params
{
};

// Function ProjDrakeFireball.ProjDrakeFireball_C.UserConstructionScript
struct AProjDrakeFireball_C_UserConstructionScript_Params
{
};

// Function ProjDrakeFireball.ProjDrakeFireball_C.OnExplode
struct AProjDrakeFireball_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjDrakeFireball.ProjDrakeFireball_C.ServerRequest_CreateFragment
struct AProjDrakeFireball_C_ServerRequest_CreateFragment_Params
{
	class UClass*                                      ProjectileClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                 // (Parm)
	float                                              OverrideInitialSpeed;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjDrakeFireball.ProjDrakeFireball_C.ClientHideProjectile
struct AProjDrakeFireball_C_ClientHideProjectile_Params
{
};

// Function ProjDrakeFireball.ProjDrakeFireball_C.ReceiveAnyDamage
struct AProjDrakeFireball_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjDrakeFireball.ProjDrakeFireball_C.Multi_DeactivateFragments
struct AProjDrakeFireball_C_Multi_DeactivateFragments_Params
{
};

// Function ProjDrakeFireball.ProjDrakeFireball_C.ExecuteUbergraph_ProjDrakeFireball
struct AProjDrakeFireball_C_ExecuteUbergraph_ProjDrakeFireball_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

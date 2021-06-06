#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Projectile_SummonerEyeball_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.AttemptSpawnTentacles
struct AProjectile_SummonerEyeball_C_AttemptSpawnTentacles_Params
{
	struct FVector                                     hitLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.UserConstructionScript
struct AProjectile_SummonerEyeball_C_UserConstructionScript_Params
{
};

// Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.OnExplode
struct AProjectile_SummonerEyeball_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function Projectile_SummonerEyeball.Projectile_SummonerEyeball_C.ExecuteUbergraph_Projectile_SummonerEyeball
struct AProjectile_SummonerEyeball_C_ExecuteUbergraph_Projectile_SummonerEyeball_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

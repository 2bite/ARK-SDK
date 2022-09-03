#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Projectile_Summoner_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_Summoner.Projectile_Summoner_C.OnExplode
struct AProjectile_Summoner_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function Projectile_Summoner.Projectile_Summoner_C.UserConstructionScript
struct AProjectile_Summoner_C_UserConstructionScript_Params
{
};

// Function Projectile_Summoner.Projectile_Summoner_C.ExecuteUbergraph_Projectile_Summoner
struct AProjectile_Summoner_C_ExecuteUbergraph_Projectile_Summoner_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

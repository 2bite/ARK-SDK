#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjClusterGrenade_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjClusterGrenade.ProjClusterGrenade_C.UserConstructionScript
struct AProjClusterGrenade_C_UserConstructionScript_Params
{
};

// Function ProjClusterGrenade.ProjClusterGrenade_C.OnExplode
struct AProjClusterGrenade_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjClusterGrenade.ProjClusterGrenade_C.BPSpawnedFragments
struct AProjClusterGrenade_C_BPSpawnedFragments_Params
{
	TArray<class AShooterProjectile*>                  FragmentArray;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ProjClusterGrenade.ProjClusterGrenade_C.ExecuteUbergraph_ProjClusterGrenade
struct AProjClusterGrenade_C_ExecuteUbergraph_ProjClusterGrenade_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

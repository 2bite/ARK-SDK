#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjClusterGrenadeFragment_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.UserConstructionScript
struct AProjClusterGrenadeFragment_C_UserConstructionScript_Params
{
};

// Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.BPSpawnedFragments
struct AProjClusterGrenadeFragment_C_BPSpawnedFragments_Params
{
	TArray<class AShooterProjectile*>                  FragmentArray;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.ReceiveAnyDamage
struct AProjClusterGrenadeFragment_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C.ExecuteUbergraph_ProjClusterGrenadeFragment
struct AProjClusterGrenadeFragment_C_ExecuteUbergraph_ProjClusterGrenadeFragment_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ClientExplodingProjectile_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ClientExplodingProjectile.ClientExplodingProjectile_C.UserConstructionScript
struct AClientExplodingProjectile_C_UserConstructionScript_Params
{
};

// Function ClientExplodingProjectile.ClientExplodingProjectile_C.OnExplode
struct AClientExplodingProjectile_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ClientExplodingProjectile.ClientExplodingProjectile_C.ExecuteUbergraph_ClientExplodingProjectile
struct AClientExplodingProjectile_C_ExecuteUbergraph_ClientExplodingProjectile_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

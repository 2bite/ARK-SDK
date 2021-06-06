#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjPoisonGrenade_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjPoisonGrenade.ProjPoisonGrenade_C.UserConstructionScript
struct AProjPoisonGrenade_C_UserConstructionScript_Params
{
};

// Function ProjPoisonGrenade.ProjPoisonGrenade_C.OnExplode
struct AProjPoisonGrenade_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjPoisonGrenade.ProjPoisonGrenade_C.ExecuteUbergraph_ProjPoisonGrenade
struct AProjPoisonGrenade_C_ExecuteUbergraph_ProjPoisonGrenade_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGrenade_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjGrenade.ProjGrenade_C.UserConstructionScript
struct AProjGrenade_C_UserConstructionScript_Params
{
};

// Function ProjGrenade.ProjGrenade_C.OnExplode
struct AProjGrenade_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjGrenade.ProjGrenade_C.ExecuteUbergraph_ProjGrenade
struct AProjGrenade_C_ExecuteUbergraph_ProjGrenade_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

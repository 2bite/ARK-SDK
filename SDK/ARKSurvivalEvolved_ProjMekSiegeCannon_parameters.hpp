#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjMekSiegeCannon_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjMekSiegeCannon.ProjMekSiegeCannon_C.UserConstructionScript
struct AProjMekSiegeCannon_C_UserConstructionScript_Params
{
};

// Function ProjMekSiegeCannon.ProjMekSiegeCannon_C.OnExplode
struct AProjMekSiegeCannon_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjMekSiegeCannon.ProjMekSiegeCannon_C.ExecuteUbergraph_ProjMekSiegeCannon
struct AProjMekSiegeCannon_C_ExecuteUbergraph_ProjMekSiegeCannon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjScoutLauncher_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjScoutLauncher.ProjScoutLauncher_C.UserConstructionScript
struct AProjScoutLauncher_C_UserConstructionScript_Params
{
};

// Function ProjScoutLauncher.ProjScoutLauncher_C.OnExplode
struct AProjScoutLauncher_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjScoutLauncher.ProjScoutLauncher_C.ReceiveBeginPlay
struct AProjScoutLauncher_C_ReceiveBeginPlay_Params
{
};

// Function ProjScoutLauncher.ProjScoutLauncher_C.ExecuteUbergraph_ProjScoutLauncher
struct AProjScoutLauncher_C_ExecuteUbergraph_ProjScoutLauncher_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

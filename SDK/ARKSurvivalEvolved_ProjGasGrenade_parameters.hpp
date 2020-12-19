#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGasGrenade_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjGasGrenade.ProjGasGrenade_C.UserConstructionScript
struct AProjGasGrenade_C_UserConstructionScript_Params
{
};

// Function ProjGasGrenade.ProjGasGrenade_C.OnExplode
struct AProjGasGrenade_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjGasGrenade.ProjGasGrenade_C.ExecuteUbergraph_ProjGasGrenade
struct AProjGasGrenade_C_ExecuteUbergraph_ProjGasGrenade_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

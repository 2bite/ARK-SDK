#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjMekPistol_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjMekPistol.ProjMekPistol_C.BPIgnoreRadialDamageVictim
struct AProjMekPistol_C_BPIgnoreRadialDamageVictim_Params
{
	class AActor**                                     Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProjMekPistol.ProjMekPistol_C.UserConstructionScript
struct AProjMekPistol_C_UserConstructionScript_Params
{
};

// Function ProjMekPistol.ProjMekPistol_C.ReceiveBeginPlay
struct AProjMekPistol_C_ReceiveBeginPlay_Params
{
};

// Function ProjMekPistol.ProjMekPistol_C.OnExplode
struct AProjMekPistol_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjMekPistol.ProjMekPistol_C.ExecuteUbergraph_ProjMekPistol
struct AProjMekPistol_C_ExecuteUbergraph_ProjMekPistol_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

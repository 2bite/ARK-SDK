#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTekRifle_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjTekRifle.ProjTekRifle_C.BPIgnoreRadialDamageVictim
struct AProjTekRifle_C_BPIgnoreRadialDamageVictim_Params
{
	class AActor**                                     Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProjTekRifle.ProjTekRifle_C.UserConstructionScript
struct AProjTekRifle_C_UserConstructionScript_Params
{
};

// Function ProjTekRifle.ProjTekRifle_C.ReceiveBeginPlay
struct AProjTekRifle_C_ReceiveBeginPlay_Params
{
};

// Function ProjTekRifle.ProjTekRifle_C.OnExplode
struct AProjTekRifle_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjTekRifle.ProjTekRifle_C.ExecuteUbergraph_ProjTekRifle
struct AProjTekRifle_C_ExecuteUbergraph_ProjTekRifle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

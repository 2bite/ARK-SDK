#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjChainBola_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjChainBola.ProjChainBola_C.UserConstructionScript
struct AProjChainBola_C_UserConstructionScript_Params
{
};

// Function ProjChainBola.ProjChainBola_C.OnExplode
struct AProjChainBola_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjChainBola.ProjChainBola_C.ExecuteUbergraph_ProjChainBola
struct AProjChainBola_C_ExecuteUbergraph_ProjChainBola_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

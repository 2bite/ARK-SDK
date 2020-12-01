#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_CupidArrow_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjArrow_CupidArrow.ProjArrow_CupidArrow_C.OnExplode
struct AProjArrow_CupidArrow_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjArrow_CupidArrow.ProjArrow_CupidArrow_C.UserConstructionScript
struct AProjArrow_CupidArrow_C_UserConstructionScript_Params
{
};

// Function ProjArrow_CupidArrow.ProjArrow_CupidArrow_C.ExecuteUbergraph_ProjArrow_CupidArrow
struct AProjArrow_CupidArrow_C_ExecuteUbergraph_ProjArrow_CupidArrow_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

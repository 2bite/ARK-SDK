#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Explosive_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjArrow_Explosive.ProjArrow_Explosive_C.OnExplode
struct AProjArrow_Explosive_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjArrow_Explosive.ProjArrow_Explosive_C.UserConstructionScript
struct AProjArrow_Explosive_C_UserConstructionScript_Params
{
};

// Function ProjArrow_Explosive.ProjArrow_Explosive_C.ExecuteUbergraph_ProjArrow_Explosive
struct AProjArrow_Explosive_C_ExecuteUbergraph_ProjArrow_Explosive_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

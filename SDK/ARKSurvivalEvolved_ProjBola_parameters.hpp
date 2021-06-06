#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjBola_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjBola.ProjBola_C.UserConstructionScript
struct AProjBola_C_UserConstructionScript_Params
{
};

// Function ProjBola.ProjBola_C.OnExplode
struct AProjBola_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjBola.ProjBola_C.ExecuteUbergraph_ProjBola
struct AProjBola_C_ExecuteUbergraph_ProjBola_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

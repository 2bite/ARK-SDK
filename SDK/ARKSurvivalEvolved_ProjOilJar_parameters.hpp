#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjOilJar_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjOilJar.ProjOilJar_C.UserConstructionScript
struct AProjOilJar_C_UserConstructionScript_Params
{
};

// Function ProjOilJar.ProjOilJar_C.OnExplode
struct AProjOilJar_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjOilJar.ProjOilJar_C.ExecuteUbergraph_ProjOilJar
struct AProjOilJar_C_ExecuteUbergraph_ProjOilJar_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

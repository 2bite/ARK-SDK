#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjCryopod_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjCryopod.ProjCryopod_C.UserConstructionScript
struct AProjCryopod_C_UserConstructionScript_Params
{
};

// Function ProjCryopod.ProjCryopod_C.OnExplode
struct AProjCryopod_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjCryopod.ProjCryopod_C.ExecuteUbergraph_ProjCryopod
struct AProjCryopod_C_ExecuteUbergraph_ProjCryopod_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

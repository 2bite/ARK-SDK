#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjCatapultBoulder_Fire_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C.OnExplode
struct AProjCatapultBoulder_Fire_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C.UserConstructionScript
struct AProjCatapultBoulder_Fire_C_UserConstructionScript_Params
{
};

// Function ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C.ExecuteUbergraph_ProjCatapultBoulder_Fire
struct AProjCatapultBoulder_Fire_C_ExecuteUbergraph_ProjCatapultBoulder_Fire_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGrapHook_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjGrapHook.ProjGrapHook_C.OnExplode
struct AProjGrapHook_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjGrapHook.ProjGrapHook_C.UserConstructionScript
struct AProjGrapHook_C_UserConstructionScript_Params
{
};

// Function ProjGrapHook.ProjGrapHook_C.ExecuteUbergraph_ProjGrapHook
struct AProjGrapHook_C_ExecuteUbergraph_ProjGrapHook_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

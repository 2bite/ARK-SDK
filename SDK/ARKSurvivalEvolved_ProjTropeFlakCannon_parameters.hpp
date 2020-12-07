#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTropeFlakCannon_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.ReceiveBeginPlay
struct AProjTropeFlakCannon_C_ReceiveBeginPlay_Params
{
};

// Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.ReceiveTick
struct AProjTropeFlakCannon_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.UserConstructionScript
struct AProjTropeFlakCannon_C_UserConstructionScript_Params
{
};

// Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.OnExplode
struct AProjTropeFlakCannon_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjTropeFlakCannon.ProjTropeFlakCannon_C.ExecuteUbergraph_ProjTropeFlakCannon
struct AProjTropeFlakCannon_C_ExecuteUbergraph_ProjTropeFlakCannon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

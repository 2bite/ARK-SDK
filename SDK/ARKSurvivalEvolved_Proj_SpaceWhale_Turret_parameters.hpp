#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Proj_SpaceWhale_Turret_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.BPIgnoreRadialDamageVictim
struct AProj_SpaceWhale_Turret_C_BPIgnoreRadialDamageVictim_Params
{
	class AActor**                                     Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.UserConstructionScript
struct AProj_SpaceWhale_Turret_C_UserConstructionScript_Params
{
};

// Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.ReceiveBeginPlay
struct AProj_SpaceWhale_Turret_C_ReceiveBeginPlay_Params
{
};

// Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.OnExplode
struct AProj_SpaceWhale_Turret_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C.ExecuteUbergraph_Proj_SpaceWhale_Turret
struct AProj_SpaceWhale_Turret_C_ExecuteUbergraph_Proj_SpaceWhale_Turret_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

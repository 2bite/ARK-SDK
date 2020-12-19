#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjSpaceWhaleBomb_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.OnExplode
struct AProjSpaceWhaleBomb_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.BPIgnoreRadialDamageVictim
struct AProjSpaceWhaleBomb_C_BPIgnoreRadialDamageVictim_Params
{
	class AActor**                                     Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.UserConstructionScript
struct AProjSpaceWhaleBomb_C_UserConstructionScript_Params
{
};

// Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.ReceiveTick
struct AProjSpaceWhaleBomb_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.ReceiveBeginPlay
struct AProjSpaceWhaleBomb_C_ReceiveBeginPlay_Params
{
};

// Function ProjSpaceWhaleBomb.ProjSpaceWhaleBomb_C.ExecuteUbergraph_ProjSpaceWhaleBomb
struct AProjSpaceWhaleBomb_C_ExecuteUbergraph_ProjSpaceWhaleBomb_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

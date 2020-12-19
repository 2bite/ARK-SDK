#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ScoutReturnToThrower_Actor_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.OnRep_Colors
struct AScoutReturnToThrower_Actor_C_OnRep_Colors_Params
{
};

// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.OnRep_ScoutItemClient
struct AScoutReturnToThrower_Actor_C_OnRep_ScoutItemClient_Params
{
};

// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.Set Colors
struct AScoutReturnToThrower_Actor_C_Set_Colors_Params
{
	TArray<struct FLinearColor>                        Colors;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.Tick
struct AScoutReturnToThrower_Actor_C_Tick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.UserConstructionScript
struct AScoutReturnToThrower_Actor_C_UserConstructionScript_Params
{
};

// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ReceiveTick
struct AScoutReturnToThrower_Actor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ReceiveBeginPlay
struct AScoutReturnToThrower_Actor_C_ReceiveBeginPlay_Params
{
};

// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.DelayedDestroy
struct AScoutReturnToThrower_Actor_C_DelayedDestroy_Params
{
};

// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ReplicateScoutItem
struct AScoutReturnToThrower_Actor_C_ReplicateScoutItem_Params
{
};

// Function ScoutReturnToThrower_Actor.ScoutReturnToThrower_Actor_C.ExecuteUbergraph_ScoutReturnToThrower_Actor
struct AScoutReturnToThrower_Actor_C_ExecuteUbergraph_ScoutReturnToThrower_Actor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjSpaceDolphinChargedLaser0_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.GetExtraTriggerExplosionOffsetForTarget
struct AProjSpaceDolphinChargedLaser0_C_GetExtraTriggerExplosionOffsetForTarget_Params
{
	float                                              Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ReceiveDestroyed
struct AProjSpaceDolphinChargedLaser0_C_ReceiveDestroyed_Params
{
};

// Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.OnExplode
struct AProjSpaceDolphinChargedLaser0_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.BPIgnoreRadialDamageVictim
struct AProjSpaceDolphinChargedLaser0_C_BPIgnoreRadialDamageVictim_Params
{
	class AActor**                                     Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.UserConstructionScript
struct AProjSpaceDolphinChargedLaser0_C_UserConstructionScript_Params
{
};

// Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ReceiveTick
struct AProjSpaceDolphinChargedLaser0_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ReceiveBeginPlay
struct AProjSpaceDolphinChargedLaser0_C_ReceiveBeginPlay_Params
{
};

// Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ExecuteUbergraph_ProjSpaceDolphinChargedLaser0
struct AProjSpaceDolphinChargedLaser0_C_ExecuteUbergraph_ProjSpaceDolphinChargedLaser0_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

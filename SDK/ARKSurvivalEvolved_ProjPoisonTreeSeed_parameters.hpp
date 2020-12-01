#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjPoisonTreeSeed_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.BPInitializedVelocity
struct AProjPoisonTreeSeed_C_BPInitializedVelocity_Params
{
	struct FVector                                     InVelocity;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             CustomSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.UserConstructionScript
struct AProjPoisonTreeSeed_C_UserConstructionScript_Params
{
};

// Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.OnExplode
struct AProjPoisonTreeSeed_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.ReceiveTick
struct AProjPoisonTreeSeed_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.ReceiveBeginPlay
struct AProjPoisonTreeSeed_C_ReceiveBeginPlay_Params
{
};

// Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.Multi_PlayLandingVFX
struct AProjPoisonTreeSeed_C_Multi_PlayLandingVFX_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjPoisonTreeSeed.ProjPoisonTreeSeed_C.ExecuteUbergraph_ProjPoisonTreeSeed
struct AProjPoisonTreeSeed_C_ExecuteUbergraph_ProjPoisonTreeSeed_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

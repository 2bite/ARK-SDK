#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjMekSwarm_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjMekSwarm.ProjMekSwarm_C.SetupMissileSpawnParticles
struct AProjMekSwarm_C_SetupMissileSpawnParticles_Params
{
	class USkeletalMeshComponent*                      MekMesh;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjMekSwarm.ProjMekSwarm_C.PointOnGrid
struct AProjMekSwarm_C_PointOnGrid_Params
{
	int                                                ThisIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HorizScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VertScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProjMekSwarm.ProjMekSwarm_C.ReceiveTick
struct AProjMekSwarm_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjMekSwarm.ProjMekSwarm_C.BPGetBoidSpawnLocationAndVelocity
struct AProjMekSwarm_C_BPGetBoidSpawnLocationAndVelocity_Params
{
	int*                                               BoidIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBoid                                       BoidData;                                                 // (Parm, OutParm, ReferenceParm)
	struct FVector                                     SpawnLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnVelocity;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjMekSwarm.ProjMekSwarm_C.UserConstructionScript
struct AProjMekSwarm_C_UserConstructionScript_Params
{
};

// Function ProjMekSwarm.ProjMekSwarm_C.BPOnBoidExplode
struct AProjMekSwarm_C_BPOnBoidExplode_Params
{
	int*                                               BoidIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent**                   BoidParticles;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function ProjMekSwarm.ProjMekSwarm_C.OnExplode
struct AProjMekSwarm_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjMekSwarm.ProjMekSwarm_C.DisableMissleParticles
struct AProjMekSwarm_C_DisableMissleParticles_Params
{
	class UParticleSystemComponent*                    Comp;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjMekSwarm.ProjMekSwarm_C.ExecuteUbergraph_ProjMekSwarm
struct AProjMekSwarm_C_ExecuteUbergraph_ProjMekSwarm_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

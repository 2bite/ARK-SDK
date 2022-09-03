#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjAmargaSpike_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjAmargaSpike.ProjAmargaSpike_C.BPProjectileBounced
struct AProjAmargaSpike_C_BPProjectileBounced_Params
{
	struct FHitResult                                  ImpactResult;                                             // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ImpactVelocity;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ProjAmargaSpike.ProjAmargaSpike_C.ReceiveHit
struct AProjAmargaSpike_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function ProjAmargaSpike.ProjAmargaSpike_C.ReceiveBeginPlay
struct AProjAmargaSpike_C_ReceiveBeginPlay_Params
{
};

// Function ProjAmargaSpike.ProjAmargaSpike_C.OnExplode
struct AProjAmargaSpike_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjAmargaSpike.ProjAmargaSpike_C.UserConstructionScript
struct AProjAmargaSpike_C_UserConstructionScript_Params
{
};

// Function ProjAmargaSpike.ProjAmargaSpike_C.Timeline_LerpSpikeMesh__FinishedFunc
struct AProjAmargaSpike_C_Timeline_LerpSpikeMesh__FinishedFunc_Params
{
};

// Function ProjAmargaSpike.ProjAmargaSpike_C.Timeline_LerpSpikeMesh__UpdateFunc
struct AProjAmargaSpike_C_Timeline_LerpSpikeMesh__UpdateFunc_Params
{
};

// Function ProjAmargaSpike.ProjAmargaSpike_C.Multi_PostExplode
struct AProjAmargaSpike_C_Multi_PostExplode_Params
{
	TArray<struct FVector>                             Locs;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               FailedForInst;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSpawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SpawnRot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjAmargaSpike.ProjAmargaSpike_C.LerpSpikeMesh
struct AProjAmargaSpike_C_LerpSpikeMesh_Params
{
};

// Function ProjAmargaSpike.ProjAmargaSpike_C.Multi_AddMoveIgnoreActor
struct AProjAmargaSpike_C_Multi_AddMoveIgnoreActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjAmargaSpike.ProjAmargaSpike_C.ExecuteUbergraph_ProjAmargaSpike
struct AProjAmargaSpike_C_ExecuteUbergraph_ProjAmargaSpike_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElementWall_Horde_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ElementWall_Horde.ElementWall_Horde_C.BPAdjustDamage
struct AElementWall_Horde_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ElementWall_Horde.ElementWall_Horde_C.BPHitEffect
struct AElementWall_Horde_C_BPHitEffect_Params
{
	float*                                             DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsLocalPath;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DamageLoc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ElementWall_Horde.ElementWall_Horde_C.OverrideDestroyedMeshTextures
struct AElementWall_Horde_C_OverrideDestroyedMeshTextures_Params
{
	class UMeshComponent**                             MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ElementWall_Horde.ElementWall_Horde_C.BPPlayDying
struct AElementWall_Horde_C_BPPlayDying_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ElementWall_Horde.ElementWall_Horde_C.BPPostLoadedFromSaveGame
struct AElementWall_Horde_C_BPPostLoadedFromSaveGame_Params
{
};

// Function ElementWall_Horde.ElementWall_Horde_C.SpawnGroundCorruption
struct AElementWall_Horde_C_SpawnGroundCorruption_Params
{
};

// Function ElementWall_Horde.ElementWall_Horde_C.BPUnstasis
struct AElementWall_Horde_C_BPUnstasis_Params
{
};

// Function ElementWall_Horde.ElementWall_Horde_C.BlueprintDrawHUD
struct AElementWall_Horde_C_BlueprintDrawHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ElementWall_Horde.ElementWall_Horde_C.ReceiveDestroyed
struct AElementWall_Horde_C_ReceiveDestroyed_Params
{
};

// Function ElementWall_Horde.ElementWall_Horde_C.UserConstructionScript
struct AElementWall_Horde_C_UserConstructionScript_Params
{
};

// Function ElementWall_Horde.ElementWall_Horde_C.ReceiveBeginPlay
struct AElementWall_Horde_C_ReceiveBeginPlay_Params
{
};

// Function ElementWall_Horde.ElementWall_Horde_C.DestroySmokeEmitter
struct AElementWall_Horde_C_DestroySmokeEmitter_Params
{
};

// Function ElementWall_Horde.ElementWall_Horde_C.RaiseStructure
struct AElementWall_Horde_C_RaiseStructure_Params
{
};

// Function ElementWall_Horde.ElementWall_Horde_C.SetDestScale
struct AElementWall_Horde_C_SetDestScale_Params
{
};

// Function ElementWall_Horde.ElementWall_Horde_C.DelayedDie
struct AElementWall_Horde_C_DelayedDie_Params
{
};

// Function ElementWall_Horde.ElementWall_Horde_C.ExecuteUbergraph_ElementWall_Horde
struct AElementWall_Horde_C_ExecuteUbergraph_ElementWall_Horde_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

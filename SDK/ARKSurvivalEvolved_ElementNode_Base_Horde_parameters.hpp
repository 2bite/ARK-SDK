#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElementNode_Base_Horde_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.BPPlayDying
struct AElementNode_Base_Horde_C_BPPlayDying_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.BPHitEffect
struct AElementNode_Base_Horde_C_BPHitEffect_Params
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

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.OverrideDestroyedMeshTextures
struct AElementNode_Base_Horde_C_OverrideDestroyedMeshTextures_Params
{
	class UMeshComponent**                             MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.DestroyStructuresAtLocation
struct AElementNode_Base_Horde_C_DestroyStructuresAtLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.RunLandSequence
struct AElementNode_Base_Horde_C_RunLandSequence_Params
{
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ReceiveTick
struct AElementNode_Base_Horde_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.Initiate Horde Mode
struct AElementNode_Base_Horde_C_Initiate_Horde_Mode_Params
{
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.OpenCrate
struct AElementNode_Base_Horde_C_OpenCrate_Params
{
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ColorizeForHarvest
struct AElementNode_Base_Horde_C_ColorizeForHarvest_Params
{
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.SpawnSecondarySingle
struct AElementNode_Base_Horde_C_SpawnSecondarySingle_Params
{
	bool                                               bIsWallA;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartTrace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndTrace;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.SpawnSecondaryGroup
struct AElementNode_Base_Horde_C_SpawnSecondaryGroup_Params
{
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ConfigureWaves
struct AElementNode_Base_Horde_C_ConfigureWaves_Params
{
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.OnRep_bHasLanded
struct AElementNode_Base_Horde_C_OnRep_bHasLanded_Params
{
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.UserConstructionScript
struct AElementNode_Base_Horde_C_UserConstructionScript_Params
{
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ReceiveBeginPlay
struct AElementNode_Base_Horde_C_ReceiveBeginPlay_Params
{
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ReceiveDestroyed
struct AElementNode_Base_Horde_C_ReceiveDestroyed_Params
{
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.GetLocation
struct AElementNode_Base_Horde_C_GetLocation_Params
{
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.SpawnSecondaryLayer
struct AElementNode_Base_Horde_C_SpawnSecondaryLayer_Params
{
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ClearCurrentBlockades
struct AElementNode_Base_Horde_C_ClearCurrentBlockades_Params
{
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.SetBlockadeScale
struct AElementNode_Base_Horde_C_SetBlockadeScale_Params
{
	class AActor*                                      ActorToScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ScaleToSet;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ROC_ColorizeForHarvest
struct AElementNode_Base_Horde_C_ROC_ColorizeForHarvest_Params
{
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ROC_StartInitiatedEmiiter
struct AElementNode_Base_Horde_C_ROC_StartInitiatedEmiiter_Params
{
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.KillActiveNode
struct AElementNode_Base_Horde_C_KillActiveNode_Params
{
};

// Function ElementNode_Base_Horde.ElementNode_Base_Horde_C.ExecuteUbergraph_ElementNode_Base_Horde
struct AElementNode_Base_Horde_C_ExecuteUbergraph_ElementNode_Base_Horde_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

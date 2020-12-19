#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bee_Queen_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.CanSpawnDrones
struct ABee_Queen_Character_BP_C_CanSpawnDrones_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.On Drone Died
struct ABee_Queen_Character_BP_C_On_Drone_Died_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPSetupTamed
struct ABee_Queen_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.TimerUpdateDrones
struct ABee_Queen_Character_BP_C_TimerUpdateDrones_Params
{
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.GetHiveSocketName
struct ABee_Queen_Character_BP_C_GetHiveSocketName_Params
{
	class UHierarchicalInstancedStaticMeshComponent*   Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Selected;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.UpdateDrones
struct ABee_Queen_Character_BP_C_UpdateDrones_Params
{
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.AddBeeReference
struct ABee_Queen_Character_BP_C_AddBeeReference_Params
{
	class APrimalDinoCharacter*                        BeeReference;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPTryMultiUse
struct ABee_Queen_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPGetMultiUseEntries
struct ABee_Queen_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPClientDoMultiUse
struct ABee_Queen_Character_BP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPAdjustDamage
struct ABee_Queen_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.HideNotify
struct ABee_Queen_Character_BP_C_HideNotify_Params
{
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.OnRep_bIsHidden
struct ABee_Queen_Character_BP_C_OnRep_bIsHidden_Params
{
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SearchTreesForValidHiveSpawnLocation
struct ABee_Queen_Character_BP_C_SearchTreesForValidHiveSpawnLocation_Params
{
	bool                                               succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct UObject_FTransform                          Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.HideInHive
struct ABee_Queen_Character_BP_C_HideInHive_Params
{
	class ABeeHive_C*                                  Hive;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.Try to Spawn Drones
struct ABee_Queen_Character_BP_C_Try_to_Spawn_Drones_Params
{
	int                                                NumToSpawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayAnim;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPTimerServer
struct ABee_Queen_Character_BP_C_BPTimerServer_Params
{
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.UserConstructionScript
struct ABee_Queen_Character_BP_C_UserConstructionScript_Params
{
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SpawnDrone
struct ABee_Queen_Character_BP_C_SpawnDrone_Params
{
	int                                                NumToSpawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayedAnim;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.BPUnstasis
struct ABee_Queen_Character_BP_C_BPUnstasis_Params
{
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.Init
struct ABee_Queen_Character_BP_C_Init_Params
{
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SpawnSmoke
struct ABee_Queen_Character_BP_C_SpawnSmoke_Params
{
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.Suicide
struct ABee_Queen_Character_BP_C_Suicide_Params
{
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.ReceiveBeginPlay
struct ABee_Queen_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.OnDied_Event
struct ABee_Queen_Character_BP_C_OnDied_Event_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.SpawnedDronePart
struct ABee_Queen_Character_BP_C_SpawnedDronePart_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bee_Queen_Character_BP.Bee_Queen_Character_BP_C.ExecuteUbergraph_Bee_Queen_Character_BP
struct ABee_Queen_Character_BP_C_ExecuteUbergraph_Bee_Queen_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

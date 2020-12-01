#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HordeCrateManager_Extinction_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.ResetSpawnPriority
struct AHordeCrateManager_Extinction_C_ResetSpawnPriority_Params
{
};

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.Get Difficulty Index
struct AHordeCrateManager_Extinction_C_Get_Difficulty_Index_Params
{
	int                                                ReturnDifficulty;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.AreValidNetworksForType
struct AHordeCrateManager_Extinction_C_AreValidNetworksForType_Params
{
	TEnumAsByte<EHordeTypeEnum>                        HordeType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAvailable;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.IsDifficultyCompatible
struct AHordeCrateManager_Extinction_C_IsDifficultyCompatible_Params
{
	int                                                TestDifficulty;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChosenDifficulty;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCompatible;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.BPForceStartHorde
struct AHordeCrateManager_Extinction_C_BPForceStartHorde_Params
{
	class AActor**                                     SpawnNetwork;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               DifficultyIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.GetActiveEvent
struct AHordeCrateManager_Extinction_C_GetActiveEvent_Params
{
	class AHordeSpawnNetwork_C*                        Network;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.EndActiveEvent
struct AHordeCrateManager_Extinction_C_EndActiveEvent_Params
{
	class AActor*                                      TheCrate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.CreateActiveEvent
struct AHordeCrateManager_Extinction_C_CreateActiveEvent_Params
{
};

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.DeployCrate
struct AHordeCrateManager_Extinction_C_DeployCrate_Params
{
	TEnumAsByte<EHordeTypeEnum>                        HordeEventType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ASupplyCrate_Base_Horde_C*                   ACrate;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.AreValidNetworksForDifficulty
struct AHordeCrateManager_Extinction_C_AreValidNetworksForDifficulty_Params
{
	int                                                InDiffLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAreValid;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.Get Avail Networks Of Difficulty
struct AHordeCrateManager_Extinction_C_Get_Avail_Networks_Of_Difficulty_Params
{
	int                                                InDifficulty;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AHordeSpawnNetwork_C*>                NetworksPreferred;                                        // (Parm, OutParm, ZeroConstructor)
	TArray<class AHordeSpawnNetwork_C*>                NetworksNotPreferred;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.Find Random Spawn Network
struct AHordeCrateManager_Extinction_C_Find_Random_Spawn_Network_Params
{
	class AHordeSpawnNetwork_C*                        RetHordeNetwork;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsStassised;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.GetActiveEvents
struct AHordeCrateManager_Extinction_C_GetActiveEvents_Params
{
	int                                                DifficultyLevel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAnyActiveEvents;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHordeCrateEvent>                    VarEvents;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.CanStartDeployment
struct AHordeCrateManager_Extinction_C_CanStartDeployment_Params
{
	bool                                               bCanStart;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.UserConstructionScript
struct AHordeCrateManager_Extinction_C_UserConstructionScript_Params
{
};

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.ReceiveBeginPlay
struct AHordeCrateManager_Extinction_C_ReceiveBeginPlay_Params
{
};

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.CheckCrateDeployment
struct AHordeCrateManager_Extinction_C_CheckCrateDeployment_Params
{
};

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.StartCrateCheckTimer
struct AHordeCrateManager_Extinction_C_StartCrateCheckTimer_Params
{
};

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.StartHordeNodeTimer
struct AHordeCrateManager_Extinction_C_StartHordeNodeTimer_Params
{
};

// Function HordeCrateManager_Extinction.HordeCrateManager_Extinction_C.ExecuteUbergraph_HordeCrateManager_Extinction
struct AHordeCrateManager_Extinction_C_ExecuteUbergraph_HordeCrateManager_Extinction_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

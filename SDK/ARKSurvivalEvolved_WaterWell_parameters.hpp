#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterWell_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WaterWell.WaterWell_C.UpdateWaterSpawn
struct AWaterWell_C_UpdateWaterSpawn_Params
{
};

// Function WaterWell.WaterWell_C.BPInventoryItemUsed
struct AWaterWell_C_BPInventoryItemUsed_Params
{
	class UObject**                                    InventoryItemObject;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaterWell.WaterWell_C.IsAWaterItem
struct AWaterWell_C_IsAWaterItem_Params
{
	class UObject*                                     PrimalItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WaterWell.WaterWell_C.BPForceAllowsInventoryUse
struct AWaterWell_C_BPForceAllowsInventoryUse_Params
{
	class UObject**                                    InventoryItemObject;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WaterWell.WaterWell_C.BPTryMultiUse
struct AWaterWell_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WaterWell.WaterWell_C.BPGetMultiUseEntries
struct AWaterWell_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WaterWell.WaterWell_C.UserConstructionScript
struct AWaterWell_C_UserConstructionScript_Params
{
};

// Function WaterWell.WaterWell_C.ReceiveBeginPlay
struct AWaterWell_C_ReceiveBeginPlay_Params
{
};

// Function WaterWell.WaterWell_C.PlayWaterParticles
struct AWaterWell_C_PlayWaterParticles_Params
{
};

// Function WaterWell.WaterWell_C.ExecuteUbergraph_WaterWell
struct AWaterWell_C_ExecuteUbergraph_WaterWell_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_Wire_Flex_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Wire_Flex.BP_Wire_Flex_C.IsAllowedToRefreshConnections
struct ABP_Wire_Flex_C_IsAllowedToRefreshConnections_Params
{
	class APlayerController*                           ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wire_Flex.BP_Wire_Flex_C.BPTryMultiUse
struct ABP_Wire_Flex_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Wire_Flex.BP_Wire_Flex_C.BPGetMultiUseEntries
struct ABP_Wire_Flex_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_Wire_Flex.BP_Wire_Flex_C.LinkWires
struct ABP_Wire_Flex_C_LinkWires_Params
{
	TArray<class APrimalStructure*>                    Connections;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Wire_Flex.BP_Wire_Flex_C.AddSplineMeshComponents
struct ABP_Wire_Flex_C_AddSplineMeshComponents_Params
{
	bool                                               UsePreviewMaterial;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wire_Flex.BP_Wire_Flex_C.BPOverrideCantBuildReasonString
struct ABP_Wire_Flex_C_BPOverrideCantBuildReasonString_Params
{
	int*                                               CantBuildReason;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_Wire_Flex.BP_Wire_Flex_C.BPIsAllowedToBuild
struct ABP_Wire_Flex_C_BPIsAllowedToBuild_Params
{
	struct FPlacementData                              OutPlacementData;                                         // (Parm, OutParm, ReferenceParm)
	int*                                               CurrentAllowedReason;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Wire_Flex.BP_Wire_Flex_C.UserConstructionScript
struct ABP_Wire_Flex_C_UserConstructionScript_Params
{
};

// Function BP_Wire_Flex.BP_Wire_Flex_C.UpdateSplineMeshesEvent
struct ABP_Wire_Flex_C_UpdateSplineMeshesEvent_Params
{
};

// Function BP_Wire_Flex.BP_Wire_Flex_C.ReceiveBeginPlay
struct ABP_Wire_Flex_C_ReceiveBeginPlay_Params
{
};

// Function BP_Wire_Flex.BP_Wire_Flex_C.BPOnLinkedStructureDestroyed
struct ABP_Wire_Flex_C_BPOnLinkedStructureDestroyed_Params
{
	class APrimalStructure**                           DestroyedStructure;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wire_Flex.BP_Wire_Flex_C.RefreshConnections
struct ABP_Wire_Flex_C_RefreshConnections_Params
{
};

// Function BP_Wire_Flex.BP_Wire_Flex_C.MultiUpdatePipeMaterials
struct ABP_Wire_Flex_C_MultiUpdatePipeMaterials_Params
{
};

// Function BP_Wire_Flex.BP_Wire_Flex_C.BPOnWaterStateChange
struct ABP_Wire_Flex_C_BPOnWaterStateChange_Params
{
	bool*                                              bPipeHasWaterOrPower;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wire_Flex.BP_Wire_Flex_C.BPOnDemolish
struct ABP_Wire_Flex_C_BPOnDemolish_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wire_Flex.BP_Wire_Flex_C.ExecuteUbergraph_BP_Wire_Flex
struct ABP_Wire_Flex_C_ExecuteUbergraph_BP_Wire_Flex_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Pipe_Flex_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Base_Pipe_Flex.Base_Pipe_Flex_C.ResetRefreshConnectionsCooldown
struct ABase_Pipe_Flex_C_ResetRefreshConnectionsCooldown_Params
{
	class APlayerController*                           ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Pipe_Flex.Base_Pipe_Flex_C.IsAllowedToRefreshConnections
struct ABase_Pipe_Flex_C_IsAllowedToRefreshConnections_Params
{
	class APlayerController*                           ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPGetMultiUseEntries
struct ABase_Pipe_Flex_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPTryMultiUse
struct ABase_Pipe_Flex_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Base_Pipe_Flex.Base_Pipe_Flex_C.UpdateWaterStatus
struct ABase_Pipe_Flex_C_UpdateWaterStatus_Params
{
};

// Function Base_Pipe_Flex.Base_Pipe_Flex_C.LinkPipes
struct ABase_Pipe_Flex_C_LinkPipes_Params
{
	TArray<class APrimalStructure*>                    ConnectedPipes;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPOverrideCantBuildReasonString
struct ABase_Pipe_Flex_C_BPOverrideCantBuildReasonString_Params
{
	int*                                               CantBuildReason;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Base_Pipe_Flex.Base_Pipe_Flex_C.AddSplineMeshComponents
struct ABase_Pipe_Flex_C_AddSplineMeshComponents_Params
{
	bool                                               UsePreviewMaterial;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPIsAllowedToBuild
struct ABase_Pipe_Flex_C_BPIsAllowedToBuild_Params
{
	struct FPlacementData                              OutPlacementData;                                         // (Parm, OutParm, ReferenceParm)
	int*                                               CurrentAllowedReason;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Base_Pipe_Flex.Base_Pipe_Flex_C.UserConstructionScript
struct ABase_Pipe_Flex_C_UserConstructionScript_Params
{
};

// Function Base_Pipe_Flex.Base_Pipe_Flex_C.UpdateSplineMeshesEvent
struct ABase_Pipe_Flex_C_UpdateSplineMeshesEvent_Params
{
};

// Function Base_Pipe_Flex.Base_Pipe_Flex_C.ReceiveBeginPlay
struct ABase_Pipe_Flex_C_ReceiveBeginPlay_Params
{
};

// Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPOnLinkedStructureDestroyed
struct ABase_Pipe_Flex_C_BPOnLinkedStructureDestroyed_Params
{
	class APrimalStructure**                           DestroyedStructure;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Pipe_Flex.Base_Pipe_Flex_C.RefreshConnections
struct ABase_Pipe_Flex_C_RefreshConnections_Params
{
};

// Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPOnWaterStateChange
struct ABase_Pipe_Flex_C_BPOnWaterStateChange_Params
{
	bool*                                              bPipeHasWaterOrPower;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Pipe_Flex.Base_Pipe_Flex_C.ExecuteUbergraph_Base_Pipe_Flex
struct ABase_Pipe_Flex_C_ExecuteUbergraph_Base_Pipe_Flex_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

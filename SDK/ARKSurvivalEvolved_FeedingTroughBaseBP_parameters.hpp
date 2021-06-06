#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FeedingTroughBaseBP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.Check Team and Set Visual Visibility
struct AFeedingTroughBaseBP_C_Check_Team_and_Set_Visual_Visibility_Params
{
};

// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.BPServerHandleNetExecCommand
struct AFeedingTroughBaseBP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.OnRep_ShowArea
struct AFeedingTroughBaseBP_C_OnRep_ShowArea_Params
{
};

// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.BPClientDoMultiUse
struct AFeedingTroughBaseBP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.BPGetMultiUseEntries
struct AFeedingTroughBaseBP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ReceiveBeginPlay
struct AFeedingTroughBaseBP_C_ReceiveBeginPlay_Params
{
};

// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ThrottledTick
struct AFeedingTroughBaseBP_C_ThrottledTick_Params
{
};

// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.UserConstructionScript
struct AFeedingTroughBaseBP_C_UserConstructionScript_Params
{
};

// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ServerRequest_ToggleShowarea
struct AFeedingTroughBaseBP_C_ServerRequest_ToggleShowarea_Params
{
};

// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ServerRequest_TurnOffAllShowarea
struct AFeedingTroughBaseBP_C_ServerRequest_TurnOffAllShowarea_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ExecuteUbergraph_FeedingTroughBaseBP
struct AFeedingTroughBaseBP_C_ExecuteUbergraph_FeedingTroughBaseBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

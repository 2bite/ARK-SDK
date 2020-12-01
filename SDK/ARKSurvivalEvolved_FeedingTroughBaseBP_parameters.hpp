#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FeedingTroughBaseBP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

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

// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ExecuteUbergraph_FeedingTroughBaseBP
struct AFeedingTroughBaseBP_C_ExecuteUbergraph_FeedingTroughBaseBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

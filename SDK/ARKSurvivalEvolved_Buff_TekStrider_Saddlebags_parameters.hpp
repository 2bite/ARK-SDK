#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_Saddlebags_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BuffTickServer
struct ABuff_TekStrider_Saddlebags_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPGetHUDElements
struct ABuff_TekStrider_Saddlebags_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.ReceiveBeginPlay
struct ABuff_TekStrider_Saddlebags_C_ReceiveBeginPlay_Params
{
};

// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BuffTickClient
struct ABuff_TekStrider_Saddlebags_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPTryMultiUse
struct ABuff_TekStrider_Saddlebags_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPGetMultiUseEntries
struct ABuff_TekStrider_Saddlebags_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPDeactivated
struct ABuff_TekStrider_Saddlebags_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Update Nearby Players To Absorb Collected Resources
struct ABuff_TekStrider_Saddlebags_C_Update_Nearby_Players_To_Absorb_Collected_Resources_Params
{
};

// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Deactivate Attachment
struct ABuff_TekStrider_Saddlebags_C_Deactivate_Attachment_Params
{
};

// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Buff Tick Server Logic
struct ABuff_TekStrider_Saddlebags_C_Buff_Tick_Server_Logic_Params
{
};

// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPSetupForInstigator
struct ABuff_TekStrider_Saddlebags_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.UserConstructionScript
struct ABuff_TekStrider_Saddlebags_C_UserConstructionScript_Params
{
};

// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Multicast_Activate
struct ABuff_TekStrider_Saddlebags_C_Multicast_Activate_Params
{
};

// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Multicast_Deactivate
struct ABuff_TekStrider_Saddlebags_C_Multicast_Deactivate_Params
{
};

// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.ExecuteUbergraph_Buff_TekStrider_Saddlebags
struct ABuff_TekStrider_Saddlebags_C_ExecuteUbergraph_Buff_TekStrider_Saddlebags_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

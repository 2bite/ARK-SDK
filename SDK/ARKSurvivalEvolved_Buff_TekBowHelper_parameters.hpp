#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekBowHelper_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekBowHelper.Buff_TekBowHelper_C.BPClientDoMultiUse
struct ABuff_TekBowHelper_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekBowHelper.Buff_TekBowHelper_C.BPGetMultiUseEntries
struct ABuff_TekBowHelper_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_TekBowHelper.Buff_TekBowHelper_C.BPPreventNotifySound
struct ABuff_TekBowHelper_C_BPPreventNotifySound_Params
{
	class USoundBase**                                 SoundIn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekBowHelper.Buff_TekBowHelper_C.BPGetHUDElements
struct ABuff_TekBowHelper_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_TekBowHelper.Buff_TekBowHelper_C.UserConstructionScript
struct ABuff_TekBowHelper_C_UserConstructionScript_Params
{
};

// Function Buff_TekBowHelper.Buff_TekBowHelper_C.ExecuteUbergraph_Buff_TekBowHelper
struct ABuff_TekBowHelper_C_ExecuteUbergraph_Buff_TekBowHelper_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

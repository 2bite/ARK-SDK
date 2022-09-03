#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_LionfishLionHelper_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.BPActivated
struct ABuff_LionfishLionHelper_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.BPDeactivated
struct ABuff_LionfishLionHelper_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.ReceiveBeginPlay
struct ABuff_LionfishLionHelper_C_ReceiveBeginPlay_Params
{
};

// Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.BPGetHUDElements
struct ABuff_LionfishLionHelper_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.UserConstructionScript
struct ABuff_LionfishLionHelper_C_UserConstructionScript_Params
{
};

// Function Buff_LionfishLionHelper.Buff_LionfishLionHelper_C.ExecuteUbergraph_Buff_LionfishLionHelper
struct ABuff_LionfishLionHelper_C_ExecuteUbergraph_Buff_LionfishLionHelper_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

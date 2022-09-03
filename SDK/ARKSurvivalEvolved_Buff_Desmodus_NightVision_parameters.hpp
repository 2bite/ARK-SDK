#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Desmodus_NightVision_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BuffOverrideInventoryAccessInput
struct ABuff_Desmodus_NightVision_C_BuffOverrideInventoryAccessInput_Params
{
	class AController**                                InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInputPressed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BPDeactivated
struct ABuff_Desmodus_NightVision_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.ReceiveBeginPlay
struct ABuff_Desmodus_NightVision_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BuffTickClient
struct ABuff_Desmodus_NightVision_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.ToggleNightVision
struct ABuff_Desmodus_NightVision_C_ToggleNightVision_Params
{
};

// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BPTryMultiUse
struct ABuff_Desmodus_NightVision_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BPGetMultiUseEntries
struct ABuff_Desmodus_NightVision_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.BPSetupForInstigator
struct ABuff_Desmodus_NightVision_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.SetPPColor
struct ABuff_Desmodus_NightVision_C_SetPPColor_Params
{
	struct FLinearColor                                NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.UserConstructionScript
struct ABuff_Desmodus_NightVision_C_UserConstructionScript_Params
{
};

// Function Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C.ExecuteUbergraph_Buff_Desmodus_NightVision
struct ABuff_Desmodus_NightVision_C_ExecuteUbergraph_Buff_Desmodus_NightVision_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

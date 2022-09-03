#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MountedSino_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MountedSino.Buff_MountedSino_C.GetSinoFoodVals
struct ABuff_MountedSino_C_GetSinoFoodVals_Params
{
	float                                              current;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MountedSino.Buff_MountedSino_C.BPClientDoMultiUse
struct ABuff_MountedSino_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MountedSino.Buff_MountedSino_C.BPTryMultiUse
struct ABuff_MountedSino_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MountedSino.Buff_MountedSino_C.BPGetMultiUseEntries
struct ABuff_MountedSino_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_MountedSino.Buff_MountedSino_C.BPGetHUDElements
struct ABuff_MountedSino_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_MountedSino.Buff_MountedSino_C.BuffTickServer
struct ABuff_MountedSino_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MountedSino.Buff_MountedSino_C.SetLastScreamTime
struct ABuff_MountedSino_C_SetLastScreamTime_Params
{
	double                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MountedSino.Buff_MountedSino_C.BuffTickClient
struct ABuff_MountedSino_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MountedSino.Buff_MountedSino_C.HideCrosshair
struct ABuff_MountedSino_C_HideCrosshair_Params
{
};

// Function Buff_MountedSino.Buff_MountedSino_C.BPGetCrosshairColor
struct ABuff_MountedSino_C_BPGetCrosshairColor_Params
{
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MountedSino.Buff_MountedSino_C.CheckForBuddyThrow
struct ABuff_MountedSino_C_CheckForBuddyThrow_Params
{
};

// Function Buff_MountedSino.Buff_MountedSino_C.GetSinoStaminaVals
struct ABuff_MountedSino_C_GetSinoStaminaVals_Params
{
	float                                              current;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MountedSino.Buff_MountedSino_C.UserConstructionScript
struct ABuff_MountedSino_C_UserConstructionScript_Params
{
};

// Function Buff_MountedSino.Buff_MountedSino_C.Server_SetMountedSinoBuddyChar
struct ABuff_MountedSino_C_Server_SetMountedSinoBuddyChar_Params
{
	class AShooterCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MountedSino.Buff_MountedSino_C.ExecuteUbergraph_Buff_MountedSino
struct ABuff_MountedSino_C_ExecuteUbergraph_Buff_MountedSino_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

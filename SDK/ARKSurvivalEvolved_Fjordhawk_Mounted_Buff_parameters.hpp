#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Fjordhawk_Mounted_Buff_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.HideCrosshair
struct AFjordhawk_Mounted_Buff_C_HideCrosshair_Params
{
};

// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.BuffTickClient
struct AFjordhawk_Mounted_Buff_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.CheckForTarget
struct AFjordhawk_Mounted_Buff_C_CheckForTarget_Params
{
};

// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.BPTryMultiUse
struct AFjordhawk_Mounted_Buff_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.BPGetMultiUseEntries
struct AFjordhawk_Mounted_Buff_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.UpdateNearbyTargets
struct AFjordhawk_Mounted_Buff_C_UpdateNearbyTargets_Params
{
};

// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.DrawBuffFloatingHUD
struct AFjordhawk_Mounted_Buff_C_DrawBuffFloatingHUD_Params
{
	int*                                               BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.BPSetupForInstigator
struct AFjordhawk_Mounted_Buff_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.UserConstructionScript
struct AFjordhawk_Mounted_Buff_C_UserConstructionScript_Params
{
};

// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.ExecuteUbergraph_Fjordhawk_Mounted_Buff
struct AFjordhawk_Mounted_Buff_C_ExecuteUbergraph_Fjordhawk_Mounted_Buff_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BrainSlug_Tracker_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPReactivateWithDamageCauser
struct ABuff_BrainSlug_Tracker_C_BPReactivateWithDamageCauser_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     ForDamageCauser;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPDeactivated
struct ABuff_BrainSlug_Tracker_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPClientDoMultiUse
struct ABuff_BrainSlug_Tracker_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.DrawBuffFloatingHUD
struct ABuff_BrainSlug_Tracker_C_DrawBuffFloatingHUD_Params
{
	int*                                               BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPGetMultiUseEntries
struct ABuff_BrainSlug_Tracker_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BuffTickServer
struct ABuff_BrainSlug_Tracker_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.UserConstructionScript
struct ABuff_BrainSlug_Tracker_C_UserConstructionScript_Params
{
};

// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.Server_Deactivate
struct ABuff_BrainSlug_Tracker_C_Server_Deactivate_Params
{
};

// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.ReceiveBeginPlay
struct ABuff_BrainSlug_Tracker_C_ReceiveBeginPlay_Params
{
};

// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.ExecuteUbergraph_Buff_BrainSlug_Tracker
struct ABuff_BrainSlug_Tracker_C_ExecuteUbergraph_Buff_BrainSlug_Tracker_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

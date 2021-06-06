#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterVein_Base_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WaterVein_Base_BP.WaterVein_Base_BP_C.BlueprintDrawHUD
struct AWaterVein_Base_BP_C_BlueprintDrawHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaterVein_Base_BP.WaterVein_Base_BP_C.UpdateWaterVisuals
struct AWaterVein_Base_BP_C_UpdateWaterVisuals_Params
{
};

// Function WaterVein_Base_BP.WaterVein_Base_BP_C.ReceiveBeginPlay
struct AWaterVein_Base_BP_C_ReceiveBeginPlay_Params
{
};

// Function WaterVein_Base_BP.WaterVein_Base_BP_C.BPGetMultiUseEntries
struct AWaterVein_Base_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WaterVein_Base_BP.WaterVein_Base_BP_C.BPTryMultiUse
struct AWaterVein_Base_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WaterVein_Base_BP.WaterVein_Base_BP_C.UserConstructionScript
struct AWaterVein_Base_BP_C_UserConstructionScript_Params
{
};

// Function WaterVein_Base_BP.WaterVein_Base_BP_C.PostInitUpdateWaterVisuals
struct AWaterVein_Base_BP_C_PostInitUpdateWaterVisuals_Params
{
};

// Function WaterVein_Base_BP.WaterVein_Base_BP_C.ExecuteUbergraph_WaterVein_Base_BP
struct AWaterVein_Base_BP_C_ExecuteUbergraph_WaterVein_Base_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

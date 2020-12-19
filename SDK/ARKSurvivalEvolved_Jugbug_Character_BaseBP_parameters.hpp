#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Jugbug_Character_BaseBP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BPTimerNonDedicated
struct AJugbug_Character_BaseBP_C_BPTimerNonDedicated_Params
{
};

// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BPTimerServer
struct AJugbug_Character_BaseBP_C_BPTimerServer_Params
{
};

// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BlueprintCanAttack
struct AJugbug_Character_BaseBP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BPGetMultiUseEntries
struct AJugbug_Character_BaseBP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.AddResource
struct AJugbug_Character_BaseBP_C_AddResource_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewResourceAmount;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AddedResourceAmount;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BPTryMultiUse
struct AJugbug_Character_BaseBP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.RefreshResourceAmount
struct AJugbug_Character_BaseBP_C_RefreshResourceAmount_Params
{
};

// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BlueprintDrawFloatingHUD
struct AJugbug_Character_BaseBP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.UserConstructionScript
struct AJugbug_Character_BaseBP_C_UserConstructionScript_Params
{
};

// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.ExecuteUbergraph_Jugbug_Character_BaseBP
struct AJugbug_Character_BaseBP_C_ExecuteUbergraph_Jugbug_Character_BaseBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

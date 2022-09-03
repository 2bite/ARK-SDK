#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BrainSlugShoulderVisualCient_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.BPGetHUDElements
struct ABuff_BrainSlugShoulderVisualCient_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.DrawBuffFloatingHUD
struct ABuff_BrainSlugShoulderVisualCient_C_DrawBuffFloatingHUD_Params
{
	int*                                               BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.UserConstructionScript
struct ABuff_BrainSlugShoulderVisualCient_C_UserConstructionScript_Params
{
};

// Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.BuffTickClient
struct ABuff_BrainSlugShoulderVisualCient_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C.ExecuteUbergraph_Buff_BrainSlugShoulderVisualCient
struct ABuff_BrainSlugShoulderVisualCient_C_ExecuteUbergraph_Buff_BrainSlugShoulderVisualCient_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

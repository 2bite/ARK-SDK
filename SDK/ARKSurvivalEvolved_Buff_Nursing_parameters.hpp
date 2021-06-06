#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Nursing_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Nursing.Buff_Nursing_C.BPGetBabyImprintingSpeedMultiplier
struct ABuff_Nursing_C_BPGetBabyImprintingSpeedMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Nursing.Buff_Nursing_C.DrawBuffFloatingHUD
struct ABuff_Nursing_C_DrawBuffFloatingHUD_Params
{
	int*                                               BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Nursing.Buff_Nursing_C.BuffTickServer
struct ABuff_Nursing_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Nursing.Buff_Nursing_C.UserConstructionScript
struct ABuff_Nursing_C_UserConstructionScript_Params
{
};

// Function Buff_Nursing.Buff_Nursing_C.ExecuteUbergraph_Buff_Nursing
struct ABuff_Nursing_C_ExecuteUbergraph_Buff_Nursing_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

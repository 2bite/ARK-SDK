#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_XPFromLystro_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_XPFromLystro.Buff_XPFromLystro_C.UserConstructionScript
struct ABuff_XPFromLystro_C_UserConstructionScript_Params
{
};

// Function Buff_XPFromLystro.Buff_XPFromLystro_C.DrawBuffFloatingHUD
struct ABuff_XPFromLystro_C_DrawBuffFloatingHUD_Params
{
	int*                                               BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_XPFromLystro.Buff_XPFromLystro_C.ExecuteUbergraph_Buff_XPFromLystro
struct ABuff_XPFromLystro_C_ExecuteUbergraph_Buff_XPFromLystro_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

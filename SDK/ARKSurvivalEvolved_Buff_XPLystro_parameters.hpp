#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_XPLystro_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_XPLystro.Buff_XPLystro_C.UserConstructionScript
struct ABuff_XPLystro_C_UserConstructionScript_Params
{
};

// Function Buff_XPLystro.Buff_XPLystro_C.DrawBuffFloatingHUD
struct ABuff_XPLystro_C_DrawBuffFloatingHUD_Params
{
	int*                                               BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_XPLystro.Buff_XPLystro_C.ExecuteUbergraph_Buff_XPLystro
struct ABuff_XPLystro_C_ExecuteUbergraph_Buff_XPLystro_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RefreshedXP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_RefreshedXP.Buff_RefreshedXP_C.UserConstructionScript
struct ABuff_RefreshedXP_C_UserConstructionScript_Params
{
};

// Function Buff_RefreshedXP.Buff_RefreshedXP_C.DrawBuffFloatingHUD
struct ABuff_RefreshedXP_C_DrawBuffFloatingHUD_Params
{
	int*                                               BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RefreshedXP.Buff_RefreshedXP_C.ExecuteUbergraph_Buff_RefreshedXP
struct ABuff_RefreshedXP_C_ExecuteUbergraph_Buff_RefreshedXP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

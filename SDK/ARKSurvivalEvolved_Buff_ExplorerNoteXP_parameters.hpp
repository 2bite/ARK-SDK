#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ExplorerNoteXP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ExplorerNoteXP.Buff_ExplorerNoteXP_C.UserConstructionScript
struct ABuff_ExplorerNoteXP_C_UserConstructionScript_Params
{
};

// Function Buff_ExplorerNoteXP.Buff_ExplorerNoteXP_C.DrawBuffFloatingHUD
struct ABuff_ExplorerNoteXP_C_DrawBuffFloatingHUD_Params
{
	int*                                               BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ExplorerNoteXP.Buff_ExplorerNoteXP_C.ExecuteUbergraph_Buff_ExplorerNoteXP
struct ABuff_ExplorerNoteXP_C_ExecuteUbergraph_Buff_ExplorerNoteXP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

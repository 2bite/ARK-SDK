#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ExplorerNoteHLNA_ClientOnly_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.DrawBuffFloatingHUD
struct ABuff_ExplorerNoteHLNA_ClientOnly_C_DrawBuffFloatingHUD_Params
{
	int*                                               BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.BuffTickClient
struct ABuff_ExplorerNoteHLNA_ClientOnly_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.ReceiveBeginPlay
struct ABuff_ExplorerNoteHLNA_ClientOnly_C_ReceiveBeginPlay_Params
{
};

// Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.UserConstructionScript
struct ABuff_ExplorerNoteHLNA_ClientOnly_C_UserConstructionScript_Params
{
};

// Function Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C.ExecuteUbergraph_Buff_ExplorerNoteHLNA_ClientOnly
struct ABuff_ExplorerNoteHLNA_ClientOnly_C_ExecuteUbergraph_Buff_ExplorerNoteHLNA_ClientOnly_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

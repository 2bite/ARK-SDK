#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SeatedTurretHUD_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_SeatedTurretHUD.Buff_SeatedTurretHUD_C.NotifyDismount
struct ABuff_SeatedTurretHUD_C_NotifyDismount_Params
{
};

// Function Buff_SeatedTurretHUD.Buff_SeatedTurretHUD_C.BPGetHUDElements
struct ABuff_SeatedTurretHUD_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_SeatedTurretHUD.Buff_SeatedTurretHUD_C.UserConstructionScript
struct ABuff_SeatedTurretHUD_C_UserConstructionScript_Params
{
};

// Function Buff_SeatedTurretHUD.Buff_SeatedTurretHUD_C.ExecuteUbergraph_Buff_SeatedTurretHUD
struct ABuff_SeatedTurretHUD_C_ExecuteUbergraph_Buff_SeatedTurretHUD_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MinigunHUD_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MinigunHUD.Buff_MinigunHUD_C.DrawBuffFloatingHUD
struct ABuff_MinigunHUD_C_DrawBuffFloatingHUD_Params
{
	int*                                               BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MinigunHUD.Buff_MinigunHUD_C.BPGetHUDElements
struct ABuff_MinigunHUD_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_MinigunHUD.Buff_MinigunHUD_C.UserConstructionScript
struct ABuff_MinigunHUD_C_UserConstructionScript_Params
{
};

// Function Buff_MinigunHUD.Buff_MinigunHUD_C.ReceiveTick
struct ABuff_MinigunHUD_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MinigunHUD.Buff_MinigunHUD_C.ReceiveBeginPlay
struct ABuff_MinigunHUD_C_ReceiveBeginPlay_Params
{
};

// Function Buff_MinigunHUD.Buff_MinigunHUD_C.ExecuteUbergraph_Buff_MinigunHUD
struct ABuff_MinigunHUD_C_ExecuteUbergraph_Buff_MinigunHUD_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MinigunOverheat_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.BuffTickClient
struct ABuff_MinigunOverheat_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.ReceiveEndPlay
struct ABuff_MinigunOverheat_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.ReceiveBeginPlay
struct ABuff_MinigunOverheat_C_ReceiveBeginPlay_Params
{
};

// Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.BPDrawBuffStatusHUD
struct ABuff_MinigunOverheat_C_BPDrawBuffStatusHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             YPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleMult;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.UserConstructionScript
struct ABuff_MinigunOverheat_C_UserConstructionScript_Params
{
};

// Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.StopStaminaDrain
struct ABuff_MinigunOverheat_C_StopStaminaDrain_Params
{
};

// Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.ExecuteUbergraph_Buff_MinigunOverheat
struct ABuff_MinigunOverheat_C_ExecuteUbergraph_Buff_MinigunOverheat_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

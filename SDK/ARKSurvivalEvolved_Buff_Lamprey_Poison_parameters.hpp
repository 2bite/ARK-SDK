#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Lamprey_Poison_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.UpdateBuffPersistentData
struct ABuff_Lamprey_Poison_C_UpdateBuffPersistentData_Params
{
};

// Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.ReceiveBeginPlay
struct ABuff_Lamprey_Poison_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.BuffTickClient
struct ABuff_Lamprey_Poison_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.BPDrawBuffStatusHUD
struct ABuff_Lamprey_Poison_C_BPDrawBuffStatusHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             YPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleMult;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.BuffTickServer
struct ABuff_Lamprey_Poison_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.UserConstructionScript
struct ABuff_Lamprey_Poison_C_UserConstructionScript_Params
{
};

// Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.ExecuteUbergraph_Buff_Lamprey_Poison
struct ABuff_Lamprey_Poison_C_ExecuteUbergraph_Buff_Lamprey_Poison_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

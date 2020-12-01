#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CryoCooldown_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_CryoCooldown.Buff_CryoCooldown_C.BPActivated
struct ABuff_CryoCooldown_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CryoCooldown.Buff_CryoCooldown_C.UpdateBuffPersistentData
struct ABuff_CryoCooldown_C_UpdateBuffPersistentData_Params
{
};

// Function Buff_CryoCooldown.Buff_CryoCooldown_C.ReceiveBeginPlay
struct ABuff_CryoCooldown_C_ReceiveBeginPlay_Params
{
};

// Function Buff_CryoCooldown.Buff_CryoCooldown_C.BPDrawBuffStatusHUD
struct ABuff_CryoCooldown_C_BPDrawBuffStatusHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             YPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleMult;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CryoCooldown.Buff_CryoCooldown_C.BuffTickServer
struct ABuff_CryoCooldown_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CryoCooldown.Buff_CryoCooldown_C.BuffTickClient
struct ABuff_CryoCooldown_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CryoCooldown.Buff_CryoCooldown_C.UserConstructionScript
struct ABuff_CryoCooldown_C_UserConstructionScript_Params
{
};

// Function Buff_CryoCooldown.Buff_CryoCooldown_C.ExecuteUbergraph_Buff_CryoCooldown
struct ABuff_CryoCooldown_C_ExecuteUbergraph_Buff_CryoCooldown_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

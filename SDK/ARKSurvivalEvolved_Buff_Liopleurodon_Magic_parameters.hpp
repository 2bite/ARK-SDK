#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Liopleurodon_Magic_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.BPResetBuffStart
struct ABuff_Liopleurodon_Magic_C_BPResetBuffStart_Params
{
};

// Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.BuffTickClient
struct ABuff_Liopleurodon_Magic_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.BPDrawBuffStatusHUD
struct ABuff_Liopleurodon_Magic_C_BPDrawBuffStatusHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             YPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleMult;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.UserConstructionScript
struct ABuff_Liopleurodon_Magic_C_UserConstructionScript_Params
{
};

// Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.SpawnCrateBuffedParticle
struct ABuff_Liopleurodon_Magic_C_SpawnCrateBuffedParticle_Params
{
	class APrimalStructureItemContainer_SupplyCrate*   TargetCrate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.HideTimer
struct ABuff_Liopleurodon_Magic_C_HideTimer_Params
{
	bool                                               ShouldHide;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.RevealBuffTimerAfterDelay
struct ABuff_Liopleurodon_Magic_C_RevealBuffTimerAfterDelay_Params
{
};

// Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.ReceiveBeginPlay
struct ABuff_Liopleurodon_Magic_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.ExecuteUbergraph_Buff_Liopleurodon_Magic
struct ABuff_Liopleurodon_Magic_C_ExecuteUbergraph_Buff_Liopleurodon_Magic_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

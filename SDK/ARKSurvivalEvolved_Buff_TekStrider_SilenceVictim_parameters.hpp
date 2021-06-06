#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_SilenceVictim_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.HideBuffFromHUD
struct ABuff_TekStrider_SilenceVictim_C_HideBuffFromHUD_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPDrawBuffStatusHUD
struct ABuff_TekStrider_SilenceVictim_C_BPDrawBuffStatusHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             YPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleMult;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.Delay Update Vfx
struct ABuff_TekStrider_SilenceVictim_C_Delay_Update_Vfx_Params
{
};

// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BuffTickClient
struct ABuff_TekStrider_SilenceVictim_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPClientHandleNetExecCommand
struct ABuff_TekStrider_SilenceVictim_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPPreventflight
struct ABuff_TekStrider_SilenceVictim_C_BPPreventflight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPActivated
struct ABuff_TekStrider_SilenceVictim_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.Update whether deactivate VFX should be seen by rider
struct ABuff_TekStrider_SilenceVictim_C_Update_whether_deactivate_VFX_should_be_seen_by_rider_Params
{
};

// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BuffTickServer
struct ABuff_TekStrider_SilenceVictim_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPPreventInstigatorAttack
struct ABuff_TekStrider_SilenceVictim_C_BPPreventInstigatorAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.UserConstructionScript
struct ABuff_TekStrider_SilenceVictim_C_UserConstructionScript_Params
{
};

// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.ReceiveBeginPlay
struct ABuff_TekStrider_SilenceVictim_C_ReceiveBeginPlay_Params
{
};

// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.OnSilenceEnded
struct ABuff_TekStrider_SilenceVictim_C_OnSilenceEnded_Params
{
};

// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.toggle invalid particle
struct ABuff_TekStrider_SilenceVictim_C_toggle_invalid_particle_Params
{
};

// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.ExecuteUbergraph_Buff_TekStrider_SilenceVictim
struct ABuff_TekStrider_SilenceVictim_C_ExecuteUbergraph_Buff_TekStrider_SilenceVictim_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

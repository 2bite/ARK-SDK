#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionTrigger_RacePowerUp_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ReceiveEndPlay
struct AMissionTrigger_RacePowerUp_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ReceiveBeginPlay
struct AMissionTrigger_RacePowerUp_C_ReceiveBeginPlay_Params
{
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ResetPowerUp
struct AMissionTrigger_RacePowerUp_C_ResetPowerUp_Params
{
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.IsPowerUpActive_PURE
struct AMissionTrigger_RacePowerUp_C_IsPowerUpActive_PURE_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.IsPowerUpActive
struct AMissionTrigger_RacePowerUp_C_IsPowerUpActive_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.DeactivatePowerUp
struct AMissionTrigger_RacePowerUp_C_DeactivatePowerUp_Params
{
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.InitPowerUp
struct AMissionTrigger_RacePowerUp_C_InitPowerUp_Params
{
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.SetPowerUpEnabled
struct AMissionTrigger_RacePowerUp_C_SetPowerUpEnabled_Params
{
	bool                                               NewEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.SetPowerUpFX_Active
struct AMissionTrigger_RacePowerUp_C_SetPowerUpFX_Active_Params
{
	bool                                               newActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AlsoEnable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.OnPowerUpTriggerHit
struct AMissionTrigger_RacePowerUp_C_OnPowerUpTriggerHit_Params
{
	bool                                               UsesPowerUp;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.UserConstructionScript
struct AMissionTrigger_RacePowerUp_C_UserConstructionScript_Params
{
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUp_Fade__FinishedFunc
struct AMissionTrigger_RacePowerUp_C_Timeline_PowerUp_Fade__FinishedFunc_Params
{
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUp_Fade__UpdateFunc
struct AMissionTrigger_RacePowerUp_C_Timeline_PowerUp_Fade__UpdateFunc_Params
{
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PulseColor__FinishedFunc
struct AMissionTrigger_RacePowerUp_C_Timeline_PulseColor__FinishedFunc_Params
{
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PulseColor__UpdateFunc
struct AMissionTrigger_RacePowerUp_C_Timeline_PulseColor__UpdateFunc_Params
{
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUpActivate__FinishedFunc
struct AMissionTrigger_RacePowerUp_C_Timeline_PowerUpActivate__FinishedFunc_Params
{
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.Timeline_PowerUpActivate__UpdateFunc
struct AMissionTrigger_RacePowerUp_C_Timeline_PowerUpActivate__UpdateFunc_Params
{
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.FadeOut
struct AMissionTrigger_RacePowerUp_C_FadeOut_Params
{
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.FadeIn
struct AMissionTrigger_RacePowerUp_C_FadeIn_Params
{
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.PowerUpPulse
struct AMissionTrigger_RacePowerUp_C_PowerUpPulse_Params
{
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.DisablePowerUp_NOW
struct AMissionTrigger_RacePowerUp_C_DisablePowerUp_NOW_Params
{
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.EnablePowerUp
struct AMissionTrigger_RacePowerUp_C_EnablePowerUp_Params
{
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.DisablePowerUp
struct AMissionTrigger_RacePowerUp_C_DisablePowerUp_Params
{
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.EnablePowerUp_NOW
struct AMissionTrigger_RacePowerUp_C_EnablePowerUp_NOW_Params
{
};

// Function MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C.ExecuteUbergraph_MissionTrigger_RacePowerUp
struct AMissionTrigger_RacePowerUp_C_ExecuteUbergraph_MissionTrigger_RacePowerUp_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

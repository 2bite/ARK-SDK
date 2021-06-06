#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishLionHUD_Interface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LionfishLionHUD_Interface.LionfishLionHUD_Interface_C.GetHudData
struct ULionfishLionHUD_Interface_C_GetHudData_Params
{
	float                                              AttackComboPercent;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxComboFlashingSpeed;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             LastUncloakTime;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CloakCooldown;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFemale;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCamoActive;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             LastRoarBuffTime;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RoarBuffCooldown;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HasMateBoost;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             LastTimeReleasedTeleport;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TeleportCooldown;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TeleportPercent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCurrentlyChargingTeleport;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            LatestQuickteleportTarget;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LeapCooldown;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             LastLeapTime;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LeapPercent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
